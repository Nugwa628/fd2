#!/usr/bin/env bash
# Reproducible steps used to obtain Ghidra 12.1.4 (headless) in the Linux cloud container.
#
# Why build from source: GitHub release downloads are blocked (403) by the network policy, and no
# prebuilt Ghidra was reachable (conda-forge has no ghidra package; api.anaconda.org, Kali/Debian
# mirrors, flathub, snapcraft and ghidra-sre.org are unreachable). `git clone` from GitHub works.
#
# Requirements: JDK 21, Gradle >= 8.5 (8.14.3 at /opt/gradle used), gcc/g++/make, bison, flex,
# python3, curl, unzip. Takes ~20 min on 4 cores (buildGhidra ~17 min). Needs ~6 GB disk.
#
# Skipped dependencies (hosts unreachable; neither is needed for headless x86 PE decompilation):
#   - postgresql-15.18.tar.gz (ftp.postgresql.org)  -> BSim's PostgreSQL server backend is not built
#   - cdt-8.6.0.zip (archive.eclipse.org)           -> GhidraDev Eclipse plugin
# The build still succeeds; buildGhidra skips those pieces itself when the deps are absent.
set -euo pipefail

WORK=${FD2_WORK:-/home/user/fd2_work}
SRC=$WORK/ext/ghidra
INSTALL=$WORK/ghidra
LOG=$WORK/logs/ghidra_build.log
TAG=Ghidra_12.1.4_build
GOOGLE_MAVEN=https://maven-central.storage-download.googleapis.com/maven2/

mkdir -p "$WORK/ext" "$WORK/logs"
command -v flex >/dev/null || { apt-get update -qq && apt-get install -y -qq flex; }

# 1. Source
[ -d "$SRC/.git" ] || git clone --depth 1 --branch "$TAG" \
	https://github.com/NationalSecurityAgency/ghidra.git "$SRC"
cd "$SRC"

# 2. Non-Maven dependencies. fetchDependencies.gradle skips any file already present in
#    dependencies/downloads with the right sha256, so pre-download with curl (honours the proxy),
#    rewriting github.com/.../ghidra-data/raw/ URLs (403) to raw.githubusercontent.com (works).
#    -Doffline makes the script print the curl commands instead of downloading.
gradle -I gradle/support/fetchDependencies.gradle -Doffline init -q 2>/dev/null \
	| grep '^curl' > "$WORK/ext/fetch_cmds.txt" || true
mkdir -p dependencies/downloads
while read -r line; do
	out=$(sed -E 's/^curl -L -o "([^"]+)".*/\1/' <<<"$line")
	url=$(sed -E "s/.*'(.*)'\$/\1/" <<<"$line" |
		sed -E 's#https://github.com/NationalSecurityAgency/ghidra-data/raw/#https://raw.githubusercontent.com/NationalSecurityAgency/ghidra-data/#')
	[ -s "$out" ] && continue
	curl -sSfL -m 600 -o "$out" "$url" || { rm -f "$out"; echo "SKIP (unreachable): $url"; }
done < "$WORK/ext/fetch_cmds.txt"

# 3. Run the real fetch script (hash-verifies + unpacks/copies everything) minus the two
#    unreachable entries. The trailing 'init' task error ("Project with path 'Doclets' could not
#    be found") is harmless: dependency placement happens in the init-script phase before it.
python3 - <<'EOF'
import re
s = open('gradle/support/fetchDependencies.gradle').read()
for n in ('postgresql-15.18.tar.gz', 'cdt-8.6.0.zip'):
    s = re.sub(r'\t\[\n\t\tname: "' + re.escape(n) + r'",.*?\n\t\],\n', '', s, flags=re.S)
open('gradle/support/fetchDependencies_offline_subset.gradle', 'w').write(s)
EOF
gradle -I gradle/support/fetchDependencies_offline_subset.gradle -DhideDownloadProgress init \
	> "$WORK/logs/ghidra_fetch.log" 2>&1 || true
[ -d dependencies/flatRepo ] || { echo "fetchDependencies failed; see $WORK/logs/ghidra_fetch.log"; exit 1; }

# 4. Maven Central mirror: repo.maven.apache.org returns 429 (rate limit) under parallel builds,
#    so redirect it to Google's Maven Central mirror via an init script.
cat > "$WORK/ext/maven-mirror.init.gradle" <<EOF
def MIRROR = '$GOOGLE_MAVEN'
def fix = { RepositoryHandler repos ->
    repos.withType(MavenArtifactRepository).configureEach { r ->
        def u = r.url.toString()
        if (u.contains('repo.maven.apache.org') || u.contains('repo1.maven.org')) { r.url = MIRROR }
    }
}
settingsEvaluated { s -> fix(s.pluginManagement.repositories) }
allprojects { p -> fix(p.repositories); p.buildscript { fix(repositories) } }
EOF

# 5. Build the distribution (includes native decompile/sleigh for linux_x86_64). -x ip skips the
#    IP-header check. Output: build/dist/ghidra_12.1.4_DEV_<date>_linux_x86_64.zip
gradle -I "$WORK/ext/maven-mirror.init.gradle" --no-daemon buildGhidra -x ip > "$LOG" 2>&1
tail -3 "$LOG"

# 6. Install
rm -rf "$INSTALL" "$WORK/ghidra_unz"
mkdir -p "$WORK/ghidra_unz"
unzip -q "$(ls -t build/dist/ghidra_12.1.4_DEV_*_linux_x86_64.zip | head -1)" -d "$WORK/ghidra_unz"
mv "$WORK/ghidra_unz"/ghidra_* "$INSTALL"
rmdir "$WORK/ghidra_unz"
grep application.version "$INSTALL/Ghidra/application.properties"
ls -la "$INSTALL/Ghidra/Features/Decompiler/os/linux_x86_64/"
echo "Ghidra installed at $INSTALL (analyzeHeadless: $INSTALL/support/analyzeHeadless)"
