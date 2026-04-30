import InterceptionDetector

/-!
# BGP Interception Detector — Executable

Reads baseline (RIB) entries and update entries from two directories,
then runs the interception detection pipeline and prints results.

**Usage**: `bgpinterceptiondetector <rib-dir> <update-dir>`

Input format is identical to the existing `bgpattackdetector` executable:
each directory contains one or more bgpdump text-format files with
pipe-delimited fields.
-/

-- ============================================================
-- Pretty-printing helpers
-- ============================================================

def printInterceptionEvent (ev : InterceptionEvent) : IO Unit := do
  IO.println s!"  Prefix             : {ev.subnet.format}"
  IO.println s!"  Preserved dest AS  : AS{ev.preservedDestination}"
  IO.println s!"  New intermediaries : {ev.newIntermediaries}"
  IO.println s!"  Confidence         : {ev.confidence}"
  IO.println s!"  Peer AS            : {ev.update.neighbor}"
  IO.println s!"  Announcer          : {ev.update.announcer.format}"
  IO.println ""

-- Deduplicate events by (canonical prefix, first new intermediary).
def deduplicateInterceptions (events : List InterceptionEvent) :
    List (Subnet × Nat × List InterceptionEvent) :=
  let m : Std.HashMap (Subnet × Nat) (List InterceptionEvent) :=
    events.foldl (fun acc ev =>
      let repASN := ev.newIntermediaries.head?.getD 0
      let key := (ev.subnet, repASN)
      match acc[key]? with
      | none => acc.insert key [ev]
      | some existing => acc.insert key (existing ++ [ev])
    ) ∅
  m.toList.map (fun (k, v) => (k.1, k.2, v))

def printGroupSummary (pfx : Subnet) (repASN : Nat)
    (events : List InterceptionEvent) : IO Unit := do
  let peers := events.foldl (fun acc ev =>
    let p := ev.update.neighbor
    if acc.any (· == p) then acc else acc ++ [p]) ([] : List Nat)
  let maxConf := events.foldl (fun acc ev => max acc ev.confidence) 0
  IO.println s!"  Prefix             : {pfx.format}"
  IO.println s!"  Suspicious AS      : AS{repASN}"
  match events.head? with
  | some ev => IO.println s!"  Preserved dest AS  : AS{ev.preservedDestination}"
  | none => pure ()
  IO.println s!"  Unique peers       : {peers.length}"
  IO.println s!"  Announcements      : {events.length}"
  IO.println s!"  Max confidence     : {maxConf}"
  IO.println ""

-- ============================================================
-- Main entry point
-- ============================================================

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

  let interceptions := detectInterceptions tableEntries updateEntries
  IO.println s!"[*] Suspicious interception events (corroborated): {interceptions.length}"

  let summary := deduplicateInterceptions interceptions
  IO.println s!"[*] Unique (prefix, intermediary) groups: {summary.length}\n"

  if summary.isEmpty then
    IO.println "No suspicious interception events detected."
  else
    IO.println "Suspicious interception events detected."
    -- for (pfx, repASN, events) in summary do
    --   printGroupSummary pfx repASN events
