import Mathlib
import Std

/-!
# BGP Attack Detector Type Definitions

This file defines the core data structures used in the BGP attack detector.
Each structure corresponds to a Python class or namedtuple from the implementation.
-/

/-! ## IP Prefix Representation -/

/-!
A valid IPv4 prefix with its length.
-/
structure IPv4Prefix where
  /- The IPv4 address part of the prefix. -/
  address : Nat
  /- The prefix length (0 ≤ length ≤ 32). -/
  length : Nat

  /-! Invariant: `length ≤ 32` -/
  invariant : length ≤ 32

  /-! Invariant: `address < 2^32` (valid IPv4 address) -/
  invariant' : address < 2^32

  /-! Invariant: `address` is masked to `length` bits -/
  invariant'' : (address << (32 - length)) = address

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance based on prefix length and address -/
  deriving Ord

/-!
Prove that `IPv4Prefix` equality is reflexive.
-/
theorem ipv4_prefix_eq_refl (p : IPv4Prefix) : p = p := by rfl

/-!
Prove that `IPv4Prefix` equality is transitive.
-/
theorem ipv4_prefix_eq_trans {p q r : IPv4Prefix} (h1 : p = q) (h2 : q = r) : p = r := by
  rw [h1, h2]

/-!
Prove that `IPv4Prefix` ordering is reflexive.
-/
theorem ipv4_prefix_le_refl (p : IPv4Prefix) : p ≤ p := by
  exact le_rfl

/-!
Prove that `IPv4Prefix` ordering is transitive.
-/
theorem ipv4_prefix_le_trans {p q r : IPv4Prefix} (h1 : p ≤ q) (h2 : q ≤ r) : p ≤ r := by
  exact le_trans h1 h2

/-! ## AS Path Representation -/

/-!
A sequence of Autonomous System Numbers (ASNs) representing an AS path.
-/
def ASN := Nat

/-!
A non-empty list of ASNs representing an AS path.
-/
structure ASPath where
  /- The sequence of ASNs in the path. -/
  asns : List ASN

  /-! Invariant: The path is non-empty. -/
  invariant : asns ≠ []

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance based on length and ASN values -/
  deriving Ord

/-!
Prove that `ASPath` equality is reflexive.
-/
theorem as_path_eq_refl (p : ASPath) : p = p := by rfl

/-!
Prove that `ASPath` equality is transitive.
-/
theorem as_path_eq_trans {p q r : ASPath} (h1 : p = q) (h2 : q = r) : p = r := by
  rw [h1, h2]

/-!
Prove that `ASPath` ordering is reflexive.
-/
theorem as_path_le_refl (p : ASPath) : p ≤ p := by
  exact le_rfl

/-!
Prove that `ASPath` ordering is transitive.
-/
theorem as_path_le_trans {p q r : ASPath} (h1 : p ≤ q) (h2 : q ≤ r) : p ≤ r := by
  exact le_trans h1 h2

/-! ## BGP Record Types -/

/-!
Types of BGP records.
-/
inductive RecordType where
  | RIB
  | UPDATE

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `RecordType` equality is reflexive.
-/
theorem record_type_eq_refl (t : RecordType) : t = t := by rfl

/-!
Prove that `RecordType` equality is transitive.
-/
theorem record_type_eq_trans {t1 t2 t3 : RecordType} (h1 : t1 = t2) (h2 : t2 = t3) : t1 = t3 := by
  rw [h1, h2]

/-!
Action types for BGP records.
-/
inductive Action where
  | A
  | W

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `Action` equality is reflexive.
-/
theorem action_eq_refl (a : Action) : a = a := by rfl

/-!
Prove that `Action` equality is transitive.
-/
theorem action_eq_trans {a1 a2 a3 : Action} (h1 : a1 = a2) (h2 : a2 = a3) : a1 = a3 := by
  rw [h1, h2]

/-!
A single BGP record from MRT data.
-/
structure BGPRecord where
  /- Name of the collector that recorded this entry. -/
  collector : String
  /- Name of the source file. -/
  source_file : String
  /- Human-readable timestamp. -/
  timestamp : String
  /- Unix timestamp. -/
  timestamp_unix : Nat
  /- Type of the record (RIB or UPDATE). -/
  record_type : RecordType
  /- Action (A for announce, W for withdraw). -/
  action : Action
  /- Peer ASN (if available). -/
  peer_as : Option ASN
  /- Peer IP (if available). -/
  peer_ip : Option String
  /- The IP prefix. -/
  prefix : IPv4Prefix
  /- The AS path. -/
  as_path : ASPath
  /- The origin ASN. -/
  origin_as : Option ASN

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `BGPRecord` equality is reflexive.
-/
theorem bgp_record_eq_refl (r : BGPRecord) : r = r := by rfl

/-!
Prove that `BGPRecord` equality is transitive.
-/
theorem bgp_record_eq_trans {r1 r2 r3 : BGPRecord} (h1 : r1 = r2) (h2 : r2 = r3) : r1 = r3 := by
  rw [h1, h2]

/-!
Prove that `BGPRecord` ordering is reflexive.
-/
theorem bgp_record_le_refl (r : BGPRecord) : r ≤ r := by
  exact le_rfl

/-!
Prove that `BGPRecord` ordering is transitive.
-/
theorem bgp_record_le_trans {r1 r2 r3 : BGPRecord} (h1 : r1 ≤ r2) (h2 : r2 ≤ r3) : r1 ≤ r3 := by
  exact le_trans h1 h2

/-! ## Suspicious Record Representation -/

/-!
A suspicious BGP record with additional detection metadata.
-/
structure SuspiciousRecord where
  /- Base BGP record. -/
  record : BGPRecord
  /- Set of baseline origin ASNs for this prefix. -/
  baseline_origins : List ASN
  /- Length of the AS path. -/
  prefix_len : Nat

  /-! Invariant: `prefix_len = record.as_path.asns.length` -/
  invariant : prefix_len = record.as_path.asns.length

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `SuspiciousRecord` equality is reflexive.
-/
theorem suspicious_record_eq_refl (r : SuspiciousRecord) : r = r := by rfl

/-!
Prove that `SuspiciousRecord` equality is transitive.
-/
theorem suspicious_record_eq_trans {r1 r2 r3 : SuspiciousRecord} (h1 : r1 = r2) (h2 : r2 = r3) : r1 = r3 := by
  rw [h1, h2]

/-!
Prove that `SuspiciousRecord` ordering is reflexive.
-/
theorem suspicious_record_le_refl (r : SuspiciousRecord) : r ≤ r := by
  exact le_rfl

/-!
Prove that `SuspiciousRecord` ordering is transitive.
-/
theorem suspicious_record_le_trans {r1 r2 r3 : SuspiciousRecord} (h1 : r1 ≤ r2) (h2 : r2 ≤ r3) : r1 ≤ r3 := by
  exact le_trans h1 h2

/-! ## Detection Summary -/

/-!
Summary statistics for detected suspicious prefixes.
-/
structure PrefixSummary where
  /- The IP prefix. -/
  prefix : IPv4Prefix
  /- The origin ASN. -/
  origin_as : ASN
  /- First seen timestamp. -/
  first_seen : String
  /- Last seen timestamp. -/
  last_seen : String
  /- Number of suspicious announcements. -/
  suspicious_announcements : Nat
  /- Set of suspected origin ASNs. -/
  suspected_origins : List ASN
  /- Set of baseline origin ASNs. -/
  baseline_origins : List ASN
  /- Set of collectors that observed this prefix. -/
  collectors : List String
  /- Number of unique peers. -/
  unique_peers : Nat

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `PrefixSummary` equality is reflexive.
-/
theorem prefix_summary_eq_refl (s : PrefixSummary) : s = s := by rfl

/-!
Prove that `PrefixSummary` equality is transitive.
-/
theorem prefix_summary_eq_trans {s1 s2 s3 : PrefixSummary} (h1 : s1 = s2) (h2 : s2 = s3) : s1 = s3 := by
  rw [h1, h2]

/-!
Prove that `PrefixSummary` ordering is reflexive.
-/
theorem prefix_summary_le_refl (s : PrefixSummary) : s ≤ s := by
  exact le_rfl

/-!
Prove that `PrefixSummary` ordering is transitive.
-/
theorem prefix_summary_le_trans {s1 s2 s3 : PrefixSummary} (h1 : s1 ≤ s2) (h2 : s2 ≤ s3) : s1 ≤ s3 := by
  exact le_trans h1 h2

/-! ## Detection Result -/

/-!
Result of the interception detection process.
-/
structure DetectionResult where
  /- Count of suspicious announcements. -/
  count : Nat
  /- Summary of suspicious prefixes. -/
  prefix_summary : List PrefixSummary
  /- List of suspicious records. -/
  suspicious_records : List SuspiciousRecord

  /-! Decidable equality -/
  deriving DecidableEq

  /-! Hashable instance -/
  deriving Hashable

  /-! Repr instance -/
  deriving Repr

  /-! Ord instance -/
  deriving Ord

/-!
Prove that `DetectionResult` equality is reflexive.
-/
theorem detection_result_eq_refl (r : DetectionResult) : r = r := by rfl

/-!
Prove that `DetectionResult` equality is transitive.
-/
theorem detection_result_eq_trans {r1 r2 r3 : DetectionResult} (h1 : r1 = r2) (h2 : r2 = r3) : r1 = r3 := by
  rw [h1, h2]

/-!
Prove that `DetectionResult` ordering is reflexive.
-/
theorem detection_result_le_refl (r : DetectionResult) : r ≤ r := by
  exact le_rfl

/-!
Prove that `DetectionResult` ordering is transitive.
-/
theorem detection_result_le_trans {r1 r2 r3 : DetectionResult} (h1 : r1 ≤ r2) (h2 : r2 ≤ r3) : r1 ≤ r3 := by
  exact le_trans h1 h2
