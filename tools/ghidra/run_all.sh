#!/usr/bin/env bash
# Linux counterpart of run_all.ps1 for the fd2 targets: imports ProjectDiablo.dll / PD2_EXT.dll into a fresh Ghidra
# project and runs FixAndExport.java, writing <out>/<Module>_decompiled.c (what `tools/rebuild.sh --pd2` reads).
# Usage: tools/ghidra/run_all.sh --out <export dir> --work <scratch dir> [--ghidra <analyzeHeadless>]
#                                [--pd2-dir <PD2 install>] [--passes 6] [--module ProjectDiablo.dll]...
# Defaults: --ghidra $FD2_GHIDRA_HEADLESS, --pd2-dir $FD2_PD2_DIR. Functions Ghidra misses (only reached through data)
# can be added afterwards with AddFunctions.java into <Module>_decompiled.extra.c (see tools/README.md).
set -euo pipefail
scripts="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
out='' work='' ghidra="${FD2_GHIDRA_HEADLESS:-}" pd2dir="${FD2_PD2_DIR:-}" passes=6 mods=()
while [[ $# -gt 0 ]]; do
  case "$1" in
    --out) out="$2"; shift ;; --work) work="$2"; shift ;; --ghidra) ghidra="$2"; shift ;;
    --pd2-dir) pd2dir="$2"; shift ;; --passes) passes="$2"; shift ;; --module) mods+=("$2"); shift ;;
    -h|--help) sed -n '2,8p' "$0"; exit 0 ;;
    *) echo "unknown option $1" >&2; exit 1 ;;
  esac; shift
done
[[ -n $out && -n $work && -n $ghidra && -n $pd2dir ]] || { echo "need --out, --work, --ghidra (or FD2_GHIDRA_HEADLESS), --pd2-dir (or FD2_PD2_DIR)" >&2; exit 1; }
[[ ${#mods[@]} -gt 0 ]] || mods=(PD2_EXT.dll ProjectDiablo.dll)
mkdir -p "$out" "$work"
for m in "${mods[@]}"; do
  start=$SECONDS
  "$ghidra" "$work/pd2proj" pd2 -import "$pd2dir/$m" -overwrite -scriptPath "$scripts" \
      -postScript FixAndExport.java "$out/${m%.*}_decompiled.c" "$passes" 2>&1 \
    | grep -E 'RESULT|ERROR' | sed 's/^.*FixAndExport.java> //' || true
  echo "$m done in $((SECONDS - start))s"
done
echo "ALL DONE"
