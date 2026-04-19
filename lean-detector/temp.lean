-- This module serves as the root of the `BGPAttackDetector` library.
-- Import modules here that should be built as part of the library.
import BGPAttackDetector.Basic
import Std.Tactic.BVDecide
import Std.Time

structure IPAddress where
  (net1: BitVec 8)
  (net2: BitVec 8)
  (host1: BitVec 8)
  (host2: BitVec 8)
  deriving DecidableEq, Repr

structure Subnet where
  ip: IPAddress
  prefixLen: Fin 33
  deriving DecidableEq, Repr

namespace IPAddress

def mergeFields (ip : IPAddress) : BitVec 32 :=
  (BitVec.append ip.host1 ip.host2)|> BitVec.append (BitVec.append ip.net1 ip.net2)

def ofString? (s : String) : Option IPAddress :=
  let fields := String.splitOn s "."
  if h: fields.length < 4 then none
  else do
    let a ← (fields[0]'(by omega)).toNat?
    let b ← (fields[1]'(by omega)).toNat?
    let c ← (fields[2]'(by omega)).toNat?
    let d ← (fields[3]'(by omega)).toNat?
    some ⟨ BitVec.ofNat 8 a, BitVec.ofNat 8 b, BitVec.ofNat 8 c, BitVec.ofNat 8 d ⟩

end IPAddress

namespace Subnet

def mask (p : Fin 33) : BitVec 32 :=
  (BitVec.allOnes 32) <<< (32 - p.val)

def containsIP (subnet : Subnet) (ip : IPAddress) : Bool :=
  let m := mask subnet.prefixLen
  (subnet.ip.mergeFields &&& m) == (ip.mergeFields &&& m)

def containsIPProp (s : Subnet) (ip : IPAddress) : Prop :=
  let m := mask s.prefixLen
  (s.ip.mergeFields &&& m) == (ip.mergeFields &&& m)

def isSubnetOf (s1 s2 : Subnet) : Prop :=
  And (s2.prefixLen.val <= s1.prefixLen.val)
      (s2.containsIP s1.ip)

def ofString? (s : String) : Option Subnet :=
  let fields := String.splitOn s "/" 
  if h: fields.length < 2 then none
  else
  match ((fields[1]'(by omega)).toNat?) with
  | none => none
  | some f =>  some ⟨ (IPAddress.ofString? (fields[0]'(by omega))
              |> (fun x =>
              match x with
              | none => IPAddress.mk 0 0 0 0
              | some x => x
              )),
              Fin.ofNat 33 f ⟩

instance (s1 s2 : Subnet) : Decidable (isSubnetOf s1 s2) :=
  instDecidableAnd

end Subnet

-- Unused
-- structure AS where
--   id : Nat
--   name : String
  
inductive Path where
| nil : Path
| cons (id : Nat) : Path -> Path
deriving Repr, DecidableEq, Ord

namespace Path

def origin : Path -> Path
| Path.nil => Path.nil
| Path.cons asn Path.nil => Path.cons asn Path.nil
| Path.cons _ x => origin x

def id : Path -> Nat
| Path.nil => 0
| Path.cons id _ => id

def ofString? (s : String) : Option Path :=
  let fields := (s.splitOn " ").reverse
  let rec aux (acc: Path) : List String -> Path
  | [] => acc
  | h :: t => aux (Path.cons h.toNat! acc) t
  aux Path.nil fields

end Path

structure Entry where
  ordering: Nat
  announced: Bool
  announcer: IPAddress
  neighbor: Nat
  pref: Subnet
  path: Path
  deriving Repr, DecidableEq

namespace Entry

def ofString? (o : Nat) (s : String) : Option Entry :=
  let fields := String.splitOn s "|"
  if h: fields.length < 7 then none
  else
    let neighbor := (fields[4]'(by omega)).toNat?
    let ip := IPAddress.ofString? (fields[3]'(by omega))
    let sub := Subnet.ofString? (fields[5]'(by omega))
    let path := Path.ofString? (fields[6]'(by omega))
    match ip, sub, path, neighbor with
    | none, _, _, _ => none
    | _, none, _, _ => none
    | _, _, none, _ => none
    | _, _, _, none => none
    | some ip, some sub, some path, some neighbor =>
      some ⟨
          o,
          (fields[2]'(by omega)) == "A" || (fields[2]'(by omega)) == "B",
          ip,
          neighbor,
          sub,
          path
        ⟩

end Entry

#eval Subnet.containsIP ⟨ ⟨ 1, 2, 3, 4 ⟩, 24 ⟩ ⟨1, 2, 1, 0⟩
#eval Subnet.isSubnetOf ⟨ ⟨ 1, 2, 3, 4 ⟩, 24 ⟩ ⟨ ⟨ 1, 2, 2, 4 ⟩, 23 ⟩

#check (Path.cons 32 (Path.nil))

def unwrap (o: Option a) (d : a) : a :=
  match o with
  | none => d
  | some x => x

def defaultIP : IPAddress := ⟨ 0, 0, 0, 0 ⟩
def defaultSubnet : Subnet := ⟨ defaultIP, 0 ⟩

def defaultEntry : Entry :=
  ⟨0, false, defaultIP, 0, defaultSubnet, Path.nil ⟩

def te : String := "TABLE_DUMP|02/24/08 18:24:13|B|144.228.241.81|1239|222.255.224.0/19|1239 6762 7473 7643|IGP"
-- def te2 : String := "TABLE_DUMP|02/24/08 18:24:13|B|144.228.241.81|1239|222.255.224.0/20|1239 6762 7473 7649|IGP"
def te2 : String := "BGP4MP|02/24/08 18:39:19|A|195.219.96.239|6453|222.255.224.0/20|6453 39386 24731|IGP"
def te3 : String := "BGP4MP|02/24/08 18:39:21|A|195.219.96.239|6453|89.4.128.0/24|6453 39386 24731|IGP"

def bgpTable := [(unwrap (Entry.ofString? 1 te) defaultEntry)]
def updates := [(unwrap (Entry.ofString? 1 te2) defaultEntry), (unwrap (Entry.ofString? 1 te3) defaultEntry)]

#eval bgpTable

def UpdatesContainSubnet (table : List Entry) (updates : List Entry) : Bool :=
  (List.zipWith (fun (x y : Entry) => Bool.or
    (decide (x.pref.isSubnetOf y.pref))
    (decide (y.pref.isSubnetOf x.pref))) table updates)
  |> List.foldl Bool.and True

axiom mask_le (p1 p2 : Fin 33) (h : p1.val <= p2.val)
  : (Subnet.mask p2) &&& (Subnet.mask p1) = Subnet.mask p1

theorem mask_and_self (p : Fin 33) :
  Subnet.mask p &&& Subnet.mask p = Subnet.mask p := by bv_decide

theorem mergeFields_injective : Function.Injective IPAddress.mergeFields := by
  intro ⟨ a1, b1, c1, d1 ⟩ ⟨ a2, b2, c2, d2 ⟩ h
  simp [IPAddress.mergeFields] at h
  congr 1 <;> bv_decide

theorem isSubnetOf_refl (s : Subnet) : s.isSubnetOf s := by
  constructor
  · exact Nat.le_refl _
  · simp [Subnet.containsIP]

theorem isSubnetOf_trans {s1 s2 s3 : Subnet}
  (h12 : s1.isSubnetOf s2) (h23 : s2.isSubnetOf s3) : s1.isSubnetOf s3 :=
  by
    obtain ⟨hlen12, hip12⟩ := h12
    obtain ⟨hlen23, hip23⟩ := h23
    refine ⟨Nat.le_trans hlen23 hlen12, ?_⟩
    simp only [Subnet.containsIP, beq_iff_eq] at hip12 hip23 ⊢
    rw [hip23]
    have key := congrArg (· &&& Subnet.mask s3.prefixLen) hip12
    simp only [BitVec.and_assoc] at key
    rwa [mask_le s3.prefixLen s2.prefixLen hlen23] at key

theorem containsIP_symm {s1 s2 : Subnet} (h : s1.prefixLen = s2.prefixLen) :
    s1.containsIP s2.ip = s2.containsIP s1.ip := by
  simp only [Subnet.containsIP, h]
  exact Bool.beq_comm

theorem foldl_and_false (l : List Bool) : List.foldl Bool.and false l = false := by
  induction l with
  | nil => rfl
  | cons _ _ ih => simp [List.foldl, ih]

theorem foldl_and_eq_true (l : List Bool) :
    List.foldl Bool.and true l = true ↔ ∀ b ∈ l, b = true := by
  induction l with
  | nil => simp
  | cons h t ih =>
    simp only [List.foldl, List.mem_cons]
    cases h <;> simp_all [foldl_and_false]

theorem UpdatesContainSubnet_sound (table updates : List Entry)
    (h : UpdatesContainSubnet table updates = true) :
    ∀ i (hi : i < min table.length updates.length),
        let x := table[i]'(by omega)
        let y := updates[i]'(by omega)
        x.pref.isSubnetOf y.pref ∨ y.pref.isSubnetOf x.pref := by
  simp only [UpdatesContainSubnet, decide_true] at h
  rw [foldl_and_eq_true] at h
  intro i hi
  simp only
  have hlen : (List.zipWith (fun x y : Entry =>
      decide (x.pref.isSubnetOf y.pref) || decide (y.pref.isSubnetOf x.pref))
      table updates).length = min table.length updates.length :=
    List.length_zipWith
  have hi' : i < (List.zipWith _ table updates).length := hlen ▸ hi
  have heq := h _ (List.getElem_mem hi')
  rw [List.getElem_zipWith] at heq
  simp only [Bool.or_eq_true, decide_eq_true_eq] at heq
  exact heq

#eval UpdatesContainSubnet bgpTable updates

def isOriginHijack (tableEntry updateEntry : Entry) : Bool :=
  (decide (tableEntry.pref.isSubnetOf updateEntry.pref) ||
   decide (updateEntry.pref.isSubnetOf tableEntry.pref)) &&
  decide (tableEntry.path.origin ≠ updateEntry.path.origin)

def detectOriginHijacks (table updates : List Entry) : List Bool :=
  List.zipWith isOriginHijack table updates

theorem isOriginHijack_iff (e1 e2 : Entry) :
    isOriginHijack e1 e2 = true ↔
    (e1.pref.isSubnetOf e2.pref ∨ e2.pref.isSubnetOf e1.pref) ∧
    e1.path.origin ≠ e2.path.origin := by
  simp [isOriginHijack, Bool.and_eq_true, Bool.or_eq_true, decide_eq_true_eq]

theorem detectOriginHijacks_sound (table updates : List Entry)
    (i : Nat) (hi : i < min table.length updates.length)
    (h : (detectOriginHijacks table updates)[i]'(by
        simp only [detectOriginHijacks, List.length_zipWith]; omega) = true) :
    let x := table[i]'(by omega)
    let y := updates[i]'(by omega)
    (x.pref.isSubnetOf y.pref ∨ y.pref.isSubnetOf x.pref) ∧
    x.path.origin ≠ y.path.origin := by
  simp only
  have hlen : (List.zipWith isOriginHijack table updates).length =
      min table.length updates.length := List.length_zipWith
  have hi' : i < (List.zipWith isOriginHijack table updates).length := hlen ▸ hi
  have heq := h
  simp only [detectOriginHijacks] at heq
  rw [List.getElem_zipWith] at heq
  rwa [isOriginHijack_iff] at heq

#eval detectOriginHijacks bgpTable updates

-- ============================================================
-- Human-readable string formatting
-- ============================================================

namespace IPAddress

def format (ip : IPAddress) : String :=
  s!"{ip.net1.toNat}.{ip.net2.toNat}.{ip.host1.toNat}.{ip.host2.toNat}"

end IPAddress

namespace Subnet

def format (s : Subnet) : String :=
  s!"{s.ip.format}/{s.prefixLen.val}"

end Subnet

namespace Path

def formatOriginAS (p : Path) : String :=
  let asn := p.origin.id
  if asn == 0 then "unknown" else s!"AS{asn}"

end Path

-- ============================================================
-- File I/O: read text-dump lines from files and directories
-- ============================================================

-- Read non-empty lines from a UTF-8 text file.
def readFileLines (path : System.FilePath) : IO (List String) := do
  let content ← IO.FS.readFile path
  return (content.splitOn "\n").filter (fun s => !s.isEmpty)

-- Parse all valid Entry records from a pipe-delimited text dump file.
-- Lines that do not match the expected format are silently skipped.
-- Files that cannot be read (binary, permission errors) are skipped too.
def parseEntriesFromFile (path : System.FilePath) : IO (List Entry) := do
  try
    let lines ← readFileLines path
    return (List.mapIdx (fun i line => Entry.ofString? i line) lines).filterMap id
  catch _ =>
    return []

-- Return the paths of all entries (files and subdirectories) inside a directory.
def listDirFiles (dir : System.FilePath) : IO (List System.FilePath) := do
  let entries ← dir.readDir
  return entries.toList.map (·.path)

-- Parse every file in a directory, concatenating all valid entries.
def parseEntriesFromDir (dir : System.FilePath) : IO (List Entry) := do
  let files ← listDirFiles dir
  let allEntries ← files.mapM parseEntriesFromFile
  return allEntries.foldl (· ++ ·) []

-- ============================================================
-- Baseline-aware subprefix hijack detection
-- (mirrors the Python detect_hijacks approach)
-- ============================================================

-- Accumulate one entry into a baseline map represented as an association list
-- of (subnet → list of known origin paths).
def addToBaseline (baseline : List (Subnet × List Path))
    (e : Entry) : List (Subnet × List Path) :=
  let rec go : List (Subnet × List Path) → List (Subnet × List Path)
    | [] => [(e.pref, [e.path.origin])]
    | (s, origins) :: rest =>
      if s == e.pref then
        if List.any origins (· == e.path.origin) then (s, origins) :: rest
        else (s, origins ++ [e.path.origin]) :: rest
      else (s, origins) :: go rest
  go baseline

-- Build the baseline from a list of RIB/table entries.
-- Result: association list of prefix → list of legitimate origin ASes.
def buildBaseline (tableEntries : List Entry) : List (Subnet × List Path) :=
  tableEntries.foldl addToBaseline []

-- For a given update entry, return the first baseline entry that is a strict
-- supernet of the update's prefix and whose known origins do not include
-- the update's announced origin (indicating a potential subprefix hijack).
def findHijackParent (baseline : List (Subnet × List Path))
    (update : Entry) : Option (Subnet × List Path) :=
  (baseline.filterMap (fun (parentSubnet, origins) =>
    -- update.pref must be strictly more specific than parentSubnet
    if decide (update.pref.isSubnetOf parentSubnet) &&
       !decide (parentSubnet.isSubnetOf update.pref) then
      -- and the announcing origin must NOT be a known legitimate origin
      if List.any origins (· == update.path.origin) then none
      else some (parentSubnet, origins)
    else none)).head?

structure HijackEvent where
  update        : Entry
  coveredBy     : Subnet    -- the more-general baseline prefix being hijacked
  victimOrigins : List Path -- legitimate origins for coveredBy
  deriving Repr

-- Cross-product detection: check every update entry against all baseline
-- entries, flagging subprefix announcements from unexpected origin ASes.
def detectSubprefixHijacks (baseline : List (Subnet × List Path))
    (updateEntries : List Entry) : List HijackEvent :=
  updateEntries.filterMap (fun update =>
    match findHijackParent baseline update with
    | none => none
    | some (parent, origins) => some ⟨update, parent, origins⟩)
