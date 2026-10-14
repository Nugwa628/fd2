#!/usr/bin/env bash
# Bash equivalent of tools/rebuild.ps1: regenerates source trees with tools/Fd2Tools (.NET 8).
#   (default)   D2Sigma into <reference_out>/4_sigma_source (needs the sigmaRE Ghidra exports and D2Sigma.dll)
#   --game      also every Diablo II 1.13c module into <reference_out>/5_game_source
#   --pd2       ProjectDiablo + PD2_EXT into <repo>/4_pd2_source from <ghidra_export_dir>/<Module>_decompiled.c
#   --scan      PD2 dry run (no Ghidra export needed): PE, import names via the 5_game_source name DB, __FILE__ anchors
# Locations come from tools/fd2.paths.json (or --config); the options below override single keys.
# Usage: tools/rebuild.sh [--pd2|--scan] [--module ProjectDiablo] [--game] [--config f] [--ghidra dir]
#        [--game-dir dir] [--reference dir] [--dll D2Sigma.dll] [--no-build]
set -euo pipefail
tools="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cmd=sigma build=1 opts=() sigma_opts=() pd2_opts=()
while [[ $# -gt 0 ]]; do
  case "$1" in
    --pd2|-Pd2)            cmd=pd2 ;;
    --scan|-Scan)          cmd=pd2-scan ;;
    --game|-Game)          sigma_opts+=(--game) ;;
    --module|-Module)      pd2_opts+=(--module "$2"); shift ;;
    --config|-Config)      opts+=(--config "$2"); shift ;;
    --ghidra|-Ghidra)      opts+=(--ghidra-export-dir "$2"); shift ;;
    --game-dir|-GameDir)   opts+=(--game-dir "$2"); shift ;;
    --reference|-Reference) opts+=(--reference-root "$2"); shift ;;
    --dll|-Dll)            sigma_opts+=(--dll "$2"); shift ;;
    --no-build|-NoBuild)   build=0 ;;
    -h|--help)             sed -n '2,10p' "$0"; exit 0 ;;
    *) opts+=("$1") ;;     # passed through, e.g. --repo-root /path or --pd2-install-dir /path
  esac
  shift
done
if [[ $build == 1 ]]; then
  dotnet build "$tools/Fd2Tools.csproj" -c Release -nologo -v q
fi
exe="$tools/bin/Release/net8.0/Fd2Tools.dll"
if [[ $cmd == sigma ]]; then extra=("${sigma_opts[@]+"${sigma_opts[@]}"}"); else extra=("${pd2_opts[@]+"${pd2_opts[@]}"}"); fi
exec dotnet "$exe" "$cmd" "${opts[@]+"${opts[@]}"}" "${extra[@]+"${extra[@]}"}"
