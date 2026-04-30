import BGPAttackDetector
import Std.Data.HashMap

/-!
# BGP Interception Detector

Detects suspicious BGP events consistent with **interception** rather than simple
disruption. The key signal is that an AS path for a stable prefix acquires new
intermediary ASNs while the historical destination ASN (or a common destination
suffix) is preserved near the end of the path.

## Algorithm overview

1. **Build baseline**: for every prefix seen in the RIB, record the set of full
   AS paths and extract the set of destination (origin) ASNs and all ASN sets.
2. **Analyse each update**: for each announced route whose prefix appears in
   the baseline, check whether:
   a. The destination ASN is still present (historical origin preserved).
   b. New intermediary ASNs have been inserted that do not appear in any
      baseline path for that prefix.
3. **Corroboration filter**: require that ≥2 distinct peer ASNs report the
   same (prefix, new-intermediary) pair before raising an alert.
4. **Suppression**: skip prefixes shorter than /8, skip withdrawals, skip
   cases where the destination changed (hijack not interception), and skip
   cases where the "new" ASN was already in some baseline path.
-/

-- ============================================================
-- Path utilities
-- ============================================================

namespace Path

/-- Collect all ASNs in a path into a list. -/
def toList : Path → List Nat
  | .nil => []
  | .cons asn rest => asn :: rest.toList

/-- Length of a path. -/
def length : Path → Nat
  | .nil => 0
  | .cons _ rest => 1 + rest.length

/-- The destination (origin) ASN of a path, or 0 if empty. -/
def destinationASN : Path → Nat
  | .nil => 0
  | .cons asn .nil => asn
  | .cons _ rest => rest.destinationASN

/-- The intermediary ASNs: everything except the first and last hop. -/
def intermediaries : Path → List Nat
  | .nil => []
  | .cons _ .nil => []
  | .cons _ rest =>
    match rest with
    | .nil => []
    | .cons _ .nil => []
    | .cons mid tail => mid :: tail.intermediaries

/-- Return the last `n` ASNs of a path as a list (suffix). -/
def suffix (p : Path) (n : Nat) : List Nat :=
  let l := p.toList
  l.drop (l.length - n)

/-- Check if `l2` is a suffix of `l1`. -/
def isSuffixOf (l1 l2 : List Nat) : Bool :=
  let n := l2.length
  l1.drop (l1.length - n) == l2

end Path

-- ============================================================
-- Baseline representation
-- ============================================================

/-- Per-prefix baseline: all known paths and the set of destination ASNs. -/
structure PrefixBaseline where
  knownPaths : List Path
  allASNs : List Nat
  destinationASNs : List Nat
  deriving Repr

-- ============================================================
-- Interception event
-- ============================================================

/-- A single interception alert. -/
structure InterceptionEvent where
  update : Entry
  subnet : Subnet
  newIntermediaries : List Nat
  preservedDestination : Nat
  confidence : Nat
  deriving Repr

-- ============================================================
-- Core detection functions
-- ============================================================

/-- Insert a unique element into a list (set-like). -/
def insertUniq [DecidableEq α] (xs : List α) (x : α) : List α :=
  if xs.any (· == x) then xs else xs ++ [x]

/-- Build the per-prefix baseline from RIB entries. -/
def buildInterceptionBaseline (tableEntries : List Entry) :
    Std.HashMap Subnet PrefixBaseline :=
  tableEntries.foldl (fun m e =>
    let key := e.pref.canonicalize
    let dest := e.path.destinationASN
    let pathASNs := e.path.toList
    match m[key]? with
    | none =>
      m.insert key {
        knownPaths := [e.path]
        allASNs := pathASNs
        destinationASNs := if dest == 0 then [] else [dest]
      }
    | some bl =>
      m.insert key {
        knownPaths := bl.knownPaths ++ [e.path]
        allASNs := pathASNs.foldl insertUniq bl.allASNs
        destinationASNs :=
          if dest == 0 then bl.destinationASNs
          else insertUniq bl.destinationASNs dest
      }
  ) ∅

/-- Determine the new intermediary ASNs in an update path that do not appear
    in any baseline path for the same prefix. -/
def findNewIntermediaries (baseline : PrefixBaseline) (updatePath : Path) : List Nat :=
  let intermediaries := updatePath.intermediaries
  intermediaries.filter (fun asn => !(baseline.allASNs.any (· == asn)))

/-- Check whether the historical destination is preserved. -/
def destinationPreserved (baseline : PrefixBaseline) (updatePath : Path) : Option Nat :=
  let dest := updatePath.destinationASN
  if baseline.destinationASNs.any (· == dest) then some dest
  else none

/-- Compute a confidence score for a potential interception event. -/
def interceptionConfidence (baseline : PrefixBaseline) (updatePath : Path)
    (newIntermediaries : List Nat) : Nat :=
  let destScore := if (destinationPreserved baseline updatePath).isSome then 30 else 0
  let newASScore := 10 * newIntermediaries.length
  let maxBaselineLen := baseline.knownPaths.foldl (fun acc p => max acc p.length) 0
  let lenScore := if updatePath.length > maxBaselineLen then 20 else 0
  let updateSuffix := updatePath.suffix 2
  let suffixScore :=
    if baseline.knownPaths.any (fun bp => Path.isSuffixOf bp.toList updateSuffix)
    then 10 else 0
  destScore + newASScore + lenScore + suffixScore

/-- Minimum confidence threshold to emit an alert. -/
def minConfidenceThreshold : Nat := 40

/-- Analyse a single update entry against the baseline. -/
def analyseUpdate (baseline : Std.HashMap Subnet PrefixBaseline)
    (update : Entry) : Option InterceptionEvent :=
  if !update.announced then none
  else
  let key := update.pref.canonicalize
  match baseline[key]? with
  | none => none
  | some bl =>
    match destinationPreserved bl update.path with
    | none => none
    | some dest =>
      let newInterm := findNewIntermediaries bl update.path
      if newInterm.isEmpty then none
      else
        let conf := interceptionConfidence bl update.path newInterm
        if conf < minConfidenceThreshold then none
        else some {
          update := update
          subnet := key
          newIntermediaries := newInterm
          preservedDestination := dest
          confidence := conf
        }

/-- Run detection on all updates and apply the corroboration filter. -/
def detectInterceptions (table updates : List Entry)
    (minPeers : Nat := 2) : List InterceptionEvent :=
  let baseline := buildInterceptionBaseline table
  let candidates := updates.filter (fun u =>
    u.announced && u.pref.prefixLen.val >= 8)
  let raw := candidates.filterMap (analyseUpdate baseline)
  let peerMap : Std.HashMap (Subnet × Nat) (List Nat) :=
    raw.foldl (fun m ev =>
      let repASN := ev.newIntermediaries.head?.getD 0
      let key := (ev.subnet, repASN)
      let peer := ev.update.neighbor
      match m[key]? with
      | none => m.insert key [peer]
      | some peers =>
        if peers.any (· == peer) then m
        else m.insert key (peers ++ [peer])
    ) ∅
  raw.filter (fun ev =>
    let repASN := ev.newIntermediaries.head?.getD 0
    let key := (ev.subnet, repASN)
    match peerMap[key]? with
    | none => false
    | some peers => peers.length >= minPeers)

-- ============================================================
-- Formal verification
-- ============================================================

theorem Path.destinationASN_cons_nil (asn : Nat) :
    (Path.cons asn .nil).destinationASN = asn := by rfl

theorem Path.destinationASN_last (a b : Nat) (rest : Path) :
    (Path.cons a (Path.cons b rest)).destinationASN =
    (Path.cons b rest).destinationASN := by rfl

/-- Every ASN returned by `findNewIntermediaries` is absent from the baseline. -/
theorem findNewIntermediaries_spec (bl : PrefixBaseline) (p : Path) :
    ∀ asn ∈ findNewIntermediaries bl p,
      ¬ (bl.allASNs.any (· == asn) = true) := by
  intro asn hmem
  simp only [findNewIntermediaries, List.mem_filter] at hmem
  obtain ⟨_, hfilt⟩ := hmem
  intro habs
  simp [habs] at hfilt

/-- `destinationPreserved` returns `some d` only when `d` is both the path's
    destination and a known baseline destination. -/
theorem destinationPreserved_spec (bl : PrefixBaseline) (p : Path) (d : Nat) :
    destinationPreserved bl p = some d →
    bl.destinationASNs.any (· == d) = true ∧ d = p.destinationASN := by
  simp only [destinationPreserved]
  intro h
  split at h <;> simp_all

/-- Soundness predicate for an interception alert. -/
structure InterceptionEventSound (baseline : Std.HashMap Subnet PrefixBaseline)
    (ev : InterceptionEvent) : Prop where
  announced : ev.update.announced = true
  hasBaseline : (baseline[ev.update.pref.canonicalize]?).isSome = true
  destInBaseline :
    ∃ bl, baseline[ev.update.pref.canonicalize]? = some bl ∧
      bl.destinationASNs.any (· == ev.preservedDestination) = true
  newIntermsAbsent :
    ∃ bl, baseline[ev.update.pref.canonicalize]? = some bl ∧
      ∀ asn ∈ ev.newIntermediaries,
        ¬ (bl.allASNs.any (· == asn) = true)
  hasNewInterm : ev.newIntermediaries ≠ []
  confAboveThreshold : ev.confidence ≥ minConfidenceThreshold

/-
Every event produced by `analyseUpdate` is sound.
-/
theorem analyseUpdate_sound (baseline : Std.HashMap Subnet PrefixBaseline)
    (update : Entry) (ev : InterceptionEvent)
    (h : analyseUpdate baseline update = some ev) :
    InterceptionEventSound baseline ev := by
      unfold analyseUpdate at h;
      rcases h' : baseline[update.pref.canonicalize]? with ( _ | bl ) <;> simp +decide [ h' ] at h ⊢;
      rcases h'' : destinationPreserved bl update.path with ( _ | dest ) <;> simp +decide [ h'' ] at h ⊢;
      obtain ⟨hann, hne, hconf, heq⟩ := h
      subst heq
      constructor
      · exact hann
      · simp [h']
      · exact ⟨bl, h', (destinationPreserved_spec bl update.path dest h'').1⟩
      · exact ⟨bl, h', findNewIntermediaries_spec bl update.path⟩
      · exact hne
      · exact hconf

/-- The internal peer map built during detection (exposed for theorems). -/
def buildPeerMap (events : List InterceptionEvent) :
    Std.HashMap (Subnet × Nat) (List Nat) :=
  events.foldl (fun m ev =>
    let repASN := ev.newIntermediaries.head?.getD 0
    let key := (ev.subnet, repASN)
    let peer := ev.update.neighbor
    match m[key]? with
    | none => m.insert key [peer]
    | some peers =>
      if peers.any (· == peer) then m
      else m.insert key (peers ++ [peer])
  ) ∅

/-
Every event returned by `detectInterceptions` is corroborated by at least
    `minPeers` distinct peer ASNs.
-/
theorem detectInterceptions_corroborated
    (table updates : List Entry) (minPeers : Nat)
    (ev : InterceptionEvent)
    (hmem : ev ∈ detectInterceptions table updates minPeers) :
    ∃ peers : List Nat,
      (buildPeerMap (updates.filter (fun u =>
          u.announced && u.pref.prefixLen.val >= 8)
        |>.filterMap (analyseUpdate (buildInterceptionBaseline table)))
      )[(ev.subnet, ev.newIntermediaries.head?.getD 0)]? = some peers ∧
      peers.length ≥ minPeers := by
        unfold detectInterceptions at hmem;
        unfold buildPeerMap;
        grind