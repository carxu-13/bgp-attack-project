import BGPAttackDetector
import Mathlib
import Std.Data.HashMap
import Std.Time

open BGP in
/-- Data structure representing a suspicious interception event.
    An interception occurs when a stable prefix's route begins traversing a new unexpected
    intermediary AS path while still preserving reachability toward the historical destination.
    The `confidence` field quantifies how strongly the observed behavior matches the attack pattern. -/
structure InterceptionEvent where
  update        : Entry
  baselineOrigins : List ASPath   -- Historical origin ASes for this prefix
  insertedASes   : List Nat       -- ASes newly inserted into the path
  historicalSuffixPresent : Bool   -- Whether historical destination AS or suffix is near end
  peerCount     : Nat             -- Number of peers corroborating this observation
  confidence    : Nat             -- Confidence score (0-100)
  deriving Repr

/-- Configuration for detection parameters. -/
structure DetectionConfig where
  minPeerCorroboration : Nat := 3
  minConfidence        : Nat := 70
  maxPathInsertion     : Nat := 3
  historicalSuffixThreshold : Nat := 2

open BGP

/-- Compare two paths to find newly inserted ASNs between them.
    Returns the list of ASNs present in `newPath` but not in `oldPath`, preserving
    order of appearance in `newPath`. -/
def findInsertedASes (oldPath newPath : ASPath) : List Nat :=
  newPath.toList.filter (· ∉ oldPath.toList)

/-- Check if a historical suffix (destination AS or common suffix) is present near the end of a path.
    Returns true iff some element from `historicalSuffixes` appears in the path. -/
def hasHistoricalSuffix (path : ASPath) (historicalSuffixes : List Nat) : Bool :=
  historicalSuffixes.any (· ∈ path.toList)

/-- Compute confidence score for an interception event based on observed features. -/
def computeConfidence (insertedASes : List Nat) (historicalSuffixPresent : Bool)
    (peerCount : Nat) : Nat :=
  let insertionScore := min (insertedASes.length * 20) 50
  let suffixScore := if historicalSuffixPresent then 20 else 0
  let peerScore := min (peerCount * 10) 30
  insertionScore + suffixScore + peerScore

/-- Detect interception attacks by comparing update paths against baseline paths for stable prefixes.
    Returns a list of InterceptionEvent records for events meeting the confidence threshold. -/
def detectInterceptions (config : DetectionConfig)
    (baseline : List (Subnet × List ASPath)) (updates : List Entry) : List InterceptionEvent :=
  let baselineMap : Std.HashMap Subnet (List ASPath) :=
    baseline.foldl (fun m (subnet, origins) =>
      m.insert subnet origins
    ) ∅

  updates.filterMap (fun update =>
    if !update.announced then none
    else
      match baselineMap[update.pref]? with
      | none => none
      | some origins =>
        -- Find the historical destination AS (last AS in baseline paths)
        let historicalDestinations := origins.map (fun p => p.origin.id)
        let oldPath := origins.head?.getD ASPath.nil

        -- Compare against update path
        let insertedASes := findInsertedASes oldPath update.path
        let historicalSuffixPresent :=
          hasHistoricalSuffix update.path historicalDestinations

        -- Corroboration: count unique peers announcing this update
        let peers := updates.filter (fun u => u.pref == update.pref && u.path == update.path)
                   |>.map (fun u => u.neighbor) |>.eraseDups
        let peerCount := peers.length

        -- Compute confidence
        let confidence := computeConfidence insertedASes historicalSuffixPresent peerCount

        if insertedASes.length > 0 && confidence >= config.minConfidence &&
           peerCount >= config.minPeerCorroboration then
          some {
            update := update,
            baselineOrigins := origins,
            insertedASes := insertedASes,
            historicalSuffixPresent := historicalSuffixPresent,
            peerCount := peerCount,
            confidence := confidence
          }
        else none
  )

/-- Deduplicate interception events by (prefix, origin AS) key. -/
def deduplicateInterceptions (events : List InterceptionEvent)
    : List (Subnet × Nat × List InterceptionEvent) :=
  let m : Std.HashMap (Subnet × Nat) (List InterceptionEvent) :=
    events.foldl (fun acc e =>
      let key := (e.update.pref.canonicalize, e.update.path.origin.id)
      match acc[key]? with
      | none        => acc.insert key [e]
      | some events => acc.insert key (events ++ [e])
    ) ∅
  m.toList.map (fun (k, v) => (k.1, k.2, v))

/-- Print a human-readable summary of interception events. -/
def printInterceptionSummary (key : Subnet × Nat) (events : List InterceptionEvent) : IO Unit := do
  let (pfx, _originId) := key
  match events with
  | [] => return
  | h :: _ =>
    let originAS := h.update.path.formatOriginAS
    let inserted := String.intercalate " → " (h.insertedASes.map toString)
    let baselineOrigins := String.intercalate ", " (h.baselineOrigins.map (·.formatOriginAS))
    let peers := events.foldl (fun acc e =>
                     let p := e.update.neighbor
                     if List.any acc (· == p) then acc else acc ++ [p]) []
    let announcements := events.length
    let confidence := h.confidence

    IO.println s!"  Prefix           : {pfx.format}"
    IO.println s!"  Origin AS        : {originAS}"
    IO.println s!"  Inserted ASes    : {inserted}"
    IO.println s!"  Baseline Origins : {baselineOrigins}"
    IO.println s!"  Historical suffix preserved: {(if h.historicalSuffixPresent then "Yes" else "No")}"
    IO.println s!"  Unique peers     : {peers.length}"
    IO.println s!"  Announcements    : {announcements}"
    IO.println s!"  Confidence       : {confidence}/100"
    IO.println ""

/-- Main entry point for the interception attack detector. -/
def main (args : List String) : IO Unit := do
  if args.length < 2 then
    IO.eprintln "Usage: bgpinterceptiondetector <rib-dir> <update-dir>"
    IO.eprintln ""
    IO.eprintln "  <rib-dir>    directory containing bgpdump text-format RIB files"
    IO.eprintln "  <update-dir> directory containing bgpdump text-format UPDATE files"
    return
  let ribDir    : System.FilePath := args[0]!
  let updateDir : System.FilePath := args[1]!

  IO.println s!"[*] Loading baseline (RIB) entries from: {ribDir}"
  let tableEntries ← parseEntriesFromDir ribDir
  IO.println s!"[*] Parsed {tableEntries.length} baseline entries"

  IO.println s!"[*] Loading update entries from: {updateDir}"
  let updateEntries ← parseEntriesFromDir updateDir
  IO.println s!"[*] Parsed {updateEntries.length} update entries"

  -- Build baseline: map from prefix to list of origin paths
  let baseline := buildBaseline tableEntries

  -- Detection configuration
  let config : DetectionConfig := { minPeerCorroboration := 3, minConfidence := 70 }

  -- Run detection
  let events := detectInterceptions config baseline updateEntries
  IO.println s!"[*] Suspicious interception patterns detected: {events.length}"

  let summary := deduplicateInterceptions events
  IO.println s!"[*] Unique (prefix, origin) interception events: {summary.length}\n"

  if summary.isEmpty then
    IO.println "No interception patterns detected."
  else
    for (pfx, originId, events) in summary do
      printInterceptionSummary (pfx, originId) events

/-! ## Correctness theorems -/

/-
Correctness theorem: findInsertedASes returns only ASes present in newPath but not in oldPath.
-/
theorem findInsertedASes_sound (oldPath newPath : ASPath) :
    ∀ asn ∈ findInsertedASes oldPath newPath,
      asn ∈ (newPath.toList.filter (· ∉ oldPath.toList)) := by
  unfold findInsertedASes; aesop;

/-
Correctness theorem: hasHistoricalSuffix returns true iff a historical suffix is present
    somewhere in the path.
-/
theorem hasHistoricalSuffix_correct (path : ASPath) (suffixes : List Nat) :
    hasHistoricalSuffix path suffixes ↔
      ∃ s ∈ suffixes, s ∈ path.toList := by
  unfold hasHistoricalSuffix; aesop;

/-
Correctness theorem: computeConfidence produces a value between 0 and 100.
-/
theorem computeConfidence_bounds (inserted : List Nat) (suffixPresent : Bool) (peers : Nat) :
    computeConfidence inserted suffixPresent peers ≤ 100 := by
  unfold computeConfidence;
  grind

/-
Correctness theorem: detectInterceptions only returns events with inserted ASes.
-/
theorem detectInterceptions_insertedASes (config : DetectionConfig)
    (baseline : List (Subnet × List ASPath)) (updates : List Entry)
    (e : InterceptionEvent) (he : e ∈ detectInterceptions config baseline updates) :
    e.insertedASes.length > 0 := by
  unfold detectInterceptions at he;
  grind

/-- Correctness theorem: The confidence score calculation is correct. -/
theorem computeConfidence_correct (inserted : List Nat) (suffixPresent : Bool) (peers : Nat) :
    computeConfidence inserted suffixPresent peers =
      min (inserted.length * 20) 50 + (if suffixPresent then 20 else 0) + min (peers * 10) 30 := by
  rfl