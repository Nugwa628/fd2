# fd2 orchestrator status

## Environment (decision, 2026-10-14)

Work runs in a Linux cloud container, not on the Windows PC. Inputs were uploaded as split 7z
archives and unpacked to the workspace `/home/user/fd2_work/` (never committed):

| Input | Workspace path | Status |
|---|---|---|
| PD2 install copy | `/home/user/fd2_work/inputs/ProjectD2/ProjectD2` | present (119 files) |
| sigmaRE reference | `/home/user/fd2_work/inputs/sigmaRE/sigmaRE` | present: `2_txt`, `4_sigma_source`, `5_game_source` (no `1_bin_from_mpq`, no `3_ghidra*`) |
| Vanilla D2 install | n/a | **missing**: no vanilla MPQs or 1.13c DLLs to diff against |
| Ghidra 12.1.4 | n/a | not uploaded; building from source in the container (git tag reachable) |

Consequences: the container is ephemeral, so the workspace may need re-uploading; the C# tools
(`Rebuild.cs` etc.) need a .NET SDK or a Python port; Windows paths in the tools become parameters.

## Plan

| Phase | Owner | Depends on | Output | Status |
|---|---|---|---|---|
| 0 Inventory/triage | orchestrator | inputs | `0_inventory/` | **done** (see `0_inventory/INVENTORY.md`) |
| 1 Data (MPQ → txt, diffs) | sub-agent | Phase 0 | `2_txt/` | not started |
| 2 Decompile (PD2 DLLs, BH, rebuilt modules) | sub-agent per binary | Phase 0 | `fd2_work/3_ghidra_fixed/` | not started |
| 3 Source trees | sub-agent per binary | Phase 2 | `4_pd2_source/` | not started |
| 4 Game patches / hooks | sub-agent | Phase 3 | `5_game_patches/` | not started |
| 5 Config, BH diff, launcher | sub-agents | Phase 3 | `6_config/`, `4_pd2_source/BH` | not started |
| 6 Verification + README numbers | orchestrator + verifier | all | `README.md` | not started |

### Phase 0 checklist
- [x] SHA-256 of root and `Live\` → `0_inventory/hashes.csv`; `Live\` = 47 files, all identical to root
- [x] Per-PE report (36 PE files): Rich header, PDB, timestamps, entropy, imports/exports, TLS, packer check. No packers.
- [x] Base-module check vs sigmaRE 1.13c reference: all 21 modules are 1.13c, exports identical by RVA;
      PE checksum valid for 18; **D2Win.dll and Storm.dll byte-patched** (loader patches decoded)
- [x] Third-party identification (BH and D2GL are PD2 monorepo builds of public forks; the rest stock)
- [x] `0_inventory/INVENTORY.md` with work order; summary sent to user

### Decisions
- Base-module verdict without vanilla binaries: PE checksum stored vs recomputed (Blizzard set it at link time).
- Phase 2 targets: ProjectDiablo.dll, PD2_EXT.dll, BH.dll. No 1.13c module is "rebuilt", so none is decompiled.
- D2GL: diff the public fork `Project-Diablo-2/d2gl` against `bayaraa/d2gl` v1.3.3 instead of decompiling.

### Open questions
- Vanilla 1.13c `D2Win.dll`/`Storm.dll` for an exact byte diff (asked user).
- Vanilla `d2data.mpq`/`d2exp.mpq` for Phase 1 diffs (asked user; maybe `patch_d2.mpq` is stock).

## Sub-agent log
(none run yet)
