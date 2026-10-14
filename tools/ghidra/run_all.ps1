# Runs FixAndExport.java over every module. Game modules are imported fresh; D2Sigma comes from a copy of the user's project.
# fd2 port: no hard-coded install paths. -Pd2 exports ProjectDiablo.dll and PD2_EXT.dll (fresh imports from -Pd2Dir) as
# <Out>\<Module>_decompiled.c, the names tools\rebuild.ps1 -Pd2 reads.
# Usage: run_all.ps1 -Out <export dir> -Work <scratch dir> -Ghidra <...\support\analyzeHeadless.bat>
#                    [-GameDir <1.13c install>] [-SigmaProject <dir with sigmaproj2.gpr>] [-Pd2 -Pd2Dir <PD2 install>]
param([Parameter(Mandatory=$true)][string]$Out, [Parameter(Mandatory=$true)][string]$Work,
      [string]$Ghidra = $env:FD2_GHIDRA_HEADLESS, [string]$GameDir = '', [string]$SigmaProject = '',
      [switch]$Pd2, [string]$Pd2Dir = '', [int]$Passes = 6)
if (-not $Ghidra) { throw 'pass -Ghidra <path to analyzeHeadless.bat> or set FD2_GHIDRA_HEADLESS' }
$scripts = $PSScriptRoot
New-Item -ItemType Directory -Force -Path $Out | Out-Null
function Export([string]$proj, [string]$name, [string[]]$what, [string]$outFile) {
    $t = [Diagnostics.Stopwatch]::StartNew()
    & $Ghidra (Join-Path $Work $proj) $name @what -scriptPath $scripts -postScript FixAndExport.java $outFile $Passes 2>&1 |
        Select-String -Pattern 'RESULT|ERROR' | ForEach-Object { $_.Line -replace '^.*FixAndExport.java> ', '' }
    "$(Split-Path $outFile -Leaf) done in $([int]$t.Elapsed.TotalSeconds)s"
}
if ($Pd2) {
    if (-not $Pd2Dir) { throw 'pass -Pd2Dir <folder with ProjectDiablo.dll and PD2_EXT.dll>' }
    foreach ($m in 'PD2_EXT.dll','ProjectDiablo.dll') {
        Export 'pd2proj' 'pd2' @('-import', (Join-Path $Pd2Dir $m), '-overwrite') (Join-Path $Out (([IO.Path]::GetFileNameWithoutExtension($m)) + '_decompiled.c'))
    }
    "ALL DONE"; return
}
if (-not $GameDir) { throw 'pass -GameDir <Diablo II 1.13c folder>' }
$mods = 'Game.exe','Diablo II.exe','D2Client.dll','D2Common.dll','D2Game.dll','D2Win.dll','D2gfx.dll','D2CMP.dll','D2Lang.dll','D2Net.dll',
        'D2sound.dll','D2Launch.dll','D2Multi.dll','D2MCPClient.dll','Bnclient.dll','Fog.dll','Storm.dll','D2DDraw.dll','D2Direct3D.dll','D2Glide.dll','D2Gdi.dll'
foreach ($m in $mods) {
    Export 'ghproj2' 'games' @('-import', (Join-Path $GameDir $m), '-overwrite') (Join-Path $Out (($m -replace ' ', '_') + '.c'))
}
if ($SigmaProject) {
    # works on a COPY of the user's Ghidra project (sigmaproj2\sugma.gpr), never the original
    $saved = $Work; $Work = $SigmaProject
    Export 'sigmaproj2' 'sugma' @('-process', 'D2Sigma.dll') (Join-Path $Out 'D2Sigma_decompiled.c')
    $Work = $saved
}
"ALL DONE"
