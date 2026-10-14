#!/usr/bin/env bash
# Re-runnable pipeline: extract .NET single-file bundles of the PD2 launcher
# executables, decompile the PD2-authored assemblies with ilspycmd, decompile
# their BAML to XAML, and copy text sources (no binaries) into the repo.
#
# Usage: decompile_launcher.sh <dir with PD2Launcher.exe,SteamPD2.exe,UpdateUtility.exe> <work dir> <repo 7_launcher/src dir>
# Needs: python3, dotnet SDK 8, `dotnet tool install -g ilspycmd --version 8.2.0.7535`
#        (latest ilspycmd fails to install on SDK 8), and internet access to nuget.org
#        for the WPF reference pack (Microsoft.WindowsDesktop.App.Ref 6.0.36).
# The executables are only parsed, never run.
set -euo pipefail
IN=$(realpath "$1"); WORK=$(realpath -m "$2"); OUT=$(realpath -m "$3")
HERE=$(cd "$(dirname "$0")" && pwd)
export PATH="$PATH:$HOME/.dotnet/tools" DOTNET_ROLL_FORWARD=Major DOTNET_CLI_TELEMETRY_OPTOUT=1
mkdir -p "$WORK/extracted" "$WORK/decomp" "$WORK/refpkg"

for e in PD2Launcher SteamPD2 UpdateUtility; do
  python3 -I "$HERE/extract_bundle.py" "$IN/$e.exe" "$WORK/extracted/$e" > "$WORK/extracted/$e.manifest.txt"
done

# PD2-authored assemblies (everything else in the bundles is framework/third-party)
declare -A ASM=( [PD2Launcher]=PD2Launcher [PD2Shared]=PD2Launcher [SteamPD2]=SteamPD2 [UpdateUtility]=UpdateUtility )
for a in "${!ASM[@]}"; do
  rm -rf "$WORK/decomp/$a"
  ilspycmd --disable-updatecheck -p -o "$WORK/decomp/$a" -r "$WORK/extracted/${ASM[$a]}" "$WORK/extracted/${ASM[$a]}/$a.dll"
done

# BAML -> XAML (needs WPF reference assemblies)
REF="$WORK/refpkg/wd/ref/net6.0"
if [ ! -d "$REF" ]; then
  curl -sSfL -o "$WORK/refpkg/wd.nupkg" https://api.nuget.org/v3-flatcontainer/microsoft.windowsdesktop.app.ref/6.0.36/microsoft.windowsdesktop.app.ref.6.0.36.nupkg
  unzip -qo "$WORK/refpkg/wd.nupkg" -d "$WORK/refpkg/wd"
fi
export FD2_BUILD_DIR="$WORK/build/BamlDump"
dotnet build -c Release "$HERE/BamlDump" >/dev/null
rm -rf "$WORK/decomp/PD2Launcher_xaml"
dotnet run -c Release --no-build --project "$HERE/BamlDump" -- \
  "$WORK/extracted/PD2Launcher/PD2Launcher.dll" "$WORK/extracted/PD2Launcher:$REF" "$WORK/decomp/PD2Launcher_xaml"

# Copy text sources only into the repo
rm -rf "$OUT"; mkdir -p "$OUT"
for a in PD2Launcher PD2Shared SteamPD2 UpdateUtility; do
  (cd "$WORK/decomp/$a" && find . -type f \( -name '*.cs' -o -name '*.csproj' \) -print0 | \
     xargs -0 -I{} install -D -m644 {} "$OUT/$a/{}")
done
(cd "$WORK/decomp/PD2Launcher_xaml" && find . -name '*.xaml' -print0 | xargs -0 -I{} install -D -m644 {} "$OUT/PD2Launcher/{}")
for e in PD2Launcher SteamPD2 UpdateUtility; do
  install -D -m644 "$WORK/extracted/$e.manifest.txt" "$OUT/bundle_manifests/$e.manifest.txt"
  for j in "$WORK/extracted/$e"/*.json; do install -D -m644 "$j" "$OUT/bundle_manifests/$e/$(basename "$j")"; done
done
echo "done: $(find "$OUT" -name '*.cs' | wc -l) .cs, $(find "$OUT" -name '*.xaml' | wc -l) .xaml -> $OUT"
