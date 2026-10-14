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
| 1 Data (MPQ → txt, diffs) | sub-agent | Phase 0 | `2_txt/` | **done** except layouts of PD2-only/`.bin`-only tables (needs Phase 2/3) |
| 2 Decompile (PD2 DLLs, BH, rebuilt modules) | sub-agent per binary | Phase 0 | `fd2_work/3_ghidra_fixed/` | **done** (ProjectDiablo, PD2_EXT, BH) |
| 3 Source trees | sub-agent per binary | Phase 2 | `4_pd2_source/` | ProjectDiablo **done**; PD2_EXT **done** |
| 4 Game patches / hooks | sub-agent | Phase 3 | `5_game_patches/` | **done** |
| 5 Config, BH diff, launcher | sub-agents | Phase 3 | `6_config/`, `4_pd2_source/{BH,D2GL}`, `7_launcher/` | **done** |
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

### P1 Data: done (2026-10-14)
- StormLib extractor (`tools/mpq/`), all 8 MPQs listed with 0 unnamed hash entries (patch_d2 named from a 38,234-name candidate list).
- 98 pd2data tables → `2_txt/pd2/` (93 txt byte copies, 5 .bin-only raw dumps); `patchstring.tbl` 2,980 strings.
- **PD2's `patch_d2.mpq` is stock** (no listfile/attributes, stock row counts, .bin compiled from .txt) → used as vanilla baseline `2_txt/vanilla_113c/` (62 txt).
- 66 diffs in `2_txt/diff/`; 33 tables + string/expansionstring.tbl have no baseline (need vanilla d2data/d2exp).
- PD2-only: `MiniSkillIcons.txt`; `itemstatcost.bin` record 324 → 336 bytes (S12 save columns). Undecoded: `leveldefs.bin`, four `*code.bin`.
- Orchestrator check: row counts for levels/cubemain/itemstatcost/skills/monstats/misc/runes re-counted, match.
- Decision: NOT downloading the unverified third-party GitHub repo with a full D2 install; asked the user for vanilla MPQs instead.

### A1 Ghidra toolchain: done (2026-10-14)
- Ghidra 12.1.4 built from the git tag (no prebuilt reachable), installed at `/home/user/fd2_work/ghidra/`; native decompiler built. ~26 min.
- Skipped deps (unreachable, irrelevant to headless PE): PostgreSQL for BSim, Eclipse CDT. Maven Central rate-limited → Google mirror.
- Test: PD2_EXT.dll copy, 550 functions, one function decompiled. Scripts `tools/ghidra/build_ghidra.sh`, `tools/ghidra/run_headless.sh`.

### P2a Decompile ProjectDiablo.dll (started 2026-10-14)
- Input: copy of ProjectDiablo.dll in `/home/user/fd2_work/bin/`; `tools/ghidra/*` (FixAndExport, AddFunctions, run_all.sh).
- Output: `/home/user/fd2_work/3_ghidra/ProjectDiablo_decompiled.c`, `/home/user/fd2_work/3_ghidra_fixed/ProjectDiablo_decompiled.c` (+ `.extra.c`), project in `/home/user/fd2_work/ghidra_projects/`, `0_inventory/decompile/ProjectDiablo.md` (counts).
- Done: 6 FixAndExport passes, untraced placeholders before/after counted, RTTI/vtables applied, library functions identified where possible.

### P2b Decompile PD2_EXT.dll then BH.dll (started 2026-10-14)
- Same as P2a for both binaries; reports `0_inventory/decompile/PD2_EXT.md`, `0_inventory/decompile/BH.md`.

### P2a Decompile ProjectDiablo.dll: done (2026-10-14)
- 12,078 Ghidra functions + 1,709 added from data (static-init table, patch tables, handler tables) = 13,787. Not packed.
- Untraced placeholder declarations 3,472 → 3,088 (−11%) + 141 in `.extra.c`. Uses per pass 7,839 → 6,901, converged at pass 6.
- `FixAndExport.java` gained an optional `strict` mode: without it a trivial callee got a fake 64-bit return and 3,338 functions got bogus `reg_EDX` params. **Decision:** use `strict` for all PD2 binaries.
- Libraries: CRT/VCRUNTIME/MSVCP140/OpenSSL dynamic; STL, std::regex, std::filesystem, nlohmann::json inlined at ~0x1020f250–0x10266e27. FID named only 47.
- Phase 3/4 leads: DllMain `FUN_102adad0` → init `FUN_102ad560` (27-entry module table 0x103c68a0, opens 4 PD2 MPQs) → patch installer `FUN_102ad020`. Patch tables: 0x103c7f50 (2,187 × `{dll, offset, data, relative, size}`), 0x10367ee0 (35, conditional), 0x103681b0 (block patches, `FUN_102ad1f0`).
- Game pointers resolved by `FUN_102f10f0(dll, value)`, negative = ordinal, else offset; each entry is a **{1.13c, 1.13d} pair** chosen by a version check (`FUN_10253fc0`). 1,051 accessors + 842 lazy thunks → `ProjectDiablo_game_pointers.tsv` (527 ordinals named; offsets to be named via reference symbols in Phase 3).
- **Open issue for Phase 3:** 871 lazy thunks are `void(void)`, so 5,883 call sites lose their arguments. Apply reference prototypes (`ApplyPrototypes.java`) and re-export.
- Static-init jump-stub table at 0x1032356c (64,961 stubs) is in link order: use it as file-boundary evidence.

### P3a Source tree ProjectDiablo (started 2026-10-14)
- Input: `3_ghidra_fixed/ProjectDiablo_*` exports + game_pointers/datafuncs/prototypes TSVs, Ghidra project, sigmaRE name DB.
- Output: `4_pd2_source/ProjectDiablo/` (tree, include/ incl. `d2structs.h`, symbols.csv, FILES.md, exports/imports.tsv, `game_pointers.tsv`, README with counts); tool fixes in `tools/`.
- Done: thunk prototypes applied and re-exported (lost-arguments fix); attribution with confidence levels; link-order verdict; undeclared names only STL internals; `tools/rebuild.sh --pd2` regenerates.

### P2b Decompile PD2_EXT.dll + BH.dll: done (2026-10-14)
- **PD2_EXT:** 470 + 18 added = 488 functions (12 fake forwarder entries to drop); FID 181; placeholders 128 → 90. PD2 code is 4 functions at 0x10001000–0x10001241, the rest static CRT. Runtime patches: Game.exe 0x4082dd call → `FUN_10001080`; Game.exe 0x40763f call → `FUN_10001000` (original data load, then `LoadLibraryA("ProjectDiablo.dll")`); Game.exe 0x4083ef–0x40840f 33 bytes NOP; Fog.dll+0x17ea7 call → `FUN_10001050` (guarded by an 8-byte check at Fog+0xff5f; makes `Fog_10116` InstallPath the parent folder).
- **BH:** 7,176 + 5,330 added = 12,506 functions; 126 BH RTTI classes, 100 vtables; placeholders 3,832 → 3,674 with `strict guardregs` (new opt-in FixAndExport mode; plain/strict made BH worse via a CRT register-capture routine). Modules: GameSettings, ScreenInfo, Gamefilter, Bnet, Item, Party, StashExport, ChatColor, MapNotify; **no Maphack/AutoTele module**. 56 loot-filter condition classes (PD2: MapTier, CraftLevel, RerollLevel, Automod). Interop: ProjectDiablo calls 8 `BH*` exports; BH calls ProjectDiablo's `D2Client_PlaySoundWithCustomVolumeOrPriority` and D2GL's `d2glIsReady`/`d2glConfigQueryImpl`. 35+ `Patch` objects with 1.13c/1.13d offsets.
- Decision: FixAndExport mode per binary: ProjectDiablo `strict`, PD2_EXT plain (= strict), BH `strict guardregs`.

### P5a BH fork diff (started 2026-10-14)
- Input: BH decompile + Ghidra project, `0_inventory/decompile/BH.md`, clone of `github.com/Project-Diablo-2/BH`.
- Output: `4_pd2_source/BH/` (README, DIFF.md, src/ for binary-only changes, patches.tsv, interop.md), scripts in `tools/bh/`.
- Done: closest public commit identified with evidence; every BH class/file classified; no upstream code copied into the repo.
- Note: PD2_EXT source tree (P3b) waits for P3a, because both use the shared generator in `tools/src`.

### P3a Source tree ProjectDiablo: done (2026-10-14)
- 13,787 functions (10,980 PD2, 2,807 lib). Of PD2 code: anchor 35, range 1,496, linked 151, inferred 41, nearest 4, gap 9,253 (84%; 3,604 of those are static initializers of unnamed objects). Ordinary code in a named file: 815 / 6,464 (12.6%).
- 66 object files recovered from the static-initializer table (link order); 14 named (13 `__FILE__` + `functions/D2ClientFunctions.cpp` manual override). **Link order: not alphabetical** (project-file order) → `between_` = located between.
- Lost-arguments fix: 969 thunks got prototypes (717 from reference headers); empty-arg thunk calls 5,853/5,923 → 174/6,068. Placeholders 3,116 → 3,257 (+5%, because calls now pass arguments and expose `extraout_*`).
- Game calls: all 2,037 bindings named (569 ordinal, 1,468 by 1.13c offset); 6,475 calls use reference names; 0 `Ordinal_` left. Undeclared: 9 names (STL internals).
- `d2structs.h`: 13 structs, 43 fields proven, 102 assumed. PD2's Game struct is larger than vanilla's.
- 1,896 of 2,037 bindings have 1.13d value 0: this build effectively supports 1.13c only.
- Object file 45 = client integrity check (module scan vs base64-encoded hack-DLL names): labelled, high-level only.
- Orchestrator check: README counts are generator-filled; second regeneration byte-identical (agent); integrity-check text is high level only.
- Open: 52 of 66 object files unnamed (`link_units.tsv` gives leads); structs not applied to the code (needs a Ghidra data-type pass + re-export).

### P4 Game patches and hooks (started 2026-10-14)
- Input: patch tables 0x103c7f50 / 0x10367ee0 / 0x103681b0 + other write sites in ProjectDiablo.dll, PD2_EXT runtime patches, on-disk Storm/D2Win patches, BH patches; names from `4_pd2_source/ProjectDiablo/symbols.csv` and sigmaRE `5_game_source`.
- Output: `5_game_patches/{patches.csv,HOOKS.md,FEATURES.md,README.md}`, `4_pd2_source/ProjectDiablo/patches/` and `4_pd2_source/PD2_EXT/patches/` (generated by `tools/patches/build_patches.py`).
- Done: every table entry decoded and mapped to a game function, features grouped, patch C++ generated, re-runnable.

### P3b Source tree PD2_EXT (started 2026-10-14)
- Output: `4_pd2_source/PD2_EXT/` (not `patches/`); ProjectDiablo tree must regenerate byte-identically.

### P5a BH fork diff: done (2026-10-14)
- Shipped BH.dll = public fork `Project-Diablo-2/BH` at **4f7b4d7** (2026-04-23), bracketed by marker commits on both sides (e.g. Open Wounds `add eax,0x19` at 0x1007d3ae predates 0095e67 of 2026-05-28; orchestrator re-checked the instruction and both commits).
- 0 PD2-private changes found: strings, constants, 245 D2 pointer pairs, 36/36 patches, 9/9 exports, 75 config keys, 126 classes/100 vtables all match. 92 files: 75 equivalent, 16 not linked, 1 partly linked.
- `src/` holds only `UPSTREAM.txt` (no upstream code copied). Limit: a logic-only private edit would need a VS2022 rebuild + binary diff.
- The fork never had Maphack/AutoTele (history starts 2021-03-31).

### P3b Source tree PD2_EXT: done (2026-10-14)
- 476 functions after dropping 12 fake forwarders: 4 PD2 in `dllmain.cpp` (manual: no file evidence) + 472 CRT in `lib/`. Names: `dllmain_DllMain_100011c0`, `_InstallGamePatches_10001080`, `_LoadProjectDiablo_10001000`, `_FogInstallPath_10001050`.
- Placeholders 126 → 89 by distinct-name count (README method), 128 → 90 by declaration lines (Phase 2 method). Undeclared: 10 CRT internals.
- Confirmed: the hooked call at Game.exe 0x40763f is `D2Win_10086`.
- Generator now only deletes/rewrites `.cpp` files carrying its own header, so hand/script-made `patches/` folders are safe. ProjectDiablo regenerates byte-identically.

### P5b Config schemas (started 2026-10-14)
- Output: `6_config/` (one schema per config file, every key → reading function/address/file or upstream file:line; loot filter grammar). User-specific values redacted; raw configs not committed.

### P5c Launcher + D2GL (started 2026-10-14)
- Output: `7_launcher/` (new folder: framework, PD2 assemblies decompiled to C#, PROTOCOL.md; secrets redacted; launcher never executed), `4_pd2_source/D2GL/` (closest fork commit, CHANGES.md vs v1.3.3). Layout addition: `7_launcher/` holds the launcher work because it is not game code.

### P5c Launcher + D2GL: done (2026-10-14)
- Launcher: .NET 6 single-file bundles (PD2Launcher = WPF + MvvmLight + WebView2; SteamPD2/UpdateUtility console). PD2 assemblies PD2Launcher, PD2Shared, SteamPD2, UpdateUtility decompiled (64 .cs + 7 .xaml, ~7.6k lines) into `7_launcher/src`; no secrets; nothing executed or contacted. PROTOCOL.md: GCS-style manifest (crc32c), UpdateUtility arg formats, game launch line, filter fetching.
- Launcher bug noted: metadata holds MD5 but the launcher compares SHA-1, so files re-download whenever metadata changes (overwriting ProjectDiablo.cfg, ddraw.ini, default.filter).
- D2GL: shipped glide3x.dll = public fork `Project-Diablo-2/d2gl` commit 9443840 (2026-04-23); fork vs v1.3.3: 36 files +992/−623 (excl. vendored libs). No private changes detected (string/export/disassembly evidence).
- Orchestrator check: no binaries or secret-looking strings in `7_launcher/`, `tools/launcher/`, `4_pd2_source/D2GL/`.

### P5b Config schemas: done (2026-10-14)
- 10 docs in `6_config/`. Keys shipped/read/unread/code-only: ProjectDiablo.json 75/75/0/0; ProjectDiablo.cfg 30/0/30/0 (legacy, BH stopped reading it in 43ff557); BH.json 55/58/0/3; d2gl.json 45/45/0/0; SGD2FreeResolution.json 12/12/0/0; ddraw.ini 26/31/1/6; launcherSettings.json 44/43/1/15; local_metadata.json 1/1/0/0. Filter grammar in `filter-format.md`.
- Findings: `classic_game_settings` replaces the D2 registry (Storm registry calls redirected at 103 call sites); `ddraw.ini` `resizeable` typo makes the launcher option a no-op; launcher MD5-vs-SHA-1 bug confirmed on all 47 entries.
- **Correction:** the launcher source IS public (`Project-Diablo-2/PD2Launcher`, commit 300ed6f verified); P5c's "non-public" claim fixed in `7_launcher/README.md`.
- **New open item:** shipped `SGD2FreeRes.dll` differs from tag 3.0.3.1 (missing 640x480 default/gateway table, `"1068x600"` present). INVENTORY updated; decompile + diff is a follow-up.
- Orchestrator check: no IPs, user paths or host names left unredacted in `6_config/`.

### P4 Game patches and hooks: done (2026-10-14)
- 1,636 patch records → 1,245 hooks, 0 undecodable, 0 outside a game function (1,068 code records in reference functions, 225 in unsplit entry points named `sub_<va>`, 340 data). Script `tools/patches/build_patches.py` (deterministic, ~15 s); overrides with reasons in `tools/patches/`.
- **Correction:** main table 0x103c7f50 has 1,198 real entries (2,187 slots, installer stops at offset 0). Conditional table 35 entries (skipped with `-plugy`), block table 57, init-time writes 284 (skill tables, D2Client packet handlers, D2Net packet sizes), 1 window subclass, PD2_EXT 4, on-disk 21, BH 36. No WriteProcessMemory, no IAT hooks.
- By module: D2Game 881, D2Client 583, D2Common 85, D2Net 30, D2Win 28, others ≤13. By feature (hooks): sound 267, skills 199, items/cube 180, save files 147, monsters/AI 122, UI 98, networking 70, misc 61, maps 41, quests 39, loot filter 14 (BH), loader 6, stash 1.
- Notable: save buffer 0x2000 → 0x20000; 207 PlaySound calls → PD2 sound engine; stash gold 2.5M → 5M; ItemStatCost stride 0x144 → 0x150 handled by hooking 23 call sites (stride use inferred).
- On-disk: D2Win has 17 more redirected MPQ-name string operands; undoing all D2Win changes restores its checksum exactly. Storm: only the import rename found, checksum still unexplained.
- Orchestrator check: 12 random PD2 patch rows — original bytes match the stock DLLs 12/12.
- **Follow-up (tool bug):** `game_pointers.tsv` has 10 lazy-thunk rows whose address is a PD2 wrapper/jmp stub, not the thunk (e.g. 0x102cbcd0). Phase 4's script handles it; `tools/src` should be fixed.
