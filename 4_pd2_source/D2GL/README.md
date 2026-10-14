# D2GL (glide3x.dll) in PD2

PD2 ships `glide3x.dll`, a Glide→OpenGL wrapper, which the game uses when it is launched with `-3dfx` (the launcher default; see `7_launcher/PROTOCOL.md` §5). The DLL is a build of **PD2's fork of D2GL**.

| | |
|---|---|
| Upstream | https://github.com/bayaraa/d2gl, tag `v1.3.3` = `2bbec75fcc30117a941a98edd1602d712a5afd15` (2024-01-13). Upstream master has only one later commit (`919df35`, "exclude vsync when d2fps loaded"), which the fork also contains. |
| Fork | https://github.com/Project-Diablo-2/d2gl, branch `master`, HEAD `ab34011f5e9979d56046506833c9cd254c7c3c97` (2026-07-12) |
| Shipped binary | `glide3x.dll`, 2,934,272 B. PE timestamp 2026-05-13 15:43:39 UTC. PDB `C:\projects\Project-Diablo-2\scripts\build-d2gl-release\glide3x.pdb`. VERSIONINFO `ProductName D2GL`, `FileVersion 1.3.3.0`. |
| **Closest fork commit** | **`94438403389a01922be77b64197f4380681b52ad`** (2026-04-23, "Fixed some "the" level entry things"). The fork HEAD `ab34011` is source-identical for the DLL; it only adds `<PlatformToolset>` lines for VS 18 to the two `.vcxproj` files and is dated after the binary. |

No upstream source is copied here. Links use the form `repo@commit:path`, e.g. [Project-Diablo-2/d2gl@9443840:d2gl/src/d2gl.cpp](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/d2gl.cpp).

## Evidence for the closest commit

The binary was compared statically against every fork commit after `v1.3.3`. The comparison covered exports, string literals and a small amount of disassembly.

1. **Exports.** The binary exports `_d2glConfigQueryImpl@4`, `_d2glConfigSetImpl@8`, `_setCustomScreenSize@8`, `d2glIsReady`, `d2glToggleInterface`, `d2glCopyTooltipScreenShot`, `d2glGetGlobalXOffset` and `d2glGetGlobalYOffset`, plus the 52 standard `_gr*`/`_gu*` Glide exports.
   - `d2glConfigQueryImpl` and `setCustomScreenSize` come from upstream.
   - `d2glIsReady`, `d2glConfigSetImpl` and `d2glToggleInterface` first appear in fork `dfaf16a` (2024-09-21). `d2glCopyTooltipScreenShot` appears in `2cc1a8e`. `d2glGet­GlobalX/YOffset` appear in `6308049` (2026-03-21).
   - So the build is at or after `6308049`.
2. **String literals.** `tools/launcher/d2gl_commit_match.py` extracts the string literals that each commit adds and removes and looks them up in the binary's ASCII and UTF-16 strings.
   - Every fork commit's added literals are present. The only exceptions are literals that a *later* fork commit removed again: yaml error texts (yaml replaced by json in `00fb16c`), `"ITEM DROPS"` (renamed by `50ad6c2`), `"???? AURA"` and `mini_map_text_below`.
   - This includes the newest string-bearing commit, `fbd168a` (2026-04-11, controller-button-override HD text).
   - All 45 keys of the shipped `d2gl.json` are present in the binary and in the fork's `option/config.cpp`.
3. **`360ed8a` (2026-04-19) is included.** In that commit `d2glGetGlobalXOffset`/`YOffset` test `App.motion_prediction` instead of `App.hd_text.active`.
   - Disassembly: `d2glGetGlobalXOffset` (`0x100348c0`) tests the byte at `0x102b1629`.
   - `d2glConfigQueryImpl`'s jump table maps case 4 (`D2GL_CONFIG_MOTION_PREDICTION`) to that same byte, while case 3 (`HD_TEXT`) reads `0x102b1618`.
4. **`9443840` (2026-04-23) is included.** That commit grows the `HDText::drawEntryText` "The"-exclusion array from 25 to 27 level IDs by adding 200 (Na-Krul's Abyss) and 201 (Kyovashad).
   - The only xref to `L"Entering "` is in a function that fills a stack array and loops `cmp ecx, 0x1b`, i.e. 27 entries.
   - It contains a `mov dword [ebp-..], 0xC9` store at `0x10072133`.
5. The binary is dated 2026-05-13. The next fork commit is `ab34011` (2026-07-12) and changes build settings only.

**Conclusion.** The shipped DLL was built from fork `9443840` (≡ `ab34011` for code) in PD2's private monorepo build script (`scripts/build-d2gl-release`). No code difference from the public fork was detected. String and export evidence cannot rule out a small change without strings in the monorepo copy.

## Summary of PD2's changes vs v1.3.3

Net diff `v1.3.3..9443840`, excluding vendored libraries: 36 files, +992/−623 lines. In addition `d2gl/vendor/include/nlohmann/json.hpp` was added (+24,596). The fork has 75 non-merge commits in `v1.3.3..HEAD` (74 up to `9443840`; 30 PD2 commits predate the upstream v1.3.3 tag and were merged with it on 2024-03-20, and 1 is the upstream post-1.3.3 commit `919df35`) plus 13 merges. The authors are Alex (fergushev), Elmegaard, Canite/Canight, Kanzeon/xkanzeon, synthetic009 and "Walter White". Per-commit detail is in [CHANGES.md](CHANGES.md).

By feature:

- **Config system.**
  - `option/ini.cpp` is replaced by `option/config.cpp` and `config.h`: first `yaml-cpp` (`d2gl.yaml`), then nlohmann JSON. The config is `d2gl.json`, with an automatic backup to `d2gl.json.bak` and safeguards against bad or locale-formatted values.
  - Options are grouped by tab: `screen` / `graphics` / `features` / `other`.
  - Low/medium/high quality presets are added (`option/options_preset.h`).
  - The menu is reworked (`option/menu.cpp`): HD orb options removed, settings saved on exit.
- **PD2 defaults** (`app.h`):
  - HD text, HD cursor, item quantity, motion prediction, sharpen and bloom are on.
  - The shader preset is `anti-aliasing\advanced-aa.slangp`.
  - `load_dlls_late = "SGD2FreeRes.dll"`.
  - The HD-text scale is capped at 1.0.
- **External API for PD2 DLLs and BH** (`d2gl.cpp`, `d2gl.h`):
  - `d2glIsReady`, `d2glConfigSetImpl` (toggles HD cursor/text, motion prediction, minimap, item quantity, cursor draw, and saves) and `d2glToggleInterface` (opens or closes the D2GL options menu and unlocks the cursor while it is open).
  - `d2glCopyTooltipScreenShot` (copies the item tooltip rectangle to the clipboard as a bitmap; `helpers.cpp`).
  - `d2glGetGlobalX/YOffset` (motion-prediction offset so external text drawing lines up).
  - The `D2GL_CONFIG_DRAW_CURSOR` enum entry.
- **HD text** (`modules/hd_text.cpp`, `hd_text/variables.h`, `font.cpp`):
  - Classic "Entering [The] <Area>" zone messages, with a PD2 exclusion list of level IDs including PD2 maps 149–201.
  - About 80 lines of PD2-specific UI string → font/size mappings for the new PD2 settings menu: loot filter, drop sounds, sensitivity, aim assist, deadzone, controller override, hide password, auto equip, "ElmePotter", and so on.
  - Text transparency options.
  - Lucion and translucent party DC6 handling.
  - Fixes for lobby text wiggle, loading bar, hovered player HP and namelock crash.
- **UI hiding logic** (`d2/common.cpp`, `d2/structs.h`, `mini_map.cpp`):
  - New 1.13c D2Client globals `help_menu_open` (`0xFAE04`), `skill_menu_open` (`0xFAD8C`) and `gold_dialog` (`0xFAD60`), and D2Common ordinals −10711 (`checkIfThrowable`) and −10744.
  - Using these, the minimap, FPS and item quantities are hidden behind the help screen, the skill menu, popups and the HP/MP globes.
  - Quantity is hidden when unlimited, and the quiver quantity check is redone.
  - The `level_no` pointer for 1.13c changed `0x11C310` → `0x11C34C` ("lastlevelid").
- **Patch removals:**
  - The upstream `extra/pd2_fixes` was removed (PD2 does these itself).
  - The multiple-instance patch was removed.
  - The D2Win sleep fix was moved into PD2 so that it also applies to ddraw users.
- **Windows and input** (`win32.cpp`):
  - Win7/8 DPI-awareness fallback.
  - The synthetic `WM_LBUTTONUP`/`WM_RBUTTONUP` on alt-tab was removed.
  - Duplicate PrtScr screenshots are debounced (1 s).
  - Lower CPU use in menus.
- **ddraw build:** a guard for a 0×0 display mode in `SetDisplayMode`.
- **Build:** C++17 instead of C++20, yaml removed and nlohmann added, glslang libraries updated, and later a v143 toolset for VS 18.

## Reproduce

```
git clone https://github.com/bayaraa/d2gl d2gl-upstream
git clone https://github.com/Project-Diablo-2/d2gl d2gl-pd2
git -C d2gl-pd2 remote add upstream ../d2gl-upstream && git -C d2gl-pd2 fetch upstream --tags
python3 tools/launcher/d2gl_commit_match.py d2gl-pd2 <install>/glide3x.dll v1.3.3
```
