# tools/: source-tree generators

These are the sigmaRE generators (`sigmaRE/4_sigma_source/tools/`), ported so they build with the .NET SDK on
Linux and Windows and pointed at the PD2 binaries. The method hasn't changed: Ghidra exports the decompiled
C, and `Rebuild.cs` places every function into a source file. Each placement gets a confidence level
(`anchor` / `range` / `linked` / `inferred` / `nearest` / `gap` / `lib`). The tool then writes `symbols.csv`,
`FILES.md`, `exports.tsv`, `imports.tsv` and `include/` (`<module>_decomp.h`, `globals.h`, `imports.h`,
`missing_globals.h`, `ghidra_compat.h`). `sigmaRE/4_sigma_source/README.md` and
`sigmaRE/5_game_source/README.md` describe the output format.

Other phases own `tools/inventory.py`, `tools/ghidra/build_ghidra.sh`, `tools/ghidra/run_headless.sh`,
`tools/mpq/` and `tools/data/`. They aren't described here.

## Files

| File | What it does | Port status |
|---|---|---|
| `Fd2Tools.csproj` | .NET 8 console project. It compiles `src/*.cs` only. | new |
| `src/Program.cs` | Command-line driver. It replaces `rebuild.ps1`'s `Add-Type` + static calls (see Commands). | new |
| `src/Paths.cs` | Loads `fd2.paths.json`, applies `--key` overrides, resolves `${key}`, accepts `/` and `\`, finds files case-insensitively | new |
| `src/Rebuild.cs` | Shared rebuilder: parses `//==== name @ addr` exports, finds anchors, resolves gaps, names functions, writes the tree | ported; `ModuleConfig` extended, `ModuleConfigs` added |
| `src/GameBuild.cs` | Driver for the 1.13c modules: export names, `Ordinal_N` resolution (whole module and per function), `CALLS.md` | ported; `LoadNameDb`, `ConfigurePd2`, `LoadGamePointers`, `NameAt` added |
| `src/Pe.cs` | Minimal PE32 reader: VA/offset, exports, imports, strings | unchanged except a PE signature check and the `Machine`/`TimeDateStamp` fields |
| `src/Declare.cs` | Post-pass that declares every undeclared name (`imports.h`, `missing_globals.h`, `ghidra_compat.h`, untraced locals) | ported; `RunTrees` keeps read-only reference trees separate, and `imports.h` names the defining file |
| `src/Undeclared.cs` | Report of names used without a declaration | system-DLL folders come from config; on Linux the module's own system imports stand in |
| `src/Fields.cs` | Emulates D2Sigma's static initializers to read `{name,type,size,offset,link}` table descriptors | `VectorCtor` is settable (`fields --vector-ctor`); otherwise unchanged |
| `src/Tables.cs` | D2Sigma table layouts, `sigma_tables.h`, named `.bin` dumps | unchanged (D2Sigma-specific addresses) |
| `ghidra/FixAndExport.java` | Ghidra post-script: repairs signatures behind `in_*`/`unaff_*`/`extraout_*` and writes the export | unchanged |
| `ghidra/AddFunctions.java` | Creates and decompiles functions Ghidra missed. Writes them to `<export>.extra.c`. | unchanged |
| `ghidra/run_all.ps1` | Runs FixAndExport over every module | hard-coded Ghidra/game paths are now required parameters; `-Pd2` added |
| `ghidra/run_all.sh` | Linux version for the PD2 modules | new |
| `apply_names_ghidra.py` | Ghidra script that applies `symbols.csv` names and plate comments | only the prompt and category text changed |
| `rebuild.ps1` / `rebuild.sh` | Build the project and run it (`-Pd2`/`--pd2`, `-Scan`/`--scan`, `-Game`/`--game`) | `.ps1` rewritten around `dotnet`; `.sh` is new |
| `fd2.paths.json` | Locations (see below) | new |

## Build

```
# Ubuntu 24.04: apt-get install dotnet-sdk-8.0      Windows: install the .NET 8 SDK
dotnet build tools/Fd2Tools.csproj                  # -> tools/bin/Debug/net8.0/Fd2Tools.dll (bin/ and obj/ are git-ignored)
```

## Configuration: `tools/fd2.paths.json`

| Key | Meaning | Default (container) |
|---|---|---|
| `reference_root` | sigmaRE checkout (`4_sigma_source/`, `5_game_source/`). It is only read. | `${workspace_root}/inputs/sigmaRE/sigmaRE` |
| `workspace_root` | scratch area outside git | `/home/user/fd2_work` |
| `repo_root` | this repository; `4_pd2_source/` is written here | `..` (relative to the json) |
| `ghidra_export_dir` | `<Module>_decompiled.c` (+ `.extra.c`) | `${workspace_root}/3_ghidra_fixed` |
| `pd2_install_dir` | `ProjectDiablo.dll`, `PD2_EXT.dll` | `${workspace_root}/inputs/ProjectD2/ProjectD2` |
| `game_dir` | 1.13c binaries (optional for PD2; used for C++ export names and the offset lookup) | `${pd2_install_dir}` (PD2 ships them) |
| `ghidra_headless` | `analyzeHeadless` (for reference only; the run_all scripts take `--ghidra`) | `${workspace_root}/ghidra/support/analyzeHeadless` |
| `reference_out` | where `sigma` / `--game` regenerate the reference trees (never `reference_root`) | `${workspace_root}/reference_rebuild` |
| `system_dll_dirs` | folders with 32-bit system DLLs, for export names of ordinal imports such as wsock32 | `[]`; on Windows `%WINDIR%\SysWOW64` is added automatically |

Rules: a relative path resolves against the json file's folder, and `${key}` expands another key or an
environment variable. Every key can also be passed on the command line as `--key-name <path>`, e.g.
`--ghidra-export-dir D:\fd2\3_ghidra_fixed`. Command-line values take priority. The config is found in this
order: `--config`, `$FD2_PATHS`, then the nearest `fd2.paths.json` or `tools/fd2.paths.json` above the build
output or the current directory. On Windows, either edit the json or pass Windows paths. Both separators work.

## Commands

```
dotnet tools/bin/Debug/net8.0/Fd2Tools.dll <command>      # or: tools/rebuild.sh / tools\rebuild.ps1 (build + run)

paths                       resolved locations
info <pe>                   PE header, sections, export/import counts
namedb                      load sigmaRE/5_game_source as the name database and print counts
pd2-scan [--module M]       dry run, no Ghidra export needed (rebuild.sh --scan / rebuild.ps1 -Scan)
pd2 [--module M]            build 4_pd2_source/<M> (rebuild.sh --pd2 / rebuild.ps1 -Pd2), then run Declare
sigma [--game] [--dll f]    rebuild.ps1's original job, written to <reference_out>
fields <dll> <symbols.csv> [--vector-ctor 0xADDR]
undeclared <tree> [out.csv]
```

Linux: `tools/rebuild.sh --pd2 [--module ProjectDiablo] [--ghidra /path/to/exports]`.
Windows: `powershell -ExecutionPolicy Bypass -File tools\rebuild.ps1 -Pd2 [-Module ProjectDiablo] [-Ghidra D:\exports]`.
Neither script is tied to an OS: `rebuild.sh` accepts the `-Pd2`-style spellings as well.

## The PD2 module entries (`ModuleConfigs` in `src/Rebuild.cs`)

They are set up like D2Sigma's `ModuleConfig` defaults, plus these new options:

* `OwnFileRx`: only `__FILE__` paths matching this regex are anchors, and its `path` group is the tree path.
  ProjectDiablo uses `(?i)(?:^|/)D2TemplateSource/ProjectDiablo/(?<path>.+\.(?:cpp|c|cc))$`, so
  `C:\projects\Project-Diablo-2\D2TemplateSource\ProjectDiablo\client\Sound\Sound.cpp` becomes
  `client/Sound/Sound.cpp`. The game paths that PD2 passes to game asserts (`..\Source\D2Client\UI\inv.cpp`,
  `..\D2Game/Quests/a3q5.cpp`) are counted and ignored. When `OwnFileRx` is `null`, the 1.13c behaviour applies:
  every `..\Source\...` path is an anchor.
* `Alphabetical`: when true, `between_<A>_and_<B>` means the real file name sorts between A and B (D2Sigma). When
  false, it only means "located between" (1.13c modules). This option is `false` for both PD2 modules until phase 3
  checks the anchor order.
* `Product` (file headers), `LibraryHints` (`_json_`/`_stl_`/`_regex_`/`_iostream_` name hints, outside D2Sigma),
  `Decompiled` (`ProjectDiablo_decompiled.c`, `PD2_EXT_decompiled.c`), `OutputSubdir` (`4_pd2_source/<Module>`),
  `GlobalNames` (see below).
* The image base is always read from the PE. `LibStart = 0` means the CRT start is detected.

## Name database (base-game names exactly as in the reference)

`GameBuild.LoadNameDb` reads `<reference_root>/5_game_source/<Module>/exports.tsv` and `symbols.csv` in place.
Nothing is copied into the repo. From these files it builds the same `ExportName` tables that `GameBuild.Load`
would compute from the binaries. When `game_dir` has the 1.13c DLLs, it also adds the C++ export names, and it
detects a rebased reference: Storm's reference addresses differ from the installed DLL's by one constant.
It then provides three things:

* **`Ordinal_N` imports**: named `<Module>_<ordinal>` (e.g. `D2Common_10973`) by `ResolveImports` /
  `ResolvePerFunction`, unchanged.
* **`imports.h`**: prototypes come from the reference headers (`5_game_source/*/include/*_decomp.h`, read-only), and
  each line names the defining file, e.g.
  `uint D2Common_10001(...);   /* sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */`.
* **Game function pointers** (`<tree>/game_pointers.tsv`, one `DAT_xxxxxxxx<TAB>D2Common.dll<TAB>10973 | +0xOFFSET | 0xVA`
  per line): the global is renamed after the game function, so `(*DAT_..)(..)` becomes `(*D2Common_10973)(..)`.
  `globals.h` then declares it as `extern code D2Common_10973;  /* ... defined in sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */`.
  An offset lookup uses `NameAt`, which covers every reference function, not only exports.

## Verified (2026-10-14, container)

* `dotnet build`: 0 warnings, 0 errors.
* `namedb`: 21 modules, 2,535 exports, 12,418 functions with a file, 70 C++ export names. With Storm's rebase
  detected, there are 0 address mismatches against the installed 1.13c DLLs.
* `pd2-scan` on ProjectDiablo.dll reports: image base 0x10000000, 1 export, 325 imports from 20 DLLs, **0 game
  ordinal imports**, 13 own `__FILE__` anchors, and 23 game paths ignored.
* PD2_EXT.dll: 12 `version.dll` proxy exports, 74 imports, and no `__FILE__` strings.
* A synthetic 5-function export through `pd2`: anchors, gaps, pointer renaming, `imports.h` comments and Declare
  all worked. The reference tree was unchanged afterwards.
* `rebuild.ps1` hasn't been run, because there is no PowerShell in the container.

## Known gaps and TODOs

* **ProjectDiablo imports no game function by ordinal.** It is a D2Template build, so it resolves game functions at
  run time (GetProcAddress by ordinal, or DLL base + offset) into pointer globals. `imports.tsv` therefore names
  nothing. Phase 3 must recover those tables from the Ghidra export and write `4_pd2_source/ProjectDiablo/game_pointers.tsv`.
  The renaming plumbing already exists.
* `PD2_EXT` has no `__FILE__` strings, so without other evidence its whole tree is `_unattributed/` chunks. The
  `OwnFileRx` for it is a guess.
* Two things need checking on the real export: whether link order is alphabetical, and whether `DetectLibStart`
  finds the VS2022 CRT/STL boundary. Set `LibStart` by hand if the detection fails.
* `Fields.cs`/`Tables.cs` are D2Sigma-specific (descriptor constructor, table-name patterns). PD2 keeps its tables
  in `.txt`/`.bin` files, so they are not used for PD2.
* Without system DLLs (Linux), ordinal imports from wsock32/dsound can't be named, and `Undeclared`/`Declare` only
  know the system names the module itself imports. Copy 32-bit system DLLs into a folder listed in
  `system_dll_dirs` to fix this.
* The reference trees can't be regenerated here (`sigma`), because the sigmaRE Ghidra exports and `D2Sigma.dll`
  weren't provided.

## What `pd2` needs from Ghidra (phase 3)

* `<ghidra_export_dir>/ProjectDiablo_decompiled.c` and `PD2_EXT_decompiled.c`, in the format FixAndExport.java writes:
  each function is a `//==== <ghidra name> @ <8 hex digits, no 0x>` line followed by its C text. Default names
  (`FUN_<addr>`, `DAT_<addr>`, `Ordinal_N`) must be kept, and Ghidra must be allowed to inline string literals so
  that the `__FILE__` paths are visible. DAT_ references are also resolved through the PE.
* Optionally, `<Module>_decompiled.extra.c` from AddFunctions.java, for functions that are reached only through data.
* Run with `tools/ghidra/run_all.sh --out <ghidra_export_dir> --work <scratch> --ghidra <analyzeHeadless> --pd2-dir <install>`.
