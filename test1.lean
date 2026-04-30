import Mathlib
import Std

-- Constants for BGP attack detection
def BGP_PORT : Nat := 179
def MIN_PREFIX_LENGTH : Nat := 8
def MAX_PREFIX_LENGTH : Nat := 32
def MAX_AS_PATH_LENGTH : Nat := 10
def MAX_HOP_COUNT : Nat := 10

-- BGP message types
inductive BgpMessageType where
  | OPEN
  | UPDATE
  | NOTIFICATION
  | KEEPALIVE

-- BGP UPDATE message structure
structure BgpUpdateMessage where
  withdrawnRoutes : List String
  announcedRoutes : List String
  asPath : List Nat
  origin : Nat
  nextHop : String
  timestamp : Nat

-- BGP attack detector state
structure BgpDetectorState where
  lastUpdateTime : Nat
  lastUpdatePrefixes : List String
  lastUpdateAsPath : List Nat
  prefixCounts : Map String Nat
  asPathCounts : Map (List Nat) Nat
  suspiciousPrefixes : Set String
  suspiciousAsPaths : Set (List Nat)

-- Initialize detector state
def initDetectorState : BgpDetectorState := {
  lastUpdateTime := 0
  lastUpdatePrefixes := []
  lastUpdateAsPath := []
  prefixCounts := {}
  asPathCounts := {}
  suspiciousPrefixes := {}
  suspiciousAsPaths := {}
}

-- Check if a prefix is valid
def isValidPrefix (prefix : String) : Bool :=
  let parts := prefix.splitOn "/"
  if parts.length != 2 then false
  else
    let len := parts[1].toNat?
    match len with
    | some l => l ≥ MIN_PREFIX_LENGTH ∧ l ≤ MAX_PREFIX_LENGTH
    | none => false

-- Check if an AS path is valid
def isValidAsPath (asPath : List Nat) : Bool :=
  asPath.length ≤ MAX_AS_PATH_LENGTH

-- Check for sudden large prefix announcements
def checkLargePrefixAnnouncement (update : BgpUpdateMessage) (state : BgpDetectorState) : Bool :=
  let newPrefixes := update.announcedRoutes
  let totalPrefixes := state.prefixCounts.toList.map Prod.snd |>.sum + newPrefixes.length
  let avgPrefixes := if state.prefixCounts.toList.length > 0
    then totalPrefixes / (state.prefixCounts.toList.length + 1)
    else totalPrefixes
  newPrefixes.length > 2 * avgPrefixes

-- Check for AS path length anomalies
def checkAsPathLengthAnomaly (update : BgpUpdateMessage) (state : BgpDetectorState) : Bool :=
  let newAsPath := update.asPath
  let totalAsPathLength := state.asPathCounts.toList.map Prod.snd |>.sum + newAsPath.length
  let avgAsPathLength := if state.asPathCounts.toList.length > 0
    then totalAsPathLength / (state.asPathCounts.toList.length + 1)
    else totalAsPathLength
  newAsPath.length > 2 * avgAsPathLength

-- Check for prefix hijacking (new announcement of already announced prefix)
def checkPrefixHijacking (update : BgpUpdateMessage) (state : BgpDetectorState) : Bool :=
  let newPrefixes := update.announcedRoutes
  let existingPrefixes := state.prefixCounts.toList.map Prod.fst
  newPrefixes.any (fun p => existingPrefixes.contains p)

-- Check for AS path hijacking (new AS path for already announced prefix)
def checkAsPathHijacking (update : BgpUpdateMessage) (state : BgpDetectorState) : Bool :=
  let newPrefixes := update.announcedRoutes
  let newAsPath := update.asPath
  let existingPrefixes := state.prefixCounts.toList.map Prod.fst
  let existingAsPaths := state.asPathCounts.toList.map Prod.fst
  newPrefixes.any (fun p =>
    existingPrefixes.contains p ∧
    !existingAsPaths.contains newAsPath
  )

-- Update detector state with new BGP update
def updateDetectorState (update : BgpUpdateMessage) (state : BgpDetectorState) : BgpDetectorState := {
  lastUpdateTime := update.timestamp
  lastUpdatePrefixes := update.announcedRoutes
  lastUpdateAsPath := update.asPath
  prefixCounts := state.prefixCounts.insertMany (update.announcedRoutes.map (fun p => (p, 1)))
  asPathCounts := state.asPathCounts.insert (update.asPath, 1)
  suspiciousPrefixes := if checkPrefixHijacking update state then
    state.suspiciousPrefixes.union (update.announcedRoutes.toSet)
  else state.suspiciousPrefixes
  suspiciousAsPaths := if checkAsPathHijacking update state then
    state.suspiciousAsPaths.insert update.asPath
  else state.suspiciousAsPaths
}

-- Main detection function
def detectBgpAttack (update : BgpUpdateMessage) (state : BgpDetectorState) : (Bool × BgpDetectorState) :=
  let largePrefix := checkLargePrefixAnnouncement update state
  let asPathAnomaly := checkAsPathLengthAnomaly update state
  let prefixHijack := checkPrefixHijacking update state
  let asPathHijack := checkAsPathHijacking update state
  let isAttack := largePrefix || asPathAnomaly || prefixHijack || asPathHijack
  (isAttack, updateDetectorState update state)

-- Example usage
def exampleDetection : IO Unit := do
  let initialState := initDetectorState
  let update1 := {
    withdrawnRoutes := []
    announcedRoutes := ["192.168.0.0/24"]
    asPath := [65001]
    origin := 65001
    nextHop := "10.0.0.1"
    timestamp := 1000
  }
  let (attack1, state1) := detectBgpAttack update1 initialState
  IO.println s!"First update - Attack detected: {attack1}"

  let update2 := {
    withdrawnRoutes := []
    announcedRoutes := ["192.168.0.0/24", "10.0.0.0/24", "172.16.0.0/16"]
    asPath := [65002, 65001]
    origin := 65001
    nextHop := "10.0.0.2"
    timestamp := 2000
  }
  let (attack2, state2) := detectBgpAttack update2 state1
  IO.println s!"Second update - Attack detected: {attack2}"

  let update3 := {
    withdrawnRoutes := []
    announcedRoutes := ["192.168.0.0/24"]
    asPath := [65003]
    origin := 65003
    nextHop := "10.0.0.3"
    timestamp := 3000
  }
  let (attack3, state3) := detectBgpAttack update3 state2
  IO.println s!"Third update - Attack detected: {attack3}"

#eval exampleDetection
