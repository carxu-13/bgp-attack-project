#!/usr/bin/env bash
# dump_data.sh
# Decompress all MRT .gz and .bz2 files to uncompressed MRT binary (.mrt).
# Output files are written alongside the source with a .mrt extension.
#
# Usage: ./dump_data.sh [data_dir]
#   data_dir defaults to ./data

set -euo pipefail

DATA_DIR="${1:-./data}"

find "$DATA_DIR" -type f \( -name "*.gz" -o -name "*.bz2" \) | sort | while IFS= read -r f; do
    out="${f%.*}.mrt"
    if [[ -f "$out" ]]; then
        echo "skip (exists): $out"
        continue
    fi
    echo -n "decompressing: $f ... "
    case "$f" in
        *.gz)  gunzip  -c "$f" > "$out" && echo "ok" || { echo "FAILED"; rm -f "$out"; } ;;
        *.bz2) bunzip2 -c "$f" > "$out" && echo "ok" || { echo "FAILED"; rm -f "$out"; } ;;
    esac
done

echo "Done."
