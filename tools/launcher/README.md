# tools/launcher

These are helper scripts for `7_launcher/` (the PD2 .NET launcher) and `4_pd2_source/D2GL/`. All of them work statically and never run the analysed executables.

| Script | Purpose |
|---|---|
| `extract_bundle.py <exe> <outdir>` | Extracts a .NET single-file apphost bundle (format v1–v6; handles compressed entries). |
| `decompile_launcher.sh <exe dir> <work dir> <7_launcher/src>` | Full pipeline: extract the bundles, run ilspycmd on the PD2 assemblies, convert BAML to XAML, and copy the text sources into the repo. |
| `BamlDump/` | A small .NET 8 tool (ICSharpCode.BamlDecompiler 9.0) that turns the BAML resources of a WPF assembly into XAML. Build output goes to `$FD2_BUILD_DIR`. |
| `d2gl_commit_match.py <d2gl clone> <glide3x.dll> <base>` | For each fork commit, checks whether its added and removed string literals appear in the shipped DLL. |
| `d2gl_changes_md.py <d2gl clone> <base> <build>` | Generates the file and commit tables in `4_pd2_source/D2GL/CHANGES.md`. |
