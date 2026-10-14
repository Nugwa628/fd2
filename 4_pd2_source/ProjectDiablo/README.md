# ProjectDiablo.dll: reconstructed source tree

Built from `fd2_work/3_ghidra_fixed/ProjectDiablo_decompiled.c` (+ `.extra.c`), the Ghidra 12.1.4 export of the main
DLL of Project Diablo 2 (VS2022 build of `C:\projects\Project-Diablo-2\D2TemplateSource\ProjectDiablo\`, a D2Template
mod for Diablo II 1.13c): **13,787 functions**, 10,980 of them PD2 code and the rest the static C/C++
runtime and exception funclets. It is decompiler output sorted into the original project layout, meant for reading
and navigation; it does not compile back into a working DLL. Every number below is filled in by the generator
(`tools/src/Pd2Readme.cs`) from the files in this folder.

## Layout

```
client/ events/ functions/   files named by PD2's own __FILE__ strings (client/Sound/Sound.cpp, functions/SaveFunctions.cpp ...)
_unattributed/               object files and code blocks whose file name is not in the binary (see "Link units")
lib/                         static MSVC runtime (0x103017bb+) and the C++ EH unwind funclets of .text$x
include/projectdiablo_decomp.h   base types + a prototype for every function, grouped by file
include/globals.h            every DAT_ global, typed; game pointers under their reference names
include/imports.h            every game function the code calls, prototype from sigmaRE/5_game_source + its defining file
include/missing_globals.h    data labels and other names globals.h does not cover
include/ghidra_compat.h      Ghidra helper operations, pseudo-registers, opaque types
include/d2structs.h          game structures PD2 touches, each field proven by a PD2 access or marked assumed
game_pointers.tsv            every game function/variable PD2 binds at run time, with 1.13c/1.13d values and reference names
link_units.tsv               the 66 object files recovered from the static-initializer table, in link order
symbols.csv                  address, Ghidra name, new name, file, confidence, evidence
FILES.md                     per-file table: address range, function count, confidence breakdown
exports.tsv / imports.tsv    the DLL's one export; its ordinal imports (XInput only: PD2 imports no game ordinal)
```

## Link units: how the object files were found

PD2 has only 13 `__FILE__` strings of its own (asserts and Fog allocator calls), far too few to place 10,980
functions. The C++ dynamic initializers give the rest of the structure:

* MSVC puts every dynamic initializer into `.text$di` and ordinary code into `.text$mn`, and the linker lays out both
  groups object by object in the same link order. The `__xc_a` table (0x1032356c) lists the initializers in that
  order: 4,489 initializer functions and 64,961 16-byte `jmp` stubs (D2Template's game-pointer
  accessors, one per object that includes the pointer header).
* Every object that includes PD2's common header runs one initializer that builds a static array of act/area names
  ("the Blood Moor and Den of Evil", ...). That marks one object each: **66 link units**
  (`ModuleConfig.TuMarker`; the run of common-header initializers before the marker is moved into the unit too).
* Globals that only one unit's initializers touch are that file's own: 10,052 of them (file statics,
  D2Template's per-file copies of game pointers, static `std::string`s). A `.text$mn` function that uses them belongs to
  that unit: 951 functions in 52 units (50 contradicting
  the link order were dropped). The units' code appears in exactly the order of the table, which confirms the method.
* The `__FILE__` anchors name 13 units; one more, `functions/D2ClientFunctions.cpp`, is named by hand
  (`UnitFileOverrides`): its code passes the hand-written file name "D2ClientFunctions.cpp" with a line number to a game
  function, the way `functions/ItemFunctions.cpp` passes "ItemFunctions". 14 of the units have a name. The others keep their unit number:
  `_unattributed/between_<A>_and_<B>_unitNN.cpp`, where A and B are the nearest named files in link order. Code that
  sits between two units without any evidence is `_unattributed/between_<A>_and_<B>_after_unitNN.cpp`.
  `link_units.tsv` lists each unit's initializer range, code range and a few distinctive strings.

**Link order is not alphabetical.** In unit order the named files are `client/DrawHoverItem` (unit 4),
`functions/D2ClientFunctions` (9), `client/Sound/Sound`, `SoundChannel`, `SoundInstance`, `SoundSample` (12-15),
`functions/D2CommonFunctions` (27), `functions/D2ServerFunctions` (28), `events/SkillEvents` (33),
`functions/CubeFunctions` (35), `D2NewFunctions` (36), `HelperFunctions` (38), `ItemFunctions` (40), `SaveFunctions` (46).
`events/` sits inside the run of `functions/`, and `CubeFunctions` follows `D2ServerFunctions`. There are sorted runs
(the four Sound files; Cube..Save), which looks like the order of the project file, but the whole is not sorted. So
`ModuleConfig.Alphabetical = false`: `between_<A>_and_<B>` means *located* between, not *named* between.

## How functions were placed

| Confidence | Meaning | Count | % of PD2 code |
|---|---|---:|---:|
| anchor | references the file's own `__FILE__` string | 35 | 0.3% |
| range | in a named link unit: its static initializers, a user of the file's private globals, or between two such functions | 1,496 | 13.6% |
| linked | between two files, and its earliest caller is in this file (COMDAT/template code goes to the first object that uses it) | 151 | 1.4% |
| inferred | no callers, but between functions already placed in the file | 41 | 0.4% |
| nearest | short run without links, placed with the closest file | 4 | 0.0% |
| gap | file name unknown (an unnamed link unit, or a block between units); the evidence column still says how it was grouped | 9,253 | 84.3% |
| manual | placed by hand, reason on the function | 0 | 0.0% |
| lib | static runtime and EH funclets | 2,807 | (20.4% of all) |

1,727 PD2 functions (15.7%) are in a named file. The gap share is dominated by `.text$di`: of the
9,253 gap functions, 3,604 are static initializers (and their atexit destructors) of unnamed units, which are
placed in the right object but can't get a name; 5,649 are ordinary code. In `.text$mn` alone, 815 of
6,464 functions (12.6%) are in a named file. There are 103 files: 14 named,
87 under `_unattributed/` (large ones are split into 300-function chunks with an address suffix),
2 in `lib/`. Named files: `client/DrawHoverItem.cpp`, `client/Sound/Sound.cpp`, `client/Sound/SoundChannel.cpp`, `client/Sound/SoundInstance.cpp`, `client/Sound/SoundSample.cpp`, `events/SkillEvents.cpp`, `functions/CubeFunctions.cpp`, `functions/D2ClientFunctions.cpp`, `functions/D2CommonFunctions.cpp`, `functions/D2NewFunctions.cpp`, `functions/D2ServerFunctions.cpp`, `functions/HelperFunctions.cpp`, `functions/ItemFunctions.cpp`, `functions/SaveFunctions.cpp`.

Each function is preceded by a comment such as
`// 0x102ea530  (ghidra: FUN_102ea530)  [anchor] refs functions/SaveFunctions.cpp (assert lines ...)`; `symbols.csv`
has the evidence for every placement.

## Naming

* PD2 functions are `<File>_<address>` (e.g. `functions_SaveFunctions_102ea530`), or `sub_<address>` when the file is
  unknown. The address is always kept.
* Game-pointer thunks carry the name of the game function they jump to (`D2Common_10973`, or the reference tree's name
  for an offset target such as `UI_inv_6fb40f60`); their accessors are `GetPtr_<target>`. See "Game calls".
* Hints (4,867 functions) are inserted before the address when the body or a table says what a function is:
  * `_InitPtr_<target>_` (1,193): static initializer that copies a game pointer into the file's own global;
    `_init_` (3,297): any other static initializer.
  * `_Hook_<game function>_` (227): handler that the patch tables (0x103c7f50, 0x10367ee0) install into that
    game function; handlers of one feature read alike. `_Ptr_<Module>_<va>_` (46): a handler the tables
    store outside game code, e.g. into a game function-pointer table. Phase 4 decodes the tables themselves.
  * `_Config_<key>_` / `_ConfigN_` (6): uses one (N ≤ 7) key of `ProjectDiablo.json`; `_Settings_`
    (31): uses 8 or more (load/save of the whole file).
  * `_IntegrityCheck_ModuleScan_` (2): enumerates the loaded modules (see the last section).
  * `_Wraps_<Module>_<file>_` (29): passes a game `__FILE__` string (`..\Source\D2Client\UI\inv.cpp`) to a game
    function, i.e. it reimplements or wraps that game code. These paths are not PD2 files and are never anchors.
  * `_json_` (10), `_stl_` (11), `_regex_` (2), `_iostream_` (0):
    nlohmann::json 3.11.2 / MSVC STL template code, recognised by its error strings.
  * Hand-checked infrastructure (`ModuleConfigs.ProjectDiablo` in `tools/src/Rebuild.cs`, each with its reason):
    `DllMain`, `_Init_`, `_LoadModuleTable_`, `_PatchInstaller_`, `_BlockPatchInstaller_`, `_GetDllOffset_`,
    `_GameVersionIndex_`, `_DetectGameVersion_`, `_OpenMpqs_`, `_LoadBH_`, `_LoadD2GL_`.
* Library functions keep Ghidra's names.

## Game calls

PD2 imports no game function by ordinal. D2Template binds the game at run time: `GetDllOffset` (0x102f10f0) takes a
DLL index and a value from a `{1.13c, 1.13d}` pair (negative = ordinal for `GetProcAddress`, otherwise an offset from
the DLL base). `game_pointers.tsv` lists all **2,041** bindings: 964 lazy thunks (resolve once, then
`jmp [cell]`) and 1,067 accessors (an inline variable whose address each file copies into its own global in
a static initializer: 1,193 copies). 569 use an ordinal and 1,472 an offset (for 1.13c).
1,900 have 0 in their 1.13d half: although `DetectGameVersion` accepts 1.0.13.64, this build fills in
1.13d values for only the remaining bindings.

* **All 2,041 are named** through the reference trees (`sigmaRE/5_game_source`, read-only): ordinals by
  `exports.tsv`, offsets by the reference function at that address in `symbols.csv`. 1,381 point at a
  function (each row names the reference file that defines it), 443 at a game variable (named after the
  reference's `DAT_` label, e.g. the player unit `D2Client.dll+0x11bbfc` = `DAT_6fbcbbfc`, cell `p_D2Client_DAT_6fbcbbfc`),
  and 217 at an address inside a reference function: for a thunk that is an entry point the reference decompile
  did not split off (named `sub_<va>` as the reference would have), for an accessor a hook return address.
* **Lost arguments fixed.** Ghidra had typed the lazy thunks `void(void)`, so their stack arguments vanished at every
  call site: 5,852 of 5,916 thunk calls passed nothing. `tools/ghidra/pd2_prototypes.sh`
  now gives each thunk the prototype of its target and re-exports with `FixAndExport.java strict`:
  713 from the reference header, 81 from the reference with the stack part
  corrected to the target's own `ret N` in the 1.13c DLL (`tools/pd2/thunk_purge.py`), 166 (targets the
  reference has no function for) from `ret N` alone, 3 by hand (Fog assert/alloc/free, so PD2's own
  `__FILE__` strings show), 1 left alone. Register parameters other than ECX/EDX in the reference
  (96 prototypes) were dropped: compiled C++ can't pass them, and PD2 calls these thunks from C++.
  Now 174 of 5,920 thunk calls in this tree have an empty argument list: calls to targets
  whose reference prototype has no parameters or that end in a plain `ret` with no caller cleanup.
* In this tree: 5,920 calls through thunks and 407 calls through per-file pointer copies use the
  reference names (6,327 game calls named), plus 4,530 lines that read game variables.
  Indirect calls through a still-unnamed `DAT_` global: 1 (a PD2 callback pointer, not a game
  binding). Pointers PD2 fills with `GetProcAddress(h, "Name")` (BH.dll, d2gl) are
  named `pfn_<Name>`. `Ordinal_` left: 0
  (2 ordinal imports, both XInput, named `XInputGetState`/`XInputSetState`).
* `include/imports.h` ends with every game binding (one line per target): the name used here, the DLL value, the
  reference prototype and the defining file in `sigmaRE/5_game_source`. The names themselves are declared where PD2
  defines them: thunks in `projectdiablo_decomp.h` (with a `/* game binding -> ... */` comment), cells and copies in
  `globals.h` (typed `code` for functions, `uint8_t *` for the address of a game variable, with the same comment).

## Types and untraced values

* Ghidra's `undefinedN` types are replaced by `uint8_t`/`uint16_t`/`uint32_t`/`uint64_t`; `_DAT_x` (Ghidra's mark for a
  global accessed at another size) is written `DAT_x`, the same variable.
* Untraced placeholders (`in_*`, `unaff_*`, `extraout_*`, `in_stack_*`; one declaration per function per name):
  **3,116 before → 3,257 after** this phase's re-export (+5%; uses 7,188 →
  7,374). The count went up because the calls now carry their arguments: the arguments and return values
  that used to vanish silently are now visible, and where a caller keeps using ECX/EDX across such a call or reads
  the upper bytes of a narrow return, Ghidra shows `extraout_*`. Most of the rest are EH funclets using their parent's
  frame (`unaff_EBP`). In the tree, each remaining one is declared locally with `/* not traced by Ghidra */`
  (1,779 declarations).
* Integer constants that are the address of a string in `.rdata` get the string as a comment
  (`0x10378370 /* "C:\\projects\\..." */`), and count as `__FILE__` evidence.
* Undeclared names: 9 names (325 uses) are not declared by any header in `include/`
  (other 9 names / 325 uses): `basic_ostream`, `basic_streambuf`, `basic_ios`, `basic_istream`, `codecvt`, `ctype`, `basic_stringstream`, `_Yarn`. All are C++ standard-library internals from inlined
  iostream/STL code, the same kind sigmaRE leaves undeclared. Windows/CRT names are checked against the DLL's own
  imports (no system DLLs on Linux).

## Structures

`include/d2structs.h` has 13 game structures (Unit, PlayerData, ItemData, Inventory, StatList, Stat,
SkillList, Skill, Path, Room, Act, and the server-side Game and Client) with the community 1.13c layout
(D2MOO/D2BS/BH names). Two kinds of evidence from PD2's own code mark a field `/* proven: ... */`:

* PD2's diagnostic dump at 0x10269710 (`functions/D2CommonFunctions.cpp`, "pRemovedItem was NULL. Hit Halt #2568")
  prints fields by name: `"pItemData->dwQuality"`, `"pInventory->dwItemCount"`, `"pClient->ptPlayer"`, ... Each printed
  value is loaded from its field just before the `to_string` call (read off the disassembly), so offset, size and PD2's
  own name are proven together, e.g. ItemData +0x28 dwFileIndex, +0x44/+0x45 BodyLocation/ItemLocation, Client +0x174
  ptPlayer, Inventory +0x18 dwStoresCount. PD2's Game structure is larger than vanilla's: the dump reads
  `pGame->nCorruptedZone` at +0x26f2 and `pGame->nItemAllocation` at +0x26fa.
* `tools/pd2/struct_evidence.py` types values in this tree, starting from the dump's parameters and the player-unit
  pointer (`D2Client.dll+0x11bbfc`), through pointer fields, local copies, call arguments and return values, and
  records every offset PD2 accesses on a typed value with the accessing function's address.

Result: **43 fields proven**, 102 assumed (layout knowledge only), 6 offsets PD2 uses that the
layout has no name for (`unk_<off>`). The types are not applied to the decompiled code yet. That needs the types inside
Ghidra (a data-type archive from this header, applied to the thunk prototypes and to the parameters the propagation
types), then another FixAndExport pass, so that `*(int *)(iVar1 + 0x60)` becomes `pUnit->pInventory`.

## Not recovered / open problems

* **File names of the other link units.** PD2 has no other path strings; `link_units.tsv` lists each unit's
  distinctive strings as a lead (e.g. unit 19 holds the `ProjectDiablo.json` keys, unit 11 loads BH.dll, unit 30 holds
  DllMain and the patch installer, unit 45 the client integrity check).
* **Client integrity check** (unit 45, `_IntegrityCheck_ModuleScan_` hint): it enumerates the process's loaded modules
  and compares them with a list of base64-encoded DLL names (known map-hack/third-party DLLs). Labelled and placed
  like any other code; not analysed further.
* The patch tables are only used for hints; phase 4 decodes them (`0x103c7f50`, `0x10367ee0`, `0x103681b0`).
* `ret N` comes from a linear scan of the target; for a target that never returns (an assert) it can overshoot. PD2's
  own call sites (`add esp,N` after the call) override it.
* Return values of calls through per-file pointer copies (`(*D2Common_10973)(...)`) are untyped: the copies are plain
  globals in Ghidra. Typing them with the thunk prototypes would need the same data-type step as the structures.

## Re-running

```
tools/ghidra/pd2_prototypes.sh               # Ghidra part (~20 min): pointer table, ret N, prototypes, ApplyPrototypes + FixAndExport strict
tools/rebuild.sh --pd2 --module ProjectDiablo   # a few seconds: game_pointers.tsv, the tree, Declare, d2structs.h, this README
```

The generator overwrites generated files and deletes old `.cpp` files of the tree. Manual decisions live in the tool
code (`ModuleConfigs.ProjectDiablo` in `tools/src/Rebuild.cs`, `Pd2Pointers.PrototypeOverrides`), never in this folder.
