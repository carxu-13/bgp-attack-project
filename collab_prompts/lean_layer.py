#!/usr/bin/env python3
"""
runEval.py

Minimal evaluation harness for:
- prompting Mistral to extend an existing BGP detector
- extracting Lean 4 code from the model output
- compiling it to check syntax validity
- retrying with the compiler error if needed
- emitting the final valid Lean 4 source

Environment:
  export MISTRAL_API_KEY=...

Example:
  python runEval.py \
    --base-detector ./lean-detector/BGPAttackDetector.lean \
    --attack-description ./descriptions/description_1.txt \
    --output ./output/generated_detector_1.lean
"""

from __future__ import annotations

import argparse
import ast
import os
import re
import sys
import textwrap
import subprocess
import tempfile
from dataclasses import dataclass
from pathlib import Path
from typing import Optional, Tuple

from mistralai.client import Mistral


DEFAULT_MODEL = "labs-leanstral-2603"
DEFAULT_MAX_RETRIES = 3


@dataclass
class GenerationResult:
    code: str
    raw_response: str
    compiled: bool
    error: Optional[str]
    attempts: int


def read_text(path: str | Path) -> str:
    return Path(path).read_text(encoding="utf-8")


def build_types_system_prompt() -> str:
    return textwrap.dedent(
        """
        You are a Lean 4 expert. Given a Python BGP attack detector implementation, you produce
        Lean 4 data type definitions that formally model the Python types.

        Rules:
        - Output Lean 4 source code only (no markdown fences, no prose).
        - Define every data structure used in the Python implementation as a Lean 4 structure or inductive type.
        - Add thorough doc-comments (/-! ... -/) explaining each field and invariant.
        - Derive or manually provide DecidableEq, Hashable, Repr, and Ord instances where appropriate.
        - State and prove correctness properties for each type as Lean theorems:
            * ordering / containment relations must be proved reflexive and transitive
            * any field invariants (e.g. prefix length ≤ 32) must be encoded or proved
        - Do not implement detector logic — types and proofs only.
        - Only use Mathlib and the standard library.
        - Generate a complete Lean 4 file that compiles as-is.
        """
    ).strip()


def build_types_user_prompt(python_impl: str, attack_description: str, compiler_error: Optional[str] = None) -> str:
    prompt = f"""
You are given a Python BGP attack detector implementation and a description of the attack it detects.

Your task is to produce Lean 4 type definitions that formally model every data structure used in the Python code.

Python implementation:
<<<PYTHON_IMPL
{python_impl}
PYTHON_IMPL>>>

Attack behavior description:
<<<ATTACK_DESCRIPTION
{attack_description}
ATTACK_DESCRIPTION>>>

Task:
- Define each Python class / namedtuple / dataclass as a Lean 4 structure or inductive.
- Add thorough /-! doc-comments -/ on each type and field.
- Provide typeclass instances (DecidableEq, Hashable, Repr, Ord) as needed.
- Prove key correctness properties for each type (reflexivity, transitivity, invariant bounds, etc.).
- Do NOT implement detector functions — only types and their proofs.
- Output a single complete Lean 4 file with no markdown fences.
""".strip()

    if compiler_error:
        prompt += f"""

The previous attempt failed to compile.

Compiler error:
<<<COMPILER_ERROR
{compiler_error}
COMPILER_ERROR>>>

Please correct and output a full replacement Lean 4 file.
""".rstrip()

    return prompt


def build_verify_system_prompt() -> str:
    return textwrap.dedent(
        """
        You are a Lean 4 formal verification expert specializing in network security.
        Given a Python BGP detector implementation and existing Lean 4 type definitions,
        you produce a complete, formally verified Lean 4 implementation.

        Rules:
        - Output Lean 4 source code only (no markdown fences, no prose).
        - Reproduce every detector function from the Python implementation in Lean 4.
        - Re-use the provided type definitions exactly; do not redefine them.
        - Each function must be accompanied by a correctness theorem and proof.
        - Add thorough doc-comments explaining each function and its proof strategy.
        - Only use Mathlib and the standard library.
        - Generate a complete Lean 4 file that compiles as-is.
        - Under no circumstances are you to use sorry in any proof. Using sorry invalidates the entire output of the project.
        """
    ).strip()


def build_verify_user_prompt(python_impl: str, lean_types: str, attack_description: str, compiler_error: Optional[str] = None) -> str:
    prompt = f"""
You are given a Python BGP attack detector, its formal Lean 4 type definitions, and the attack description.

Your task is to implement every detector function in Lean 4 and formally verify each one.

Python implementation:
<<<PYTHON_IMPL
{python_impl}
PYTHON_IMPL>>>

Lean 4 type definitions (use these exactly, do not redefine):
<<<LEAN_TYPES
{lean_types}
LEAN_TYPES>>>

Attack behavior description:
<<<ATTACK_DESCRIPTION
{attack_description}
ATTACK_DESCRIPTION>>>

Task:
- Begin the file by importing the type definitions (or inlining them if needed for compilation).
- Implement each Python function as a Lean 4 definition.
- Follow each definition with a correctness theorem and proof.
- Add /-! doc-comments -/ on each function explaining its purpose and proof strategy.
- Output a single complete Lean 4 file with no markdown fences.
""".strip()

    if compiler_error:
        prompt += f"""

The previous attempt failed to compile.

Compiler error:
<<<COMPILER_ERROR
{compiler_error}
COMPILER_ERROR>>>

Please correct and output a full replacement Lean 4 file.
""".rstrip()

    return prompt


def call_mistral(client: Mistral, model: str, system_prompt: str, user_prompt: str, temperature: float = 0.1) -> str:
    response = client.chat.complete(
        model=model,
        messages=[
            {"role": "system", "content": system_prompt},
            {"role": "user", "content": user_prompt},
        ],
        temperature=temperature,
    )

    content = response.choices[0].message.content
    if isinstance(content, str):
        return content

    # Defensive fallback in case SDK returns structured content blocks.
    if isinstance(content, list):
        parts = []
        for block in content:
            if isinstance(block, dict) and "text" in block:
                parts.append(block["text"])
            else:
                parts.append(str(block))
        return "\n".join(parts)

    return str(content)


def extract_code(raw_text: str) -> str:
    marker = re.search(r"BEGIN_CODE\s*(.*?)\s*END_CODE", raw_text, flags=re.DOTALL)
    if marker:
        return marker.group(1).strip()

    fenced = re.findall(r"```\w*\s*(.*?)```", raw_text, flags=re.DOTALL | re.IGNORECASE)
    if fenced:
        return fenced[0].strip()

    return raw_text.strip()


def normalize_code(code: str) -> str:
    code = code.replace("\r\n", "\n").strip()
    if not code.endswith("\n"):
        code += "\n"
    return code


def compile_lean(code: str, filename: str, project_dir: str | None = None):
    path = Path(filename)
    path.write_text(code, encoding="utf-8")

    if project_dir:
        # Derive the module name relative to the project root so `lake build` can find it.
        module_name = path.with_suffix("").resolve().relative_to(Path(project_dir).resolve()).as_posix().replace("/", ".")
        cmd = ["lake", "build", module_name]
        cwd = project_dir
    else:
        cmd = ["lean", str(path)]
        cwd = None

    proc = subprocess.run(
        cmd,
        cwd=cwd,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )

    if proc.returncode == 0:
        return True, None

    error = proc.stderr.strip() or proc.stdout.strip() or "Unknown Lean error"
    return False, error

def ast_sanity_check(code: str) -> Tuple[bool, Optional[str]]:
    """
    Optional extra check. This still does not execute code.
    """
    try:
        ast.parse(code)
        return True, None
    except Exception as e:
        return False, f"AST parse failed: {type(e).__name__}: {e}"


def interactive_feedback(code: str, output_path: Path) -> Tuple[bool, Optional[str]]:
    output_path.write_text(code, encoding="utf-8")
    print(f"\n--- Attempt written to: {output_path} ---")
    print("Compile it manually, then enter feedback below.")
    print("  Press Enter with no input to mark as success.")
    print("  Type 'quit' to abort.\n")
    try:
        feedback = input("Feedback (or Enter for success): ").strip()
    except EOFError:
        feedback = ""
    if feedback.lower() == "quit":
        raise KeyboardInterrupt
    if feedback == "":
        return True, None
    return False, feedback


def generate_valid_code(
    client: Mistral,
    model: str,
    attack_description: str,
    max_retries: int,
    mode: str = "types",
    python_impl: str = "",
    lean_types: str = "",
    project_dir: str | None = None,
    interactive: bool = False,
    output_path: Path | None = None,
) -> GenerationResult:
    if mode == "types":
        system_prompt = build_types_system_prompt()
    else:
        system_prompt = build_verify_system_prompt()

    compiler_error = None
    last_raw = ""
    last_code = ""

    for attempt in range(1, max_retries + 2):
        if mode == "types":
            user_prompt = build_types_user_prompt(
                python_impl=python_impl,
                attack_description=attack_description,
                compiler_error=compiler_error,
            )
        else:
            user_prompt = build_verify_user_prompt(
                python_impl=python_impl,
                lean_types=lean_types,
                attack_description=attack_description,
                compiler_error=compiler_error,
            )

        raw = call_mistral(client, model, system_prompt, user_prompt)
        code = normalize_code(extract_code(raw))

        if interactive and output_path:
            compiled, error = interactive_feedback(code, output_path)
        else:
            compiled, error = True, None

        if compiled:
            return GenerationResult(
                code=code,
                raw_response=raw,
                compiled=True,
                error=None,
                attempts=attempt,
            )

        compiler_error = error
        last_raw = raw
        last_code = code

    return GenerationResult(
        code=last_code,
        raw_response=last_raw,
        compiled=False,
        error=compiler_error,
        attempts=max_retries + 1,
    )


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Lean 4 type generation and verification layer.")
    parser.add_argument("--mode", choices=["types", "verify"], default="types",
                        help="'types': extract Lean types from Python impl; 'verify': formalize full implementation.")
    parser.add_argument("--python-impl", required=True, help="Path to Python implementation file.")
    parser.add_argument("--lean-types", default=None, help="Path to Lean 4 types file (required for --mode verify).")
    parser.add_argument("--attack-description", required=True, help="Path to text file describing target attack behavior.")
    parser.add_argument("--output", required=True, help="Path to save generated Lean 4 code.")
    parser.add_argument("--model", default=DEFAULT_MODEL, help="Leanstral model name.")
    parser.add_argument("--max-retries", type=int, default=DEFAULT_MAX_RETRIES, help="Number of repair retries after first attempt.")
    parser.add_argument("--save-raw", default=None, help="Optional path to save raw model output from final attempt.")
    parser.add_argument("--project-dir", type=str, help="Location of lean project.")
    parser.add_argument("--interactive", action="store_true", help="Pause after each attempt for manual compilation and feedback.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    if args.mode == "verify" and not args.lean_types:
        print("--lean-types is required when --mode verify is used.", file=sys.stderr)
        return 2

    api_key = os.environ.get("MISTRAL_API_KEY")
    if not api_key:
        print("Missing MISTRAL_API_KEY environment variable.", file=sys.stderr)
        return 2

    python_impl = read_text(args.python_impl)
    attack_description = read_text(args.attack_description)
    lean_types = read_text(args.lean_types) if args.lean_types else ""

    client = Mistral(api_key=api_key, timeout_ms=120_000)

    output_path = Path(args.output)
    result = generate_valid_code(
        client=client,
        model=args.model,
        attack_description=attack_description,
        max_retries=args.max_retries,
        mode=args.mode,
        python_impl=python_impl,
        lean_types=lean_types,
        project_dir=args.project_dir if args.project_dir else None,
        interactive=args.interactive,
        output_path=output_path if args.interactive else None,
    )

    output_path.write_text(result.code, encoding="utf-8")

    if args.save_raw:
        Path(args.save_raw).write_text(result.raw_response, encoding="utf-8")

    if result.compiled:
        print(f"Success: generated valid Lean 4 code after {result.attempts} attempt(s).")
        print(f"Saved code to: {output_path}")
        return 0

    print(f"Failure: code still does not compile after {result.attempts} attempt(s).", file=sys.stderr)
    print(f"Last compiler error:\n{result.error}", file=sys.stderr)
    print(f"Saved last attempt to: {output_path}", file=sys.stderr)
    return 1


if __name__ == "__main__":
    raise SystemExit(main())
