# Phase 2: BH.dll decompile

Static analysis of the workspace copy `fd2_work/bin/BH.dll` (1,423,360 bytes, VS2022, linker 14.39,
built 2026-05-13 15:41 UTC, PDB `C:\projects\Project-Diablo-2\scripts\build-bh-release\BH.pdb`).
Not packed: `.text` entropy 6.48, entry point in `.text`, normal MSVC CRT start-up, readable RTTI.

## How it was run

| | |
|---|---|
| Ghidra | 12.1.4 headless, `GHIDRA_HEADLESS_MAXMEM=4G`, `x86:LE:32:default` / `windows` |
| Project | `fd2_work/ghidra_projects/BH/BH.gpr` (saved) |
| Analyzers | as for PD2_EXT: default Windows PE set, plus RTTI, Demangler Microsoft, Function ID, PE Exception Handling, Decompiler Parameter ID, Decompiler Switch Analysis, set by `tools/ghidra/SetAnalysisOptions.java`. No PDB. |
| Scripts | `fd2_work/scratch/phase2/run1.sh` (import, analysis, raw export, report); final run `run_guard.sh` (fresh re-import with identical analysis, `FixAndExport.java <out> 6 strict guardregs`, `AddFunctions.java @BH_add.txt`, report); `run3.sh` (RecoverClassesFromRTTIScript, report) |
| Logs | `fd2_work/logs/phase2_BH_{run1,run2,strict,guard,run3}.*` |

| Step | Wall time |
|---|---:|
| Import + auto-analysis (analyzer total 322 s: Decompiler Switch Analysis 134 s, Decompiler Parameter ID 102 s, Stack 25 s, Constant Reference 15 s, PE Exception Handling 12 s) | 5 min 22 s |
| Raw export (`FixAndExport` 0 passes, 7,176 functions) | 5 min 14 s |
| Whole run 1 | 10 min 50 s |
| FixAndExport, 6 passes: plain / `strict` / `strict guardregs` | 50 min / 37 min / 29.5 min |
| AddFunctions (5,330 functions) | about 15 s |
| RTTI class recovery + report | 3.5 min |

## Numbers

| | |
|---|---:|
| Functions found by Ghidra (main export) | **7,176** (26 thunks; 3,648 of them are `Catch@`/`Unwind@` EH funclets) |
| Functions added with `AddFunctions.java` (`.extra.c`) | **5,330** |
| Total in the exports | **12,506** (Ghidra turns 4,540 of the added `jmp` stubs into thunks: 4,566 thunks in the project) |
| Function ID matches | **423** (all in the statically linked MSVC CRT/STL, 0x1003c270-0x100fe8e0) |
| Named by analysis | 4,084 (FID, demangled CRT/STL, RTTI, EH funclets); 3,092 still `FUN_` in the main export |
| RTTI type descriptors | **229** (126 BH types, 103 STL/nlohmann/Concurrency/`type_info`); the PE scan's 207 counts only `.?AV`/`.?AU` names |
| vftables | **201** (100 BH, 89 library, 12 without an RTTI locator, labelled `vftable[n]`) |
| Untraced placeholder **declarations**, main export: raw → fixed | **3,832 → 3,674** (−4%) |
| Untraced placeholder uses, main export: raw → fixed | 9,651 → 8,958 |
| `.extra.c` | 597 declarations (543 `unaff_retaddr` in naked hook stubs and `jmp` initializer stubs) |

### FixAndExport: plain vs `strict` vs `strict guardregs`

| Run | Repairs | Declarations | Uses | `unaff_EDI` decl. |
|---|---|---:|---:|---:|
| raw (0 passes) | | 3,832 | 9,651 | 22 |
| plain (`6`) | 169 stack (83 reverted), 3,273 register, 370 return types | 5,305 | 12,422 | 1,438 |
| `6 strict` | 168 stack (58 reverted), 334 register, 70 return types set (70 more reverted by strict) | 5,132 | 12,055 | 1,469 |
| `6 strict guardregs` (**used**) | 167 stack (39 reverted), 103 register (28 reverted by guardregs), 72 return types set (72 more reverted by strict) | 3,674 | 8,958 | 0 |

Both plain and `strict` made BH worse than the raw export. `strict` stops the 64-bit return cascade
(`std::string`'s destructor `FUN_100498d0` getting `undefined8` and `reg_EAX/reg_EDX`), but a second
cascade remains. The CRT's `__invoke_watson` path (`FUN_100d89ef`) captures all registers into a CONTEXT,
so it reads EDI and gets a `reg_EDI` parameter. That spreads through every no-return caller up to
`FUN_100498d0`, which is inlined or called in 1,105 functions, and each of them then shows `unaff_EDI`.
I added a new **opt-in** `guardregs` argument to `tools/ghidra/FixAndExport.java`. A register parameter is
then kept only if the function plus up to 60 callers end up with fewer untraced values. This is the same
test `fixInStack` already uses. Without the argument the script behaves as before. On PD2_EXT, `guardregs` is
slightly worse (96 vs 90 declarations), so PD2_EXT keeps its plain/strict export.
The plain and strict exports are kept for comparison in `fd2_work/scratch/phase2/unguarded/` and
`fd2_work/scratch/phase2/strict_only/`. The strict-only project copy is in `strict_only/BH_project`.

About 3,137 of the remaining declarations are `unaff_EBP` in EH funclets (`Catch@`/`Unwind@`). They use
the parent frame and can't be repaired through signatures. This matches sigmaRE's experience.

| Export | Path | Size |
|---|---|---:|
| raw | `fd2_work/3_ghidra/BH_decompiled.c` | 6,238,644 B |
| fixed | `fd2_work/3_ghidra_fixed/BH_decompiled.c` | 6,301,928 B |
| added functions | `fd2_work/3_ghidra_fixed/BH_decompiled.extra.c` | 960,644 B |
| reports | `fd2_work/scratch/phase2/BH_report_{raw,raw2,reimport,final,rtti}.txt`, `BH_add.txt` (address list), `BH_patches.tsv` | |

### Added functions (5,330)

`Pd2Report.java` lists candidates. A candidate is a code address that is not inside any function, starts
after `ret`/`int3` padding or on a 16-byte boundary, and is reached in one of these ways:

| Source | Count | What |
|---|---:|---|
| `__xc_a..__xc_z` initializer table `0x10110218`-`0x10114c6c` (bounds from the `_initterm` call in the CRT start-up) | 4,663 | C++ dynamic initializers: mostly 16-byte `jmp` stubs into the real initializer, and `push dtor; call atexit` stubs. BH has thousands of globals (D2 pointer tables, stat/skill strings, `Patch` objects, config) |
| other CRT tables (`__xi`/`__xp` at `0x10114c74`/`0x10114c9c`, UCRT `{init, uninit}` tables `0x10118cd0..0x10118d2c`, x87 dispatch `0x1012b180`) | 25 | CRT |
| absolute code addresses used as immediates (found through the base relocations) | 642 | **BH hook stubs** referenced from `Patch` objects (`mov [esi+0x14], offset hook`), the worker thread `0x10078df0` started by `Initialize`, `atexit` destructor stubs `0x1010ef80..0x1010f2xx`, and others |

Left out on purpose: catch-funclet continuation addresses (`mov eax, offset resume; ret`: 23 from `Catch@` funclets plus 1 from a fragment at `0x10065e6d`) and
the 7-entry table at `.data:0x10145668`, which may not be a function table. Its first entry `0x10100000` is an
`__ehhandler$` stub. No vftable slot pointed outside a function: 0 non-function slots in 201 vftables. After the additions, the report's
only remaining candidates are these 26 deliberately excluded addresses.

## Library code

The CRT, vcruntime and MSVC STL (msvcp) are linked statically. The only imports are KERNEL32 (111),
USER32 (13), SHLWAPI (`PathRemoveFileSpecA`) and VERSION (3). The library part starts around
**`0x100d0e00`** (`std::regex_error`, `std::_Lockit`, `std::locale::_Locimp`, then UCRT up to `0x100fe8e0`).
BH's own code with its inlined STL templates is `0x10001000`-`~0x100d0880`. The worker-thread pool
(`FUN_100d0640`/`FUN_100d06f0`, `Concurrency::concurrent_queue<TaskHolder*>`) is BH's `Task` code and lies just before the
library. Header-only libraries are inlined into the app range:

* **nlohmann::json 3.11.2** (`json.hpp`, version string `961c151d2e87f2686a955a9be24d316f1362bf21 3.11.2`;
  assert path `C:\projects\Project-Diablo-2\BH\ThirdParty\nlohmann\json.hpp`). It reads `BH.json` and the
  launcher's `launcherSettings.json`.
* BH's own JSON classes (`JSONElement/JSONObject/JSONArray/...`, `C:\projects\Project-Diablo-2\BH\BH\JSONObject.cpp`).
* A mustache-style template engine (`{{#stats}}...` and the `ReplaceContext`/`ReplacementValue` types) for
  `StashExport`.
* `std::regex` (loot filter `Alias`/`Formula` and the `^(.*?)(\d+)$` patterns), `std::function`, `concurrent_queue`.

Source tree evidence: `__FILE__`/assert paths are `C:\projects\Project-Diablo-2\BH\BH\JSONObject.cpp` and
`StatsDisplay.cpp`. So BH lives at `BH\BH\` in PD2's monorepo (the upstream fork layout). Only these two
`.cpp` names are visible, so Phase 3 will have to use class/RTTI evidence and the upstream file list.

## Classes (RTTI)

| Group | Classes | vftables |
|---|---|---|
| **Modules** (`Module` base, 18 virtual slots: destructor, load/unload and the event handlers; map them to names in Phase 5 from upstream `Module.h`) | `Module` `0x10129b6c`; `GameSettings` `0x10123df8`, `ScreenInfo` `0x10123e44`, `Gamefilter` `0x10123ba8`, `Bnet` `0x10123d80`, `Item` `0x10123d28`, `Party` `0x10123cdc`, `StashExport` `0x10123ea4`, `ChatColor` `0x10123c24`, `MapNotify` `0x10129ab4` | 10 × 18 slots |
| Module event dispatch (`ModuleManager::__InvokeHandlers_ModuleManager_On{Loop,Draw,OOGDraw,AutomapDraw,GameJoin,GameExit,Key,LeftClick,RightClick,ChatMsg,ChatPacketRecv,GamePacketRecv,RealmPacketRecv}<Module>`, `Module::__InvokeHandlers_Module_UserInput<Module>`) and their `__eventNode_*` types | 14 handler classes | 14 × 3 slots `0x10129b1c`-`0x10129c38` |
| **Loot filter (ItemDisplay)** rule conditions | `Condition` base + 52 conditions (`ItemCodeCondition`, `QualityCondition`, `ItemStatCondition`, `MapTierCondition`, `CraftLevelCondition`, `RerollLevelCondition`, `AutomodCondition`, `FoolsCondition`, `ShopCondition`, `FilterLevelCondition`, ...) + `AndOperator/OrOperator/NegationOperator/LeftParen/RightParen` | 56 × 2 slots, `0x1012967c`-`0x10129a24` |
| Loot-filter caches | `RuleLookupCache<...>` (3 instantiations), `ItemNameLookupCache`, `ItemDescLookupCache`, `MapActionLookupCache` | 6 × 2 slots |
| UI (`Drawing::`) | `Hook`, `Texthook`, `Checkhook`, `HookGroup`, `UI`, `UITab`, `StatsDisplay` | 7 (`0x10125ee4`-`0x10126aac`) |
| JSON | `JSONElement`, `JSONObject`, `JSONArray`, `JSONString`, `JSONNumber`, `JSONBool`, `JSONNull` | 7 × 9 slots |
| function-pointer RTTI types | `ReplaceContext` callback, `JSONObject*(UnitAny*, ItemsTxtStat, ItemStatCostTxt*, int)` (StashExport stat formatter), 10 lambdas | |

**No `Maphack`, `AutoTele` or other "hack" module exists** (no class, no strings): PD2's BH has the maphack
removed. The modules that remain are `Item` (item display, loot filter, notifications), `ScreenInfo`
(automap info, buffs, experience meter; attribution from config keys and upstream, not yet checked per function), `Gamefilter` (game list), `Bnet`
(autofill game name/password), `Party` (auto party, auto corpse loot), `StashExport` (mustache export),
`ChatColor` (whisper colors), `GameSettings` (settings UI and hotkeys), and `MapNotify` (drop notifications on the map).

`RecoverClassesFromRTTIScript` was run on the saved project after both exports. It added class structures and
renamed constructors, destructors and vfunctions inside the project; the exports keep Ghidra's default names.
Result: 216 classes processed, 388 member functions assigned, 93 constructors (+132 inlined), 76 destructors (+87 inlined),
818 virtual functions (132 deleting destructors), 82 undetermined ctor/dtor. The saved project has 12,508 functions (2 created by the
script) and 4,643 named. Many `Module` slots resolve to the shared `guard_check_icall` no-op (empty default handlers).

## PD2-specific code and interop

* **Entry**: `DllMain` = `FUN_1007a0a0`. On `DLL_PROCESS_ATTACH` it stores the BH folder: from
  `GetModuleFileNameA` + `PathRemoveFileSpecA`, or, when `lpReserved != 0`, from an injector block at
  `lpReserved+8` (the upstream BH injector convention). Then it calls the exported **`Initialize`
  (`0x100462e0`)**. On detach it calls `FUN_10046a10` (shutdown).
* **Exports** used by ProjectDiablo.dll (its strings list `BH.dll`, `BHIsReady`, `_BHGetConfig@4`,
  `_BHSetConfig@8`, `_BHInteract@4`, `BHShowPlayersGear`, `_BHOnProperties@4`, `_BHOnPropertyBuild@16`,
  `_BHOnDamagePropertyBuild@16`, `BHNotifyLevel%d`): `BHIsReady` `0x10047d60`, `_BHGetConfig@4` `0x10047d70`,
  `_BHSetConfig@8` `0x10047e80`, `_BHInteract@4` `0x10047fc0`, `BHShowPlayersGear` `0x10048130`,
  `_BHOnProperties@4` `0x100974a0`, `_BHOnPropertyBuild@16` `0x10099080`, `_BHOnDamagePropertyBuild@16`
  `0x10098c80`. So **ProjectDiablo drives BH**: it builds item tooltips and calls back into BH for the
  property lines (the loot filter's stat display), and it reads and writes BH's config.
* **ProjectDiablo.dll → BH**: in `Initialize`, `GetModuleHandleA("ProjectDiablo.dll")` +
  `GetProcAddress("_D2Client_PlaySoundWithCustomVolumeOrPriority@20")` → `DAT_1014d39c`. This is ProjectDiablo's
  only export. BH uses it in `FUN_100c2860` for loot-filter drop sounds (`drop_sounds`).
* **D2GL**: `GetModuleHandleA("glide3x.dll")`, else `"ddraw.dll"`; `GetProcAddress("d2glIsReady")` →
  `DAT_1014df0c`, `GetProcAddress("_d2glConfigQueryImpl@4")` → `DAT_1014dfb4`. If both exist, it calls
  `d2glConfigQuery(3)` (`push 3` at `0x10046449`) and stores `!= 0` in `DAT_1014d398`. That flag (together with
  `DAT_1014d39a`) gates drawing in `FUN_10095ad0` and `FUN_100bc680`, so BH skips its own overlay drawing
  when D2GL draws it.
* **Loot filter selection** (`FUN_10047060`): it reads `./AppData/launcherSettings.json` →
  `SelectedAuthorAndFilter.selectedAuthor.author` / `selectedFilter...`, loads `filters\local\<name>` or
  `filters\online\<author>\<name>`, and falls back to `loot.filter` and then `default.filter`. Errors go to
  `MessageBoxA(..., "Failed to load ProjectDiablo lootFilter")`. The filter is BH's own parser, not
  ProjectDiablo code. The PD2 filter language additions show up as conditions: `MapIdCondition`,
  `MapTierCondition`, `CraftLevelCondition`, `RerollLevelCondition`, `AutomodCondition`, `ShopCondition`, `FoolsCondition`, `FilterLevelCondition`.
* **Game version check** (`FUN_10079e10`/`FUN_10079d10`): `GetFileVersionInfoA("Game.exe")` must be
  `1.0.13.60` (1.13c) or `1.0.13.64` (1.13d). Otherwise: "Game version not detected or is unsupported!". The
  `Patch` table keeps offsets for both versions.
* **Game patches**: BH builds `Patch` objects `{dll, opcode (E8 call / E9 jmp / 90 nop), offset_113c,
  offset_113d, length, hook, saved bytes, installed}` in static initializers. The raw export shows at least
  **35** of them (31 calls, 4 jumps) in `FUN_100017f0` and the initializers at `0x100180f0`-`0x1001e1d0`, listed in
  `fd2_work/scratch/phase2/BH_patches.tsv` (DLL indexes as raw enum values, e.g. `0` = D2Client, `0xc`). The
  hook targets are naked asm stubs at `0x10079a40`-`0x10079c60`+, which were added as functions. Phase 4/5
  should decode the DLL enum against `Project-Diablo-2/BH` `Patch.h` and diff the list with upstream.
* **Build/version strings**: none. There is no version resource, no `BH v…` string and no date. The only build
  identifiers are the PE timestamp (2026-05-13 15:41:30 UTC), the PDB path and nlohmann 3.11.2. Config files:
  `BH.json` (+ `BH.json.bak`), sections `/bnet /general /lootfilter /lootfilter/legacy_settings /game /party
  /screen_info /stash_export /bh_ui`. (The upstream BH used `BH.cfg`. PD2 moved to JSON.)

## Observations for later phases

* **Phase 3**: give `LibStart` ≈ `0x100d0e00` by hand. Few `__FILE__` anchors exist (2), so file attribution
  must come from class membership (vftable → methods → `<Class>.cpp`, following upstream's
  `Modules/<Name>/<Name>.cpp` layout) and the upstream file list. The 4,663 initializer stubs in `.extra.c`
  are trivial and can go to one `_initializers` file.
* **Phase 5 (BH diff)**: the public fork `Project-Diablo-2/BH` should contain all of the classes above.
  Check `Initialize`'s D2GL/ProjectDiablo lookups, the launcherSettings filter selection, the 1.13c/1.13d
  `Patch` list and the PD2 conditions against it. Anything missing there is a private change.
* `RecoverClassesFromRTTIScript` gives `Module` subclasses' vfunctions class names in the project (see the
  `BH_report_rtti.txt` vftable listing). Use that project to read individual modules.
