# fd2 orchestrator status

## Current state: BLOCKED on inputs (2026-10-14)

The first session ran in a Claude Code cloud container (Linux), not on the
Windows machine that holds the inputs. None of these were reachable:

| Input | Path | Found |
|---|---|---|
| PD2 install | `C:\Program Files (x86)\Diablo II\ProjectD2` | no |
| Vanilla D2 install | `C:\Program Files (x86)\Diablo II` | no |
| Reference project (sigmaRE) | `C:\Users\ZF\Desktop\sugma\mxl_extracted\sigmaRE` | no |
| Ghidra | `C:\Users\ZF\Downloads\ghidra_*` etc. | no (only `java` + `python3` in container) |

Done in that session: repo skeleton, `.gitignore`, this plan. No analysis
results exist yet; nothing below is filled with real data.

To unblock: run the orchestrator where the files are (Claude Desktop app, or
`claude remote-control` in `C:\Users\ZF\Desktop\fd2`), and use
`C:\Users\ZF\Desktop\fd2_work\` as the scratch workspace.

## Plan

| Phase | Owner | Depends on | Output | Status |
|---|---|---|---|---|
| 0 Inventory/triage | orchestrator | inputs | `0_inventory/` | not started |
| 1 Data (MPQ → txt, diffs) | sub-agent | Phase 0 | `2_txt/` | not started |
| 2 Decompile (PD2 DLLs, BH, rebuilt modules) | sub-agent per binary | Phase 0 | `fd2_work/3_ghidra_fixed/` | not started |
| 3 Source trees | sub-agent per binary | Phase 2 | `4_pd2_source/` | not started |
| 4 Game patches / hooks | sub-agent | Phase 3 | `5_game_patches/` | not started |
| 5 Config, BH diff, launcher | sub-agents | Phase 3 | `6_config/`, `4_pd2_source/BH` | not started |
| 6 Verification + README numbers | orchestrator + verifier | all | `README.md` | not started |

### Phase 0 checklist
- [ ] SHA-256 of root and `Live\` → `0_inventory/hashes.csv`; confirm `Live\` is a mirror
- [ ] Per-PE report: Rich header, PDB path, timestamps, section entropy, imports/exports, TLS, packer check
- [ ] Base-module check vs vanilla 1.13c (identical / byte-patched ranges / rebuilt)
- [ ] Third-party identification: BH, SGD2FreeRes, SGD2FreeDisplayFix, D2GL, cnc-ddraw (upstream repo + tag)
- [ ] `0_inventory/INVENTORY.md` with work order → report summary to user before Phase 2

### Open questions
- None yet beyond the input blocker.

## Sub-agent log
(none run yet)
