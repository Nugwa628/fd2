# BH.dll: PD2's changes relative to the public source

PD2's `BH.dll` is a fork of the BH maphack (slashdiablo-maphack lineage), with the maphack removed. This folder records
what the **shipped** `BH.dll` (PE timestamp 2026-05-13 15:41:30 UTC, VS2022 linker 14.39, PDB
`C:\projects\Project-Diablo-2\scripts\build-bh-release\BH.pdb`) contains beyond PD2's public BH repository.

**Result: none.** The shipped DLL is a build of the public fork at a single identified commit. No PD2-private
code, strings, classes, game patches, D2 pointers or exports were found. `src/` is therefore empty except for a
pointer to upstream. Only GPL upstream references are kept here, not copies of upstream code.

| File | Content |
|---|---|
| `DIFF.md` | per-file and per-class classification with binary evidence (addresses, vftables, strings) |
| `patches.tsv` | the 36 in-game patches: 1.13c module + RVA + VA, containing game function (sigmaRE `symbols.csv`), kind, 1.13d RVA, BH handler, upstream definition |
| `interop.md` | BH ↔ ProjectDiablo.dll ↔ D2GL interfaces, DllMain convention, loot-filter file selection (`launcherSettings.json`) |
| `src/UPSTREAM.txt` | where the source is (repo + commit), and which later fork commits the DLL lacks |
| `evidence/` | machine-generated comparison tables (see "Method") |

## Upstream identification

| | |
|---|---|
| Repository | `https://github.com/Project-Diablo-2/BH` (PD2's public fork, branch `main`) |
| Closest commit | **`4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a`**, 2026-04-23 22:30:38 −0600, "Merge pull request #89 from exiledagain/addpercent" |
| Next commit | `0095e67` 2026-05-28 ("Fix open wounds base damage display"), after the build date |
| Confidence | **high**: the binary matches the tree exactly on every static axis tested, and is bracketed on both sides by marker commits |
| Older lineage (context) | `planqi/slashdiablo-maphack` `6226ef3` (2024-08-03), cloned to `fd2_work/ext/slashdiablo-maphack`. The PD2 fork's history starts at `c66f9e5` (2021-03-31) and already has no Maphack/AutoTele. ItemMover was removed in `a02a8a7` (2025-05-14) |

Bracketing evidence (`evidence/commits.tsv`: 78 commits of `main` from 2026-01-01, scored by the string literals each
one adds or removes):

* **Included** (`4f7b4d7` and both parents of the merge): `db73bd8` "wide strings" (241/245 added literals present,
  the UTF-16 versions), `e9806c3` mastery stats ("Deadly Strike:ÿc0 %d / %d / %d%%" ...), `0e17161` (`"PERCENT"`
  keyword), and `c795e3f` 2026-04-23 (its new D2Ptrs pairs `D2COMMON_11034_ITEMS_CheckItemTypes` {-11034} and
  `10507_UNITS_GetRightSkill` are in the binary's Offsets table).
* **Excluded**: `0095e67` (the binary still computes Open Wounds as `CalcOpenWoundsDamage(...) + 25`: `add eax,0x19` at
  0x1007d3ae; the commit changes it to +40), `72b26e9` (DllMain still returns FALSE on thread attach: `xor eax,eax` at
  0x1007a0ca), `48ff393`/`5d85a8d` (discovery keywords absent), `860359f` (no `0x40000000` compendium-flag test in
  `_BHOnPropertyBuild@16`), `2f10b0d` ("Monsters Remaining" strings absent).

## Method

All static, with no rebuild: there is no MSVC/Windows SDK in the container, so the binary cannot be rebuilt and compared byte for byte.
Scripts are in `tools/bh/` (`run_all.sh <repo> <commit> <dll> <ghidra dir> <BH_patches.tsv> <game_source> <rtti report> <out>`
re-creates `evidence/` and `patches.tsv`; log of the last run: `fd2_work/logs/phase5_bh_run_all.log`).

1. **Commit scoring** (`match_commits.py`). Extract the C/C++ literals of every commit (MSVC keeps narrow literals as their
   UTF-8 source bytes and `L""` as UTF-16) and look them up as exact NUL-terminated strings in the DLL. Commits are
   placed by the literals they add or remove.
2. **Binary → source string coverage** (`unmatched_strings.py`). Every string in `.rdata`/`.data` must equal, end, or
   contain a `4f7b4d7` literal. 2,840 strings are not covered. The 332 with direct code xrefs are all MSVC CRT/STL,
   `std::regex`, or nlohmann asserts (`evidence/uncovered_binary_strings_with_xrefs.tsv`). The rest are import/RTTI
   names and data bytes. **0 BH-specific strings are left uncovered.**
3. **Source → binary.** Of 873 literals (≥5 chars) at `4f7b4d7`, 844 are in the DLL. The 29 that are not are all dead
   code or literals compiled into immediates (`evidence/literals_missing_4f7b4d7.txt`, explained in `DIFF.md`).
   Every hex constant ≥0x1000 and every decimal constant ≥300 in BH's sources is present as an immediate, apart from
   unused enum values.
4. **D2 pointer table** (`d2ptrs.py`). `Offsets{1.13c,1.13d}` pairs of `D2Ptrs.h` (323 macro lines): 245 found, all with
   identical values. 69 are absent and all of those are unused upstream. 0 pairs exist in the binary that are not upstream.
5. **Game patches** (`patches.py`). 36/36 `new Patch(...)` definitions match the binary's Patch initializers (dll,
   opcode, both offsets, length, handler). This includes the NOP patch `itemDropSoundIntercept1`, which the Phase 2 TSV
   didn't list.
6. **Classes**. 126 BH RTTI types / 100 BH vftables all map to upstream classes. The 9 Module vftables × 18 slots agree
   with the handlers declared in the upstream headers (`vtables.py`, 152/162 direct; the other 10 are empty
   upstream overrides folded by `/OPT:ICF`). There are 56 loot-filter Condition-family vftables, the same as upstream.
7. **Functions** (`func_map.py`). A light parser finds 1,084 upstream function definitions. 79 contain literals, and 70
   of those are pinned to a shipped function address through the literals' code xrefs (`evidence/func_map.tsv`). The
   other 9 have literals that are absent for the dead-code or inlining reasons in step 3.
8. Exports (9/9), imports (USER32/SHLWAPI/VERSION each have an upstream caller), and the 75 keys of the shipped
   `BH.json` (all read by `Config::LoadConfig` 0x10065e83).

## Counts

| | Matched (identical-or-equivalent) | Changed | Removed in the shipped build | Binary-only additions |
|---|---:|---:|---:|---:|
| Source files (92 `.cpp`/`.h`/`.hpp` under `BH/`) | 79 (+13 present upstream but not linked: 12 + Mustache partly) | 0 | 0 | 0 |
| Polymorphic classes (RTTI/vftable) | 100 vftables (126 types) | 0 | 0 (13 upstream classes not linked: 8 `Drawing::*hook`, 5 Mustache templates) | 0 |
| Functions pinned to an address by literals | 70 of 79 literal-bearing (1,084 parsed). The other 1,005 have no literal and are only covered at file/class level | 0 | 0 | 0 |
| Module handler slots | 162/162 | 0 | 0 | 0 |
| Game patches | 36/36 | 0 | 0 | 0 |
| D2 pointer `Offsets` | 245/245 linked | 0 | 0 (69 unused upstream, not linked) | 0 |
| Exports | 9/9 | 0 | 0 | 0 |
| Strings | all BH strings | 0 | 0 | 0 |

"Removed" counts only things that are live in `4f7b4d7` but missing from the DLL. The Maphack/AutoTele/ItemMover
removals relative to slashdiablo are in the public fork's history (`DIFF.md`, "Lineage context").

## Not recovered / limits

* **Logic-only edits with no static marker.** A private change that alters control flow without touching any string
  literal, constant, D2 pointer, patch, class or export would not show up in these checks. Function-by-function
  equivalence for the 1,005 literal-less functions was not tested. That would need a rebuild of `4f7b4d7` with
  VS2022 v143 (`/O2 /GL`, `/OPT:REF,ICF`) and a binary diff (e.g. BinDiff), which this Linux container can't do. The
  spot checks that were made (Open Wounds constant, DllMain, the merge's two parents, the 162 module slots) all agree
  with `4f7b4d7`.
* **Build-side differences.** PD2 built it with `scripts\build-bh-release` in their monorepo (`C:\projects\Project-Diablo-2\BH\BH\…`),
  where BH sits as a subfolder, so the build options can't be verified (the public `BH.vcxproj` targets v141/v142/v143).
* **`patches.tsv` game names.** `game_function_113c` is the nearest preceding sigmaRE symbol. Most are still
  `sub_XXXXXXXX`. One looks wrong: D2Multi 0x1250 lands at `_strncpy+0x100`, a CRT label that sigmaRE probably attributed
  incorrectly, so treat it as "D2Multi 0x6f9d1250".
* Phase 2 corrections made here: the online filter path has no `<author>` folder, and the D2GL flag only selects HD-text
  colouring and does not stop BH's drawing (`interop.md`).
