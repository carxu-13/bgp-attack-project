#!/usr/bin/env python3
"""
runEval.py

Minimal evaluation harness for:
- prompting Mistral to extend an existing BGP detector
- extracting Python code from the model output
- compiling it to check syntax validity
- retrying with the compiler error if needed
- emitting the final valid Python source

Environment:
  export MISTRAL_API_KEY=...

Example:
  python runEval.py \
    --base-detector ./bgp_finalproject_hijackDetector.py \
    --attack-description ./descriptions/description_1.txt \
    --output ./output/generated_detector_1.py
"""

from __future__ import annotations

import argparse
import ast
import os
import re
import sys
import textwrap
from dataclasses import dataclass
from pathlib import Path
from typing import Optional, Tuple

from mistralai import Mistral


DEFAULT_MODEL = "devstral-small-2"
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


def build_system_prompt() -> str:
    return textwrap.dedent(
        """
        You extend existing Python detector code for BGP attacks.

        Rules:
        - Output Python source code only.
        - Do not include markdown fences unless explicitly asked.
        - Do not include explanations before or after the code.
        - Preserve the style and structure of the provided detector when reasonable.
        - Generate a complete Python file that can be compiled as-is.
        """
    ).strip()


def build_user_prompt(base_detector_code: str, attack_description: str, compiler_error: Optional[str] = None) -> str:
    prompt = f"""
You are given an existing Python detector for one BGP attack.

Your job is to extend or adapt the detector so it detects a different BGP attack behavior.

Important constraint:
- The new attack is described only behaviorally below.
- Do not assume a named historical incident unless the description itself requires it.

Existing detector code:
<<<BASE_DETECTOR
{base_detector_code}
BASE_DETECTOR>>>

Target attack behavior description:
<<<ATTACK_DESCRIPTION
{attack_description}
ATTACK_DESCRIPTION>>>

Task:
- Produce a single complete Python file.
- Reuse the structure and style of the existing detector where possible.
- Keep imports minimal.
- Do not output commentary.
- Output only valid Python source code.
""".strip()

    if compiler_error:
        prompt += f"""

The previous attempt failed to compile.

Compiler error:
<<<COMPILER_ERROR
{compiler_error}
COMPILER_ERROR>>>

Please correct the code and output a full replacement Python file.
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
    """
    Prefer fenced python blocks if present, otherwise fall back to raw text.
    """
    fenced = re.findall(r"```(?:python)?\s*(.*?)```", raw_text, flags=re.DOTALL | re.IGNORECASE)
    if fenced:
        return fenced[0].strip()

    # Remove common leading/trailing chatter if the model ignored instructions.
    cleaned = raw_text.strip()

    # Try to start from the first likely Python construct.
    start_patterns = [
        r"(?m)^from\s+\w+\s+import\s+",
        r"(?m)^import\s+",
        r"(?m)^class\s+\w+",
        r"(?m)^def\s+\w+",
        r"(?m)^#",
    ]
    starts = []
    for pattern in start_patterns:
        match = re.search(pattern, cleaned)
        if match:
            starts.append(match.start())
    if starts:
        cleaned = cleaned[min(starts):].strip()

    return cleaned


def normalize_code(code: str) -> str:
    code = code.replace("\r\n", "\n").strip()
    if not code.endswith("\n"):
        code += "\n"
    return code


def compile_python(code: str, filename: str = "<generated_detector>") -> Tuple[bool, Optional[str]]:
    try:
        compile(code, filename, "exec")
        return True, None
    except SyntaxError as e:
        line = e.text.rstrip() if e.text else ""
        msg = f"SyntaxError: {e.msg} at line {e.lineno}, offset {e.offset}\n{line}"
        return False, msg
    except Exception as e:
        return False, f"{type(e).__name__}: {e}"


def ast_sanity_check(code: str) -> Tuple[bool, Optional[str]]:
    """
    Optional extra check. This still does not execute code.
    """
    try:
        ast.parse(code)
        return True, None
    except Exception as e:
        return False, f"AST parse failed: {type(e).__name__}: {e}"


def generate_valid_code(
    client: Mistral,
    model: str,
    base_detector_code: str,
    attack_description: str,
    max_retries: int,
) -> GenerationResult:
    system_prompt = build_system_prompt()
    compiler_error = None
    last_raw = ""
    last_code = ""

    for attempt in range(1, max_retries + 2):
        user_prompt = build_user_prompt(
            base_detector_code=base_detector_code,
            attack_description=attack_description,
            compiler_error=compiler_error,
        )

        raw = call_mistral(client, model, system_prompt, user_prompt)
        code = normalize_code(extract_code(raw))

        compiled, error = compile_python(code)
        if compiled:
            ast_ok, ast_error = ast_sanity_check(code)
            if ast_ok:
                return GenerationResult(
                    code=code,
                    raw_response=raw,
                    compiled=True,
                    error=None,
                    attempts=attempt,
                )
            compiler_error = ast_error
        else:
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
    parser = argparse.ArgumentParser(description="Generate and compile-check Python detector code with Mistral.")
    parser.add_argument("--base-detector", required=True, help="Path to existing detector Python file.")
    parser.add_argument("--attack-description", required=True, help="Path to text file describing target attack behavior.")
    parser.add_argument("--output", required=True, help="Path to save final generated Python.")
    parser.add_argument("--model", default=DEFAULT_MODEL, help="Mistral model name.")
    parser.add_argument("--max-retries", type=int, default=DEFAULT_MAX_RETRIES, help="Number of repair retries after first attempt.")
    parser.add_argument("--save-raw", default=None, help="Optional path to save raw model output from final attempt.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    api_key = os.environ.get("MISTRAL_API_KEY")
    if not api_key:
        print("Missing MISTRAL_API_KEY environment variable.", file=sys.stderr)
        return 2

    base_detector_code = read_text(args.base_detector)
    attack_description = read_text(args.attack_description)

    client = Mistral(api_key=api_key)

    result = generate_valid_code(
        client=client,
        model=args.model,
        base_detector_code=base_detector_code,
        attack_description=attack_description,
        max_retries=args.max_retries,
    )

    output_path = Path(args.output)
    output_path.write_text(result.code, encoding="utf-8")

    if args.save_raw:
        Path(args.save_raw).write_text(result.raw_response, encoding="utf-8")

    if result.compiled:
        print(f"Success: generated valid Python after {result.attempts} attempt(s).")
        print(f"Saved code to: {output_path}")
        return 0

    print(f"Failure: code still does not compile after {result.attempts} attempt(s).", file=sys.stderr)
    print(f"Last compiler error:\n{result.error}", file=sys.stderr)
    print(f"Saved last attempt to: {output_path}", file=sys.stderr)
    return 1


if __name__ == "__main__":
    raise SystemExit(main())