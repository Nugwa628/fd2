# Phase 2: PD2_EXT.dll decompile

Static analysis of the workspace copy `fd2_work/bin/PD2_EXT.dll` (86,528 bytes, VS2022, linker 14.39,
built 2026-05-13, PDB `C:\projects\Project-Diablo-2\scripts\build-pd2ext-release\PD2_EXT.pdb`).
Not packed: `.text` entropy 6.58, entry point in `.text`, normal MSVC CRT start-up.

## How it was run

| | |
|---|---|
| Ghidra | 12.1.4 headless (`fd2_work/ghidra/support/analyzeHeadless`), `GHIDRA_HEADLESS_MAXMEM=4G` |
| Language / compiler spec | `x86:LE:32:default`, `windows` (Visual Studio) |
| Project | `fd2_work/ghidra_projects/PD2_EXT/PD2_EXT.gpr` (saved after every step) |
| Analyzers | default Windows PE set plus, set explicitly by `tools/ghidra/SetAnalysisOptions.java` (pre-script): Windows x86 PE RTTI Analyzer, Demangler Microsoft, Function ID, Windows x86 PE Exception Handling, Decompiler Parameter ID, Decompiler Switch Analysis. No PDB (not shipped). |
| Step scripts | `fd2_work/scratch/phase2/run1.sh` (import, analysis, raw export with `FixAndExport.java <out> 0`, report), `run2.sh` (`FixAndExport.java <out> 6`, `AddFunctions.java`, report), `run3.sh` (`RecoverClassesFromRTTIScript.java`, report) |
| Logs | `fd2_work/logs/phase2_PD2_EXT_run{1,2,3}.{log,script.log,console}` |

`FixAndExport.java` with 0 passes performs no repair, so it writes the raw decompile in the same
`//==== <name> @ <addr>` format. `tools/ghidra/Pd2Report.java` is new: it writes function counts, Function
ID matches, RTTI type descriptors, the vftables, and the function candidates that are reached only through data.

| Step | Wall time |
|---|---:|
| Import + auto-analysis (Ghidra's analyzer total: 29 s, of which Decompiler Switch Analysis is about 7 s and Decompiler Parameter ID 4.5 s) | 35 s |
| Raw export (0 passes) | 5 s |
| Whole run 1 (JVM start, import, analysis, export, report) | 48 s |
| FixAndExport (6 passes) + AddFunctions + report | 21 s |
| RTTI class recovery + report | 14 s |

## Numbers

| | |
|---|---:|
| Functions found by Ghidra (main export) | **470** |
| &nbsp;&nbsp;of which bogus forwarder entries (see below) | 12 |
| &nbsp;&nbsp;thunks | 17 |
| Functions added with `AddFunctions.java` (`.extra.c`) | **18** |
| Total in the exports | **488** (476 real functions + 12 forwarder stubs) |
| Created by RecoverClassesFromRTTIScript (in the project only, not in the exports) | 1 (489 functions in the saved project) |
| Function ID (FID) matches | **181** (14 of them `FID_conflict:`), all in 0x10001250-0x1000d7a0 |
| Named by analysis (FID + demangler + RTTI) | 184; still `FUN_` in the main export: 268 |
| RTTI type descriptors / vftables | 3 / 3 (`std::exception`, `std::bad_exception`, `type_info`: CRT only) |
| Untraced placeholder **declarations** (raw → fixed) | **128 → 90** (−30%); `.extra.c` has 3 more (2 `in_EAX`, 1 `unaff_retaddr`) |
| Untraced placeholder uses (raw → fixed) | 304 → 205 |
| FixAndExport repairs | 4 stack params, 43 register params, 6 return types; it converged after pass 4 (passes 5-6 changed the same 2 functions back and forth) |

The 90 remaining declarations: `unaff_EBP` 23 (SEH funclets and `_EH4_*` helpers that use the parent frame),
`extraout_var` 19 (upper bytes of `bool` returns), `unaff_retaddr` 8, x87/FPU state (`in_FPUControlWord`,
`in_ST0`, ...) 10, plus a handful of `extraout_ECX/EDX`. All of them are in the CRT.

| Export | Path | Size |
|---|---|---:|
| raw | `fd2_work/3_ghidra/PD2_EXT_decompiled.c` | 389,998 B |
| fixed | `fd2_work/3_ghidra_fixed/PD2_EXT_decompiled.c` | 390,591 B |
| added functions | `fd2_work/3_ghidra_fixed/PD2_EXT_decompiled.extra.c` | 5,888 B |
| reports | `fd2_work/scratch/phase2/PD2_EXT_report_{raw,final,rtti}.txt` | |

### Added functions (reached only through data or computed call targets)

| Address | Reached from | What |
|---|---|---|
| `0x10001000` | `rel32` that `FUN_10001080` computes and writes into Game.exe at `0x40763f` | **PD2 loader hook** (see below) |
| `0x10004e96`, `0x10004eb0`, `0x10004eb3`, `0x10004ee9`, `0x10005913`, `0x10005963`, `0x100071d2`, `0x100078a0`, `0x100078c0`, `0x10007a36`, `0x10007a96` | `{initialize, uninitialize}` pointer tables at `0x1000ed60`, `0x1000ed84` and `0x1000edbc` | UCRT `__acrt_initialize` callbacks |
| `0x100082e8`, `0x100083b0`, `0x10009808`, `0x1000bb70` | `__xi`/`__xc` initializer tables at `0x1000e144` and `0x1000e158` | CRT static initializers |
| `0x10002580` | `push 0x10002580` in `FUN_100024e0` (an SEH handler that is registered, never called) | vcruntime unwind handler |
| `0x1000d818` | `mov eax, 0x1000d818` in `FUN_10003efb` | `__ehhandler$` stub (`nop; nop; mov edx,[esp+8]` ... → `__CxxFrameHandler3`) |

Candidates came from `Pd2Report.java`: vtable slots, runs of 3 or more code pointers in data, and absolute code addresses used
as immediates (through the base relocations; catch-funclet continuation addresses are excluded). Every
candidate starts directly after `ret` or `int3` padding, and none lies inside an existing function. After the
additions the report finds 0 candidates. The first AddFunctions run had 16 addresses. The relocation scan was added later, and a
second run (`runadd.sh`, 18 addresses) rewrote `.extra.c`.

## Library code

Almost all of the module is the statically linked MSVC runtime. The only imports are KERNEL32 (73) and
USER32 (`MessageBoxA`). There is no MSVCP140/VCRUNTIME import.
From `0x10001242` (`__security_check_cookie`) up to the end of `.text`, the code is vcruntime (EH4 SEH,
`__CxxFrameHandler3`, `__std_exception_*`, `type_info`) plus UCRT (start-up, `onexit`, environment, locks,
heap, `strrchr` SSE2 at `0x10001e40`, FPU helpers). FID tags these as "Visual Studio 2019 Release", which is the
closest library set Ghidra ships. `.fptable` and the `VirtualProtect(0x10017000, 0x80, ...)` calls in
`FUN_1000758b`/`FUN_10007800` are the CRT's own guard around its function-pointer table, not patches. The CRT's
`GetProcAddress` uses (`FUN_10003184`, `FUN_1000758b`, `CorExitProcess` in `FUN_1000472d`) are delay-loaded API lookups.

**The PD2 code is 4 functions, `0x10001000`-`0x10001241`.**

## What PD2_EXT does

### version.dll proxy

The 12 exports aren't code. They're **PE forwarders** (export RVAs point into the export directory:
`0x10013d28` "version.GetFileVersionInfoA", ..., ordinals 1-11 and 14). Windows resolves them to
`version.dll`'s real functions. There is no hand-written proxy stub and no `LoadLibrary("version.dll")`.
Ghidra 12 still creates one pseudo-function per forwarder in its `EXTERNAL` block (`0x1001a000`-`0x1001a02c`,
`halt_baddata()` bodies). **Phase 3 should drop these 12 entries** (they are `GetFileVersionInfoA` ...
`VerQueryValueW` at `1001a0xx`). Storm.dll imports `GetFileVersionInfoA/SizeA` and `VerQueryValueA` through
this forwarding (see INVENTORY.md, patch 1).

### DllMain (`FUN_100011c0`, `__stdcall`, `ret 0xc`; called from `dllmain_dispatch`)

On `DLL_PROCESS_ATTACH` only:
1. `VirtualProtect(0x004082dd, 5, PAGE_EXECUTE_READWRITE)`, read the old `rel32` at `0x4082de`, write
   `E8 <0x10001080 - 0x4082e2>` (a `call FUN_10001080`), restore the protection.
2. Save the original call target, `old_rel32 + 0x4082e2`, in `DAT_100162d8`.
3. Return 1.

Game.exe is not looked up by name: the addresses are absolute (Game.exe 1.13c loads at its fixed base
`0x400000`). Nothing is checked first, neither the version nor the original bytes.

### Stage 2 (`FUN_10001080`, runs when Game.exe reaches `0x4082dd`)

`0x4082dd` is inside Game.exe's `WinMain` body (`sub_00408250` in `5_game_source/Game`). Stage 2 does this:
1. Game.exe `0x40763f` (inside `sub_00407600`, the game-init routine that calls `D2Win_10086`):
   it reads the old `rel32`, writes `E8 <0x10001000 - 0x407644>` and saves the original target
   (`old_rel32 + 0x407644`) in `DAT_100162d4`.
2. Game.exe `0x4083ef`-`0x40840f`: **33 bytes (`0x21`) overwritten with `0x90` (NOP)**.
3. `GetModuleHandleA("Fog.dll")`. If that succeeds and the 8 signature bytes at **Fog+0xff5f** are
   `83 C4 0C 5E 83 C4 14 C3` (dword compares against `0x5e0cc483` and `0xc314c483`), then it writes
   **Fog+0x17ea7** = `E8 <0x10001050 - (Fog+0x17eac)>`. That is inside `Fog_10116` (`0x6ff67e60` at Fog's
   default base, the InstallPath query). The patched call is the `Storm_572(path, '\\')` (strrchr) that cuts
   the module file name off.
4. Tail: `call [DAT_100162d8]`, the original target of the `0x4082dd` call.

Every write uses the same pattern: `VirtualProtect(addr, len, 0x40, &old)` → write → `VirtualProtect(addr, len,
old, &old)`.

### Hook `FUN_10001000` (replaces the call at Game.exe `0x40763f`)

```
r = original();                                   // DAT_100162d4, the routine that opens the MPQs
if (r == 0) MessageBoxA(0, "Failed to load game data files.\nPlease reinstall Project Diablo 2 into a valid
                         Diablo 2 LoD directory.", "Error: Failed to load game data files", 0);
else if (!LoadLibraryA("ProjectDiablo.dll")) {
        MessageBoxA(0, "Failed to load ProjectDiablo.dll. Please check your Anti-Virus logs and restore the file.",
                    "Error: Failed to load ProjectDiablo.dll", 0);  return 0; }
return r;
```

So **PD2_EXT is the code that loads `ProjectDiablo.dll`**, right after the base data loads. The
D2Win.dll code cave (INVENTORY.md, patch 2) also calls `LoadLibraryA("ProjectDiablo.dll")` after
`D2Win_10086`. The second load only adds a reference. If the call at `0x40763f` is the `D2Win_10086` call itself (it is the
fifth call in `sub_00407600`, after four Fog calls, which fits that offset), D2Win's cave loads the DLL inside
`original()` and PD2_EXT's call is the fallback. Phase 4 should confirm this from Game.exe's bytes.

### Hook `FUN_10001050` (replaces `Storm_572` inside `Fog_10116`, `__stdcall`, 2 args, `ret 8`)

`p = strrchr(path, c); if (p) { *p = 0; p = strrchr(path, c); } return p;`. It cuts the path back one
directory further. The default `InstallPath` (from `GetModuleFileNameA`) therefore becomes the **parent** of
the folder holding Game.exe: `...\Diablo II\ProjectD2\Game.exe` → `...\Diablo II\`, where the vanilla MPQs are.

### Preliminary patch list for Phase 4

| # | Target | Address / offset | Bytes written | When | Notes |
|---|---|---|---|---|---|
| 1 | Game.exe | VA `0x4082dd` (5 B) | `E8` + rel32 → `0x10001080` (at the preferred base) | DllMain, PROCESS_ATTACH | original target is kept and called at the end of stage 2 |
| 2 | Game.exe | VA `0x40763f` (5 B) | `E8` + rel32 → `0x10001000` | stage 2 | wraps the data-load call and loads ProjectDiablo.dll |
| 3 | Game.exe | VA `0x4083ef`-`0x40840f` (33 B) | `90` × 33 | stage 2 | which code is removed (in `WinMain`, after the calls above) must be read from Game.exe 1.13c bytes |
| 4 | Fog.dll | module + `0x17ea7` (5 B) | `E8` + rel32 → `0x10001050` | stage 2, only if Fog+`0xff5f` = `83 C4 0C 5E 83 C4 14 C3` | InstallPath = parent folder |

The relative offsets are computed at run time from the relocated addresses of the hooks, so they hold at
any PD2_EXT load base. No other `VirtualProtect` or `WriteProcessMemory` call exists outside the CRT. There
are also no `GetProcAddress` calls into game DLLs, and `GetModuleHandleA("Fog.dll")` is the only
`GetModuleHandleA` call.

## Observations for later phases

* **Phase 3 tree**: 4 app functions (`0x10001000`, `0x10001050`, `0x10001080`, `0x100011c0`), all before
  the CRT, then `lib/`. Set `LibStart = 0x10001242`. There are no `__FILE__` strings, so the whole app part
  is one `_unattributed` chunk; a single `dllmain.cpp` is a plausible name. Drop the 12 forwarder
  pseudo-functions. Ghidra treats `FUN_10001000` and `FUN_10001050` as `__cdecl`/unknown; the bytes show
  `__cdecl` (no args) and `__stdcall(char*, int)`.
* **Phase 4**: the four patch sites above, and the original bytes from the shipped Game.exe/Fog.dll.
  The Fog signature check is the only version guard. The Game.exe patches are unconditional, so
  PD2_EXT assumes Game.exe 1.13c (1.0.13.60).
* The decompiler loses the 4-byte `rel32` at `0x40763f`/`0x4082de` and shows it as constants
  (`0xfbf99bc`, `0xfbf8d9e`), which are `0x10001000-0x407644` and `0x10001080-0x4082e2`. Use the
  disassembly (`fd2_work/scratch/phase2/dis.py`) when you need the exact bytes.
* RecoverClassesFromRTTIScript only touched the 3 CRT classes (renamed 5 vfunctions and created 1 function).
  It ran after both exports, so the exports keep Ghidra's default names.
