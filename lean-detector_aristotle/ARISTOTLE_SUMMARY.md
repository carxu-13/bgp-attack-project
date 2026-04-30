# Summary of changes for run 2f0d0d27-1dcf-4041-950c-dd580008d377
## Summary

I added a new formally verified executable `bgpinterceptiondetector` to the Lake project that detects BGP interception attacks. The executable uses the same input style as the existing `bgpattackdetector` (two directory arguments: `<rib-dir>` and `<update-dir>` containing bgpdump text-format files).

### Files created

- **`InterceptionDetector.lean`** — Core detection logic and formal verification:
  - **Path utilities**: `toList`, `length`, `destinationASN`, `intermediaries`, `suffix`, `isSuffixOf`
  - **Baseline building**: `buildInterceptionBaseline` constructs a per-prefix baseline (known paths, all ASNs, destination ASNs) from RIB entries
  - **Detection logic**:
    - `findNewIntermediaries` — identifies ASNs in an update path not present in any baseline path
    - `destinationPreserved` — checks if the historical destination ASN is still at the end of the new path
    - `interceptionConfidence` — scores events based on destination preservation (+30), new intermediaries (+10 each), path lengthening (+20), suffix preservation (+10)
    - `analyseUpdate` — analyses a single update against the baseline, requiring confidence ≥ 40
    - `detectInterceptions` — full pipeline with corroboration filter (≥2 distinct peer ASNs required), suppressing prefixes shorter than /8 and non-announcements

  - **Formal verification** (all sorry-free, using only standard axioms):
    - `findNewIntermediaries_spec`: every returned ASN is provably absent from the baseline
    - `destinationPreserved_spec`: returned destination is provably both a baseline destination and the path's actual destination
    - `analyseUpdate_sound`: every alert satisfies all soundness properties (announcement, baseline existence, destination in baseline, new intermediaries absent from baseline, non-empty intermediaries, confidence threshold)
    - `detectInterceptions_corroborated`: every output event is corroborated by ≥ minPeers distinct peer ASNs

- **`InterceptionMain.lean`** — Executable entry point with pretty-printing and deduplication

### Files modified

- **`lakefile.toml`** — Added `InterceptionDetector` library and `bgpinterceptiondetector` executable targets
- **`BGPAttackDetector.lean`** — Replaced the `axiom mask_le` with a proven `theorem mask_le` (using `native_decide`), eliminating the only custom axiom in the project

### Build status

The entire project builds cleanly with zero sorries and zero custom axioms. All proofs depend only on the standard allowed axioms (`propext`, `Quot.sound`, `Classical.choice`, `Lean.trustCompiler`).