# Regenerates source trees with tools/Fd2Tools (.NET 8 console app built from tools/src/*.cs).
#   default : D2Sigma into <reference_out>/4_sigma_source (needs the sigmaRE Ghidra exports and D2Sigma.dll)
#   -Game   : also every Diablo II 1.13c module into <reference_out>/5_game_source
#   -Pd2    : ProjectDiablo + PD2_EXT into <repo>/4_pd2_source from <ghidra_export_dir>/<Module>_decompiled.c
#   -Scan   : PD2 dry run (no Ghidra export needed): PE, import names via the 5_game_source name DB, __FILE__ anchors
# Locations come from tools/fd2.paths.json (or -Config); the switches below override single keys.
# Usage:  powershell -ExecutionPolicy Bypass -File tools\rebuild.ps1 [-Pd2|-Scan] [-Module ProjectDiablo] [-Game]
#         [-Config file] [-Ghidra dir] [-GameDir dir] [-Reference dir] [-Dll D2Sigma.dll] [-NoBuild]
param(
    [string]$Config     = '',
    [string]$Ghidra     = '',
    [string]$GameDir    = '',
    [string]$Reference  = '',
    [string]$Dll        = '',
    [string]$Module     = '',
    [switch]$Game,
    [switch]$Pd2,
    [switch]$Scan,
    [switch]$NoBuild
)
$tools = $PSScriptRoot
$proj = Join-Path $tools 'Fd2Tools.csproj'
if (-not $NoBuild) {
    & dotnet build $proj -c Release -nologo -v q | Out-Host
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
$exe = Join-Path $tools 'bin\Release\net8.0\Fd2Tools.dll'
$opts = @()
if ($Config)    { $opts += '--config', $Config }
if ($Ghidra)    { $opts += '--ghidra-export-dir', $Ghidra }
if ($GameDir)   { $opts += '--game-dir', $GameDir }
if ($Reference) { $opts += '--reference-root', $Reference }
if ($Pd2 -or $Scan) {
    $cmd = if ($Scan) { 'pd2-scan' } else { 'pd2' }
    if ($Module) { $opts += '--module', $Module }
} else {
    $cmd = 'sigma'
    if ($Dll)  { $opts += '--dll', $Dll }
    if ($Game) { $opts += '--game' }
}
& dotnet $exe $cmd @opts
exit $LASTEXITCODE
