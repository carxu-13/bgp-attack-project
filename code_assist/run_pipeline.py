#!/usr/bin/env python3
"""
run_pipeline.py — BGP attack detector code assistant

Three interactive stages:

  Stage 1  Generate an initial Lean 4 detector from an attack description.
           Uses a general Mistral coding model.

  Stage 2  The user annotates the generated file with
               -- PROOF_NEEDED: <description>
           comments above theorems they want proved. Leanstral fills them in.

  Stage 3  (repeatable) The user pastes compiler errors or requests changes.
           Leanstral revises the file.

Usage:
  python run_pipeline.py \\
    --attack-description ./descriptions/description_1.txt \\
    --base-detector      ./lean-detector/BGPAttackDetector.lean \\
    --main-file          ./lean-detector/Main.lean \\
    --output             ./output/detector_1.lean

Resume from a later stage (file must already exist at --output):
  python run_pipeline.py ... --start-stage 2
  python run_pipeline.py ... --start-stage 3
"""

from __future__ import annotations

import argparse
import os
import sys
from pathlib import Path

import lean_layer as ll


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def read_text(path: str | Path) -> str:
    return Path(path).read_text(encoding="utf-8")


def write_text(path: str | Path, content: str) -> None:
    Path(path).write_text(content, encoding="utf-8")


def banner(title: str) -> None:
    print(f"\n{'='*60}")
    print(f"  {title}")
    print(f"{'='*60}\n")


def collect_multiline(prompt: str) -> str:
    """Collect multi-line input until END or 'quit'/'q' to cancel."""
    print(prompt)
    print("(Paste your input — blank lines are fine. Type END to submit, or 'quit' to exit.)\n")
    lines: list[str] = []
    try:
        while True:
            line = input()
            if line.strip() == "END":
                break
            if line.strip().lower() in ("quit", "q", "exit"):
                return ""
            lines.append(line)
    except EOFError:
        pass
    return "\n".join(lines).strip()


# ---------------------------------------------------------------------------
# Stage 1
# ---------------------------------------------------------------------------

def run_stage1(client, args, output_path: Path) -> str:
    banner("Stage 1 — Generating initial Lean 4 detector")

    attack_description  = read_text(args.attack_description)
    base_detector_code  = read_text(args.base_detector)
    main_code           = read_text(args.main_file)

    system_prompt = ll.build_stage1_system_prompt()
    user_prompt   = ll.build_stage1_user_prompt(
        attack_description=attack_description,
        base_detector_code=base_detector_code,
        main_code=main_code,
    )

    print(f"Model : {args.stage1_model}")
    print("Calling model…")
    result = ll.generate(client, args.stage1_model, system_prompt, user_prompt)

    write_text(output_path, result.code)
    print(f"Written to: {output_path}")
    return result.code


# ---------------------------------------------------------------------------
# Stage 2
# ---------------------------------------------------------------------------

def run_stage2(client, args, output_path: Path) -> str:
    banner("Stage 2 — Proof annotation fill-in")

    print(f"Output file: {output_path}")
    print(
        f"Open the file in your editor and add\n\n"
        f"    {ll.PROOF_ANNOTATION} <what to prove>\n\n"
        f"above any theorem you want Leanstral to prove. You may also write\n"
        f"the theorem statement with `sorry` as a placeholder.\n"
    )
    input("Press Enter when you have finished annotating… ")

    annotated_code = read_text(output_path)

    if ll.PROOF_ANNOTATION not in annotated_code:
        print(f"No {ll.PROOF_ANNOTATION} annotations found — skipping stage 2.")
        return annotated_code

    n = annotated_code.count(ll.PROOF_ANNOTATION)
    print(f"\nFound {n} annotation(s). Calling {args.stage23_model}…")

    system_prompt = ll.build_stage2_system_prompt()
    user_prompt   = ll.build_stage2_user_prompt(annotated_code)
    result        = ll.generate(client, args.stage23_model, system_prompt, user_prompt)

    write_text(output_path, result.code)
    print(f"Proofs filled in. Updated: {output_path}")
    return result.code


# ---------------------------------------------------------------------------
# Stage 3
# ---------------------------------------------------------------------------

def run_stage3_loop(client, args, output_path: Path) -> None:
    banner("Stage 3 — Iterative revision loop")

    while True:
        print(f"Current file: {output_path}\n")

        feedback = collect_multiline(
            "Paste compiler errors or describe the changes you want:"
        )

        if not feedback:
            print("No feedback provided — exiting.")
            break

        current_code = read_text(output_path)

        # ── Pass A: Mistral handles functional concerns ──────────────────
        print(f"\n[Pass A] Calling {args.stage1_model} for functional revision…")
        result_a = ll.generate(
            client,
            args.stage1_model,
            ll.build_stage3_mistral_system_prompt(),
            ll.build_stage3_mistral_user_prompt(current_code, feedback),
        )

        if result_a.code.strip() == current_code.strip():
            print("  Warning: model returned unchanged code.")

        write_text(output_path, result_a.code)
        print(f"  Functional pass written to: {output_path}")

        # ── Pass B: Leanstral fills in any proof annotations ─────────────
        if ll.PROOF_ANNOTATION in result_a.code:
            n = result_a.code.count(ll.PROOF_ANNOTATION)
            print(f"\n[Pass B] Found {n} proof annotation(s). "
                  f"Calling {args.stage23_model} for proofs…")
            result_b = ll.generate(
                client,
                args.stage23_model,
                ll.build_stage2_system_prompt(),
                ll.build_stage2_user_prompt(result_a.code),
            )
            write_text(output_path, result_b.code)
            print(f"  Proof pass written to: {output_path}")
        else:
            print("\n[Pass B] No proof annotations found — skipping Leanstral pass.")

        again = input("\nMake another revision? [y/N] ").strip().lower()
        if again != "y":
            break


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------

def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="BGP attack detector Lean 4 code assistant.",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    parser.add_argument(
        "--attack-description", required=True,
        help="Path to text file describing the attack behavior.",
    )
    parser.add_argument(
        "--base-detector", required=True,
        help="Path to BGPAttackDetector.lean (API reference for stage 1).",
    )
    parser.add_argument(
        "--main-file", required=True,
        help="Path to Main.lean (I/O pattern reference for stage 1).",
    )
    parser.add_argument(
        "--output", required=True,
        help="Path to write (and update) the generated Lean 4 file.",
    )
    parser.add_argument(
        "--stage1-model", default=ll.DEFAULT_STAGE1_MODEL,
        help="Mistral model used for stage 1.",
    )
    parser.add_argument(
        "--stage23-model", default=ll.DEFAULT_STAGE23_MODEL,
        help="Leanstral model used for stages 2 and 3.",
    )
    parser.add_argument(
        "--start-stage", type=int, choices=[1, 2, 3], default=1,
        help="Start from this stage (useful for resuming a previous run).",
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    api_key = os.environ.get("MISTRAL_API_KEY")
    if not api_key:
        print("Missing MISTRAL_API_KEY environment variable.", file=sys.stderr)
        return 2

    client      = ll.make_client(api_key)
    output_path = Path(args.output)

    if args.start_stage > 1 and not output_path.exists():
        print(
            f"--start-stage {args.start_stage} requires {output_path} to already exist.",
            file=sys.stderr,
        )
        return 2

    if args.start_stage <= 1:
        run_stage1(client, args, output_path)

    if args.start_stage <= 2:
        run_stage2(client, args, output_path)

    run_stage3_loop(client, args, output_path)

    print(f"\nDone. Final file: {output_path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
