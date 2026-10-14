#!/bin/bash
# Phase 1 (data) end to end: build StormLib + mpqx, list/extract the PD2 MPQs, write 2_txt.
#   tools/phase1_data.sh <PD2 install dir> <StormLib source dir> <extra listfile dir> <work dir>
# Example (container):
#   tools/phase1_data.sh /home/user/fd2_work/inputs/ProjectD2/ProjectD2 /home/user/fd2_work/ext/StormLib \
#       /home/user/fd2_work/ext/listfiles/use /home/user/fd2_work
set -euo pipefail
PD2=${1:?}; STORM=${2:?}; LF=${3:?}; WORK=${4:?}
REPO=$(cd "$(dirname "$0")/.." && pwd)
"$REPO/tools/mpq/build.sh" "$STORM" "$WORK/build"
"$REPO/tools/mpq/run_all.sh" "$PD2" "$WORK/build/mpqx" "$LF" "$WORK"
python3 -I "$REPO/tools/mpq/listing_report.py" "$WORK/1_bin_from_mpq/_listings" "$REPO/2_txt"
python3 -I "$REPO/tools/data/build_tables.py" "$WORK/1_bin_from_mpq/pd2data" "$WORK/1_bin_from_mpq/patch_d2" "$REPO/2_txt"
