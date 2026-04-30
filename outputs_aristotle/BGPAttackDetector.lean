import Std.Data.HashMap

namespace BGP

/-- Represents an Autonomous System. -/
structure AS where
  id : Nat
  deriving BEq, Hashable, Repr, DecidableEq

/-- Represents a BGP AS path as a linked list of AS numbers. -/
inductive ASPath where
  | nil  : ASPath
  | cons : Nat → ASPath → ASPath
  deriving BEq, Hashable, Repr, DecidableEq

/-- Get the origin AS (last AS) in the path. Returns AS 0 for empty paths. -/
def ASPath.origin : ASPath → AS
  | .nil           => ⟨0⟩
  | .cons n .nil   => ⟨n⟩
  | .cons _ rest   => rest.origin

/-- Convert a path to a list of AS numbers. -/
def ASPath.toList : ASPath → List Nat
  | .nil         => []
  | .cons n rest => n :: rest.toList

@[simp] theorem ASPath.toList_nil : ASPath.nil.toList = [] := rfl
@[simp] theorem ASPath.toList_cons (n : Nat) (rest : ASPath) :
    (ASPath.cons n rest).toList = n :: rest.toList := rfl

/-- Format the origin AS for display. -/
def ASPath.formatOriginAS (p : ASPath) : String :=
  s!"AS{p.origin.id}"

/-- Represents an IP subnet (prefix). -/
structure Subnet where
  addr      : UInt32
  prefixLen : UInt8
  deriving BEq, Hashable, Repr, DecidableEq

/-- Format a subnet for display. -/
def Subnet.format (s : Subnet) : String :=
  let a := s.addr
  let b0 := (a >>> 24).toNat
  let b1 := ((a >>> 16) &&& 0xFF).toNat
  let b2 := ((a >>> 8) &&& 0xFF).toNat
  let b3 := (a &&& 0xFF).toNat
  s!"{b0}.{b1}.{b2}.{b3}/{s.prefixLen}"

/-- Canonicalize a subnet by masking the host bits. -/
def Subnet.canonicalize (s : Subnet) : Subnet :=
  let shift : UInt32 := (32 - s.prefixLen.toNat).toUInt32
  let mask : UInt32 := if s.prefixLen.toNat ≥ 32 then 0xFFFFFFFF
                        else (0xFFFFFFFF <<< shift)
  { s with addr := s.addr &&& mask }

/-- A BGP table or update entry. -/
structure Entry where
  announced : Bool
  pref      : Subnet
  path      : ASPath
  neighbor  : Nat       -- peer AS number
  deriving BEq, Repr

private def parseIPToUInt32 (s : String) : Option UInt32 :=
  let fields := s.splitOn "."
  if h : fields.length < 4 then none
  else do
    let a ← (fields[0]'(by omega)).toNat?
    let b ← (fields[1]'(by omega)).toNat?
    let c ← (fields[2]'(by omega)).toNat?
    let d ← (fields[3]'(by omega)).toNat?
    some ((a.toUInt32 <<< 24) ||| (b.toUInt32 <<< 16) ||| (c.toUInt32 <<< 8) ||| d.toUInt32)

private def parseSubnet (s : String) : Option Subnet :=
  let parts := s.splitOn "/"
  if h : parts.length < 2 then none
  else do
    let addr ← parseIPToUInt32 (parts[0]'(by omega))
    let plen ← (parts[1]'(by omega)).toNat?
    some { addr := addr, prefixLen := plen.toUInt8 }

private def parseASPath (s : String) : ASPath :=
  let tokens := s.splitOn " " |>.reverse
  tokens.foldl (fun acc t => ASPath.cons (t.toNat?.getD 0) acc) ASPath.nil

private def parseEntry (line : String) : Option Entry :=
  let fields := line.splitOn "|"
  if h : fields.length < 7 then none
  else
    let f2 := fields[2]'(by omega)
    let f4 := fields[4]'(by omega)
    let f5 := fields[5]'(by omega)
    let f6 := fields[6]'(by omega)
    let announced := f2 == "A" || f2 == "B"
    match f4.toNat?, parseSubnet f5 with
    | some neighbor, some pref =>
      some { announced, pref, path := parseASPath f6, neighbor }
    | _, _ => none

private def parseEntriesFromFile (path : System.FilePath) : IO (List Entry) := do
  try
    let content ← IO.FS.readFile path
    let lines := content.splitOn "\n" |>.filter (!·.isEmpty)
    return lines.filterMap parseEntry
  catch _ =>
    return []

private def listDirFiles (dir : System.FilePath) : IO (List System.FilePath) := do
  let entries ← dir.readDir
  return entries.toList.map (·.path)

/-- Parse BGP entries from all bgpdump text-format files in a directory. -/
def parseEntriesFromDir (dir : System.FilePath) : IO (List Entry) := do
  let files ← listDirFiles dir
  let allEntries ← files.mapM parseEntriesFromFile
  return List.flatten allEntries

/-- Build a baseline map from prefix to list of origin paths from RIB entries. -/
def buildBaseline (entries : List Entry) : List (Subnet × List ASPath) :=
  let m : Std.HashMap Subnet (List ASPath) :=
    entries.foldl (fun acc e =>
      let key := e.pref.canonicalize
      match acc[key]? with
      | none       => acc.insert key [e.path]
      | some paths =>
        if paths.any (· == e.path) then acc
        else acc.insert key (paths ++ [e.path])
    ) ∅
  m.toList

end BGP
