# Phase 2: ProjectDiablo.dll decompile

Static analysis of the workspace copy `fd2_work/bin/ProjectDiablo.dll` (4,312,576 bytes, VS2022, image base
0x10000000). Sections: `.text` 0x10001000 (0x321fe4), `.rdata` 0x10323000 (0x7426c), `.data` 0x10398000
(0x153104, 0x3dc00 raw), `.rsrc`, `.reloc`. Not packed or virtualized: the code disassembles as normal MSVC output
(SEH4 prologues, `/GS` cookie `DAT_1039800c`, MSVC thread-safe statics), and every decompile completed.

## How it was run

| | |
|---|---|
| Ghidra | 12.1.4 headless, `GHIDRA_HEADLESS_MAXMEM=8G` |
| Language / compiler spec | `x86:LE:32:default`, `windows` |
| Project | `fd2_work/ghidra_projects/ProjectDiablo/ProjectDiablo.gpr` (saved after every step; holds the strict repairs, the 2 prototypes and the 1,709 added functions) |
| Analyzers | Ghidra's default Windows PE set. The `SetAnalysisOptions.java` pre-script turned these on explicitly: Windows x86 PE RTTI Analyzer, Demangler Microsoft, Function ID, Windows x86 PE Exception Handling, Decompiler Parameter ID, Decompiler Switch Analysis. Create Address Tables, Shared Return Calls, Call Convention ID and Apply Data Archives were already on by default. There is no PDB. |
| Scripts (`tools/ghidra/`) | `SetAnalysisOptions.java` (shared with the PD2_EXT job), `FixAndExport.java` (now takes an optional `strict` argument, see below), `FindDataFunctions.java` (new), `AddFunctions.java` (now accepts `@file` address lists), `ApplyPrototypes.java` (new), `Pd2Report.java` (from the PD2_EXT job) |
| Step scripts / logs | `fd2_work/logs/pd_b{1,3,4,5,6}.{log,script.log,console,start,end}`. The first attempt without `strict` is in `pd_run{1,3}.*` |

| Step | Wall time |
|---|---:|
| Import + auto-analysis (analyzer total 517 s: Decompiler Parameter ID 175 s, Decompiler Switch Analysis 158 s, x86 Constant Reference 44 s, Stack 43 s, Function ID 6 s, RTTI < 1 s) | ~9 min |
| Raw export (`FixAndExport.java <out> 0`, 12,078 functions) | ~5.5 min (whole run 1: 870 s) |
| FixAndExport, 6 passes, strict (converged: 0 changes in pass 6) | 984 s |
| FindDataFunctions + AddFunctions (1,699) + report | 77 s |
| Round 2 AddFunctions (10) + report | 28 s |
| ApplyPrototypes (2) + FixAndExport run 2 (strict, all 13,787 functions, converged in pass 3) + report | 670 s |

## Numbers

| | |
|---|---:|
| Functions found by Ghidra's auto-analysis (main export) | **12,078** (123 thunks) |
| Functions added by `AddFunctions.java` (`.extra.c`) | **1,709** (1,699 in round 1, 10 in round 2) |
| Total (Ghidra project = main + extra exports, no overlap) | **13,787** (127 thunks), plus 318 externals |
| Function ID (FID) matches | **47** (VS2012-2019 databases; VS2022 has none). 38 are in the static CRT at 0x1030181f-0x10303010 (`__scrt_*`, `dllmain_*`, `__security_init_cookie`, `__SEH_prolog4`, `__except_handler4`, `__alldiv`/`__allmul`/..., `___std_fs_*`). 9 in app code are false positives (`std::vector<CHN*>::_Buy_raw` x3, `MemMapReadOnly::scalar_deleting_destructor` x2, `TPI1::PRECEX::operator=`, `Take_contents`, `basic_stringstream` dtor x2) |
| Other non-default function names | 2,575 `Unwind@` and 18 `Catch@`/`Catch_All@` EH funclets (PE exception-handling analyzer), the export `_D2Client_PlaySoundWithCustomVolumeOrPriority@20` @ 0x10233b50, `entry` @ 0x103027ff |
| Demangled names | 136 C++-decorated imports from MSVCP140 (out of 325 imports from 20 DLLs). Only externals and their thunks get these names |
| RTTI type descriptors | **55**: only `std::` (exceptions, iostreams/filebuf, `std::regex` `_Node_*`, `std::filesystem::filesystem_error`, error categories, `collate<wchar_t>`) and `nlohmann::json_abi_v3_11_2::detail::*` (exception types and output adapters). No app classes |
| vftables | **39** (all std / nlohmann). Their 76 slot functions were already Ghidra functions. 5 of them carry import names (`showmanyc`, `_Incref`, `_Decref`, `purecall`, `scalar_deleting_destructor`); the rest are `FUN_`, at 0x1020f250-0x10266e27 plus 0x102d3c18 and 0x10302088 |

### Untraced placeholders (`in_*`, `unaff_*`, `extraout_*`, `in_stack_*`)

Declarations are counted the way the sigmaRE README counts them: one per function per name. "Uses" are the
occurrences of those names, which is what FixAndExport's per-pass log prints.

| Export | Functions | Declarations (in functions) | Uses |
|---|---:|---:|---:|
| raw `3_ghidra/ProjectDiablo_decompiled.c` | 12,078 | **3,472** (2,343) | 7,839 |
| fixed `3_ghidra_fixed/ProjectDiablo_decompiled.c` | 12,078 | **3,088** (2,231), -11% | 6,905 |
| `3_ghidra_fixed/ProjectDiablo_decompiled.extra.c` | 1,709 | 141 (116) | 283 |

Per pass, in uses (strict run 1): raw 7,839 -> pass 1: 7,854 (285 functions changed) -> pass 2: 7,028 (27) -> pass 3: 6,941 (19) ->
pass 4: 6,909 (4) -> pass 5: 6,903 (1) -> pass 6: 6,901 (0, converged). Totals: 81 stack params (16 reverted), 224
register params, 83 return types, 706 return types reverted by `strict`, 31 errors (exceptions caught and skipped).
Run 2 came after the prototypes were applied and covered all 13,787 functions: pass 1: 7,702 -> pass 2: 7,722 -> pass 3: 7,188 (0 changed). It added 255 stack params (10 reverted) and 285 register params, and reverted 443 return types.

What is left in the main export: `unaff_EBP` 1,315 (EH funclets using the parent frame), `extraout_ECX` 942,
`extraout_EDX` 478, `extraout_var` 149, `in_stack` 80, `in_XMM*` 50, `extraout_DL` 22, plus a few others.

**FixAndExport `strict` (new, opt-in third argument).** The first run used the reference method unchanged.
It reached 2,915 declarations, but only through 6,202 added register params. `extraout_EDX` after calls to
`FUN_1020f410` (`*p = 0`, 2,619 callers; the callers had only kept EDX live across the call) gave that
function an `undefined8` return. The callee never writes EAX/EDX, so `reg_EAX`/`reg_EDX` became its parameters,
and from there they spread up the call graph: 3,338 functions got a bogus `reg_EDX` and 2,661 a bogus `reg_EAX`.
With `strict`, a return type is kept only if the callee's decompile then shows no `in_EAX`/`in_EDX`/`in_ST0`.
That run has 224 register params and no cascade. Without the argument the script behaves as before. The PD2_EXT
export was produced without `strict` and may show the same effect (check `reg_EDX` counts there). The unguarded
export is kept for comparison in `fd2_work/scratch/pd2_phase2_v1/`.

### Export sizes

| File | Lines | Bytes |
|---|---:|---:|
| `fd2_work/3_ghidra/ProjectDiablo_decompiled.c` (raw) | 482,252 | 11,030,228 |
| `fd2_work/3_ghidra_fixed/ProjectDiablo_decompiled.c` | 483,775 | 11,107,179 |
| `fd2_work/3_ghidra_fixed/ProjectDiablo_decompiled.extra.c` | 47,645 | 1,083,137 |

Every function has a block, and no decompile failed. The `.extra.c` blocks are the strict run-2 decompiles of the
added functions, in AddFunctions order. Run 2 decompiled all 13,787 functions and the file was split by address.
The header line of the main export was edited to give the totals of both runs. Side files in `3_ghidra_fixed/`:
`ProjectDiablo_datafuncs*.{txt,tsv}` (candidate lists and the classification of every data pointer into
`.text`), `ProjectDiablo_prototypes.tsv`, `ProjectDiablo_report.txt` (Pd2Report), and `ProjectDiablo_game_pointers.tsv` (see below).

## Functions reached only through data (step 4)

`FindDataFunctions.java` reads every aligned dword in `.rdata`/`.data`. It found **72,757 distinct targets in
`.text`**. 6,078 were already functions and none fell inside a function body or in the middle of an instruction or
data item. A target counts as a function if it is already disassembled code with no function, a call target, a
typical prologue after padding, ret or jmp, or 16-byte aligned right after `int3` padding.

* **`__xc_a` C++ dynamic-initializer table, 0x1032356c-0x10367298, 69,452 entries.** After entry 0, the entries
  rise strictly from 0x10001000 to 0x1020f190, so they follow the link order of the translation units.
  * 64,961 are 16-byte `jmp rel32` stubs into 1,067 accessor functions, each reached by ~53-62 stubs (one per TU that
    includes the game-pointer header). They were **not** created as functions (verdict `jmpstub` in the TSV); they
    would add about 65k one-line blocks. They form 501 address clusters inside the TUs' own code, so they mark TU
    positions, which Phase 3 can use for file boundaries.
  * 1,194 `call accessor; mov eax,[eax]; mov [global],eax; ret` copies and ~113 ordinary initializers were added.
* Patch tables (see below): 143 hook functions added (138 from 0x103c7f50, 5 from 0x10367ee0), plus 4 `jmp` hook stubs and
  their 2 naked-hook destinations in round 2.
* Other `.data` tables: 249 added, from command/handler tables at 0x103995c4-0x10399834 (stride 0xc) and
  0x1039984c-0x10399a24, and from records with stride 0x550 at 0x1039a684-0x103c2ac8 that hold callbacks.
* Rejected: 11 targets in the CRT (0x10301cb4-0x103027b3). They are `__except` filter and handler continuations
  inside vcstartup functions, not function starts.

## Library code

* **MSVC CRT startup (static vcstartup + msvcprt helpers):** 0x1030181f-~0x10303030, named by FID. The EH
  funclets (`Unwind@`/`Catch@`) follow in 0x10303xxx-0x103161d3, mostly in `.text$x` at the end of `.text`.
  UCRT, VCRUNTIME140 and MSVCP140 are dynamic (`api-ms-win-crt-*`; MSVCP140 provides 148 imports).
* **STL / std::regex / std::filesystem / nlohmann::json 3.11.2:** these are header templates, instantiated as COMDATs
  among the app's TUs. The vtable slot functions sit at 0x1020f250-0x10266e27. The json header path is
  `C:\projects\Project-Diablo-2\D2TemplateSource\ProjectDiablo\thirdparty\include\nlohmann\json.hpp` (a wide
  string). No FID database covers VS2022, so they stay `FUN_`.
* **OpenSSL** is dynamic (`libcrypto-1_1.dll`: `SHA256_Init/Update/Final`). The strings show no zlib, fmt, spdlog,
  Lua, SQLite, ImGui, MinHook or Detours.

## Observations for Phase 3/4

* **DllMain** = `FUN_102adad0` (called from `dllmain_dispatch` @ 0x103026c9). On `DLL_PROCESS_ATTACH` it calls the
  D2Template init `FUN_102ad560`, which runs these steps:
  1. `FUN_102ad400` fills the **module table @ 0x103c68a0**: 27 entries of `{wchar_t* name, HMODULE}` (0 D2Client, 1 D2CMP,
     2 D2Common, 3 D2Game, 4 D2Gfx, 5 D2Lang, 6 D2MCPClient, 7 D2Net, 8 D2Sound, 9 D2Win, 10 Fog, 11 Ijl11,
     12 Storm, 13 D2Gdi, 14 D2DDraw, 15 D2Direct3D, 16 D2Glide, 17 D2Multi, 18 D2Launch, 19 SmackW32, 20 Binkw32,
     21 Bnclient, 22 BH, 23 ddraw, 24 glide3x, 25 SGD2FreeDisplayFix, 26 SGD2FreeRes).
  2. `FUN_102eeba0(6000, "D2Win.DLL", ...)` opens pd2data, pd2assets, pd2maps and pd2monchars.mpq.
  3. **Patch installer `FUN_102ad020`** (VirtualProtect, then copy with `FUN_10272d50`, then compare) applies these tables:
     * **0x103c7f50**: 2,187 entries of 20 bytes, `{int dll (module-table index), DWORD offset, DWORD data, BOOL relative,
       DWORD size}`, ending at 0x103d2a2c (dll 27 marks the end). 800 entries are relative (call/jmp hooks) and 848
       have `data` pointing into `.text`. Per DLL: D2Client 1,408, D2Game 689, D2Common 82, Bnclient 4, D2Lang 3, D2Win 1.
     * **0x10367ee0** (`.rdata`): 35 entries, applied only when `DAT_104dbb3a == 0`.
     * `FUN_102ad1f0` applies the block patches in table 0x103681b0 (up to 0x400 bytes per entry).
* **Game-function resolver `FUN_102f10f0(__fastcall int dll, int value)`.** It has its own 15-entry DLL order (0 D2Client,
  1 D2Common, 2 D2Gfx, 3 D2Lang, 4 D2Win, 5 D2Net, 6 D2Game, 7 D2Launch, 8 Fog, 9 BnClient, 10 Storm, 11 D2CMP,
  12 D2Multi, 13 D2MCPClient, 14 D2Sound) and uses `GetModuleHandleW`/`LoadLibraryW`. A negative value is an
  ordinal for `GetProcAddress(-value)`; otherwise the result is base + offset. Values come from `{1.13c, 1.13d}`
  int pairs, indexed by `FUN_10253fc0()`. That function (via `FUN_10253f30`) returns 0 for "1.0.13.60", 1 for
  "1.0.13.64", and otherwise shows a MessageBox and exits.
  * 1,051 **accessors** (inline-variable style; for example `FUN_102a3460` returns `&DAT_104e7570`) and 842 **lazy
    `jmp [ptr]` thunks** were parsed into `3_ghidra_fixed/ProjectDiablo_game_pointers.tsv`: function, pointer global,
    DLL, 1.13c ordinal or offset, and reference name for the 527 ordinals. 144 resolver callers did not match the
    pattern and are listed as `unparsed`.
  * **Important:** Ghidra gives 871 of the lazy thunks a `void(void)` signature. The 5,883 call sites of those thunks
    lose their stack arguments silently, so no placeholder appears and FixAndExport cannot see it. 854 of them
    are stdcall/fastcall (the caller does not clean up). Phase 3 should apply the reference prototypes by
    ordinal/offset with `ApplyPrototypes.java` and re-export. This was done here only for the 2 cdecl thunks:
    `FUN_1029af00` = **Fog_10024** (assert: `szMsg, szFile, nLine`, 63 callers) and `FUN_102797f0` (3 args).
* **The 13 own `__FILE__` anchors** (address ranges of the functions that push the path):

  | File | push sites | functions | range | inline in export |
  |---|---:|---:|---|---|
  | `client/DrawHoverItem.cpp` | 1 | 1 | 0x10223db0 | yes |
  | `client/Sound/Sound.cpp` | 2 | 2 | 0x102322a0-0x10232b40 | yes |
  | `client/Sound/SoundChannel.cpp` | 1 | 1 | 0x10233fe0 | yes |
  | `client/Sound/SoundInstance.cpp` | 7 | 4 | 0x10234440-0x10235760 | yes |
  | `client/Sound/SoundSample.cpp` | 6 | 6 | 0x10235fd0-0x10236710 | yes |
  | `functions/D2CommonFunctions.cpp` | 4 | 3 | 0x10266e90-0x10269340 | no (Fog_10045 thunk `FUN_1029af90`) |
  | `functions/D2ServerFunctions.cpp` | 2 | 1 | 0x1026c940 | no |
  | `events/SkillEvents.cpp` | 1 | 1 | 0x102b0160 | no |
  | `functions/CubeFunctions.cpp` | 1 | 1 | 0x102bd5e0 | no |
  | `functions/D2NewFunctions.cpp` | 1 | 1 | 0x102beb20 | no |
  | `functions/HelperFunctions.cpp` | 1 | 1 | 0x102d3280 | no (Fog_10046 thunk `FUN_1029afc0`) |
  | `functions/ItemFunctions.cpp` | 9 | 3 | 0x102d7360-0x102d8c40 | yes |
  | `functions/SaveFunctions.cpp` | 16 | 10 | 0x102ea530-0x102eb930 | yes |

  Before the Fog_10024 prototype, only 1 of the 13 paths appeared in the decompiled C. Now 7 do. The other 6 are
  arguments to Fog memory thunks (Fog_10045/10046) and will appear once Phase 3 applies those prototypes. The
  address order is not alphabetical by path or by file name: `events/SkillEvents.cpp` (0x102b0160) lies between
  `functions/D2ServerFunctions.cpp` and `functions/CubeFunctions.cpp`, and `D2CommonFunctions` comes before `CubeFunctions`.
* **Other runtime-bound modules:** `FUN_10231510` loads BH.dll (`BHIsReady`, `BHShowPlayersGear`, `_BHGetConfig@4`,
  `_BHSetConfig@8`, `_BHInteract@4`, `_BHOnProperties@4`, `_BHOnDamagePropertyBuild@16`, `_BHOnPropertyBuild@16`).
  `FUN_102319a0` loads glide3x.dll/ddraw.dll (`d2glIsReady`, `_d2glConfigQueryImpl@4`, `_d2glConfigSetImpl@8`,
  `d2glToggleInterface`, `d2glCopyTooltipScreenShot`, `d2glGetGlobalXOffset/YOffset`, ...).
