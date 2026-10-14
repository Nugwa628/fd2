#!/bin/bash
# Phase 1 MPQ stage: list every PD2 MPQ, extract the data MPQs.
#   tools/mpq/run_all.sh <PD2 install dir> <mpqx binary> <extra listfile dir> <work dir>
# Outputs:
#   <work>/1_bin_from_mpq/<mpq>/...          extracted files (original paths, '\' -> '/')
#   <work>/1_bin_from_mpq/_listings/<mpq>.tsv mpqx list output (path,size,csize,flags,...,magic)
#   <work>/1_bin_from_mpq/_listings/candidates.txt  generated candidate listfile
#   <work>/1_bin_from_mpq/_listings/summary.txt     one mpqx summary line per archive
# The extra listfile dir holds public D2 listfiles (*.txt); see 2_txt/README.md for provenance.
set -euo pipefail
PD2=${1:?PD2 dir}; MPQX=${2:?mpqx}; LFDIR=${3:?listfile dir}; WORK=${4:?work dir}
HERE=$(cd "$(dirname "$0")" && pwd)
OUT=$WORK/1_bin_from_mpq; LST=$OUT/_listings
mkdir -p "$LST"
ALL="pd2data patch_d2 pd2maps pd2assets pd2monchars SGD2FreeRes D2MultiRes d2gl"
EXTRACT="pd2data patch_d2 pd2maps SGD2FreeRes D2MultiRes d2gl"
# pass 1: list with the archives' own (listfile)s, extract pd2data (for invfile names)
for m in $ALL; do "$MPQX" list "$PD2/$m.mpq" "$LST/$m.pass1.tsv" > /dev/null; done
rm -rf "$OUT/pd2data"; "$MPQX" extract "$PD2/pd2data.mpq" "$OUT/pd2data" > /dev/null
# candidate listfile
args=()
for f in "$LFDIR"/*.txt; do args+=(--listfile "$f"); done
for m in $ALL; do args+=(--tsv "$LST/$m.pass1.tsv"); done
for f in "$PD2"/*.dll "$PD2"/*.exe; do args+=(--pe "$f"); done
args+=(--txtdir "$OUT/pd2data")
python3 -I "$HERE/make_listfile.py" "$LST/candidates.txt" "${args[@]}"
# pass 2: final listings and extraction
: > "$LST/summary.txt"
for m in $ALL; do
  "$MPQX" list "$PD2/$m.mpq" "$LST/$m.tsv" "$LST/candidates.txt" | tee -a "$LST/summary.txt"
  rm -f "$LST/$m.pass1.tsv"
done
for m in $EXTRACT; do
  rm -rf "$OUT/$m"
  "$MPQX" extract "$PD2/$m.mpq" "$OUT/$m" "$LST/candidates.txt" > /dev/null
done
echo "done: $OUT"
