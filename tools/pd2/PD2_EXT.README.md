# PD2_EXT.dll: reconstructed source tree

Built from `fd2_work/3_ghidra_fixed/PD2_EXT_decompiled.c` (+ `.extra.c`), the Ghidra 12.1.4 export of Project Diablo 2's
loader DLL for Diablo II 1.13c (VS2022, linker 14.39, built 2026-05-13, PDB
`C:\projects\Project-Diablo-2\scripts\build-pd2ext-release\PD2_EXT.pdb`): **{{functions}} functions**, {{app_functions}}
of them PD2 code and the rest the statically linked MSVC runtime. It is decompiler output sorted into a source layout,
meant for reading and navigation; it does not compile back into a working DLL. Every number below is filled in by the
generator (`tools/src/Pd2Readme.cs`) from the files in this folder.

## Layout

```
dllmain.cpp                  PD2's own code: the 4 functions at 0x10001000-0x10001241 (DllMain, patch installer, two hooks)
lib/                         static MSVC runtime (vcruntime + UCRT, 0x10001242+) and the one SEH unwind funclet
include/pd2_ext_decomp.h     base types + a prototype for every function, grouped by file
include/globals.h            every DAT_ global, typed; the patched Game.exe addresses and saved call targets under reference names
include/imports.h            Windows/CRT names the code uses (KERNEL32, USER32)
include/missing_globals.h    data labels and other names globals.h does not cover
include/ghidra_compat.h      Ghidra helper operations, pseudo-registers, opaque types
symbols.csv                  address, Ghidra name, new name, file, confidence, evidence
FILES.md                     per-file table: address range, function count, confidence breakdown
exports.tsv                  the {{exports}} exports: ordinal, address, name, forwarded_to ({{exports_forwarded}} are PE forwarders)
imports.tsv                  ordinal imports (none) and the game addresses named through the reference trees
patches/                     not generated here (phase 4: the runtime patches as data); the generator never touches it
```

## What the module does

PD2_EXT is a `version.dll` proxy. PD2's Storm.dll has its `VERSION.dll` import renamed to `PD2_EXT.dll`
(`0_inventory/INVENTORY.md`, patch 1), so Windows loads PD2_EXT as soon as Storm loads, and Storm's
`GetFileVersionInfoA/SizeA` and `VerQueryValueA` imports resolve through it. Its exports are **PE forwarders** to the
real `version.dll` (`exports.tsv`, column `forwarded_to`), so there is no proxy code. The work happens in DllMain and
three patches:

| Function | Name here | What it does |
|---|---|---|
| 0x100011c0 | `dllmain_DllMain_100011c0` | `DLL_PROCESS_ATTACH` only: saves the target of the call at Game.exe 0x4082dd (`Orig_Game_sub_00407ee0`) and redirects the call to 0x10001080. Game.exe 1.13c is never relocated, so the addresses are absolute; nothing is checked first. |
| 0x10001080 | `dllmain_InstallGamePatches_10001080` | runs when Game.exe's `WinMain` body (`sub_00408250`) reaches 0x4082dd: redirects the call at 0x40763f in `sub_00407600` (the data-load call, `D2Win_10086`, saved as `Orig_D2Win_10086`) to 0x10001000; overwrites 0x4083ef-0x40840f (33 bytes) with NOPs; if Fog.dll's bytes at +0xff5f are `83 C4 0C 5E 83 C4 14 C3`, redirects the call at Fog+0x17ea7 to 0x10001050; then calls the saved `Orig_Game_sub_00407ee0`. |
| 0x10001000 | `dllmain_LoadProjectDiablo_10001000` | calls `Orig_D2Win_10086` (loads the game data files), then `LoadLibraryA("ProjectDiablo.dll")`; a message box for either failure. |
| 0x10001050 | `dllmain_FogInstallPath_10001050` | replaces `Storm_572(path, '\\')` (strrchr) inside `Fog_10116` (0x6ff67e60, the InstallPath query): it cuts the path back one more folder, so `...\Diablo II\ProjectD2\Game.exe` gives `...\Diablo II\`, where the vanilla MPQs are. Ghidra shows the rel32 it writes as `&UNK_1000104b - lpAddress` (= 0x10001050 - (Fog+0x17ea7) - 5). |

Phase 4 owns the patch list itself (`patches/`).

## How functions were placed

PD2_EXT has no `__FILE__` strings, no RTTI of its own and no static initializers, so nothing in the binary names a
source file. The app code is one contiguous block before the CRT and it is a single object file's worth of code, so it
is placed by hand (`FileOverrides` in `ModuleConfigs.PD2_EXT`, reason "no file evidence; loader DLL with one object
file of app code") in `dllmain.cpp`, a plausible name, not a recovered one.

| Confidence | Meaning | Count | % of all |
|---|---|---:|---:|
| anchor | references the file's own `__FILE__` string | {{n_anchor}} | {{p_anchor}} |
| range / linked / inferred / nearest | (see the ProjectDiablo tree) | {{n_range}} / {{n_linked}} / {{n_inferred}} / {{n_nearest}} | |
| gap | file name unknown | {{n_gap}} | {{p_gap}} |
| manual | placed by hand, reason on the function | {{n_manual}} | {{p_manual}} |
| lib | static runtime (`LibStart` = 0x10001242, `__security_check_cookie`) and EH funclets | {{n_lib}} | {{p_lib}} |

There are {{files}} files: {{files_named}} named (`dllmain.cpp`), {{files_lib}} in `lib/`. {{lib_named}} library
functions carry names from Ghidra (Function ID, demangler, RTTI), {{lib_unnamed}} keep `FUN_<address>`.

**Dropped:** the export lists 12 functions that are not code. Ghidra 12 creates one `halt_baddata()` pseudo-function per
forwarder export in its `EXTERNAL` block (0x1001a000-0x1001a02c, outside every section of the image).
`ModuleConfig.DropOutsideImage` removes them; the forwarders are documented in `exports.tsv` instead.

## Naming

* PD2 functions are `<File>_<hint>_<address>`; the hints (`DllMain`, `InstallGamePatches`, `LoadProjectDiablo`,
  `FogInstallPath`) are set by hand in `ModuleConfigs.PD2_EXT` from what the bodies do.
* Library functions keep Ghidra's names; one is set by hand: 0x10001e40 `strrchr` (UCRT SSE2 version, which the Fog
  hook calls in place of `Storm_572`).
* Game addresses use the reference trees (`sigmaRE/5_game_source`, read-only):
  * {{globals_game_addresses}} Game.exe addresses the code writes to are `Game_<reference function>_<va>`, e.g.
    `Game_sub_00408250_004082dd` (the call in `WinMain`'s body), `Game_sub_00407600_0040763f` (the data-load call), the
    NOP block `Game_sub_00408250_004083ef` ... `_0040840f` (`ModuleConfig.AbsoluteGameRefs`). `globals.h` gives each
    one's offset inside the reference function and its file.
  * {{globals_saved_targets}} globals keep the original target of a redirected call, named `Orig_<reference name>`
    after the target read from the 1.13c Game.exe's `E8 rel32` (`ModuleConfig.SavedCallTargets`): `Orig_D2Win_10086`
    (Game.exe's import thunk 0x4074c6) and `Orig_Game_sub_00407ee0`.
  * The Fog.dll patch is relative to the module handle (`GetModuleHandleA("Fog.dll")` + offset), so it can't be renamed
    in the code; its reference names (`Fog_10116`, `Storm_572`) are given above.

## Types and untraced values

* Ghidra's `undefinedN` types are replaced by `uint8_t`/`uint16_t`/`uint32_t`/`uint64_t`; `_DAT_x` is written `DAT_x`.
* Untraced placeholders (`in_*`, `unaff_*`, `extraout_*`, `in_stack_*`; one declaration per function per name):
  **{{ph_before_decl}} in the raw export → {{ph_after_main_decl}} after FixAndExport** ({{ph_change_main}}; uses
  {{ph_before_uses}} → {{ph_after_main_uses}}), plus {{ph_after_extra_decl}} in `.extra.c` (functions added from data,
  {{ph_after_extra_uses}} uses) = {{ph_after_decl}}. The baseline is the raw phase 2 export (`3_ghidra/`, no
  `.extra.c` yet; `ModuleConfig.BaselineExport`). The phase 2 report counts declaration *lines* instead of distinct
  names per function and gets 128 → 90 for the same exports (same uses). All of them are in the CRT (SEH funclets and `_EH4_*` helpers that
  use the parent frame, upper bytes of `bool` returns, x87 state). In the tree each is declared locally with
  `/* not traced by Ghidra */` ({{tree_untraced_locals}} declarations).
* Undeclared names: {{undeclared_names}} names ({{undeclared_uses}} uses) are not declared by any header in `include/`
  ({{undeclared_categories}}): {{undeclared_examples}}. Windows/CRT names are checked against the DLL's own imports (no
  system DLLs on Linux).
* `globals.h` declares {{globals_total}} globals.

## Re-running

```
tools/rebuild.sh --pd2 --module PD2_EXT      # a few seconds: the tree, Declare, this README
```

The generator overwrites generated files and deletes the old generated `.cpp` files of the tree (only files that start
with its own header, so `patches/` and other hand-written sources stay). Manual decisions live in the tool code
(`ModuleConfigs.PD2_EXT` in `tools/src/Rebuild.cs`), never in this folder.
