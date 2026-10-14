/*
 * dllmain.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x10001000 - 0x100011c0
 * Functions     : 4
 * Attribution   : manual=4
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 *   manual     = placed by hand; the reason is given on the function
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x10001000  (ghidra: FUN_10001000)  [manual] no file evidence; loader DLL with one object file of app code
int dllmain_LoadProjectDiablo_10001000(void)

{
  int iVar1;
  HMODULE pHVar2;
  
  iVar1 = (*Orig_D2Win_10086)();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,
                "Failed to load game data files.\nPlease reinstall Project Diablo 2 into a valid Diablo 2 LoD directory."
                ,"Error: Failed to load game data files",0);
  }
  else {
    pHVar2 = LoadLibraryA("ProjectDiablo.dll");
    if (pHVar2 == (HMODULE)0x0) {
      MessageBoxA((HWND)0x0,
                  "Failed to load ProjectDiablo.dll. Please check your Anti-Virus logs and restore the file."
                  ,"Error: Failed to load ProjectDiablo.dll",0);
      return 0;
    }
  }
  return iVar1;
}


// 0x10001050  (ghidra: FUN_10001050)  [manual] no file evidence; loader DLL with one object file of app code
void dllmain_FogInstallPath_10001050(uint8_t (*param_1) [16],byte param_2)

{
  uint8_t (*pauVar1) [16];
  
  pauVar1 = strrchr(param_1,param_2);
  if (pauVar1 != (uint8_t (*) [16])0x0) {
    (*pauVar1)[0] = 0;
    strrchr(param_1,param_2);
  }
  return;
}


// 0x10001080  (ghidra: FUN_10001080)  [manual] no file evidence; loader DLL with one object file of app code
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dllmain_InstallGamePatches_10001080(void)

{
  uint8_t *lpAddress;
  int iVar1;
  HMODULE pHVar2;
  DWORD local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  local_c = 0x20;
  VirtualProtect(&Game_sub_00407600_0040763f,5,0x40,&local_c);
  iVar1 = Game_sub_00407600_00407640;
  Game_sub_00407600_0040763f = 0xe8;
  Game_sub_00407600_00407640 = 0xfbf99bc;
  VirtualProtect(&Game_sub_00407600_0040763f,5,local_c,&local_c);
  Orig_D2Win_10086 = iVar1 + 0x407644;
  local_c = 0x20;
  VirtualProtect(&Game_sub_00408250_004083ef,0x21,0x40,&local_c);
  Game_sub_00408250_004083ef = 0x90909090;
  Game_sub_00408250_004083f3 = 0x90909090;
  Game_sub_00408250_004083f7 = 0x90909090;
  Game_sub_00408250_004083fb = 0x90909090;
  Game_sub_00408250_004083ff = 0x90909090;
  Game_sub_00408250_00408403 = 0x90909090;
  Game_sub_00408250_00408407 = 0x90909090;
  Game_sub_00408250_0040840b = 0x90909090;
  Game_sub_00408250_0040840f = 0x90;
  VirtualProtect(&Game_sub_00408250_004083ef,0x21,local_c,&local_c);
  pHVar2 = GetModuleHandleA("Fog.dll");
  if (((pHVar2 != (HMODULE)0x0) && (*(int *)((int)&pHVar2[0x3fd7].unused + 3) == 0x5e0cc483)) &&
     (*(int *)((int)&pHVar2[0x3fd8].unused + 3) == -0x3ceb3b7d)) {
    lpAddress = (uint8_t *)((int)&pHVar2[0x5fa9].unused + 3);
    local_c = 0x20;
    VirtualProtect(lpAddress,5,0x40,&local_c);
    *lpAddress = 0xe8;
    pHVar2[0x5faa].unused = (int)&UNK_1000104b - (int)lpAddress;
    VirtualProtect(lpAddress,5,local_c,&local_c);
  }
  (*Orig_Game_sub_00407ee0)();
  return;
}


// 0x100011c0  (ghidra: FUN_100011c0)  [manual] no file evidence; loader DLL with one object file of app code
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dllmain_DllMain_100011c0(uint32_t param_1,int param_2)

{
  int iVar1;
  DWORD local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  if (param_2 == 1) {
    local_c = 0x20;
    VirtualProtect(&Game_sub_00408250_004082dd,5,0x40,&local_c);
    iVar1 = Game_sub_00408250_004082de;
    Game_sub_00408250_004082dd = 0xe8;
    Game_sub_00408250_004082de = 0xfbf8d9e;
    VirtualProtect(&Game_sub_00408250_004082dd,5,local_c,&local_c);
    Orig_Game_sub_00407ee0 = iVar1 + 0x4082e2;
  }
  return 1;
}

