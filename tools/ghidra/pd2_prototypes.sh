#!/usr/bin/env bash
# fd2 phase 3: give ProjectDiablo.dll's lazy game-function thunks the prototypes (and names) of the game functions
# they jump to, then re-export with FixAndExport (strict). Works on an EXISTING analysed Ghidra project (phase 2's,
# which holds the added functions), so no re-analysis.
#   1. Fd2Tools pd2-pointers         -> 4_pd2_source/<M>/game_pointers.tsv (thunk targets, reference names)
#   2. tools/pd2/thunk_purge.py      -> <export dir>/<M>_thunk_purge.tsv ("ret N" of each target in the 1.13c DLL)
#   3. Fd2Tools pd2-pointers again   -> <export dir>/<M>_thunk_prototypes.tsv (reference prototype, checked against ret N)
#   4. Ghidra: ApplyPrototypes.java + FixAndExport.java <all.c> <passes> strict  (previous export kept as *.v1.c)
#   5. split <all.c> into <M>_decompiled.c (functions of the previous main export) and .extra.c (the rest)
# Usage: tools/ghidra/pd2_prototypes.sh [--project-dir D] [--project P] [--program ProjectDiablo.dll] [--passes 6]
#        [--out <export dir>] [--ghidra <analyzeHeadless>] [--skip-ghidra]
# Env: GHIDRA_MAXMEM (default 8G). Logs go to $FD2_LOG_DIR (default /home/user/fd2_work/logs).
set -euo pipefail
tools="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
pdir=/home/user/fd2_work/ghidra_projects/ProjectDiablo proj=ProjectDiablo prog=ProjectDiablo.dll passes=6
out=/home/user/fd2_work/3_ghidra_fixed ghidra=/home/user/fd2_work/ghidra/support/analyzeHeadless skip=0
while [[ $# -gt 0 ]]; do
  case "$1" in
    --project-dir) pdir="$2"; shift ;; --project) proj="$2"; shift ;; --program) prog="$2"; shift ;;
    --passes) passes="$2"; shift ;; --out) out="$2"; shift ;; --ghidra) ghidra="$2"; shift ;; --skip-ghidra) skip=1 ;;
    -h|--help) sed -n '2,13p' "$0"; exit 0 ;;
    *) echo "unknown option $1" >&2; exit 1 ;;
  esac; shift
done
M="${prog%.*}"
logs="${FD2_LOG_DIR:-/home/user/fd2_work/logs}"; mkdir -p "$logs"
dotnet build "$tools/Fd2Tools.csproj" -c Release -nologo -v q >/dev/null
fd2() { dotnet "$tools/bin/Release/net8.0/Fd2Tools.dll" "$@" --ghidra-export-dir "$out"; }
repo="$(cd "$tools/.." && pwd)"
fd2 pd2-pointers --module "$M"
python3 -I "$tools/pd2/thunk_purge.py" "$repo/4_pd2_source/$M/game_pointers.tsv" "$(fd2 paths | awk '$1=="game_dir"{print $2}')" "$out/${M}_thunk_purge.tsv"
fd2 pd2-pointers --module "$M" --prototypes "$out/${M}_thunk_prototypes.tsv"
[[ $skip == 1 ]] && exit 0
main="$out/${M}_decompiled.c" extra="$out/${M}_decompiled.extra.c"
[[ -f "$out/${M}_decompiled.v1.c" ]] || cp -p "$main" "$out/${M}_decompiled.v1.c"
[[ -f "$out/${M}_decompiled.extra.v1.c" || ! -f "$extra" ]] || cp -p "$extra" "$out/${M}_decompiled.extra.v1.c"
all="$out/${M}_decompiled.all.c"
export GHIDRA_HEADLESS_MAXMEM="${GHIDRA_MAXMEM:-8G}"
"$ghidra" "$pdir" "$proj" -process "$prog" -noanalysis -scriptPath "$tools/ghidra" \
  -postScript ApplyPrototypes.java "$out/${M}_thunk_prototypes.tsv" \
  -postScript FixAndExport.java "$all" "$passes" strict \
  -log "$logs/pd2_phase3_ghidra.log" -scriptlog "$logs/pd2_phase3_ghidra.script.log" > "$logs/pd2_phase3_ghidra.console" 2>&1
# split: functions listed in the previous main export stay in the main file, everything else goes to .extra.c
python3 -I - "$all" "$out/${M}_decompiled.v1.c" "$main" "$extra" <<'EOF'
import re, sys
allf, v1, main, extra = sys.argv[1:5]
hdr = re.compile(r'^//==== .* @ ([0-9a-f]{8})$')
keep = {m.group(1) for m in (hdr.match(l) for l in open(v1, encoding='utf-8')) if m}
head, blocks, cur = [], [], None
for l in open(allf, encoding='utf-8'):
    m = hdr.match(l.rstrip('\n'))
    if m: cur = [m.group(1), [l]]; blocks.append(cur); continue
    (cur[1] if cur else head).append(l)
with open(main, 'w', encoding='utf-8') as a, open(extra, 'w', encoding='utf-8') as b:
    a.write(''.join(head))
    b.write('// Functions missing from Ghidra\'s auto-analysis (reached through data tables), added by AddFunctions.java;\n'
            '// decompiled together with the main export by FixAndExport.java (fd2 phase 3).\n\n')
    for addr, ls in blocks: (a if addr in keep else b).write(''.join(ls))
print('split: %d functions -> main %d, extra %d' % (len(blocks), sum(1 for x in blocks if x[0] in keep), sum(1 for x in blocks if x[0] not in keep)))
EOF
grep -E "RESULT" "$logs/pd2_phase3_ghidra.script.log" | sed 's/^.*> //' || true
