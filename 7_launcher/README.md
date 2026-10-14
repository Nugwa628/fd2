# 7_launcher: PD2 launcher, Steam bootstrapper and updater

This folder holds the decompiled source of the three .NET programs that ship in the PD2 install directory:

| Executable | Size | Role |
|---|---|---|
| `PD2Launcher.exe` | 32,796,830 B | The WPF GUI launcher: news, options, loot filters, environment switch, update, Play. |
| `SteamPD2.exe` | 2,406,570 B | A headless console bootstrapper (for a Steam "non-Steam game" shortcut). It updates, then starts the game directly. |
| `UpdateUtility.exe` | 184,553 B | A self-update helper. It replaces `PD2Launcher.exe`/`SteamPD2.exe` with downloaded `Temp*.exe` files. |

The update and launch logic is described in [PROTOCOL.md](PROTOCOL.md). The decompiled C# and XAML are in [src/](src/).

All of this comes from static analysis of local copies only. None of the executables was run, and no PD2 server or URL found in them was contacted.

## Framework

- **.NET 6** (`tfm net6.0`, RID `win-x86`). The apps are *framework-dependent* single-file apphost bundles: bundle format v6.0, no compression. The apphost PDB is `...\corehost\apphost\standalone\apphost.pdb`.
  - `PD2Launcher` needs `Microsoft.NETCore.App` 6.0.0 plus `Microsoft.WindowsDesktop.App` 6.0.0.
  - `SteamPD2` and `UpdateUtility` need only `Microsoft.NETCore.App` 6.0.0.
- **The UI is WPF.** It uses the MVVM pattern with MvvmLight (`RelayCommand`, `Messenger`, `ViewModelLocator`) and `Microsoft.Extensions.DependencyInjection` as the service container. A WebView2 control is used only for the "FilterBird" loot-filter preview. The XAML was compiled by `PresentationBuildTasks` 8.0.7.0, i.e. a .NET 8 SDK targeting net6.0.
- Every PD2 assembly has version 1.0.0.0 and the InformationalVersion `1.0.0+300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3`. That suffix is the git commit of the (non-public) launcher repo. A GitHub search of the `Project-Diablo-2` org for a launcher repo found nothing.
- The namespaces are `PD2Launcherv2.*` and `ProjectDiablo2Launcherv2` (launcher), `PD2Shared.*` (shared library), `SteamPD2` and `UpdateUtility`.

## Bundled assemblies

**PD2-authored (decompiled into `src/`):**

| Assembly | In bundle(s) | .cs files | XAML | Lines |
|---|---|---|---|---|
| `PD2Launcher.dll` (2.2 MB, mostly images and fonts) | PD2Launcher | 23 | 7 (from BAML) | 4,826 |
| `PD2Shared.dll` (byte-identical in both bundles) | PD2Launcher, SteamPD2 | 37 | – | 1,953 |
| `SteamPD2.dll` | SteamPD2 | 2 | – | 197 |
| `UpdateUtility.dll` | UpdateUtility | 2 | – | 618 |

The total is 64 `.cs` files plus 7 `.xaml` files, about 7.6k lines. The `.csproj` files are the ones ilspycmd generated. `src/bundle_manifests/` holds each bundle's file table and its `deps.json`/`runtimeconfig.json`.

**Third-party (not decompiled).** Versions are taken from `PD2Launcher.deps.json`.

| Package | Version | Used for |
|---|---|---|
| Newtonsoft.Json | 13.0.3 | settings, news, filters (also in SteamPD2) |
| Crc32.NET (`Force.Crc32`) | 1.2.0 | CRC32C of local files (also in SteamPD2) |
| MadMilkman.Ini | 1.0.6 | read/write `ddraw.ini` (also in SteamPD2) |
| SharpConfig | 3.2.9.1 | referenced, unused in PD2 code |
| MvvmLightLibs (GalaSoft.MvvmLight, .Extras, .Platform) | 5.4.1.1 | MVVM |
| CommonServiceLocator | 2.0.2 | MvvmLight dependency |
| System.Windows.Interactivity | (MvvmLight) | – |
| Microsoft.Extensions.DependencyInjection (+Abstractions) | 9.0.0-preview.2.24128.5 | DI container |
| Microsoft.Web.WebView2 (Core, Wpf, WinForms; native WebView2Loader.dll ×2) | 1.0.2739.15 | FilterBird preview |
| WpfAnimatedGif | 2.0.2 | animated logo |
| Microsoft.CodeAnalysis (+CSharp, +VisualBasic) | 1.3.0 | dead weight (~26 MB of the 32 MB). The code never uses Roslyn; it was pulled in by an old package reference. |

`UpdateUtility` has no third-party dependencies. It even has its own CRC32C implementation.

## Secrets

No API keys, tokens, credentials or signing material were found in the PD2 assemblies (C#, XAML or resources). Nothing needed `<redacted>`. All endpoints are anonymous HTTPS GETs; see PROTOCOL.md.

## How it was extracted (re-runnable)

```
tools/launcher/decompile_launcher.sh <dir with the 3 exes> <work dir> 7_launcher/src
```

1. `tools/launcher/extract_bundle.py <exe> <outdir>` parses the bundle in pure Python. It finds the bundle signature and the header offset, then walks the v6 manifest: offset, size, compressed size, type and path for each entry. It writes every entry to disk and prints the table.
2. `ilspycmd -p` (ICSharpCode.Decompiler 8.2.0.7535) decompiles the four PD2 assemblies to projects.
   - Install it with `dotnet tool install -g ilspycmd --version 8.2.0.7535`. The latest version does not install on SDK 8.
   - Run it with `DOTNET_ROLL_FORWARD=Major`.
3. `tools/launcher/BamlDump` (a small C# tool on ICSharpCode.BamlDecompiler 9.0) converts the 7 BAML resources to XAML. It uses the WPF reference assemblies from the NuGet package `Microsoft.WindowsDesktop.App.Ref` 6.0.36. Build output goes outside the repo (`FD2_BUILD_DIR`).
4. Only text files are copied into `src/`: `.cs`, `.csproj`, `.xaml`, bundle manifests and JSON. Images, fonts and icons stay in the workspace (`/home/user/fd2_work/launcher/decomp/`).

What ILSpy's output looks like:

- Async methods are rebuilt from their state machines.
- Some `_ = n;` artefacts and `//IL_xxxx: Unknown result type` comments appear where WPF enums were inlined. These come from the reference resolution against the WindowsDesktop pack and are harmless.
- `IComponentConnector.Connect` stubs remain in the code-behind; the XAML holds the bindings.

## Notable observations

- **Two parallel update paths.**
  - The GUI's Play button uses `GameFileUpdateHelpers.UpdateFromShaMetadataAsync`, which reads `metadata.json` (md5sum list).
  - The `--launch` flag and SteamPD2 use `FileUpdateHelpers.UpdateFilesCheck`, which reads a GCS-style JSON listing with CRC32C.
  - See PROTOCOL.md §3.
- **The md5/SHA-1 mismatch is a bug.** `metadata.json`/`local_metadata.json` hold MD5 sums (verified against the local `Game.exe` and `D2Win.dll`), but the launcher compares them with SHA-1. So whenever the remote metadata text differs from the cached copy, *every* listed file is downloaded again. That path also ignores the excluded-files list. User-edited files that are in the manifest (`ProjectDiablo.cfg`, `ddraw.ini`, `default.filter`) are overwritten on each patch.
- **A hidden "Custom" environment.** Holding a control on the About/"Switch Environment" page for 10 s reveals a box for any `http(s)` client-file base URL; `FilePath` is then `Custom`. "Beta" points at a separate bucket.
- **Two PowerShell scripts.** The options view can start `powershell -ExecutionPolicy ByPass -File SetPD2WindowsSettings.ps1` / `RemovePD2WindowsSettings.ps1` from the working directory. These scripts are not in the analysed install.
