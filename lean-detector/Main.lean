import BGPAttackDetector
import Std.Data.HashMap

def printHijackSummary (key : Subnet × Nat) (events : List HijackEvent) : IO Unit := do
  let (pfx, _) := key
  match events with
  | [] => return
  | h :: _ =>
    let origin  := h.update.path.formatOriginAS
    let covered := h.coveredBy.format
    let victims := String.intercalate ", "
                     (h.victimOrigins.map (fun p => p.formatOriginAS))
    let peers   := events.foldl (fun acc e =>
                     let p := e.update.neighbor
                     if List.any acc (· == p) then acc else acc ++ [p]) []
    let announcements := events.length
    IO.println s!"  Hijacked prefix  : {pfx.format}"
    IO.println s!"  Announced by     : {origin}"
    IO.println s!"  Covers baseline  : {covered}"
    IO.println s!"  Victim AS(es)    : {victims}"
    IO.println s!"  Unique peers     : {peers.length}"
    IO.println s!"  Announcements    : {announcements}"
    IO.println ""

def deduplicateHijacks (hijacks : List HijackEvent)
    : List (Subnet × Nat × List HijackEvent) :=
  let m : Std.HashMap (Subnet × Nat) (List HijackEvent) :=
    hijacks.foldl (fun acc h =>
      let key := (h.update.pref.canonicalize, h.update.path.origin.id)
      match acc[key]? with
      | none        => acc.insert key [h]
      | some events => acc.insert key (events ++ [h])
    ) ∅
  m.toList.map (fun (k, v) => (k.1, k.2, v))

def main (args : List String) : IO Unit := do
  if args.length < 2 then
    IO.eprintln "Usage: bgpattackdetector <rib-dir> <update-dir>"
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

  let hijacks := detectSubprefixHijacksMap tableEntries updateEntries
  IO.println s!"[*] Suspicious subprefix announcements (≤8-hop parent search): {hijacks.length}"

  let summary := deduplicateHijacks hijacks
  IO.println s!"[*] Unique (prefix, origin) attacks: {summary.length}\n"

  if summary.isEmpty then
    IO.println "No suspicious announcements detected."
  else
    for (pfx, originId, events) in summary do
      printHijackSummary (pfx, originId) events
