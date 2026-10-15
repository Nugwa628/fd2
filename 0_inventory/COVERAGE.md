# Code coverage of the decompiled binaries

Measured on 2026-10-15 with `tools/ghidra/Coverage.java` (run on the saved Ghidra projects) plus a byte scan of
the leftovers. Question answered: how much of each DLL's machine code is inside a recovered function?

| | ProjectDiablo.dll | PD2_EXT.dll | BH.dll |
|---|---:|---:|---:|
| `.text` bytes | 3,284,992 | 51,712 | 1,109,504 |
| inside a recovered function | 2,054,346 (62.5%) | 47,646 (92.1%) | 1,019,577 (91.9%) |
| outside: padding (`CC`/`00`/`90`) | 883,955 | 1,451 | 77,548 |
| outside: 5-byte `jmp` stubs to known functions (deliberately not made functions) | 69,379 stubs | 7 | 17 |
| outside: anything else | 65,757 bytes (2.0%) in 5,739 pieces | 2,582 (5.0%) in 217 | 12,304 (1.1%) in 732 |
| of which switch jump tables / index tables | ≥ 11,831 | ≥ 176 | ≥ 6,840 |
| direct `call` targets landing in the leftovers (raw scan, upper bound) | 22 | 4 | 6 |
| data pointers into the leftovers | 11 (all in the static CRT range) | 41 | 80 |

Reading it:
* ProjectDiablo's low 62.5% is layout, not missing code: its `.text` is full of 16-byte-aligned incremental-link
  jump stubs (69,379) and the padding between them.
* The leftover "anything else" bytes are mostly switch tables and fragments of them (pieces average ~10 bytes).
  At most 22 places in ProjectDiablo are called directly but not inside a function: an upper bound on missed
  functions reachable by direct call, out of 13,787.
* Not measurable statically: targets of indirect calls (ProjectDiablo 1,678 call sites through pointers: vtables,
  callbacks, game-pointer cells) and computed jumps (990 unresolved, almost all the 964 lazy game thunks
  `jmp [cell]`, which are resolved by `game_pointers.tsv`).
