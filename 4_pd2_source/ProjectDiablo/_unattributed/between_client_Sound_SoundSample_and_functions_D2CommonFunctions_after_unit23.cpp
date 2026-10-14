/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit23.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10253f00 - 0x102541c0
 * Functions     : 9
 * Attribution   : gap=9
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10253f00  (ghidra: FUN_10253f00)  [gap]
void sub_10253f00(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  sub_102ed970(param_1,param_2,param_3,param_4,param_5);
  return;
}


// 0x10253f10  (ghidra: FUN_10253f10)  [gap]
void __thiscall sub_10253f10(void *this,uint32_t param_1,uint32_t param_2)

{
  sub_10229520(this,0x104,param_1,this,param_2);
  return;
}


// 0x10253f30  (ghidra: FUN_10253f30)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t sub_DetectGameVersion_10253f30(void)

{
  char cVar1;
  uint64_t uVar2;
  uint8_t auStack_28 [4];
  uint32_t local_24 [6];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_28;
  sub_10253fe0(local_24);
  cVar1 = sub_10247350(local_24,(byte *)"1.0.13.60");
  if (cVar1 == '\0') {
    cVar1 = sub_10247350(local_24,(byte *)"1.0.13.64");
    if (cVar1 == '\0') {
      DAT_103c39a8 = 0xffffffff;
      MessageBoxW((HWND)0x0,L"Game version not detected or is unsupported!",
                  L"Failed to Detect Game Version",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    DAT_103c39a8 = 1;
  }
  else {
    DAT_103c39a8 = 0;
  }
  uVar2 = thunk_FUN_1020fc60(local_24);
  return uVar2;
}


// 0x10253fc0  (ghidra: FUN_10253fc0)  [gap]
int sub_GameVersionIndex_10253fc0(void)

{
  if (DAT_103c39a8 == -1) {
    sub_DetectGameVersion_10253f30();
  }
  return DAT_103c39a8;
}


// 0x10253fe0  (ghidra: FUN_10253fe0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __fastcall sub_10253fe0(uint32_t *param_1)

{
  DWORD dwLen;
  LPCVOID lpData;
  BOOL BVar1;
  uint32_t *puVar2;
  uint32_t local_148 [6];
  uint32_t *local_130;
  uint32_t local_12c;
  int *local_128;
  uint local_124;
  DWORD local_120;
  char local_11c [264];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103067b7;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_12c = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = (int *)0x0;
  local_130 = param_1;
  dwLen = GetFileVersionInfoSizeW(L"Game.exe",&local_120);
  sub_10237930(param_1);
  local_8 = 0;
  local_12c = 1;
  if (dwLen != 0) {
    lpData = (LPCVOID)FUN_103022ad(dwLen);
    BVar1 = GetFileVersionInfoW(L"Game.exe",local_120,dwLen,lpData);
    if (BVar1 != 0) {
      BVar1 = VerQueryValueW(lpData,L"\\",&local_128,&local_124);
      if (((BVar1 != 0) && (local_124 != 0)) && (*local_128 == -0x110fb43)) {
        sub_10254150(local_11c,"%d.%d.%d.%d");
        puVar2 = sub_1020f990(local_148,local_11c);
        sub_1023e1c0(param_1,puVar2);
        thunk_FUN_1020fc60(local_148);
      }
    }
    free(lpData);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x10254150  (ghidra: FUN_10254150)  [gap]
void __cdecl sub_10254150(void *param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_10253f10(param_1,param_2,&stack0x0000000c);
  return;
}


// 0x10254170  (ghidra: FUN_10254170)  [gap]
uint32_t * __thiscall sub_10254170(void *this,uint param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  
  if (param_1 != 0) {
    puVar2 = this;
    for (uVar1 = param_1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint16_t *)puVar2 = 0;
      puVar2 = (uint32_t *)((int)puVar2 + 2);
    }
  }
  return this;
}


// 0x10254190  (ghidra: FUN_10254190)  [gap]
uint __fastcall sub_10254190(uint32_t param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0x811c9dc5;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      uVar3 = (*pbVar1 ^ uVar3) * 0x1000193;
    } while (uVar2 < param_3);
  }
  return uVar3;
}


// 0x102541c0  (ghidra: FUN_102541c0)  [gap]
uint32_t __fastcall sub_102541c0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t extraout_ECX;
  
  sub_1020f550(param_1,param_2,param_3);
  return extraout_ECX;
}

