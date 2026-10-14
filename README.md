# fd2: Project Diablo 2 source reconstruction

A reconstruction of what the Project Diablo 2 (PD2) team built to mod Diablo II 1.13c: the code of their
DLLs, every patch and hook they put into the 1.13c game modules, their data changes and their config formats.
It copies the method of the sigmaRE project (D2Sigma.dll → source tree, plus the 1.13c game modules) and reuses
sigmaRE's 1.13c name database, so every base-game call uses the same names as `sigmaRE/5_game_source`
(`D2Common_10973`, ...). The trees are decompiler output sorted into the original project layout: for reading and
navigation, not for compiling, except the small PD2_EXT loader, which has a hand-cleaned buildable version.

Private repo: contains derived Blizzard and PD2 code. No binaries and no MPQ contents beyond decoded text tables.
`STATUS.md` is the orchestration log (what each step did, decisions, corrections); `VERIFICATION.md` is the
independent check of the results.

## What PD2 consists of (Phase 0, `0_inventory/`)

| Component | Origin | Treatment here |
|---|---|---|
| `ProjectDiablo.dll` (4.3 MB) | PD2 monorepo `C:\projects\Project-Diablo-2\D2TemplateSource\ProjectDiablo\`, VS2022, D2Template-based | decompiled, source tree, patch tables decoded |
| `PD2_EXT.dll` (86 KB) | PD2 monorepo; `version.dll` proxy that patches Game.exe/Fog.dll and loads ProjectDiablo.dll | decompiled, source tree, buildable loader |
| `BH.dll` | PD2's public BH fork, = `Project-Diablo-2/BH` @ `4f7b4d7` | function-level diff: no private changes found |
| `glide3x.dll` (D2GL) | PD2's public D2GL fork, = `Project-Diablo-2/d2gl` @ `9443840` | fork diff vs `bayaraa/d2gl` v1.3.3 |
| 21 Blizzard 1.13c modules | stock 1.13c build (2010-03-09) | exports match sigmaRE by RVA; only D2Win.dll and Storm.dll changed on disk |
| SGD2FreeRes, SGD2FreeDisplayFix, cnc-ddraw, OpenSSL, Bink/Smacker/IJL | third party | identified; SGD2FreeRes probably modified (not analysed) |
| PD2Launcher / SteamPD2 / UpdateUtility | .NET 6; public source `Project-Diablo-2/PD2Launcher` @ `300ed6f` | decompiled, update protocol documented |

How PD2 gets into the game: Storm.dll's import table names `PD2_EXT.dll` instead of `VERSION.dll`, so Windows
loads PD2_EXT with Storm. PD2_EXT patches Game.exe to load `ProjectDiablo.dll` after the data load, and D2Win.dll
carries the same load in a code cave in `D2Win_10086` (the MPQ loader). ProjectDiablo.dll's DllMain then
installs its patch tables. No binary is packed or protected.

## Layout

| Path | Contents |
|---|---|
| `0_inventory/` | `INVENTORY.md`, `hashes.csv` (119 files), per-PE reports, base-module check, Phase 2 decompile reports |
| `2_txt/` | PD2 tables as text (`pd2/`), stock 1.13c baseline (`vanilla_113c/`), per-table diffs (`diff/`), MPQ listings |
| `4_pd2_source/ProjectDiablo/` | source tree, `include/` (incl. `d2structs.h`), `symbols.csv`, `game_pointers.tsv`, `link_units.tsv`, `patches/` |
| `4_pd2_source/PD2_EXT/` | source tree, `patches/Loader.cpp`, `build/` (buildable loader) |
| `4_pd2_source/BH/`, `4_pd2_source/D2GL/` | diffs against the public forks, with evidence |
| `5_game_patches/` | `patches.csv`, `HOOKS.md`, `FEATURES.md`: every change PD2 makes to the 1.13c code |
| `6_config/` | schema of every shipped config file, each key linked to its reader; loot-filter grammar |
| `7_launcher/` | launcher/updater: decompiled PD2 C#, `PROTOCOL.md` |
| `tools/` | all generators (re-runnable): inventory, MPQ/data, Ghidra scripts and build, C# tree generator, patch decoder, BH/D2GL/launcher/config helpers |

## Results

**Functions**

| Module | Functions | PD2 code | Library | Files |
|---|---:|---:|---:|---:|
| ProjectDiablo.dll | 13,787 (12,078 Ghidra + 1,709 added from data tables) | 10,980 | 2,807 | 103 (14 named, 87 `_unattributed`, 2 `lib`) |
| PD2_EXT.dll | 476 (after dropping 12 forwarder pseudo-functions) | 4 | 472 | 4 |
| BH.dll | 12,506 | (matched to upstream source, not regenerated) | | |

**Attribution of ProjectDiablo's 10,980 PD2 functions**

| Confidence | Functions | % |
|---|---:|---:|
| anchor (own `__FILE__` string) | 35 | 0.3 |
| range | 1,496 | 13.6 |
| linked | 151 | 1.4 |
| inferred | 41 | 0.4 |
| nearest | 4 | 0.04 |
| gap (`_unattributed/`) | 9,253 | 84.3 |

ProjectDiablo keeps only 13 of its own source paths, so most code can't be given a file name. Its 66 object files
were still recovered, in link order, from the C++ static-initializer table; 14 are named. Link order is not
alphabetical, so `between_<A>_and_<B>` means *located* between A and B. 3,604 of the gap functions are static
initializers. In ordinary code, 815 of 6,464 functions (12.6%) are in a named file.

**Names and types**

* Game bindings: all 2,041 run-time game bindings named after the reference (569 by ordinal, 1,472 by 1.13c
  offset); 6,327 game calls use reference names; no `Ordinal_` left. 1,900 bindings have no 1.13d value, so this
  build effectively supports only 1.13c.
* Lost arguments: 969 game-call thunks given their reference prototypes; thunk calls with an empty argument list
  went from 5,852 of 5,916 to 174 of 5,920.
* Untraced placeholders (`in_*`, `unaff_*`, `extraout_*`, `in_stack_*`), ProjectDiablo: 3,472 → 3,088 declarations
  in the Phase 2 signature repair (−11%). The Phase 3 re-export with typed thunks counts 3,116 → 3,257 (one per
  function per name; +5%, because calls now pass their arguments and expose `extraout_*` values). PD2_EXT 126 → 89.
  BH 3,832 → 3,674.
* Undeclared names left: 9 (ProjectDiablo) and 10 (PD2_EXT), all STL/CRT internals.
* `include/d2structs.h`: 13 game structs, 43 fields proven from PD2's own accesses, 102 assumed.

**Patches and hooks** (`5_game_patches/`)

1,636 patch records in 1,245 hooks, 0 undecodable, 0 outside a game function. They come from:
* the main table: 1,198 entries;
* conditional patches: 35, skipped with `-plugy`;
* block patches: 57;
* init-time pointer and table writes: 284;
* PD2_EXT: 4;
* BH: 36;
* on-disk changes: 21;
* window subclass: 1.

By module: D2Game 881, D2Client 583, D2Common 85, D2Net 30, D2Win 28, others 29. Largest features: sound 267,
skills 199, items/cube 171, save files 147, monsters/AI 131. Each patch is also emitted as D2Template-style C++
(`4_pd2_source/ProjectDiablo/patches/`).

**Data** (`2_txt/`)

* Extraction: 98 PD2 tables. PD2's `patch_d2.mpq` is the stock 1.13c file and serves as the vanilla baseline.
* Diffs: 65 tables plus `patchstring.tbl`.
* PD2-only data: `MiniSkillIcons.txt`, and `itemstatcost` records grown from 324 to 336 bytes.
* Largest changes: levels 137 → 202, cube recipes 151 → 2,341, skills 357 → 603, monsters 734 → 1,240.

**Config and launcher**

* Config: every key of 8 config files documented with its reader (`ProjectDiablo.json` 75/75 read;
  `ProjectDiablo.cfg` is a legacy file nothing reads).
* Launcher: decompiled (64 C# files and 7 XAML files); the update protocol is in `7_launcher/PROTOCOL.md`.
* Launcher bug: it checks the MD5 manifest with SHA-1, so it re-downloads and overwrites user configs.

**Verification** (`VERIFICATION.md`): PASS. Checked:
* 30/30 functions against Ghidra;
* all 35 anchors;
* all 1,636 patch rows, re-decoded from the binaries;
* 30/30 `game_pointers.tsv` rows;
* regeneration from a clean copy gives identical output.

The six discrepancies found were in documentation only and have been fixed.

## Not recovered

* **File names for 52 of 66 object files** and for 84% of PD2 functions: the binary has no other path strings.
  `link_units.tsv` lists each unit's distinctive strings as a lead (e.g. the `ProjectDiablo.json` reader, the
  BH loader, the patch installer).
* **Structs applied to the code.** `d2structs.h` exists but isn't applied in Ghidra yet, so locals stay integer-typed.
  Calls through per-file pointer copies have untyped returns for the same reason.
* **Exact on-disk diff of Storm.dll:** only the import rename was found, but its PE checksum still doesn't match.
  Vanilla 1.13c `Storm.dll`/`D2Win.dll` were not available. For D2Win, undoing all found changes restores the
  checksum exactly.
* **Vanilla baseline for 33 tables** and `string.tbl`/`expansionstring.tbl`: needs vanilla `d2data.mpq`/`d2exp.mpq`.
  `leveldefs.bin` and the four `*code.bin` formula files are dumped but not decoded.
* **Logic-only private edits in BH and D2GL.** Matching was by strings, constants, pointers, patches, classes and
  exports. Proving byte equality would need a VS2022 rebuild of the public commits and a binary diff.
* **SGD2FreeRes.dll changes:** it differs from tag 3.0.3.1 (resolution table, `"1068x600"`), but wasn't decompiled.
* **The integrity check** (ProjectDiablo link unit 45, a loaded-module scan) is labelled and described at a high level
  only, by design.
* **Buildability** beyond PD2_EXT: ProjectDiablo's tree doesn't compile. The PD2_EXT loader builds with
  clang-cl and mingw-w64, but it hasn't been run.

## Re-running

```
tools/inventory.py <install> <out> --ref-game <sigmaRE>/5_game_source     # Phase 0
tools/phase1_data.sh                                                       # MPQs and tables
tools/ghidra/build_ghidra.sh ; tools/ghidra/run_all.sh ...                 # Ghidra 12.1.4 and exports
tools/ghidra/pd2_prototypes.sh                                             # thunk prototypes and re-export
tools/rebuild.sh --pd2                                                     # source trees (about 45 s)
python3 -I tools/patches/build_patches.py ...                              # Phase 4 tables and patch C++
```

Paths are in `tools/fd2.paths.json`. The workspace (binaries, MPQ contents, Ghidra projects, raw exports) lives
outside the repo; see `tools/README.md`.
