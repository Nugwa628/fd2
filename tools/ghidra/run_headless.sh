#!/usr/bin/env bash
# Wrapper around Ghidra analyzeHeadless for the FD2 project.
# Usage: run_headless.sh <project_dir> <project_name> <binary> [postScript [args...]]
#   Imports <binary> (x86:LE:32:default, Visual Studio compiler spec), overwriting any previous
#   import of the same name, auto-analyzes it, then runs the optional post-script (looked up in
#   tools/ghidra, the binary's directory, and Ghidra's standard script dirs).
# Env: GHIDRA_HOME (default /home/user/fd2_work/ghidra), FD2_LOG_DIR (default
#   /home/user/fd2_work/logs), GHIDRA_MAXMEM (default 4G), GHIDRA_PROCESSOR, GHIDRA_CSPEC.
set -euo pipefail

if [ $# -lt 3 ]; then
	echo "usage: $0 <project_dir> <project_name> <binary> [postScript args...]" >&2
	exit 2
fi
PROJECT_DIR=$1; PROJECT_NAME=$2; BINARY=$3; shift 3

GHIDRA_HOME=${GHIDRA_HOME:-/home/user/fd2_work/ghidra}
LOG_DIR=${FD2_LOG_DIR:-/home/user/fd2_work/logs}
SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)   # /home/user/fd2/tools/ghidra
PROCESSOR=${GHIDRA_PROCESSOR:-x86:LE:32:default}
CSPEC=${GHIDRA_CSPEC:-windows}                              # "windows" = Visual Studio spec

mkdir -p "$PROJECT_DIR" "$LOG_DIR"
BASE=$(basename "$BINARY")
STAMP=$(date +%Y%m%d_%H%M%S)
LOG=$LOG_DIR/headless_${PROJECT_NAME}_${BASE}_${STAMP}.log
SCRIPT_LOG=$LOG_DIR/headless_${PROJECT_NAME}_${BASE}_${STAMP}.script.log

SCRIPT_PATH="$SCRIPT_DIR;$(cd "$(dirname "$BINARY")" && pwd)"
POST=()
if [ $# -gt 0 ]; then
	POST=(-postScript "$@")
fi

export GHIDRA_HEADLESS_MAXMEM=${GHIDRA_MAXMEM:-4G}
echo "log: $LOG" >&2
"$GHIDRA_HOME/support/analyzeHeadless" "$PROJECT_DIR" "$PROJECT_NAME" \
	-import "$BINARY" -overwrite \
	-processor "$PROCESSOR" -cspec "$CSPEC" \
	-scriptPath "$SCRIPT_PATH" \
	-log "$LOG" -scriptlog "$SCRIPT_LOG" \
	"${POST[@]}" 2>&1 | tee -a "$LOG.console"
exit "${PIPESTATUS[0]}"
