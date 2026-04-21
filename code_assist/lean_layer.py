"""
lean_layer.py

Prompt builders and Mistral client for the three-stage BGP attack detector
code assistant. Imported by run_pipeline.py — no main() here.
"""

from __future__ import annotations

import re
import textwrap
from dataclasses import dataclass
from pathlib import Path

from mistralai.client import Mistral

# Stage 1 uses a general coding model; stages 2-3 use Leanstral.
DEFAULT_STAGE1_MODEL  = "mistral-small-2603"
DEFAULT_STAGE23_MODEL = "labs-leanstral-2603"

# Annotation marker that the user places in the file during stage 2.
PROOF_ANNOTATION = "-- PROOF_NEEDED:"


@dataclass
class GenerationResult:
    code: str
    raw_response: str


# ---------------------------------------------------------------------------
# Client
# ---------------------------------------------------------------------------

def make_client(api_key: str) -> Mistral:
    return Mistral(api_key=api_key, timeout_ms=120_000)


# ---------------------------------------------------------------------------
# Low-level API call
# ---------------------------------------------------------------------------

def call_model(client: Mistral, model: str, system_prompt: str, user_prompt: str) -> str:
    response = client.chat.complete(
        model=model,
        messages=[
            {"role": "system", "content": system_prompt},
            {"role": "user",   "content": user_prompt},
        ],
        temperature=0.1,
    )
    content = response.choices[0].message.content
    if isinstance(content, str):
        return content
    if isinstance(content, list):
        parts = []
        for block in content:
            if isinstance(block, dict) and "text" in block:
                parts.append(block["text"])
            else:
                parts.append(str(block))
        return "\n".join(parts)
    return str(content)


# ---------------------------------------------------------------------------
# Code extraction / normalisation
# ---------------------------------------------------------------------------

_LEAN_FIRST_LINE = re.compile(
    r"^(import |open |namespace |section |universe |variable |def |noncomputable def |"
    r"theorem |lemma |example |structure |inductive |class |instance |abbrev |"
    r"/-|-- |#check|#eval|#print)"
)

def extract_code(raw: str) -> str:
    # Prefer explicitly fenced blocks — most reliable.
    fenced = re.findall(r"```\w*\s*(.*?)```", raw, flags=re.DOTALL | re.IGNORECASE)
    if fenced:
        return fenced[0].strip()

    # No fences: find the first line that looks like Lean source and the last
    # line that does too, discarding any prose before/after.
    lines = raw.strip().splitlines()
    first = None
    last  = None
    for i, line in enumerate(lines):
        if _LEAN_FIRST_LINE.match(line.strip()):
            if first is None:
                first = i
            last = i
        elif first is not None and line.strip():
            # A non-empty line that doesn't match could still be inside a def body
            # (indented code, blank lines, etc.).  Keep extending last to the
            # final non-blank line so we don't truncate mid-definition.
            last = i

    if first is not None and last is not None:
        return "\n".join(lines[first : last + 1]).strip()

    return raw.strip()


def normalize_code(code: str) -> str:
    code = code.replace("\r\n", "\n").strip()
    if not code.endswith("\n"):
        code += "\n"
    return code


# ---------------------------------------------------------------------------
# Stage 1 — Initial detector generation
# ---------------------------------------------------------------------------

def build_stage1_system_prompt() -> str:
    return textwrap.dedent("""
        You are a Lean 4 expert specializing in network security and formal verification.
        You write BGP attack detectors as formally verified Lean 4 programs.

        Rules:
        - Wrap your entire output in a single ```lean4 ... ``` fenced block. No prose outside the fence.
        - Begin with `import BGPAttackDetector` to gain access to all shared types and
          I/O utilities. Do not redefine anything that already exists there.
        - Use the existing data-loading functions (parseEntriesFromDir,
          parseEntriesFromFile) for all file I/O.
        - Use the existing types (Entry, Subnet, IPAddress, Path) as the data model.
        - Do NOT re-implement subprefix-hijack detection; detectSubprefixHijacksMap
          already covers that attack class.
        - Implement a detection algorithm tailored specifically to the described attack.
        - Every new structure or inductive type must be accompanied by at least one
          correctness theorem with a complete, non-sorry proof.
        - Under no circumstances use `sorry`. Every proof must be complete.
        - Write a `main` function that accepts `<rib-dir> <update-dir>` as command-line
          arguments, loads data, runs detection, and prints a human-readable summary.
        - Generate a single complete Lean 4 file.
    """).strip()


def build_stage1_user_prompt(
    attack_description: str,
    base_detector_code: str,
    main_code: str,
) -> str:
    return textwrap.dedent(f"""
        Build a Lean 4 BGP attack detector for the following attack behavior:

        <<<ATTACK_DESCRIPTION
        {attack_description}
        ATTACK_DESCRIPTION>>>

        The following source is available via `import BGPAttackDetector`.
        Study it carefully — use these types and functions; do not redefine them.

        <<<BGPATTACKDETECTOR_SOURCE
        {base_detector_code}
        BGPATTACKDETECTOR_SOURCE>>>

        The following shows how the existing detector structures its `main` I/O entry
        point. Use it as a style reference for your own `main`.

        <<<MAIN_REFERENCE
        {main_code}
        MAIN_REFERENCE>>>

        Task:
        - Import BGPAttackDetector at the top of the file.
        - Define any new data structures required for this specific attack class.
        - Accompany each new structure with correctness theorems and complete proofs.
        - Implement the detection logic as one or more pure functions over Entry lists.
        - Implement `main` that loads RIB and update entries from the two directories
          given as arguments, runs detection, and prints a readable summary.
        - Do not use sorry anywhere.
        - Output a single complete Lean 4 file with no markdown fences.
    """).strip()


# ---------------------------------------------------------------------------
# Stage 2 — Proof annotation fill-in
# ---------------------------------------------------------------------------

def build_stage2_system_prompt() -> str:
    return textwrap.dedent(f"""
        You are a Lean 4 proof expert. You are given a Lean 4 source file that has been
        annotated by its author with markers of the form:

            {PROOF_ANNOTATION} <description of what to prove>

        Each marker appears immediately above a theorem whose body is either `sorry` or
        incomplete. Your task is to replace every such marker and its associated sorry
        with a complete, correct proof.

        Rules:
        - Wrap your entire output in a single ```lean4 ... ``` fenced block. No prose outside the fence.
        - Replace every `{PROOF_ANNOTATION}` comment and the sorry beneath it with a
          real proof. Do not leave any sorry in the output.
        - Do not alter any other part of the file.
        - Output the complete revised file.
    """).strip()


def build_stage2_user_prompt(annotated_code: str) -> str:
    return textwrap.dedent(f"""
        The following Lean 4 file contains `{PROOF_ANNOTATION}` annotations marking
        locations where proofs must be filled in. Replace each annotation and its `sorry`
        with a complete proof, then output the full revised file.

        <<<ANNOTATED_FILE
        {annotated_code}
        ANNOTATED_FILE>>>
    """).strip()


# ---------------------------------------------------------------------------
# Stage 3 — Iterative revision (two-pass: Mistral then Leanstral)
# ---------------------------------------------------------------------------

def build_stage3_mistral_system_prompt() -> str:
    return textwrap.dedent(f"""
        You are a Lean 4 software engineer. You are given a Lean 4 source file and
        feedback from the user that may include compiler errors, logic bugs, or feature
        requests.

        Your job is the FUNCTIONAL pass only:
        - Fix any logic errors, incorrect definitions, missing cases, or structural
          problems raised in the feedback.
        - Do not attempt to write tactic proofs for theorems yourself. Instead, wherever
          a theorem needs to be stated or proved to ensure correctness, write the theorem
          statement and mark its body with `sorry`, preceded by a comment of the form:

              {PROOF_ANNOTATION} <concise description of what must be proved>

          A subsequent Lean 4 proof expert will replace every such annotation and sorry
          with a complete proof.
        - If a theorem already has a complete proof and the proof is unrelated to the
          reported errors, leave it exactly as-is.

        Rules:
        - Wrap your entire output in a single ```lean4 ... ``` fenced block. No prose outside the fence.
        - Output the complete revised file every time, even if only small changes were made.
        - Do not leave the file identical to the input — always produce a revised version.
    """).strip()


def build_stage3_mistral_user_prompt(current_code: str, feedback: str) -> str:
    return textwrap.dedent(f"""
        Here is the current Lean 4 file:

        <<<CURRENT_FILE
        {current_code}
        CURRENT_FILE>>>

        The user has provided the following feedback (compiler errors and/or change
        requests):

        <<<FEEDBACK
        {feedback}
        FEEDBACK>>>

        Apply all functional fixes. Where a correctness theorem is needed, add a
        `{PROOF_ANNOTATION}` comment and a `sorry` placeholder — do not write the proof
        yourself. Output the complete revised Lean 4 file.
    """).strip()


# ---------------------------------------------------------------------------
# Unified generation entry point
# ---------------------------------------------------------------------------

def generate(
    client: Mistral,
    model: str,
    system_prompt: str,
    user_prompt: str,
) -> GenerationResult:
    raw  = call_model(client, model, system_prompt, user_prompt)
    code = normalize_code(extract_code(raw))
    return GenerationResult(code=code, raw_response=raw)
