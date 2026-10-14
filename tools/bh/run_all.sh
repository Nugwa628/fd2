#!/usr/bin/env bash
# Re-run the BH.dll vs upstream comparison (Phase 5, BH part).
# usage: run_all.sh <upstream BH repo> <commit> <BH.dll> <ghidra export dir> <BH_patches.tsv> <sigmaRE 5_game_source> <rtti report> <outdir>
# example:
#   tools/bh/run_all.sh ~/fd2_work/ext/BH-pd2 4f7b4d7 ~/fd2_work/bin/BH.dll ~/fd2_work/3_ghidra_fixed \
#     ~/fd2_work/scratch/phase2/BH_patches.tsv ~/fd2_work/inputs/sigmaRE/sigmaRE/5_game_source \
#     ~/fd2_work/scratch/phase2/BH_report_rtti.txt ~/fd2/4_pd2_source/BH
set -euo pipefail
[ $# -eq 8 ] || { sed -n 2,3p "$0"; exit 2; }
REPO=$1; COMMIT=$2; DLL=$3; GH=$4; PTSV=$5; SYMS=$6; RTTI=$7; OUT=$8
T=$(cd "$(dirname "$0")" && pwd)
EV=$OUT/evidence; mkdir -p "$EV"
python3 -I "$T/match_commits.py" "$REPO" "$DLL" "$EV/commits.tsv" --since 2026-01-01 --literals-out "$EV/lits"
cp "$EV/lits/${COMMIT:0:10}"*.txt "$EV/literals_missing_${COMMIT:0:7}.txt" 2>/dev/null || true
rm -rf "$EV/lits"
python3 -I "$T/unmatched_strings.py" "$REPO" "$COMMIT" "$DLL" "$EV/uncovered_binary_strings.tsv"
awk -F'\t' 'NR==1 || $3!=""' "$EV/uncovered_binary_strings.tsv" > "$EV/uncovered_binary_strings_with_xrefs.tsv"
rm "$EV/uncovered_binary_strings.tsv"
python3 -I "$T/d2ptrs.py" "$REPO" "$COMMIT" "$DLL" "$EV/d2ptrs.tsv"
python3 -I "$T/vtables.py" "$RTTI" "$DLL" "$REPO" "$COMMIT" "$EV/module_vtables.tsv"
python3 -I "$T/func_map.py" "$REPO" "$COMMIT" "$DLL" "$GH/BH_decompiled.c" "$GH/BH_decompiled.extra.c" \
    --out "$EV/func_map.tsv" --files-out "$EV/files.tsv"
python3 -I "$T/patches.py" "$PTSV" "$REPO" "$COMMIT" "$SYMS" "$DLL" "$OUT/patches.tsv"
python3 -I "$T/diff_table.py" "$EV/files.tsv" "$EV/func_map.tsv" "$T/data/verdicts_4f7b4d7.tsv" > "${TMPDIR:-/tmp}/bh_diff_table.md"; echo "DIFF.md table -> ${TMPDIR:-/tmp}/bh_diff_table.md"
echo "done -> $OUT"
