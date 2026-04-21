#!/usr/bin/env python3
"""
run_pipeline.py

Four-stage collaborative pipeline:

  Stage 1 (python  --mode draft)   : Generate initial Python detector
  Stage 2 (lean    --mode types)   : Extract formal Lean 4 types + proofs from Python draft
  Stage 3 (python  --mode refine)  : Rewrite Python aligned to Lean types
  Stage 4 (lean    --mode verify)  : Formally verify the refined Python implementation

Usage:
  python run_pipeline.py \\
    --base-detector  ./bgp_finalproject_hijackDetector.py \\
    --attack-description ./descriptions/description_1.txt \\
    --output-dir     ./output/run1 \\
    [--project-dir   ./lean-detector] \\
    [--interactive-lean]
"""

from __future__ import annotations

import argparse
import subprocess
import sys
from pathlib import Path


PYTHON_LAYER = Path(__file__).parent / "python_layer.py"
LEAN_LAYER   = Path(__file__).parent / "lean_layer.py"


def run(cmd: list[str], stage: str) -> None:
    print(f"\n{'='*60}")
    print(f"  {stage}")
    print(f"{'='*60}")
    result = subprocess.run(cmd, text=True)
    if result.returncode not in (0, 1):
        print(f"Stage '{stage}' exited with code {result.returncode}. Aborting.", file=sys.stderr)
        sys.exit(result.returncode)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Run the four-stage Python/Lean co-generation pipeline.")
    parser.add_argument("--base-detector", required=True, help="Path to existing Python detector to use as base.")
    parser.add_argument("--attack-description", required=True, help="Path to attack behavior description.")
    parser.add_argument("--output-dir", required=True, help="Directory to write all intermediate and final outputs.")
    parser.add_argument("--project-dir", default=None, help="Lean project root (passed to lean_layer for lake build).")
    parser.add_argument("--interactive-lean", action="store_true",
                        help="Pause lean stages for manual compilation and feedback.")
    parser.add_argument("--python-model", default="mistral-small-2603", help="Mistral model for Python stages.")
    parser.add_argument("--lean-model", default="labs-leanstral-2603", help="Leanstral model for Lean stages.")
    parser.add_argument("--python-retries", type=int, default=3)
    parser.add_argument("--lean-retries", type=int, default=3)
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    out = Path(args.output_dir)
    out.mkdir(parents=True, exist_ok=True)

    draft_py    = out / "draft.py"
    types_lean  = out / "types.lean"
    refined_py  = out / "refined.py"
    verified_lean = out / "verified.lean"

    # ------------------------------------------------------------------ #
    # Stage 1: Generate Python draft                                       #
    # ------------------------------------------------------------------ #
    cmd = [
        sys.executable, str(PYTHON_LAYER),
        "--mode", "draft",
        "--base-detector", args.base_detector,
        "--attack-description", args.attack_description,
        "--output", str(draft_py),
        "--model", args.python_model,
        "--max-retries", str(args.python_retries),
    ]
    run(cmd, "Stage 1 — Python draft")

    # ------------------------------------------------------------------ #
    # Stage 2: Extract Lean types from Python draft                        #
    # ------------------------------------------------------------------ #
    cmd = [
        sys.executable, str(LEAN_LAYER),
        "--mode", "types",
        "--python-impl", str(draft_py),
        "--attack-description", args.attack_description,
        "--output", str(types_lean),
        "--model", args.lean_model,
        "--max-retries", str(args.lean_retries),
    ]
    if args.project_dir:
        cmd += ["--project-dir", args.project_dir]
    if args.interactive_lean:
        cmd += ["--interactive"]
    run(cmd, "Stage 2 — Lean type extraction")

    # ------------------------------------------------------------------ #
    # Stage 3: Refine Python to align with Lean types                      #
    # ------------------------------------------------------------------ #
    cmd = [
        sys.executable, str(PYTHON_LAYER),
        "--mode", "refine",
        "--draft", str(draft_py),
        "--lean-types", str(types_lean),
        "--attack-description", args.attack_description,
        "--output", str(refined_py),
        "--model", args.python_model,
        "--max-retries", str(args.python_retries),
    ]
    run(cmd, "Stage 3 — Python refinement")

    # ------------------------------------------------------------------ #
    # Stage 4: Formally verify refined Python in Lean                      #
    # ------------------------------------------------------------------ #
    cmd = [
        sys.executable, str(LEAN_LAYER),
        "--mode", "verify",
        "--python-impl", str(refined_py),
        "--lean-types", str(types_lean),
        "--attack-description", args.attack_description,
        "--output", str(verified_lean),
        "--model", args.lean_model,
        "--max-retries", str(args.lean_retries),
    ]
    if args.project_dir:
        cmd += ["--project-dir", args.project_dir]
    if args.interactive_lean:
        cmd += ["--interactive"]
    run(cmd, "Stage 4 — Lean formal verification")

    print(f"\nPipeline complete. Outputs in: {out}")
    print(f"  Draft Python   : {draft_py}")
    print(f"  Lean types     : {types_lean}")
    print(f"  Refined Python : {refined_py}")
    print(f"  Verified Lean  : {verified_lean}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
