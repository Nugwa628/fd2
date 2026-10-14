# fd2: Project Diablo 2 source reconstruction

Reconstruction of the code the Project Diablo 2 team wrote to mod Diablo II
1.13c: `ProjectDiablo.dll`, `PD2_EXT.dll`, their patches and hooks into the
1.13c modules, their BH fork, and their data changes. Method copied from the
sigmaRE project (D2Sigma.dll → source tree).

Private repo: contains derived code. No binaries or MPQ contents beyond
decoded text tables are committed.

## Layout
| Path | Contents |
|---|---|
| `STATUS.md` | orchestrator log, plan, open questions |
| `0_inventory/` | hashes, per-binary PE/compiler/packer reports, INVENTORY.md |
| `2_txt/` | PD2 tables as txt, diffs vs vanilla 1.13c |
| `4_pd2_source/` | reconstructed trees: ProjectDiablo, PD2_EXT, BH (PD2 changes only) |
| `5_game_patches/` | HOOKS.md, patches.csv, FEATURES.md |
| `6_config/` | config file schemas |
| `tools/` | generalized generators, Ghidra scripts, `rebuild.ps1 -Pd2` |

## Statistics
None yet. See `STATUS.md`: analysis has not started.
