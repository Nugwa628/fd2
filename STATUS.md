# fd2 orchestrator status

## Environment (decision, 2026-10-14)

Work runs in a Linux cloud container, not on the Windows PC. Inputs were uploaded as split 7z
archives and unpacked to the workspace `/home/user/fd2_work/` (never committed):

| Input | Workspace path | Status |
|---|---|---|
| PD2 install copy | `/home/user/fd2_work/inputs/ProjectD2/ProjectD2` | present (119 files) |
| sigmaRE reference | `/home/user/fd2_work/inputs/sigmaRE/sigmaRE` | present: `2_txt`, `4_sigma_source`, `5_game_source` (no `1_bin_from_mpq`, no `3_ghidra*`) |
| Vanilla D2 install | n/a | **missing**: no vanilla MPQs or 1.13c DLLs to diff against |
| Ghidra 12.1.4 | n/a | not uploaded; building from source in the container (git tag reachable) |

Consequences: the container is ephemeral, so the workspace may need re-uploading; the C# tools
(`Rebuild.cs` etc.) need a .NET SDK or a Python port; Windows paths in the tools become parameters.

## Plan

| Phase | Owner | Depends on | Output | Status |
|---|---|---|---|---|
| 0 Inventory/triage | orchestrator | inputs | `0_inventory/` | **done** (see `0_inventory/INVENTORY.md`) |
| 1 Data (MPQ → txt, diffs) | sub-agent | Phase 0 | `2_txt/` | not started |
| 2 Decompile (PD2 DLLs, BH, rebuilt modules) | sub-agent per binary | Phase 0 | `fd2_work/3_ghidra_fixed/` | not started |
| 3 Source trees | sub-agent per binary | Phase 2 | `4_pd2_source/` | not started |
| 4 Game patches / hooks | sub-agent | Phase 3 | `5_game_patches/` | not started |
| 5 Config, BH diff, launcher | sub-agents | Phase 3 | `6_config/`, `4_pd2_source/BH` | not started |
| 6 Verification + README numbers | orchestrator + verifier | all | `README.md` | not started |

### Phase 0 checklist
- [x] SHA-256 of root and `Live\` → `0_inventory/hashes.csv`; `Live\` = 47 files, all identical to root
- [x] Per-PE report (36 PE files): Rich header, PDB, timestamps, entropy, imports/exports, TLS, packer check. No packers.
- [x] Base-module check vs sigmaRE 1.13c reference: all 21 modules are 1.13c, exports identical by RVA;
      PE checksum valid for 18; **D2Win.dll and Storm.dll byte-patched** (loader patches decoded)
- [x] Third-party identification (BH and D2GL are PD2 monorepo builds of public forks; the rest stock)
- [x] `0_inventory/INVENTORY.md` with work order; summary sent to user

### Decisions
- Base-module verdict without vanilla binaries: PE checksum stored vs recomputed (Blizzard set it at link time).
- Phase 2 targets: ProjectDiablo.dll, PD2_EXT.dll, BH.dll. No 1.13c module is "rebuilt", so none is decompiled.
- D2GL: diff the public fork `Project-Diablo-2/d2gl` against `bayaraa/d2gl` v1.3.3 instead of decompiling.

### Open questions
- Vanilla 1.13c `D2Win.dll`/`Storm.dll` for an exact byte diff (asked user).
- Vanilla `d2data.mpq`/`d2exp.mpq` for Phase 1 diffs (asked user; maybe `patch_d2.mpq` is stock).

## Sub-agent log
(none run yet)

## Sub-agent briefs

### A1 Ghidra toolchain (started 2026-10-14)
- Input: git tag `Ghidra_12.1.4_build` of NationalSecurityAgency/ghidra (github releases are blocked; git and Maven Central work), JDK 21 in container.
- Output: working `analyzeHeadless` under `/home/user/fd2_work/ghidra/`, scripts `tools/ghidra/build_ghidra.sh`, `tools/ghidra/run_headless.sh`; log in `/home/user/fd2_work/logs/`.
- Done: `analyzeHeadless` imports and auto-analyzes `PD2_EXT.dll` (copy) and a trivial Ghidra script prints its function count.

### P1 Data (started 2026-10-14)
- Input: `pd2data.mpq`, `patch_d2.mpq`, `pd2maps.mpq` (+ listings of `pd2assets.mpq`, `pd2monchars.mpq`), reference `sigmaRE/2_txt` and its converters.
- Output: `/home/user/fd2_work/1_bin_from_mpq/`, `2_txt/pd2/` (txt + tbl), `2_txt/MPQ_LISTING.md`, `2_txt/README.md`, `tools/mpq/` (extractor), `tools/data/` (converters).
- Done: every `data/global/excel/*` table in pd2data as txt; `.tbl` decoded; stock-vs-modified verdict for PD2's `patch_d2.mpq`; per-table diffs where a vanilla source exists.

### T1 Tools port (started 2026-10-14)
- Input: `sigmaRE/4_sigma_source/tools/*` (C# generators, Ghidra scripts, rebuild.ps1).
- Output: `tools/` in this repo: copied tools, paths parameterized, building on Linux with .NET SDK; `ModuleConfig` entries for `ProjectDiablo` and `PD2_EXT`; `tools/README.md`.
- Done: `dotnet build` succeeds; no hard-coded `C:\Games\median-xl` / `C:\Users\zffit` paths remain; usage documented.

## Sub-agent results

### T1 Tools port: done (2026-10-14)
- `tools/Fd2Tools.csproj` (net8.0, dotnet-sdk-8.0 from apt) builds with 0 warnings / 0 errors. Driver commands: `paths`, `info`, `namedb`, `pd2-scan`, `pd2`, `sigma [--game]`, `fields`, `undeclared`. Paths in `tools/fd2.paths.json`, overridable by `--key`.
- New `ModuleConfig`s `ProjectDiablo` and `PD2_EXT` (own-file anchor regex, `Alphabetical` flag, game `__FILE__` paths ignored).
- Name DB from `sigmaRE/5_game_source`: 21 modules, 2,535 exports, 12,418 attributed functions, 0 address mismatches vs the shipped DLLs (Storm rebase handled).
- `pd2-scan`: ProjectDiablo.dll has 13 own-file anchors, 23 game paths ignored, **0 game ordinal imports**. It resolves game functions at run time into pointer globals, so Phase 3 must recover a `game_pointers.tsv` (global → module + ordinal/offset) before calls can get reference names.
- Not tested: `rebuild.ps1` (no PowerShell in the container). Tables.cs/Fields.cs still carry D2Sigma addresses (not applicable to PD2 until its table code is found).
