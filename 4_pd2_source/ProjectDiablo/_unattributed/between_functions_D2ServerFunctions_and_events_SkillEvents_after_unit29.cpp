/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_after_unit29.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102a2d10 - 0x102ac550
 * Functions     : 268
 * Attribution   : gap=268
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102a2d10  (ghidra: FUN_102a2d10)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb19f20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312221;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb19f20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafa8) {
      FUN_103023e9(&DAT_104eafa8);
      if (DAT_104eafa8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b90 = *(int *)(&DAT_103d405c + iVar2 * 4);
        FUN_1030239f(&DAT_104eafa8);
      }
    }
    ENGINE_Gfx_6fb19f20 = sub_GetDllOffset_102f10f0(0,DAT_104e9b90);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb19f20;
}


// 0x102a2dc0  [gap]
uint D2Common_10893(int *param_1,int *param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10893 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10893 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7a58 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a2de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10893)();
  return uVar2;
}


// 0x102a2df0  [gap]
int D2Common_10049(int param_1)

{
  int iVar1;
  
  if (p_D2Common_10049 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10049 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7aa8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a2e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10049)();
  return iVar1;
}


// 0x102a2e20  (ghidra: FUN_102a2e20)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf6c80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312251;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf6c80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9810) {
      FUN_103023e9(&DAT_104e9810);
      if (DAT_104e9810 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea46c = *(int *)(&DAT_103d4a14 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9810);
      }
    }
    ITEMS_ItemMode_6fcf6c80 = sub_GetDllOffset_102f10f0(6,DAT_104ea46c);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf6c80;
}


// 0x102a2ed0  [gap]
void D2Common_10111(int *param_1,uchar param_2)

{
  int iVar1;
  
  if (p_D2Common_10111 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10111 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7140 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a2ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10111)();
  return;
}


// 0x102a2f00  [gap]
uint D2Common_10258(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10258 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10258 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2d74 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a2f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10258)();
  return uVar2;
}


// 0x102a2f30  (ghidra: FUN_102a2f30)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffdc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312281;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcffdc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9dec) {
      FUN_103023e9(&DAT_104e9dec);
      if (DAT_104e9dec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9244 = *(int *)(&DAT_103d4f34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9dec);
      }
    }
    UNIT_SUnitDmg_6fcffdc0 = sub_GetDllOffset_102f10f0(6,DAT_104e9244);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcffdc0;
}


// 0x102a2fe0  [gap]
void D2Common_10210(int *param_1,int *param_2)

{
  int iVar1;
  
  if (p_D2Common_10210 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10210 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6770 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10210)();
  return;
}


// 0x102a3010  (ghidra: FUN_102a3010)  [gap]
uint32_t * GetPtr_sub_6fdcc270(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103122b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fdcc270 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9968) {
      FUN_103023e9(&DAT_104e9968);
      if (DAT_104e9968 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9be8 = *(int *)(&DAT_103d492c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9968);
      }
    }
    sub_6fdcc270 = sub_GetDllOffset_102f10f0(1,DAT_104e9be8);
  }
  ExceptionList = local_10;
  return &sub_6fdcc270;
}


// 0x102a30c0  (ghidra: FUN_102a30c0)  [gap]
uint32_t * GetPtr_sub_6fd6a130(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103122e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd6a130 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95a4) {
      FUN_103023e9(&DAT_104e95a4);
      if (DAT_104e95a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadf8 = *(int *)(&DAT_103d505c + iVar2 * 4);
        FUN_1030239f(&DAT_104e95a4);
      }
    }
    sub_6fd6a130 = sub_GetDllOffset_102f10f0(1,DAT_104eadf8);
  }
  ExceptionList = local_10;
  return &sub_6fd6a130;
}


// 0x102a3170  [gap]
uint D2Common_10666(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10666 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10666 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6d90 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10666)();
  return uVar2;
}


// 0x102a31a0  (ghidra: FUN_102a31a0)  [gap]
uint32_t * GetPtr_sub_6fac61b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312311;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac61b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf68) {
      FUN_103023e9(&DAT_104eaf68);
      if (DAT_104eaf68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97f0 = *(int *)(&DAT_103d3ab4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf68);
      }
    }
    sub_6fac61b0 = sub_GetDllOffset_102f10f0(0,DAT_104e97f0);
  }
  ExceptionList = local_10;
  return &sub_6fac61b0;
}


// 0x102a3250  (ghidra: FUN_102a3250)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb714f7(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312341;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb714f7 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1b4) {
      FUN_103023e9(&DAT_104ea1b4);
      if (DAT_104ea1b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c90 = *(int *)(&DAT_103d4a4c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1b4);
      }
    }
    D2Client_loc_6fb714f7 = sub_GetDllOffset_102f10f0(0,DAT_104e9c90);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb714f7;
}


// 0x102a3300  (ghidra: FUN_102a3300)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb719a4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312371;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb719a4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab60) {
      FUN_103023e9(&DAT_104eab60);
      if (DAT_104eab60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fc4 = *(int *)(&DAT_103d409c + iVar2 * 4);
        FUN_1030239f(&DAT_104eab60);
      }
    }
    D2Client_loc_6fb719a4 = sub_GetDllOffset_102f10f0(0,DAT_104e8fc4);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb719a4;
}


// 0x102a33b0  (ghidra: FUN_102a33b0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb1264e(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103123a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb1264e == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9798) {
      FUN_103023e9(&DAT_104e9798);
      if (DAT_104e9798 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f98 = *(int *)(&DAT_103d49e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9798);
      }
    }
    D2Client_loc_6fb1264e = sub_GetDllOffset_102f10f0(0,DAT_104e9f98);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb1264e;
}


// 0x102a3460  (ghidra: FUN_102a3460)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3b8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103123d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3b8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9aa4) {
      FUN_103023e9(&DAT_104e9aa4);
      if (DAT_104e9aa4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9428 = *(int *)(&DAT_103d4704 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9aa4);
      }
    }
    p_D2Client_DAT_6fbcc3b8 = sub_GetDllOffset_102f10f0(0,DAT_104e9428);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3b8;
}


// 0x102a3510  (ghidra: FUN_102a3510)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb59a20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312401;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb59a20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea934) {
      FUN_103023e9(&DAT_104ea934);
      if (DAT_104ea934 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0c0 = *(int *)(&DAT_103d311c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea934);
      }
    }
    UNIT_CUnit_6fb59a20 = sub_GetDllOffset_102f10f0(0,DAT_104eb0c0);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb59a20;
}


// 0x102a35c0  (ghidra: FUN_102a35c0)  [gap]
uint32_t * GetPtr_PATH_Path_6fd876f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312431;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PATH_Path_6fd876f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa3c) {
      FUN_103023e9(&DAT_104eaa3c);
      if (DAT_104eaa3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9600 = *(int *)(&DAT_103d3184 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa3c);
      }
    }
    PATH_Path_6fd876f0 = sub_GetDllOffset_102f10f0(1,DAT_104e9600);
  }
  ExceptionList = local_10;
  return &PATH_Path_6fd876f0;
}


// 0x102a3670  [gap]
void D2Common_10337(int param_1)

{
  int iVar1;
  
  if (p_D2Common_10337 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10337 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6748 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10337)();
  return;
}


// 0x102a36a0  [gap]
void D2Common_10895(int param_1)

{
  int iVar1;
  
  if (p_D2Common_10895 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10895 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6dd0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a36c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10895)();
  return;
}


// 0x102a36d0  [gap]
uint D2Common_10731(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10731 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10731 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c69e8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a36f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10731)();
  return uVar2;
}


// 0x102a3700  [gap]
uint D2Common_10507_102a3700(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10507_102a3700 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10507_102a3700 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c66b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10507_102a3700)();
  return uVar2;
}


// 0x102a3730  [gap]
uint D2Common_10828_102a3730(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10828_102a3730 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10828_102a3730 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7290 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10828_102a3730)();
  return uVar2;
}


// 0x102a3760  [gap]
uint D2Common_10537(uint *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10537 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10537 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6e08 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10537)();
  return uVar2;
}


// 0x102a3790  [gap]
uint D2Common_10353(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10353 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10353 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7d18 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a37b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10353)();
  return uVar2;
}


// 0x102a37c0  [gap]
void D2Common_10245_102a37c0(uint *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  if (p_D2Common_10245_102a37c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10245_102a37c0 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2e0c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a37e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10245_102a37c0)();
  return;
}


// 0x102a37f0  [gap]
void D2Common_11111_102a37f0(uint param_1,void *param_2)

{
  int iVar1;
  
  if (p_D2Common_11111_102a37f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11111_102a37f0 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7c60 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_11111_102a37f0)();
  return;
}


// 0x102a3820  [gap]
void D2Common_11108_102a3820(void *param_1)

{
  int iVar1;
  
  if (p_D2Common_11108_102a3820 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11108_102a3820 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7128 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_11108_102a3820)();
  return;
}


// 0x102a3850  [gap]
void D2Common_11127(uint param_1,int param_2)

{
  int iVar1;
  
  if (p_D2Common_11127 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11127 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2aec + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a3876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_11127)();
  return;
}


// 0x102a3880  [gap]
void __fastcall
GAME_SCmd_6fcab710(uint param_1,uint param_2,uint param_3,uchar param_4,ushort param_5,uint param_6)

{
  int iVar1;
  
  if (p_GAME_SCmd_6fcab710 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_GAME_SCmd_6fcab710 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6788 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a38a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_GAME_SCmd_6fcab710)();
  return;
}


// 0x102a38b0  (ghidra: FUN_102a38b0)  [gap]
uint32_t * GetPtr_sub_6fc21420(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312461;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21420 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99e8) {
      FUN_103023e9(&DAT_104e99e8);
      if (DAT_104e99e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0d8 = *(int *)(&DAT_103d4e64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99e8);
      }
    }
    sub_6fc21420 = sub_GetDllOffset_102f10f0(6,DAT_104eb0d8);
  }
  ExceptionList = local_10;
  return &sub_6fc21420;
}


// 0x102a3960  (ghidra: FUN_102a3960)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff780(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312491;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcff780 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaefc) {
      FUN_103023e9(&DAT_104eaefc);
      if (DAT_104eaefc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea354 = *(int *)(&DAT_103d3b4c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaefc);
      }
    }
    UNIT_SUnitDmg_6fcff780 = sub_GetDllOffset_102f10f0(6,DAT_104ea354);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcff780;
}


// 0x102a3a10  (ghidra: FUN_102a3a10)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc1d10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103124c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc1d10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a28) {
      FUN_103023e9(&DAT_104e9a28);
      if (DAT_104e9a28 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e38 = *(int *)(&DAT_103d455c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a28);
      }
    }
    SKILLS_Skills_6fcc1d10 = sub_GetDllOffset_102f10f0(6,DAT_104e9e38);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc1d10;
}


// 0x102a3ac0  (ghidra: FUN_102a3ac0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbf3b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103124f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbf3b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b98) {
      FUN_103023e9(&DAT_104e9b98);
      if (DAT_104e9b98 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaebc = *(int *)(&DAT_103d3cec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b98);
      }
    }
    SKILLS_Skills_6fcbf3b0 = sub_GetDllOffset_102f10f0(6,DAT_104eaebc);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbf3b0;
}


// 0x102a3b70  (ghidra: FUN_102a3b70)  [gap]
uint32_t * GetPtr_sub_6fcae900(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312521;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcae900 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b40) {
      FUN_103023e9(&DAT_104e9b40);
      if (DAT_104e9b40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0d8 = *(int *)(&DAT_103d4934 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b40);
      }
    }
    sub_6fcae900 = sub_GetDllOffset_102f10f0(6,DAT_104ea0d8);
  }
  ExceptionList = local_10;
  return &sub_6fcae900;
}


// 0x102a3c20  (ghidra: FUN_102a3c20)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6ad10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312551;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6ad10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e918c) {
      FUN_103023e9(&DAT_104e918c);
      if (DAT_104e918c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea704 = *(int *)(&DAT_103d4bec + iVar2 * 4);
        FUN_1030239f(&DAT_104e918c);
      }
    }
    GAME_Clients_6fc6ad10 = sub_GetDllOffset_102f10f0(6,DAT_104ea704);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6ad10;
}


// 0x102a3cd0  (ghidra: FUN_102a3cd0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbea30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312581;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbea30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea840) {
      FUN_103023e9(&DAT_104ea840);
      if (DAT_104ea840 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8ff4 = *(int *)(&DAT_103d3cdc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea840);
      }
    }
    SKILLS_Skills_6fcbea30 = sub_GetDllOffset_102f10f0(6,DAT_104e8ff4);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbea30;
}


// 0x102a3d80  (ghidra: FUN_102a3d80)  [gap]
uint32_t * GetPtr_sub_6fd0fb80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103125b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0fb80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e934c) {
      FUN_103023e9(&DAT_104e934c);
      if (DAT_104e934c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9570 = *(int *)(&DAT_103d44ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e934c);
      }
    }
    sub_6fd0fb80 = sub_GetDllOffset_102f10f0(6,DAT_104e9570);
  }
  ExceptionList = local_10;
  return &sub_6fd0fb80;
}


// 0x102a3e30  (ghidra: FUN_102a3e30)  [gap]
uint32_t * GetPtr_Stats_StatsEx_6fd88a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103125e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Stats_StatsEx_6fd88a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae74) {
      FUN_103023e9(&DAT_104eae74);
      if (DAT_104eae74 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97c8 = *(int *)(&DAT_103d3b04 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae74);
      }
    }
    Stats_StatsEx_6fd88a80 = sub_GetDllOffset_102f10f0(1,DAT_104e97c8);
  }
  ExceptionList = local_10;
  return &Stats_StatsEx_6fd88a80;
}


// 0x102a3ee0  (ghidra: FUN_102a3ee0)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fde4608(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312611;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fde4608 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae5c) {
      FUN_103023e9(&DAT_104eae5c);
      if (DAT_104eae5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea590 = *(int *)(&DAT_103d46c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae5c);
      }
    }
    p_D2Common_DAT_6fde4608 = sub_GetDllOffset_102f10f0(1,DAT_104ea590);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fde4608;
}


// 0x102a3f90  (ghidra: FUN_102a3f90)  [gap]
uint32_t * GetPtr_PATH_Path_6fd823e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312641;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PATH_Path_6fd823e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99ac) {
      FUN_103023e9(&DAT_104e99ac);
      if (DAT_104e99ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadb4 = *(int *)(&DAT_103d402c + iVar2 * 4);
        FUN_1030239f(&DAT_104e99ac);
      }
    }
    PATH_Path_6fd823e0 = sub_GetDllOffset_102f10f0(1,DAT_104eadb4);
  }
  ExceptionList = local_10;
  return &PATH_Path_6fd823e0;
}


// 0x102a4040  [gap]
void D2Common_10932(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2Common_10932 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10932 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c74d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a4066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10932)();
  return;
}


// 0x102a4070  (ghidra: FUN_102a4070)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbe490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312671;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbe490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3f0) {
      FUN_103023e9(&DAT_104ea3f0);
      if (DAT_104ea3f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa34 = *(int *)(&DAT_103d4a04 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3f0);
      }
    }
    SKILLS_Skills_6fcbe490 = sub_GetDllOffset_102f10f0(6,DAT_104eaa34);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbe490;
}


// 0x102a4120  (ghidra: FUN_102a4120)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbe450(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103126a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbe450 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadf4) {
      FUN_103023e9(&DAT_104eadf4);
      if (DAT_104eadf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b0c = *(int *)(&DAT_103d4edc + iVar2 * 4);
        FUN_1030239f(&DAT_104eadf4);
      }
    }
    SKILLS_Skills_6fcbe450 = sub_GetDllOffset_102f10f0(6,DAT_104e9b0c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbe450;
}


// 0x102a41d0  [gap]
uint __fastcall D2Common_10076(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10076 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10076 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7630 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a41f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10076)();
  return uVar2;
}


// 0x102a4200  (ghidra: FUN_102a4200)  [gap]
uint32_t * GetPtr_sub_6fcf16b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103126d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcf16b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0b8) {
      FUN_103023e9(&DAT_104eb0b8);
      if (DAT_104eb0b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eace8 = *(int *)(&DAT_103d38d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0b8);
      }
    }
    sub_6fcf16b0 = sub_GetDllOffset_102f10f0(6,DAT_104eace8);
  }
  ExceptionList = local_10;
  return &sub_6fcf16b0;
}


// 0x102a42b0  (ghidra: FUN_102a42b0)  [gap]
uint32_t * GetPtr_INVENTORY_Inventory_6fd718a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312701;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_Inventory_6fd718a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97bc) {
      FUN_103023e9(&DAT_104e97bc);
      if (DAT_104e97bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1f0 = *(int *)(&DAT_103d3a8c + iVar2 * 4);
        FUN_1030239f(&DAT_104e97bc);
      }
    }
    INVENTORY_Inventory_6fd718a0 = sub_GetDllOffset_102f10f0(1,DAT_104ea1f0);
  }
  ExceptionList = local_10;
  return &INVENTORY_Inventory_6fd718a0;
}


// 0x102a4360  (ghidra: FUN_102a4360)  [gap]
uint32_t * GetPtr_sub_6fc2e990(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312731;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2e990 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea920) {
      FUN_103023e9(&DAT_104ea920);
      if (DAT_104ea920 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e906c = *(int *)(&DAT_103d3ef4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea920);
      }
    }
    sub_6fc2e990 = sub_GetDllOffset_102f10f0(6,DAT_104e906c);
  }
  ExceptionList = local_10;
  return &sub_6fc2e990;
}


// 0x102a4410  (ghidra: FUN_102a4410)  [gap]
uint32_t * GetPtr_sub_6fcf1650(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312761;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcf1650 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaaf4) {
      FUN_103023e9(&DAT_104eaaf4);
      if (DAT_104eaaf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea810 = *(int *)(&DAT_103d344c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaaf4);
      }
    }
    sub_6fcf1650 = sub_GetDllOffset_102f10f0(6,DAT_104ea810);
  }
  ExceptionList = local_10;
  return &sub_6fcf1650;
}


// 0x102a44c0  (ghidra: FUN_102a44c0)  [gap]
uint32_t * GetPtr_D2Game_loc_6fceece0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312791;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fceece0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea548) {
      FUN_103023e9(&DAT_104ea548);
      if (DAT_104ea548 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92dc = *(int *)(&DAT_103d4a94 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea548);
      }
    }
    D2Game_loc_6fceece0 = sub_GetDllOffset_102f10f0(6,DAT_104e92dc);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fceece0;
}


// 0x102a4570  [gap]
void D2Common_10760(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  if (p_D2Common_10760 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10760 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6f40 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a4596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10760)();
  return;
}


// 0x102a45a0  (ghidra: FUN_102a45a0)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdefa58_102a45a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103127c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdefa58_102a45a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae94) {
      FUN_103023e9(&DAT_104eae94);
      if (DAT_104eae94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8a8 = *(int *)(&DAT_103d3a4c + iVar2 * 4);
        FUN_1030239f(&DAT_104eae94);
      }
    }
    p_D2Common_DAT_6fdefa58_102a45a0 = sub_GetDllOffset_102f10f0(1,DAT_104ea8a8);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdefa58_102a45a0;
}


// 0x102a4650  (ghidra: FUN_102a4650)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdefa5c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103127f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdefa5c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8ff0) {
      FUN_103023e9(&DAT_104e8ff0);
      if (DAT_104e8ff0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7a4 = *(int *)(&DAT_103d46a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e8ff0);
      }
    }
    p_D2Common_DAT_6fdefa5c = sub_GetDllOffset_102f10f0(1,DAT_104ea7a4);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdefa5c;
}


// 0x102a4700  (ghidra: FUN_102a4700)  [gap]
uint32_t * GetPtr_INVENTORY_Inventory_6fd6e1b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312821;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_Inventory_6fd6e1b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f54) {
      FUN_103023e9(&DAT_104e9f54);
      if (DAT_104e9f54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9028 = *(int *)(&DAT_103d45d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f54);
      }
    }
    INVENTORY_Inventory_6fd6e1b0 = sub_GetDllOffset_102f10f0(1,DAT_104e9028);
  }
  ExceptionList = local_10;
  return &INVENTORY_Inventory_6fd6e1b0;
}


// 0x102a47b0  (ghidra: FUN_102a47b0)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdeefe4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312851;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdeefe4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9024) {
      FUN_103023e9(&DAT_104e9024);
      if (DAT_104e9024 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea464 = *(int *)(&DAT_103d306c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9024);
      }
    }
    p_D2Common_DAT_6fdeefe4 = sub_GetDllOffset_102f10f0(1,DAT_104ea464);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdeefe4;
}


// 0x102a4860  (ghidra: FUN_102a4860)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdeefe8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312881;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdeefe8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae1c) {
      FUN_103023e9(&DAT_104eae1c);
      if (DAT_104eae1c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea930 = *(int *)(&DAT_103d31bc + iVar2 * 4);
        FUN_1030239f(&DAT_104eae1c);
      }
    }
    p_D2Common_DAT_6fdeefe8 = sub_GetDllOffset_102f10f0(1,DAT_104ea930);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdeefe8;
}


// 0x102a4910  (ghidra: FUN_102a4910)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba46c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103128b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba46c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5d4) {
      FUN_103023e9(&DAT_104ea5d4);
      if (DAT_104ea5d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa64 = *(int *)(&DAT_103d4564 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5d4);
      }
    }
    p_D2Client_DAT_6fba46c4 = sub_GetDllOffset_102f10f0(0,DAT_104eaa64);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba46c4;
}


// 0x102a49c0  (ghidra: FUN_102a49c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba46c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103128e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba46c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9184) {
      FUN_103023e9(&DAT_104e9184);
      if (DAT_104e9184 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c24 = *(int *)(&DAT_103d3fa4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9184);
      }
    }
    p_D2Client_DAT_6fba46c8 = sub_GetDllOffset_102f10f0(0,DAT_104e9c24);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba46c8;
}


// 0x102a4a70  (ghidra: FUN_102a4a70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba8c9c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312911;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba8c9c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea96c) {
      FUN_103023e9(&DAT_104ea96c);
      if (DAT_104ea96c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a7c = *(int *)(&DAT_103d32a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea96c);
      }
    }
    p_D2Client_DAT_6fba8c9c = sub_GetDllOffset_102f10f0(0,DAT_104e9a7c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba8c9c;
}


// 0x102a4b20  (ghidra: FUN_102a4b20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba9e14(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312941;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba9e14 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9364) {
      FUN_103023e9(&DAT_104e9364);
      if (DAT_104e9364 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e6c = *(int *)(&DAT_103d3bcc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9364);
      }
    }
    p_D2Client_DAT_6fba9e14 = sub_GetDllOffset_102f10f0(0,DAT_104e9e6c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba9e14;
}


// 0x102a4bd0  (ghidra: FUN_102a4bd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba9e18(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312971;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba9e18 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac28) {
      FUN_103023e9(&DAT_104eac28);
      if (DAT_104eac28 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3f8 = *(int *)(&DAT_103d466c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac28);
      }
    }
    p_D2Client_DAT_6fba9e18 = sub_GetDllOffset_102f10f0(0,DAT_104ea3f8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba9e18;
}


// 0x102a4c80  (ghidra: FUN_102a4c80)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103129a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9348) {
      FUN_103023e9(&DAT_104e9348);
      if (DAT_104e9348 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93f0 = *(int *)(&DAT_103d4a1c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9348);
      }
    }
    p_D2Client_DAT_6fbaad50 = sub_GetDllOffset_102f10f0(0,DAT_104e93f0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad50;
}


// 0x102a4d30  (ghidra: FUN_102a4d30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103129d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea034) {
      FUN_103023e9(&DAT_104ea034);
      if (DAT_104ea034 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9134 = *(int *)(&DAT_103d39dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea034);
      }
    }
    p_D2Client_DAT_6fbaad80 = sub_GetDllOffset_102f10f0(0,DAT_104e9134);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad80;
}


// 0x102a4de0  (ghidra: FUN_102a4de0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad94_102a4de0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312a01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad94_102a4de0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea238) {
      FUN_103023e9(&DAT_104ea238);
      if (DAT_104ea238 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94dc = *(int *)(&DAT_103d43dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea238);
      }
    }
    p_D2Client_DAT_6fbaad94_102a4de0 = sub_GetDllOffset_102f10f0(0,DAT_104e94dc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad94_102a4de0;
}


// 0x102a4e90  (ghidra: FUN_102a4e90)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaada4_102a4e90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312a31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaada4_102a4e90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92ec) {
      FUN_103023e9(&DAT_104e92ec);
      if (DAT_104e92ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea928 = *(int *)(&DAT_103d354c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92ec);
      }
    }
    p_D2Client_DAT_6fbaada4_102a4e90 = sub_GetDllOffset_102f10f0(0,DAT_104ea928);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaada4_102a4e90;
}


// 0x102a4f40  (ghidra: FUN_102a4f40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaadac_102a4f40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312a61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaadac_102a4f40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead54) {
      FUN_103023e9(&DAT_104ead54);
      if (DAT_104ead54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fb8 = *(int *)(&DAT_103d483c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead54);
      }
    }
    p_D2Client_DAT_6fbaadac_102a4f40 = sub_GetDllOffset_102f10f0(0,DAT_104e8fb8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaadac_102a4f40;
}


// 0x102a4ff0  (ghidra: FUN_102a4ff0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaade4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312a91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaade4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0ec) {
      FUN_103023e9(&DAT_104ea0ec);
      if (DAT_104ea0ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98d4 = *(int *)(&DAT_103d3394 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0ec);
      }
    }
    p_D2Client_DAT_6fbaade4 = sub_GetDllOffset_102f10f0(0,DAT_104e98d4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaade4;
}


// 0x102a50a0  (ghidra: FUN_102a50a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaade8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312ac1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaade8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea254) {
      FUN_103023e9(&DAT_104ea254);
      if (DAT_104ea254 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d2c = *(int *)(&DAT_103d36ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea254);
      }
    }
    p_D2Client_DAT_6fbaade8 = sub_GetDllOffset_102f10f0(0,DAT_104e9d2c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaade8;
}


// 0x102a5150  (ghidra: FUN_102a5150)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3a68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312af1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3a68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb088) {
      FUN_103023e9(&DAT_104eb088);
      if (DAT_104eb088 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea150 = *(int *)(&DAT_103d422c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb088);
      }
    }
    p_D2Client_DAT_6fbc3a68 = sub_GetDllOffset_102f10f0(0,DAT_104ea150);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3a68;
}


// 0x102a5200  (ghidra: FUN_102a5200)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2f4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312b21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2f4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91d8) {
      FUN_103023e9(&DAT_104e91d8);
      if (DAT_104e91d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2e0 = *(int *)(&DAT_103d3e74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e91d8);
      }
    }
    p_D2Client_DAT_6fbcc2f4 = sub_GetDllOffset_102f10f0(0,DAT_104ea2e0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2f4;
}


// 0x102a52b0  (ghidra: FUN_102a52b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312b51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b84) {
      FUN_103023e9(&DAT_104e9b84);
      if (DAT_104e9b84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea804 = *(int *)(&DAT_103d4ab4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b84);
      }
    }
    p_D2Client_DAT_6fbcc2f8 = sub_GetDllOffset_102f10f0(0,DAT_104ea804);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2f8;
}


// 0x102a5360  (ghidra: FUN_102a5360)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc068(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312b81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc068 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4e0) {
      FUN_103023e9(&DAT_104ea4e0);
      if (DAT_104ea4e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead08 = *(int *)(&DAT_103d4d5c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4e0);
      }
    }
    p_D2Client_DAT_6fbcc068 = sub_GetDllOffset_102f10f0(0,DAT_104ead08);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc068;
}


// 0x102a5410  (ghidra: FUN_102a5410)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc06c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312bb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc06c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9df4) {
      FUN_103023e9(&DAT_104e9df4);
      if (DAT_104e9df4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9510 = *(int *)(&DAT_103d46f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9df4);
      }
    }
    p_D2Client_DAT_6fbcc06c = sub_GetDllOffset_102f10f0(0,DAT_104e9510);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc06c;
}


// 0x102a54c0  (ghidra: FUN_102a54c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3dc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312be1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3dc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9358) {
      FUN_103023e9(&DAT_104e9358);
      if (DAT_104e9358 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea470 = *(int *)(&DAT_103d4194 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9358);
      }
    }
    p_D2Client_DAT_6fbcc3dc = sub_GetDllOffset_102f10f0(0,DAT_104ea470);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3dc;
}


// 0x102a5570  (ghidra: FUN_102a5570)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3de(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312c11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3de == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4f0) {
      FUN_103023e9(&DAT_104ea4f0);
      if (DAT_104ea4f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9378 = *(int *)(&DAT_103d5024 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4f0);
      }
    }
    p_D2Client_DAT_6fbcc3de = sub_GetDllOffset_102f10f0(0,DAT_104e9378);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3de;
}


// 0x102a5620  (ghidra: FUN_102a5620)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312c41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7cc) {
      FUN_103023e9(&DAT_104ea7cc);
      if (DAT_104ea7cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6cc = *(int *)(&DAT_103d3ce4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7cc);
      }
    }
    p_D2Client_DAT_6fbcc3f8 = sub_GetDllOffset_102f10f0(0,DAT_104ea6cc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3f8;
}


// 0x102a56d0  (ghidra: FUN_102a56d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3fc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312c71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3fc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6dc) {
      FUN_103023e9(&DAT_104ea6dc);
      if (DAT_104ea6dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea664 = *(int *)(&DAT_103d50cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6dc);
      }
    }
    p_D2Client_DAT_6fbcc3fc = sub_GetDllOffset_102f10f0(0,DAT_104ea664);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3fc;
}


// 0x102a5780  (ghidra: FUN_102a5780)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc39c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312ca1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc39c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9524) {
      FUN_103023e9(&DAT_104e9524);
      if (DAT_104e9524 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea624 = *(int *)(&DAT_103d50ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9524);
      }
    }
    p_D2Client_DAT_6fbcc39c = sub_GetDllOffset_102f10f0(0,DAT_104ea624);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc39c;
}


// 0x102a5830  (ghidra: FUN_102a5830)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312cd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93d0) {
      FUN_103023e9(&DAT_104e93d0);
      if (DAT_104e93d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa88 = *(int *)(&DAT_103d4f6c + iVar2 * 4);
        FUN_1030239f(&DAT_104e93d0);
      }
    }
    p_D2Client_DAT_6fbcc3a0 = sub_GetDllOffset_102f10f0(0,DAT_104eaa88);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3a0;
}


// 0x102a58e0  (ghidra: FUN_102a58e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3a4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312d01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3a4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e925c) {
      FUN_103023e9(&DAT_104e925c);
      if (DAT_104e925c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea650 = *(int *)(&DAT_103d3ecc + iVar2 * 4);
        FUN_1030239f(&DAT_104e925c);
      }
    }
    p_D2Client_DAT_6fbcc3a4 = sub_GetDllOffset_102f10f0(0,DAT_104ea650);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3a4;
}


// 0x102a5990  (ghidra: FUN_102a5990)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312d31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9168) {
      FUN_103023e9(&DAT_104e9168);
      if (DAT_104e9168 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea95c = *(int *)(&DAT_103d3b74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9168);
      }
    }
    p_D2Client_DAT_6fbcc3f0 = sub_GetDllOffset_102f10f0(0,DAT_104ea95c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3f0;
}


// 0x102a5a40  (ghidra: FUN_102a5a40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc418(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312d61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc418 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea138) {
      FUN_103023e9(&DAT_104ea138);
      if (DAT_104ea138 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9248 = *(int *)(&DAT_103d3f54 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea138);
      }
    }
    p_D2Client_DAT_6fbcc418 = sub_GetDllOffset_102f10f0(0,DAT_104e9248);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc418;
}


// 0x102a5af0  (ghidra: FUN_102a5af0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc534(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312d91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc534 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa94) {
      FUN_103023e9(&DAT_104eaa94);
      if (DAT_104eaa94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaaa0 = *(int *)(&DAT_103d4a84 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa94);
      }
    }
    p_D2Client_DAT_6fbcc534 = sub_GetDllOffset_102f10f0(0,DAT_104eaaa0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc534;
}


// 0x102a5ba0  (ghidra: FUN_102a5ba0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc538(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312dc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc538 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead3c) {
      FUN_103023e9(&DAT_104ead3c);
      if (DAT_104ead3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b3c = *(int *)(&DAT_103d3444 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead3c);
      }
    }
    p_D2Client_DAT_6fbcc538 = sub_GetDllOffset_102f10f0(0,DAT_104e9b3c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc538;
}


// 0x102a5c50  (ghidra: FUN_102a5c50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc540(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312df1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc540 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9220) {
      FUN_103023e9(&DAT_104e9220);
      if (DAT_104e9220 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c10 = *(int *)(&DAT_103d313c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9220);
      }
    }
    p_D2Client_DAT_6fbcc540 = sub_GetDllOffset_102f10f0(0,DAT_104e9c10);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc540;
}


// 0x102a5d00  (ghidra: FUN_102a5d00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc544(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312e21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc544 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8b8) {
      FUN_103023e9(&DAT_104ea8b8);
      if (DAT_104ea8b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4f8 = *(int *)(&DAT_103d3564 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8b8);
      }
    }
    p_D2Client_DAT_6fbcc544 = sub_GetDllOffset_102f10f0(0,DAT_104ea4f8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc544;
}


// 0x102a5db0  (ghidra: FUN_102a5db0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd33f4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312e51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd33f4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3c0) {
      FUN_103023e9(&DAT_104ea3c0);
      if (DAT_104ea3c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99cc = *(int *)(&DAT_103d50fc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3c0);
      }
    }
    p_D2Client_DAT_6fbd33f4 = sub_GetDllOffset_102f10f0(0,DAT_104e99cc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd33f4;
}


// 0x102a5e60  (ghidra: FUN_102a5e60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd3498(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312e81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd3498 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92e8) {
      FUN_103023e9(&DAT_104e92e8);
      if (DAT_104e92e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e980c = *(int *)(&DAT_103d484c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92e8);
      }
    }
    p_D2Client_DAT_6fbd3498 = sub_GetDllOffset_102f10f0(0,DAT_104e980c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd3498;
}


// 0x102a5f10  (ghidra: FUN_102a5f10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd349c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312eb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd349c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e969c) {
      FUN_103023e9(&DAT_104e969c);
      if (DAT_104e969c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8a4 = *(int *)(&DAT_103d4ed4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e969c);
      }
    }
    p_D2Client_DAT_6fbd349c = sub_GetDllOffset_102f10f0(0,DAT_104ea8a4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd349c;
}


// 0x102a5fc0  (ghidra: FUN_102a5fc0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd34c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312ee1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd34c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaae4) {
      FUN_103023e9(&DAT_104eaae4);
      if (DAT_104eaae4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea174 = *(int *)(&DAT_103d4e6c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaae4);
      }
    }
    p_D2Client_DAT_6fbd34c0 = sub_GetDllOffset_102f10f0(0,DAT_104ea174);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd34c0;
}


// 0x102a6070  (ghidra: FUN_102a6070)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4d4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312f11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4d4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9748) {
      FUN_103023e9(&DAT_104e9748);
      if (DAT_104e9748 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94c8 = *(int *)(&DAT_103d47bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9748);
      }
    }
    p_D2Client_DAT_6fbcc4d4 = sub_GetDllOffset_102f10f0(0,DAT_104e94c8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4d4;
}


// 0x102a6120  (ghidra: FUN_102a6120)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc97f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312f41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc97f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9268) {
      FUN_103023e9(&DAT_104e9268);
      if (DAT_104e9268 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae44 = *(int *)(&DAT_103d33f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9268);
      }
    }
    p_D2Client_DAT_6fbc97f8 = sub_GetDllOffset_102f10f0(0,DAT_104eae44);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc97f8;
}


// 0x102a61d0  (ghidra: FUN_102a61d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc985c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312f71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc985c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea918) {
      FUN_103023e9(&DAT_104ea918);
      if (DAT_104ea918 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98d8 = *(int *)(&DAT_103d3b3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea918);
      }
    }
    p_D2Client_DAT_6fbc985c = sub_GetDllOffset_102f10f0(0,DAT_104e98d8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc985c;
}


// 0x102a6280  [gap]
int D2Common_10787(int *param_1,int *param_2)

{
  int iVar1;
  
  if (p_D2Common_10787 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10787 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7838 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a62a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10787)();
  return iVar1;
}


// 0x102a62b0  (ghidra: FUN_102a62b0)  [gap]
uint32_t * GetPtr_GAME_Targets_6fd0fe40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312fa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Targets_6fd0fe40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98a0) {
      FUN_103023e9(&DAT_104e98a0);
      if (DAT_104e98a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf34 = *(int *)(&DAT_103d4d84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e98a0);
      }
    }
    GAME_Targets_6fd0fe40 = sub_GetDllOffset_102f10f0(6,DAT_104eaf34);
  }
  ExceptionList = local_10;
  return &GAME_Targets_6fd0fe40;
}


// 0x102a6360  (ghidra: FUN_102a6360)  [gap]
uint32_t * GetPtr_D2Client_loc_6faed110(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10312fd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faed110 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9740) {
      FUN_103023e9(&DAT_104e9740);
      if (DAT_104e9740 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6c8 = *(int *)(&DAT_103d329c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9740);
      }
    }
    D2Client_loc_6faed110 = sub_GetDllOffset_102f10f0(0,DAT_104ea6c8);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faed110;
}


// 0x102a6410  (ghidra: FUN_102a6410)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9dd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313001;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9dd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96ac) {
      FUN_103023e9(&DAT_104e96ac);
      if (DAT_104e96ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e965c = *(int *)(&DAT_103d49d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96ac);
      }
    }
    p_D2Client_DAT_6fbc9dd0 = sub_GetDllOffset_102f10f0(0,DAT_104e965c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9dd0;
}


// 0x102a64c0  (ghidra: FUN_102a64c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9d30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313031;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9d30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb054) {
      FUN_103023e9(&DAT_104eb054);
      if (DAT_104eb054 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3a0 = *(int *)(&DAT_103d30dc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb054);
      }
    }
    p_D2Client_DAT_6fbc9d30 = sub_GetDllOffset_102f10f0(0,DAT_104ea3a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9d30;
}


// 0x102a6570  (ghidra: FUN_102a6570)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9e20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313061;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9e20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead94) {
      FUN_103023e9(&DAT_104ead94);
      if (DAT_104ead94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaedc = *(int *)(&DAT_103d4b7c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead94);
      }
    }
    p_D2Client_DAT_6fbc9e20 = sub_GetDllOffset_102f10f0(0,DAT_104eaedc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9e20;
}


// 0x102a6620  (ghidra: FUN_102a6620)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9d70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313091;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9d70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ff4) {
      FUN_103023e9(&DAT_104e9ff4);
      if (DAT_104e9ff4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0b0 = *(int *)(&DAT_103d4b94 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ff4);
      }
    }
    p_D2Client_DAT_6fbc9d70 = sub_GetDllOffset_102f10f0(0,DAT_104ea0b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9d70;
}


// 0x102a66d0  [gap]
uint sub_6facbf20(uint param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6facbf20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6facbf20 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7148 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a66f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6facbf20)();
  return uVar2;
}


// 0x102a6700  (ghidra: FUN_102a6700)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca2e4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103130c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca2e4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9594) {
      FUN_103023e9(&DAT_104e9594);
      if (DAT_104e9594 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafe0 = *(int *)(&DAT_103d460c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9594);
      }
    }
    p_D2Client_DAT_6fbca2e4 = sub_GetDllOffset_102f10f0(0,DAT_104eafe0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca2e4;
}


// 0x102a67b0  (ghidra: FUN_102a67b0)  [gap]
uint32_t * GetPtr_sub_6fae91e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103130f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fae91e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea25c) {
      FUN_103023e9(&DAT_104ea25c);
      if (DAT_104ea25c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9040 = *(int *)(&DAT_103d5054 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea25c);
      }
    }
    sub_6fae91e0 = sub_GetDllOffset_102f10f0(0,DAT_104e9040);
  }
  ExceptionList = local_10;
  return &sub_6fae91e0;
}


// 0x102a6860  (ghidra: FUN_102a6860)  [gap]
uint32_t * GetPtr_sub_6fae9f30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313121;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fae9f30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e904c) {
      FUN_103023e9(&DAT_104e904c);
      if (DAT_104e904c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fa4 = *(int *)(&DAT_103d30f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e904c);
      }
    }
    sub_6fae9f30 = sub_GetDllOffset_102f10f0(0,DAT_104e9fa4);
  }
  ExceptionList = local_10;
  return &sub_6fae9f30;
}


// 0x102a6910  (ghidra: FUN_102a6910)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca2e6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313151;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca2e6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b58) {
      FUN_103023e9(&DAT_104e9b58);
      if (DAT_104e9b58 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae88 = *(int *)(&DAT_103d4074 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b58);
      }
    }
    p_D2Client_DAT_6fbca2e6 = sub_GetDllOffset_102f10f0(0,DAT_104eae88);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca2e6;
}


// 0x102a69c0  (ghidra: FUN_102a69c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd23c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313181;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd23c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0ac) {
      FUN_103023e9(&DAT_104eb0ac);
      if (DAT_104eb0ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e962c = *(int *)(&DAT_103d4a5c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0ac);
      }
    }
    p_D2Client_DAT_6fbd23c8 = sub_GetDllOffset_102f10f0(0,DAT_104e962c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd23c8;
}


// 0x102a6a70  [gap]
uint __cdecl Storm_578(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_578 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_578 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c7650 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_578)();
  return uVar2;
}


// 0x102a6aa0  (ghidra: FUN_102a6aa0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1e8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103131b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1e8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4ec) {
      FUN_103023e9(&DAT_104ea4ec);
      if (DAT_104ea4ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f20 = *(int *)(&DAT_103d4234 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4ec);
      }
    }
    p_D2Client_DAT_6fbcc1e8 = sub_GetDllOffset_102f10f0(0,DAT_104e9f20);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1e8;
}


// 0x102a6b50  (ghidra: FUN_102a6b50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1ec(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103131e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1ec == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa44) {
      FUN_103023e9(&DAT_104eaa44);
      if (DAT_104eaa44 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e997c = *(int *)(&DAT_103d36d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa44);
      }
    }
    p_D2Client_DAT_6fbcc1ec = sub_GetDllOffset_102f10f0(0,DAT_104e997c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1ec;
}


// 0x102a6c00  (ghidra: FUN_102a6c00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc414(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313211;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc414 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea43c) {
      FUN_103023e9(&DAT_104ea43c);
      if (DAT_104ea43c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f58 = *(int *)(&DAT_103d4154 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea43c);
      }
    }
    p_D2Client_DAT_6fbcc414 = sub_GetDllOffset_102f10f0(0,DAT_104e9f58);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc414;
}


// 0x102a6cb0  [gap]
uint Storm_423(uint *param_1,LPCSTR param_2,byte param_3,ulong *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_423 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_423 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c65b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_423)();
  return uVar2;
}


// 0x102a6ce0  [gap]
uint Storm_426(uint *param_1,LPCSTR param_2,uint param_3,uint32_t param_s4)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_426 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_426 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c6f00 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_426)();
  return uVar2;
}


// 0x102a6d10  [gap]
uint Storm_422(uint *param_1,LPCSTR param_2,uint param_3,uint32_t param_4,DWORD param_5)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_422 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_422 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c7d58 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_422)();
  return uVar2;
}


// 0x102a6d40  [gap]
uint sub_6fb6e350(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fb6e350 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb6e350 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7178 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fb6e350)();
  return uVar2;
}


// 0x102a6d70  [gap]
void D2Common_10991(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  if (p_D2Common_10991 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10991 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c79b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10991)();
  return;
}


// 0x102a6da0  [gap]
uint D2Common_10835(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10835 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10835 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7a88 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a6dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10835)();
  return uVar2;
}


// 0x102a6dd0  (ghidra: FUN_102a6dd0)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fded378(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313241;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fded378 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e9c) {
      FUN_103023e9(&DAT_104e9e9c);
      if (DAT_104e9e9c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa20 = *(int *)(&DAT_103d508c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e9c);
      }
    }
    p_D2Common_DAT_6fded378 = sub_GetDllOffset_102f10f0(1,DAT_104eaa20);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fded378;
}


// 0x102a6e80  (ghidra: FUN_102a6e80)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fded390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313271;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fded390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98e8) {
      FUN_103023e9(&DAT_104e98e8);
      if (DAT_104e98e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1d8 = *(int *)(&DAT_103d3bdc + iVar2 * 4);
        FUN_1030239f(&DAT_104e98e8);
      }
    }
    p_D2Common_DAT_6fded390 = sub_GetDllOffset_102f10f0(1,DAT_104ea1d8);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fded390;
}


// 0x102a6f30  (ghidra: FUN_102a6f30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca774(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103132a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca774 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf20) {
      FUN_103023e9(&DAT_104eaf20);
      if (DAT_104eaf20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9770 = *(int *)(&DAT_103d4824 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf20);
      }
    }
    p_D2Client_DAT_6fbca774 = sub_GetDllOffset_102f10f0(0,DAT_104e9770);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca774;
}


// 0x102a6fe0  (ghidra: FUN_102a6fe0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc468(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103132d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc468 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94ec) {
      FUN_103023e9(&DAT_104e94ec);
      if (DAT_104e94ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea868 = *(int *)(&DAT_103d326c + iVar2 * 4);
        FUN_1030239f(&DAT_104e94ec);
      }
    }
    p_D2Client_DAT_6fbcc468 = sub_GetDllOffset_102f10f0(0,DAT_104ea868);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc468;
}


// 0x102a7090  (ghidra: FUN_102a7090)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc46c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313301;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc46c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9530) {
      FUN_103023e9(&DAT_104e9530);
      if (DAT_104e9530 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab08 = *(int *)(&DAT_103d3d0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9530);
      }
    }
    p_D2Client_DAT_6fbcc46c = sub_GetDllOffset_102f10f0(0,DAT_104eab08);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc46c;
}


// 0x102a7140  (ghidra: FUN_102a7140)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc470(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313331;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc470 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9774) {
      FUN_103023e9(&DAT_104e9774);
      if (DAT_104e9774 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4d0 = *(int *)(&DAT_103d44e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9774);
      }
    }
    p_D2Client_DAT_6fbcc470 = sub_GetDllOffset_102f10f0(0,DAT_104ea4d0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc470;
}


// 0x102a71f0  (ghidra: FUN_102a71f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc474(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313361;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc474 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9dd4) {
      FUN_103023e9(&DAT_104e9dd4);
      if (DAT_104e9dd4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea77c = *(int *)(&DAT_103d4a7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9dd4);
      }
    }
    p_D2Client_DAT_6fbcc474 = sub_GetDllOffset_102f10f0(0,DAT_104ea77c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc474;
}


// 0x102a72a0  (ghidra: FUN_102a72a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc47c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313391;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc47c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8d4) {
      FUN_103023e9(&DAT_104ea8d4);
      if (DAT_104ea8d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9834 = *(int *)(&DAT_103d4244 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8d4);
      }
    }
    p_D2Client_DAT_6fbcc47c = sub_GetDllOffset_102f10f0(0,DAT_104e9834);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc47c;
}


// 0x102a7350  (ghidra: FUN_102a7350)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba5384(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103133c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba5384 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa40) {
      FUN_103023e9(&DAT_104eaa40);
      if (DAT_104eaa40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea384 = *(int *)(&DAT_103d3eb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa40);
      }
    }
    p_D2Client_DAT_6fba5384 = sub_GetDllOffset_102f10f0(0,DAT_104ea384);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba5384;
}


// 0x102a7400  (ghidra: FUN_102a7400)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba538c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103133f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba538c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d14) {
      FUN_103023e9(&DAT_104e9d14);
      if (DAT_104e9d14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9094 = *(int *)(&DAT_103d4424 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d14);
      }
    }
    p_D2Client_DAT_6fba538c = sub_GetDllOffset_102f10f0(0,DAT_104e9094);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba538c;
}


// 0x102a74b0  (ghidra: FUN_102a74b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba5390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313421;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba5390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea05c) {
      FUN_103023e9(&DAT_104ea05c);
      if (DAT_104ea05c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9800 = *(int *)(&DAT_103d3cc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea05c);
      }
    }
    p_D2Client_DAT_6fba5390 = sub_GetDllOffset_102f10f0(0,DAT_104e9800);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba5390;
}


// 0x102a7560  (ghidra: FUN_102a7560)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba5394(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313451;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba5394 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9098) {
      FUN_103023e9(&DAT_104e9098);
      if (DAT_104e9098 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea788 = *(int *)(&DAT_103d3154 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9098);
      }
    }
    p_D2Client_DAT_6fba5394 = sub_GetDllOffset_102f10f0(0,DAT_104ea788);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba5394;
}


// 0x102a7610  (ghidra: FUN_102a7610)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb99c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313481;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb99c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb068) {
      FUN_103023e9(&DAT_104eb068);
      if (DAT_104eb068 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaaac = *(int *)(&DAT_103d3d5c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb068);
      }
    }
    p_D2Client_DAT_6fbcb99c = sub_GetDllOffset_102f10f0(0,DAT_104eaaac);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb99c;
}


// 0x102a76c0  (ghidra: FUN_102a76c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103134b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9dd8) {
      FUN_103023e9(&DAT_104e9dd8);
      if (DAT_104e9dd8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b2c = *(int *)(&DAT_103d42e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9dd8);
      }
    }
    p_D2Client_DAT_6fbcc4b0 = sub_GetDllOffset_102f10f0(0,DAT_104e9b2c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4b0;
}


// 0x102a7770  (ghidra: FUN_102a7770)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4b4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103134e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4b4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a6c) {
      FUN_103023e9(&DAT_104e9a6c);
      if (DAT_104e9a6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a18 = *(int *)(&DAT_103d34bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a6c);
      }
    }
    p_D2Client_DAT_6fbcc4b4 = sub_GetDllOffset_102f10f0(0,DAT_104e9a18);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4b4;
}


// 0x102a7820  [gap]
void sub_6fad65e0(void)

{
  int iVar1;
  
  if (p_sub_6fad65e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fad65e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6a10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fad65e0)();
  return;
}


// 0x102a7850  (ghidra: FUN_102a7850)  [gap]
uint32_t * GetPtr_sub_6fad77e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313511;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad77e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fbc) {
      FUN_103023e9(&DAT_104e9fbc);
      if (DAT_104e9fbc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea110 = *(int *)(&DAT_103d342c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fbc);
      }
    }
    sub_6fad77e0 = sub_GetDllOffset_102f10f0(0,DAT_104ea110);
  }
  ExceptionList = local_10;
  return &sub_6fad77e0;
}


// 0x102a7900  (ghidra: FUN_102a7900)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb1b5a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313541;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb1b5a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea09c) {
      FUN_103023e9(&DAT_104ea09c);
      if (DAT_104ea09c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95d8 = *(int *)(&DAT_103d3344 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea09c);
      }
    }
    ENGINE_Gfx_6fb1b5a0 = sub_GetDllOffset_102f10f0(0,DAT_104e95d8);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb1b5a0;
}


// 0x102a79b0  (ghidra: FUN_102a79b0)  [gap]
uint32_t * GetPtr_ENGINE_GfxUtil_6fb1e2c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313571;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_GfxUtil_6fb1e2c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9b0) {
      FUN_103023e9(&DAT_104ea9b0);
      if (DAT_104ea9b0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b04 = *(int *)(&DAT_103d44cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9b0);
      }
    }
    ENGINE_GfxUtil_6fb1e2c0 = sub_GetDllOffset_102f10f0(0,DAT_104e9b04);
  }
  ExceptionList = local_10;
  return &ENGINE_GfxUtil_6fb1e2c0;
}


// 0x102a7a60  (ghidra: FUN_102a7a60)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb1d280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103135a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb1d280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea348) {
      FUN_103023e9(&DAT_104ea348);
      if (DAT_104ea348 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9598 = *(int *)(&DAT_103d463c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea348);
      }
    }
    ENGINE_Gfx_6fb1d280 = sub_GetDllOffset_102f10f0(0,DAT_104e9598);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb1d280;
}


// 0x102a7b10  [gap]
void ENGINE_Gfx_6fb1aee0(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (p_ENGINE_Gfx_6fb1aee0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_ENGINE_Gfx_6fb1aee0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7828 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_ENGINE_Gfx_6fb1aee0)();
  return;
}


// 0x102a7b40  (ghidra: FUN_102a7b40)  [gap]
uint32_t * GetPtr_ENGINE_GfxUtil_6fb1db40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103135d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_GfxUtil_6fb1db40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9e4) {
      FUN_103023e9(&DAT_104ea9e4);
      if (DAT_104ea9e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa48 = *(int *)(&DAT_103d4efc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9e4);
      }
    }
    ENGINE_GfxUtil_6fb1db40 = sub_GetDllOffset_102f10f0(0,DAT_104eaa48);
  }
  ExceptionList = local_10;
  return &ENGINE_GfxUtil_6fb1db40;
}


// 0x102a7bf0  (ghidra: FUN_102a7bf0)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb19b40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313601;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb19b40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9744) {
      FUN_103023e9(&DAT_104e9744);
      if (DAT_104e9744 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9dc8 = *(int *)(&DAT_103d4bdc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9744);
      }
    }
    ENGINE_Gfx_6fb19b40 = sub_GetDllOffset_102f10f0(0,DAT_104e9dc8);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb19b40;
}


// 0x102a7ca0  (ghidra: FUN_102a7ca0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb18f40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313631;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb18f40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a14) {
      FUN_103023e9(&DAT_104e9a14);
      if (DAT_104e9a14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fc4 = *(int *)(&DAT_103d3fec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a14);
      }
    }
    D2Client_loc_6fb18f40 = sub_GetDllOffset_102f10f0(0,DAT_104e9fc4);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb18f40;
}


// 0x102a7d50  [gap]
uint D2Common_10530(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10530 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10530 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c79a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10530)();
  return uVar2;
}


// 0x102a7d80  (ghidra: FUN_102a7d80)  [gap]
uint32_t * GetPtr_INVENTORY_Inventory_6fd6fb50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313661;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_Inventory_6fd6fb50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96c0) {
      FUN_103023e9(&DAT_104e96c0);
      if (DAT_104e96c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4dc = *(int *)(&DAT_103d34d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96c0);
      }
    }
    INVENTORY_Inventory_6fd6fb50 = sub_GetDllOffset_102f10f0(1,DAT_104ea4dc);
  }
  ExceptionList = local_10;
  return &INVENTORY_Inventory_6fd6fb50;
}


// 0x102a7e30  [gap]
void D2Common_10457(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_D2Common_10457 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10457 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6890 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10457)();
  return;
}


// 0x102a7e60  (ghidra: FUN_102a7e60)  [gap]
uint32_t * GetPtr_INVENTORY_Inventory_6fd70e80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313691;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_Inventory_6fd70e80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9638) {
      FUN_103023e9(&DAT_104e9638);
      if (DAT_104e9638 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea140 = *(int *)(&DAT_103d3794 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9638);
      }
    }
    INVENTORY_Inventory_6fd70e80 = sub_GetDllOffset_102f10f0(1,DAT_104ea140);
  }
  ExceptionList = local_10;
  return &INVENTORY_Inventory_6fd70e80;
}


// 0x102a7f10  [gap]
int * D2Common_10062(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (p_D2Common_10062 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10062 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c65c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_D2Common_10062)();
  return piVar2;
}


// 0x102a7f40  [gap]
uint D2Common_10673(int param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10673 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10673 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6508 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a7f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10673)();
  return uVar2;
}


// 0x102a7f70  (ghidra: FUN_102a7f70)  [gap]
uint32_t * GetPtr_sub_6fac3ce0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103136c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac3ce0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94e8) {
      FUN_103023e9(&DAT_104e94e8);
      if (DAT_104e94e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea778 = *(int *)(&DAT_103d3c24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e94e8);
      }
    }
    sub_6fac3ce0 = sub_GetDllOffset_102f10f0(0,DAT_104ea778);
  }
  ExceptionList = local_10;
  return &sub_6fac3ce0;
}


// 0x102a8050  [gap]
int sub_6fae9c30_102a8050(void)

{
  int iVar1;
  
  if (p_sub_6fae9c30_102a8050 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c30_102a8050 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2cac + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a8073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c30_102a8050)();
  return iVar1;
}


// 0x102a8080  [gap]
void sub_6fb4f460(void)

{
  int iVar1;
  
  if (p_sub_6fb4f460 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb4f460 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7c20 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a80a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb4f460)();
  return;
}


// 0x102a80b0  (ghidra: FUN_102a80b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103136f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90f0) {
      FUN_103023e9(&DAT_104e90f0);
      if (DAT_104e90f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7dc = *(int *)(&DAT_103d377c + iVar2 * 4);
        FUN_1030239f(&DAT_104e90f0);
      }
    }
    p_D2Client_DAT_6fbcbc10 = sub_GetDllOffset_102f10f0(0,DAT_104ea7dc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc10;
}


// 0x102a8160  (ghidra: FUN_102a8160)  [gap]
uint32_t * GetPtr_sub_6fc6eb50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313721;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc6eb50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c08) {
      FUN_103023e9(&DAT_104e9c08);
      if (DAT_104e9c08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafd8 = *(int *)(&DAT_103d50c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c08);
      }
    }
    sub_6fc6eb50 = sub_GetDllOffset_102f10f0(6,DAT_104eafd8);
  }
  ExceptionList = local_10;
  return &sub_6fc6eb50;
}


// 0x102a8210  (ghidra: FUN_102a8210)  [gap]
uint32_t * GetPtr_sub_6fc6e180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313751;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc6e180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95ac) {
      FUN_103023e9(&DAT_104e95ac);
      if (DAT_104e95ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9414 = *(int *)(&DAT_103d3104 + iVar2 * 4);
        FUN_1030239f(&DAT_104e95ac);
      }
    }
    sub_6fc6e180 = sub_GetDllOffset_102f10f0(6,DAT_104e9414);
  }
  ExceptionList = local_10;
  return &sub_6fc6e180;
}


// 0x102a82c0  (ghidra: FUN_102a82c0)  [gap]
uint32_t * GetPtr_UNIT_Party_6fcbc840(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313781;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Party_6fcbc840 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea314) {
      FUN_103023e9(&DAT_104ea314);
      if (DAT_104ea314 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e24 = *(int *)(&DAT_103d431c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea314);
      }
    }
    UNIT_Party_6fcbc840 = sub_GetDllOffset_102f10f0(6,DAT_104e9e24);
  }
  ExceptionList = local_10;
  return &UNIT_Party_6fcbc840;
}


// 0x102a8370  (ghidra: FUN_102a8370)  [gap]
uint32_t * GetPtr_sub_6fcae2a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103137b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcae2a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ef8) {
      FUN_103023e9(&DAT_104e9ef8);
      if (DAT_104e9ef8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90f8 = *(int *)(&DAT_103d3cb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ef8);
      }
    }
    sub_6fcae2a0 = sub_GetDllOffset_102f10f0(6,DAT_104e90f8);
  }
  ExceptionList = local_10;
  return &sub_6fcae2a0;
}


// 0x102a8420  (ghidra: FUN_102a8420)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6ea0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103137e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb6ea0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bcc) {
      FUN_103023e9(&DAT_104e9bcc);
      if (DAT_104e9bcc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9274 = *(int *)(&DAT_103d498c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bcc);
      }
    }
    PLAYER_PlayerPets_6fcb6ea0 = sub_GetDllOffset_102f10f0(6,DAT_104e9274);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb6ea0;
}


// 0x102a84d0  (ghidra: FUN_102a84d0)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb67b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313811;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb67b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea59c) {
      FUN_103023e9(&DAT_104ea59c);
      if (DAT_104ea59c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea98c = *(int *)(&DAT_103d304c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea59c);
      }
    }
    PLAYER_PlayerPets_6fcb67b0 = sub_GetDllOffset_102f10f0(6,DAT_104ea98c);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb67b0;
}


// 0x102a8580  (ghidra: FUN_102a8580)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6a40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313841;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb6a40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9258) {
      FUN_103023e9(&DAT_104e9258);
      if (DAT_104e9258 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead58 = *(int *)(&DAT_103d41dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9258);
      }
    }
    PLAYER_PlayerPets_6fcb6a40 = sub_GetDllOffset_102f10f0(6,DAT_104ead58);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb6a40;
}


// 0x102a8630  (ghidra: FUN_102a8630)  [gap]
uint32_t * GetPtr_Ai_AiThink4_6fcc3ae0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313871;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiThink4_6fcc3ae0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e931c) {
      FUN_103023e9(&DAT_104e931c);
      if (DAT_104e931c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94b0 = *(int *)(&DAT_103d4c24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e931c);
      }
    }
    Ai_AiThink4_6fcc3ae0 = sub_GetDllOffset_102f10f0(6,DAT_104e94b0);
  }
  ExceptionList = local_10;
  return &Ai_AiThink4_6fcc3ae0;
}


// 0x102a86e0  (ghidra: FUN_102a86e0)  [gap]
uint32_t * GetPtr_Ai_AiThink4_6fcc4890(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103138a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiThink4_6fcc4890 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabb4) {
      FUN_103023e9(&DAT_104eabb4);
      if (DAT_104eabb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea980 = *(int *)(&DAT_103d381c + iVar2 * 4);
        FUN_1030239f(&DAT_104eabb4);
      }
    }
    Ai_AiThink4_6fcc4890 = sub_GetDllOffset_102f10f0(6,DAT_104ea980);
  }
  ExceptionList = local_10;
  return &Ai_AiThink4_6fcc4890;
}


// 0x102a8790  (ghidra: FUN_102a8790)  [gap]
uint32_t * GetPtr_Ai_AiThink4_6fcc44c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103138d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiThink4_6fcc44c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadfc) {
      FUN_103023e9(&DAT_104eadfc);
      if (DAT_104eadfc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bb0 = *(int *)(&DAT_103d4fa4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eadfc);
      }
    }
    Ai_AiThink4_6fcc44c0 = sub_GetDllOffset_102f10f0(6,DAT_104e9bb0);
  }
  ExceptionList = local_10;
  return &Ai_AiThink4_6fcc44c0;
}


// 0x102a8840  (ghidra: FUN_102a8840)  [gap]
uint32_t * GetPtr_sub_6fcbe290(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313901;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcbe290 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bbc) {
      FUN_103023e9(&DAT_104e9bbc);
      if (DAT_104e9bbc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b48 = *(int *)(&DAT_103d4814 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bbc);
      }
    }
    sub_6fcbe290 = sub_GetDllOffset_102f10f0(6,DAT_104e9b48);
  }
  ExceptionList = local_10;
  return &sub_6fcbe290;
}


// 0x102a88f0  (ghidra: FUN_102a88f0)  [gap]
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57190(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313931;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitEvent_6fc57190 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9a8) {
      FUN_103023e9(&DAT_104ea9a8);
      if (DAT_104ea9a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9700 = *(int *)(&DAT_103d4f74 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9a8);
      }
    }
    UNIT_SUnitEvent_6fc57190 = sub_GetDllOffset_102f10f0(6,DAT_104e9700);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitEvent_6fc57190;
}


// 0x102a89a0  (ghidra: FUN_102a89a0)  [gap]
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57110(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313961;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitEvent_6fc57110 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac08) {
      FUN_103023e9(&DAT_104eac08);
      if (DAT_104eac08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5e8 = *(int *)(&DAT_103d3a54 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac08);
      }
    }
    UNIT_SUnitEvent_6fc57110 = sub_GetDllOffset_102f10f0(6,DAT_104ea5e8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitEvent_6fc57110;
}


// 0x102a8a50  (ghidra: FUN_102a8a50)  [gap]
uint32_t * GetPtr_sub_6fcb2ed0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313991;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb2ed0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ad8) {
      FUN_103023e9(&DAT_104e9ad8);
      if (DAT_104e9ad8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaaa8 = *(int *)(&DAT_103d3f64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ad8);
      }
    }
    sub_6fcb2ed0 = sub_GetDllOffset_102f10f0(6,DAT_104eaaa8);
  }
  ExceptionList = local_10;
  return &sub_6fcb2ed0;
}


// 0x102a8b00  (ghidra: FUN_102a8b00)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa750(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103139c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfa750 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea60c) {
      FUN_103023e9(&DAT_104ea60c);
      if (DAT_104ea60c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac64 = *(int *)(&DAT_103d4624 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea60c);
      }
    }
    UNIT_SUnitDmg_6fcfa750 = sub_GetDllOffset_102f10f0(6,DAT_104eac64);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfa750;
}


// 0x102a8bb0  (ghidra: FUN_102a8bb0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfff10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103139f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfff10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0b8) {
      FUN_103023e9(&DAT_104ea0b8);
      if (DAT_104ea0b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4d4 = *(int *)(&DAT_103d4f8c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0b8);
      }
    }
    UNIT_SUnitDmg_6fcfff10 = sub_GetDllOffset_102f10f0(6,DAT_104ea4d4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfff10;
}


// 0x102a8c60  (ghidra: FUN_102a8c60)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc98230(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313a21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc98230 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9f8) {
      FUN_103023e9(&DAT_104ea9f8);
      if (DAT_104ea9f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea818 = *(int *)(&DAT_103d396c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9f8);
      }
    }
    PLAYER_PlrModes_6fc98230 = sub_GetDllOffset_102f10f0(6,DAT_104ea818);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc98230;
}


// 0x102a8d10  (ghidra: FUN_102a8d10)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb55f70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313a51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb55f70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93d4) {
      FUN_103023e9(&DAT_104e93d4);
      if (DAT_104e93d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb070 = *(int *)(&DAT_103d4aac + iVar2 * 4);
        FUN_1030239f(&DAT_104e93d4);
      }
    }
    UNIT_CUnit_6fb55f70 = sub_GetDllOffset_102f10f0(0,DAT_104eb070);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb55f70;
}


// 0x102a8dc0  (ghidra: FUN_102a8dc0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb53040(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313a81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb53040 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ecc) {
      FUN_103023e9(&DAT_104e9ecc);
      if (DAT_104e9ecc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9860 = *(int *)(&DAT_103d49a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ecc);
      }
    }
    SKILLS_Skills_6fb53040 = sub_GetDllOffset_102f10f0(0,DAT_104e9860);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb53040;
}


// 0x102a8e70  (ghidra: FUN_102a8e70)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb779c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ab1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb779c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f50) {
      FUN_103023e9(&DAT_104e9f50);
      if (DAT_104e9f50 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea720 = *(int *)(&DAT_103d3bfc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f50);
      }
    }
    SKILLS_SkillsBar_6fb779c0 = sub_GetDllOffset_102f10f0(0,DAT_104ea720);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb779c0;
}


// 0x102a8f20  [gap]
uint D2Common_10577(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10577 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10577 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6d38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a8f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10577)();
  return uVar2;
}


// 0x102a8f50  [gap]
uint __fastcall sub_6fadb680(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fadb680 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fadb680 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2de4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a8f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fadb680)();
  return uVar2;
}


// 0x102a8f80  (ghidra: FUN_102a8f80)  [gap]
uint32_t * GetPtr_sub_6fad42b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ae1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad42b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea668) {
      FUN_103023e9(&DAT_104ea668);
      if (DAT_104ea668 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea018 = *(int *)(&DAT_103d4384 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea668);
      }
    }
    sub_6fad42b0 = sub_GetDllOffset_102f10f0(0,DAT_104ea018);
  }
  ExceptionList = local_10;
  return &sub_6fad42b0;
}


// 0x102a9030  [gap]
void D2Common_10739(uint *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (p_D2Common_10739 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10739 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7538 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a9056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10739)();
  return;
}


// 0x102a9060  [gap]
uint D2Common_10854(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10854 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10854 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7e48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a9086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10854)();
  return uVar2;
}


// 0x102a9090  (ghidra: FUN_102a9090)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2da44(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313b11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2da44 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf14) {
      FUN_103023e9(&DAT_104eaf14);
      if (DAT_104eaf14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead7c = *(int *)(&DAT_103d478c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf14);
      }
    }
    p_D2Game_DAT_6fd2da44 = sub_GetDllOffset_102f10f0(6,DAT_104ead7c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2da44;
}


// 0x102a9140  (ghidra: FUN_102a9140)  [gap]
uint32_t * GetPtr_sub_6fd00a20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313b41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd00a20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea908) {
      FUN_103023e9(&DAT_104ea908);
      if (DAT_104ea908 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bd0 = *(int *)(&DAT_103d44fc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea908);
      }
    }
    sub_6fd00a20 = sub_GetDllOffset_102f10f0(6,DAT_104e9bd0);
  }
  ExceptionList = local_10;
  return &sub_6fd00a20;
}


// 0x102a91f0  (ghidra: FUN_102a91f0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2d970_102a91f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313b71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2d970_102a91f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90b8) {
      FUN_103023e9(&DAT_104e90b8);
      if (DAT_104e90b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e996c = *(int *)(&DAT_103d413c + iVar2 * 4);
        FUN_1030239f(&DAT_104e90b8);
      }
    }
    p_D2Game_DAT_6fd2d970_102a91f0 = sub_GetDllOffset_102f10f0(6,DAT_104e996c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2d970_102a91f0;
}


// 0x102a92a0  (ghidra: FUN_102a92a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3e8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ba1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3e8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5d8) {
      FUN_103023e9(&DAT_104ea5d8);
      if (DAT_104ea5d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f4c = *(int *)(&DAT_103d436c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5d8);
      }
    }
    p_D2Client_DAT_6fbcc3e8 = sub_GetDllOffset_102f10f0(0,DAT_104e9f4c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3e8;
}


// 0x102a9350  (ghidra: FUN_102a9350)  [gap]
uint32_t * GetPtr_UNIT_UnitMode_6fada6c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313bd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_UnitMode_6fada6c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c98) {
      FUN_103023e9(&DAT_104e9c98);
      if (DAT_104e9c98 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaef4 = *(int *)(&DAT_103d4c0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c98);
      }
    }
    UNIT_UnitMode_6fada6c0 = sub_GetDllOffset_102f10f0(0,DAT_104eaef4);
  }
  ExceptionList = local_10;
  return &UNIT_UnitMode_6fada6c0;
}


// 0x102a9400  (ghidra: FUN_102a9400)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb1c490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313c01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb1c490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2e4) {
      FUN_103023e9(&DAT_104ea2e4);
      if (DAT_104ea2e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ef0 = *(int *)(&DAT_103d316c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2e4);
      }
    }
    ENGINE_Gfx_6fb1c490 = sub_GetDllOffset_102f10f0(0,DAT_104e9ef0);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb1c490;
}


// 0x102a94b0  (ghidra: FUN_102a94b0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb51a50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313c31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb51a50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ec8) {
      FUN_103023e9(&DAT_104e9ec8);
      if (DAT_104e9ec8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea268 = *(int *)(&DAT_103d403c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ec8);
      }
    }
    SKILLS_Skills_6fb51a50 = sub_GetDllOffset_102f10f0(0,DAT_104ea268);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb51a50;
}


// 0x102a9560  (ghidra: FUN_102a9560)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc268(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313c61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc268 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafdc) {
      FUN_103023e9(&DAT_104eafdc);
      if (DAT_104eafdc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99a0 = *(int *)(&DAT_103d3704 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafdc);
      }
    }
    p_D2Client_DAT_6fbcc268 = sub_GetDllOffset_102f10f0(0,DAT_104e99a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc268;
}


// 0x102a9610  (ghidra: FUN_102a9610)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf34(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313c91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf34 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e900c) {
      FUN_103023e9(&DAT_104e900c);
      if (DAT_104e900c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b10 = *(int *)(&DAT_103d49cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e900c);
      }
    }
    p_D2Client_DAT_6fbcbf34 = sub_GetDllOffset_102f10f0(0,DAT_104e9b10);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf34;
}


// 0x102a96c0  (ghidra: FUN_102a96c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313cc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaad4) {
      FUN_103023e9(&DAT_104eaad4);
      if (DAT_104eaad4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea610 = *(int *)(&DAT_103d4394 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaad4);
      }
    }
    p_D2Client_DAT_6fbcbf40 = sub_GetDllOffset_102f10f0(0,DAT_104ea610);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf40;
}


// 0x102a9770  (ghidra: FUN_102a9770)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313cf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97c4) {
      FUN_103023e9(&DAT_104e97c4);
      if (DAT_104e97c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab74 = *(int *)(&DAT_103d4ca4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e97c4);
      }
    }
    p_D2Client_DAT_6fbcbf30 = sub_GetDllOffset_102f10f0(0,DAT_104eab74);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf30;
}


// 0x102a9820  (ghidra: FUN_102a9820)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc264(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313d21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc264 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea420) {
      FUN_103023e9(&DAT_104ea420);
      if (DAT_104ea420 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9758 = *(int *)(&DAT_103d35dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea420);
      }
    }
    p_D2Client_DAT_6fbcc264 = sub_GetDllOffset_102f10f0(0,DAT_104e9758);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc264;
}


// 0x102a98d0  (ghidra: FUN_102a98d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf38(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313d51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf38 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea940) {
      FUN_103023e9(&DAT_104ea940);
      if (DAT_104ea940 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9684 = *(int *)(&DAT_103d4cc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea940);
      }
    }
    p_D2Client_DAT_6fbcbf38 = sub_GetDllOffset_102f10f0(0,DAT_104e9684);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf38;
}


// 0x102a9980  (ghidra: FUN_102a9980)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc34c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313d81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc34c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d08) {
      FUN_103023e9(&DAT_104e9d08);
      if (DAT_104e9d08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea360 = *(int *)(&DAT_103d3854 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d08);
      }
    }
    p_D2Client_DAT_6fbcc34c = sub_GetDllOffset_102f10f0(0,DAT_104ea360);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc34c;
}


// 0x102a9a30  (ghidra: FUN_102a9a30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc354(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313db1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc354 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f44) {
      FUN_103023e9(&DAT_104e9f44);
      if (DAT_104e9f44 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9cac = *(int *)(&DAT_103d448c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f44);
      }
    }
    p_D2Client_DAT_6fbcc354 = sub_GetDllOffset_102f10f0(0,DAT_104e9cac);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc354;
}


// 0x102a9ae0  (ghidra: FUN_102a9ae0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc368(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313de1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc368 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92bc) {
      FUN_103023e9(&DAT_104e92bc);
      if (DAT_104e92bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90ec = *(int *)(&DAT_103d490c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92bc);
      }
    }
    p_D2Client_DAT_6fbcc368 = sub_GetDllOffset_102f10f0(0,DAT_104e90ec);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc368;
}


// 0x102a9b90  (ghidra: FUN_102a9b90)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc36c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313e11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc36c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea428) {
      FUN_103023e9(&DAT_104ea428);
      if (DAT_104ea428 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91c0 = *(int *)(&DAT_103d3ba4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea428);
      }
    }
    p_D2Client_DAT_6fbcc36c = sub_GetDllOffset_102f10f0(0,DAT_104e91c0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc36c;
}


// 0x102a9c40  (ghidra: FUN_102a9c40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc370(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313e41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc370 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3a4) {
      FUN_103023e9(&DAT_104ea3a4);
      if (DAT_104ea3a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99b0 = *(int *)(&DAT_103d4e44 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3a4);
      }
    }
    p_D2Client_DAT_6fbcc370 = sub_GetDllOffset_102f10f0(0,DAT_104e99b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc370;
}


// 0x102a9cf0  (ghidra: FUN_102a9cf0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313e71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6e8) {
      FUN_103023e9(&DAT_104ea6e8);
      if (DAT_104ea6e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaafc = *(int *)(&DAT_103d4c2c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6e8);
      }
    }
    p_D2Client_DAT_6fbcc4c0 = sub_GetDllOffset_102f10f0(0,DAT_104eaafc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4c0;
}


// 0x102a9da0  (ghidra: FUN_102a9da0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ea1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae24) {
      FUN_103023e9(&DAT_104eae24);
      if (DAT_104eae24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea618 = *(int *)(&DAT_103d35ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eae24);
      }
    }
    p_D2Client_DAT_6fbcc4c4 = sub_GetDllOffset_102f10f0(0,DAT_104ea618);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4c4;
}


// 0x102a9e50  (ghidra: FUN_102a9e50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ed1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9608) {
      FUN_103023e9(&DAT_104e9608);
      if (DAT_104e9608 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb03c = *(int *)(&DAT_103d4f3c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9608);
      }
    }
    p_D2Client_DAT_6fbcc4c8 = sub_GetDllOffset_102f10f0(0,DAT_104eb03c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4c8;
}


// 0x102a9f00  (ghidra: FUN_102a9f00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4cc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313f01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4cc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d20) {
      FUN_103023e9(&DAT_104e9d20);
      if (DAT_104e9d20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97e0 = *(int *)(&DAT_103d417c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d20);
      }
    }
    p_D2Client_DAT_6fbcc4cc = sub_GetDllOffset_102f10f0(0,DAT_104e97e0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4cc;
}


// 0x102a9fb0  (ghidra: FUN_102a9fb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313f31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ee0) {
      FUN_103023e9(&DAT_104e9ee0);
      if (DAT_104e9ee0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9010 = *(int *)(&DAT_103d4f84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ee0);
      }
    }
    p_D2Client_DAT_6fbcc4d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9010);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4d0;
}


// 0x102aa060  (ghidra: FUN_102aa060)  [gap]
uint32_t * GetPtr_sub_6fad2390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313f61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad2390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a64) {
      FUN_103023e9(&DAT_104e9a64);
      if (DAT_104e9a64 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea49c = *(int *)(&DAT_103d4884 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a64);
      }
    }
    sub_6fad2390 = sub_GetDllOffset_102f10f0(0,DAT_104ea49c);
  }
  ExceptionList = local_10;
  return &sub_6fad2390;
}


// 0x102aa110  (ghidra: FUN_102aa110)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9638(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313f91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9638 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1d0) {
      FUN_103023e9(&DAT_104ea1d0);
      if (DAT_104ea1d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ed8 = *(int *)(&DAT_103d451c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1d0);
      }
    }
    p_D2Client_DAT_6fbc9638 = sub_GetDllOffset_102f10f0(0,DAT_104e9ed8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9638;
}


// 0x102aa1c0  (ghidra: FUN_102aa1c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc964c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313fc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc964c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c30) {
      FUN_103023e9(&DAT_104e9c30);
      if (DAT_104e9c30 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaea4 = *(int *)(&DAT_103d4ecc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c30);
      }
    }
    p_D2Client_DAT_6fbc964c = sub_GetDllOffset_102f10f0(0,DAT_104eaea4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc964c;
}


// 0x102aa270  (ghidra: FUN_102aa270)  [gap]
uint32_t * GetPtr_sub_6fb01e30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10313ff1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb01e30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91f8) {
      FUN_103023e9(&DAT_104e91f8);
      if (DAT_104e91f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f8c = *(int *)(&DAT_103d5004 + iVar2 * 4);
        FUN_1030239f(&DAT_104e91f8);
      }
    }
    sub_6fb01e30 = sub_GetDllOffset_102f10f0(0,DAT_104e9f8c);
  }
  ExceptionList = local_10;
  return &sub_6fb01e30;
}


// 0x102aa320  (ghidra: FUN_102aa320)  [gap]
uint32_t * GetPtr_UNIT_Monster_6fb01860(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314021;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Monster_6fb01860 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9418) {
      FUN_103023e9(&DAT_104e9418);
      if (DAT_104e9418 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f88 = *(int *)(&DAT_103d506c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9418);
      }
    }
    UNIT_Monster_6fb01860 = sub_GetDllOffset_102f10f0(0,DAT_104e9f88);
  }
  ExceptionList = local_10;
  return &UNIT_Monster_6fb01860;
}


// 0x102aa3d0  (ghidra: FUN_102aa3d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2f8_102aa3d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314051;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2f8_102aa3d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96b0) {
      FUN_103023e9(&DAT_104e96b0);
      if (DAT_104e96b0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9cc4 = *(int *)(&DAT_103d407c + iVar2 * 4);
        FUN_1030239f(&DAT_104e96b0);
      }
    }
    p_D2Client_DAT_6fbcc2f8_102aa3d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9cc4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2f8_102aa3d0;
}


// 0x102aa480  (ghidra: FUN_102aa480)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1f8_102aa480(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314081;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1f8_102aa480 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaba4) {
      FUN_103023e9(&DAT_104eaba4);
      if (DAT_104eaba4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93c0 = *(int *)(&DAT_103d4514 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaba4);
      }
    }
    p_D2Client_DAT_6fbcc1f8_102aa480 = sub_GetDllOffset_102f10f0(0,DAT_104e93c0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1f8_102aa480;
}


// 0x102aa530  (ghidra: FUN_102aa530)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1fc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103140b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1fc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94f0) {
      FUN_103023e9(&DAT_104e94f0);
      if (DAT_104e94f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb04c = *(int *)(&DAT_103d31dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e94f0);
      }
    }
    p_D2Client_DAT_6fbcc1fc = sub_GetDllOffset_102f10f0(0,DAT_104eb04c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1fc;
}


// 0x102aa5e0  (ghidra: FUN_102aa5e0)  [gap]
uint32_t * GetPtr_sub_6fb6fec0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103140e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb6fec0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e953c) {
      FUN_103023e9(&DAT_104e953c);
      if (DAT_104e953c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97a8 = *(int *)(&DAT_103d3774 + iVar2 * 4);
        FUN_1030239f(&DAT_104e953c);
      }
    }
    sub_6fb6fec0 = sub_GetDllOffset_102f10f0(0,DAT_104e97a8);
  }
  ExceptionList = local_10;
  return &sub_6fb6fec0;
}


// 0x102aa690  [gap]
void __fastcall D2Win_10177_102aa690(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_D2Win_10177_102aa690 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10177_102aa690 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103d2e64 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10177_102aa690)();
  return;
}


// 0x102aa6c0  [gap]
void D2Common_10882(int *param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2Common_10882 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10882 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6e38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10882)();
  return;
}


// 0x102aa6f0  [gap]
void D2Common_11118(int *param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2Common_11118 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11118 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c72b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_11118)();
  return;
}


// 0x102aa720  [gap]
uint D2Common_10651(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10651 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10651 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6590 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10651)();
  return uVar2;
}


// 0x102aa750  [gap]
uint D2Common_11142(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_11142 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11142 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6888 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_11142)();
  return uVar2;
}


// 0x102aa780  [gap]
int D2Common_11080(int *param_1)

{
  int iVar1;
  
  if (p_D2Common_11080 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11080 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2f9c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_11080)();
  return iVar1;
}


// 0x102aa7b0  [gap]
int D2Common_11168(int *param_1)

{
  int iVar1;
  
  if (p_D2Common_11168 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11168 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c64e0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_11168)();
  return iVar1;
}


// 0x102aa7e0  [gap]
void sub_6fb70d30(int *param_1)

{
  int iVar1;
  
  if (p_sub_6fb70d30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb70d30 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6da8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb70d30)();
  return;
}


// 0x102aa810  (ghidra: FUN_102aa810)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaadb4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314111;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaadb4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea36c) {
      FUN_103023e9(&DAT_104ea36c);
      if (DAT_104ea36c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93f4 = *(int *)(&DAT_103d32ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea36c);
      }
    }
    p_D2Client_DAT_6fbaadb4 = sub_GetDllOffset_102f10f0(0,DAT_104e93f4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaadb4;
}


// 0x102aa8c0  [gap]
uint __fastcall D2Common_10995(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10995 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10995 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6a48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aa8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10995)();
  return uVar2;
}


// 0x102aa8f0  (ghidra: FUN_102aa8f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc098(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314141;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc098 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eace4) {
      FUN_103023e9(&DAT_104eace4);
      if (DAT_104eace4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93ec = *(int *)(&DAT_103d375c + iVar2 * 4);
        FUN_1030239f(&DAT_104eace4);
      }
    }
    p_D2Client_DAT_6fbcc098 = sub_GetDllOffset_102f10f0(0,DAT_104e93ec);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc098;
}


// 0x102aa9a0  (ghidra: FUN_102aa9a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314171;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d80) {
      FUN_103023e9(&DAT_104e9d80);
      if (DAT_104e9d80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e987c = *(int *)(&DAT_103d3bb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d80);
      }
    }
    p_D2Client_DAT_6fbcc4f0 = sub_GetDllOffset_102f10f0(0,DAT_104e987c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4f0;
}


// 0x102aaa50  [gap]
int sub_6fb14ee0(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fb14ee0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14ee0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6520 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aaa73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14ee0)();
  return iVar1;
}


// 0x102aaa80  [gap]
int sub_6fb14f50(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fb14f50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14f50 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7470 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aaaa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14f50)();
  return iVar1;
}


// 0x102aaab0  [gap]
int sub_6fb14e00(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fb14e00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14e00 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7d38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aaad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14e00)();
  return iVar1;
}


// 0x102aaae0  [gap]
int sub_6fb14d20(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fb14d20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14d20 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c69e0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aab03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14d20)();
  return iVar1;
}


// 0x102aab10  [gap]
void sub_6fac6a90(void)

{
  int iVar1;
  
  if (p_sub_6fac6a90 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fac6a90 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2ae4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102aab33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fac6a90)();
  return;
}


// 0x102aab40  (ghidra: FUN_102aab40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb82c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103141a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb82c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92f8) {
      FUN_103023e9(&DAT_104e92f8);
      if (DAT_104e92f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e932c = *(int *)(&DAT_103d38a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92f8);
      }
    }
    p_D2Client_DAT_6fbcb82c = sub_GetDllOffset_102f10f0(0,DAT_104e932c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb82c;
}


// 0x102aabf0  (ghidra: FUN_102aabf0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba856c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103141d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba856c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c9c) {
      FUN_103023e9(&DAT_104e9c9c);
      if (DAT_104e9c9c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d7c = *(int *)(&DAT_103d47d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c9c);
      }
    }
    p_D2Client_DAT_6fba856c = sub_GetDllOffset_102f10f0(0,DAT_104e9d7c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba856c;
}


// 0x102aaca0  (ghidra: FUN_102aaca0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb854(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314201;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb854 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a8c) {
      FUN_103023e9(&DAT_104e9a8c);
      if (DAT_104e9a8c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea690 = *(int *)(&DAT_103d3f84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a8c);
      }
    }
    p_D2Client_DAT_6fbcb854 = sub_GetDllOffset_102f10f0(0,DAT_104ea690);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb854;
}


// 0x102aad50  (ghidra: FUN_102aad50)  [gap]
uint32_t * GetPtr_sub_6fb71c40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314231;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb71c40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0d0) {
      FUN_103023e9(&DAT_104ea0d0);
      if (DAT_104ea0d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98b4 = *(int *)(&DAT_103d3bac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0d0);
      }
    }
    sub_6fb71c40 = sub_GetDllOffset_102f10f0(0,DAT_104e98b4);
  }
  ExceptionList = local_10;
  return &sub_6fb71c40;
}


// 0x102aae00  (ghidra: FUN_102aae00)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb556c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314261;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb556c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea75c) {
      FUN_103023e9(&DAT_104ea75c);
      if (DAT_104ea75c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead18 = *(int *)(&DAT_103d3044 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea75c);
      }
    }
    UNIT_CUnit_6fb556c0 = sub_GetDllOffset_102f10f0(0,DAT_104ead18);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb556c0;
}


// 0x102aaeb0  (ghidra: FUN_102aaeb0)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb55b90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314291;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb55b90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91a4) {
      FUN_103023e9(&DAT_104e91a4);
      if (DAT_104e91a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94f4 = *(int *)(&DAT_103d4d7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e91a4);
      }
    }
    UNIT_CUnit_6fb55b90 = sub_GetDllOffset_102f10f0(0,DAT_104e94f4);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb55b90;
}


// 0x102aaf60  (ghidra: FUN_102aaf60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9968(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103142c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9968 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9914) {
      FUN_103023e9(&DAT_104e9914);
      if (DAT_104e9914 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e983c = *(int *)(&DAT_103d31e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9914);
      }
    }
    p_D2Client_DAT_6fbc9968 = sub_GetDllOffset_102f10f0(0,DAT_104e983c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9968;
}


// 0x102ab010  (ghidra: FUN_102ab010)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9a58(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103142f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9a58 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4bc) {
      FUN_103023e9(&DAT_104ea4bc);
      if (DAT_104ea4bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb030 = *(int *)(&DAT_103d3a3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4bc);
      }
    }
    p_D2Client_DAT_6fbc9a58 = sub_GetDllOffset_102f10f0(0,DAT_104eb030);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9a58;
}


// 0x102ab0c0  (ghidra: FUN_102ab0c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9b48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314321;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9b48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaab4) {
      FUN_103023e9(&DAT_104eaab4);
      if (DAT_104eaab4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea444 = *(int *)(&DAT_103d3904 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaab4);
      }
    }
    p_D2Client_DAT_6fbc9b48 = sub_GetDllOffset_102f10f0(0,DAT_104ea444);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9b48;
}


// 0x102ab170  (ghidra: FUN_102ab170)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9c38(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314351;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9c38 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea474) {
      FUN_103023e9(&DAT_104ea474);
      if (DAT_104ea474 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea64c = *(int *)(&DAT_103d382c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea474);
      }
    }
    p_D2Client_DAT_6fbc9c38 = sub_GetDllOffset_102f10f0(0,DAT_104ea64c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9c38;
}


// 0x102ab220  (ghidra: FUN_102ab220)  [gap]
uint32_t * GetPtr_sub_6faedcf0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314381;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faedcf0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9724) {
      FUN_103023e9(&DAT_104e9724);
      if (DAT_104e9724 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95e0 = *(int *)(&DAT_103d4d74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9724);
      }
    }
    sub_6faedcf0 = sub_GetDllOffset_102f10f0(0,DAT_104e95e0);
  }
  ExceptionList = local_10;
  return &sub_6faedcf0;
}


// 0x102ab2d0  (ghidra: FUN_102ab2d0)  [gap]
uint32_t * GetPtr_sub_6faee0c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103143b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faee0c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94a8) {
      FUN_103023e9(&DAT_104e94a8);
      if (DAT_104e94a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea528 = *(int *)(&DAT_103d43ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e94a8);
      }
    }
    sub_6faee0c0 = sub_GetDllOffset_102f10f0(0,DAT_104ea528);
  }
  ExceptionList = local_10;
  return &sub_6faee0c0;
}


// 0x102ab380  (ghidra: FUN_102ab380)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc98(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103143e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc98 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea674) {
      FUN_103023e9(&DAT_104ea674);
      if (DAT_104ea674 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea410 = *(int *)(&DAT_103d4064 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea674);
      }
    }
    p_D2Client_DAT_6fbcbc98 = sub_GetDllOffset_102f10f0(0,DAT_104ea410);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc98;
}


// 0x102ab430  (ghidra: FUN_102ab430)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8bc54(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314411;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8bc54 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90c4) {
      FUN_103023e9(&DAT_104e90c4);
      if (DAT_104e90c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea504 = *(int *)(&DAT_103d3a84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90c4);
      }
    }
    p_D2Client_DAT_6fb8bc54 = sub_GetDllOffset_102f10f0(0,DAT_104ea504);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8bc54;
}


// 0x102ab4e0  (ghidra: FUN_102ab4e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8bc58(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314441;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8bc58 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadb8) {
      FUN_103023e9(&DAT_104eadb8);
      if (DAT_104eadb8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaeac = *(int *)(&DAT_103d34c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eadb8);
      }
    }
    p_D2Client_DAT_6fb8bc58 = sub_GetDllOffset_102f10f0(0,DAT_104eaeac);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8bc58;
}


// 0x102ab590  [gap]
uint D2Common_11059(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_11059 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11059 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7610 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ab5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_11059)();
  return uVar2;
}


// 0x102ab5c0  (ghidra: FUN_102ab5c0)  [gap]
uint32_t * GetPtr_D2Win_DAT_6f9aa658(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314471;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Win_DAT_6f9aa658 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9008) {
      FUN_103023e9(&DAT_104e9008);
      if (DAT_104e9008 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9030 = *(int *)(&DAT_103d3af4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9008);
      }
    }
    p_D2Win_DAT_6f9aa658 = sub_GetDllOffset_102f10f0(4,DAT_104e9030);
  }
  ExceptionList = local_10;
  return &p_D2Win_DAT_6f9aa658;
}


// 0x102ab670  (ghidra: FUN_102ab670)  [gap]
uint32_t * GetPtr_D2Win_DAT_6f9aa65c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103144a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Win_DAT_6f9aa65c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea81c) {
      FUN_103023e9(&DAT_104ea81c);
      if (DAT_104ea81c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e50 = *(int *)(&DAT_103d3c0c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea81c);
      }
    }
    p_D2Win_DAT_6f9aa65c = sub_GetDllOffset_102f10f0(4,DAT_104e9e50);
  }
  ExceptionList = local_10;
  return &p_D2Win_DAT_6f9aa65c;
}


// 0x102ab720  [gap]
uint D2Common_10633(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10633 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10633 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7760 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ab746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10633)();
  return uVar2;
}


// 0x102ab750  [gap]
void D2Common_10742(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2Common_10742 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10742 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2b44 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ab776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10742)();
  return;
}


// 0x102ab780  [gap]
void D2Common_10880(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2Common_10880 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10880 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c74c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ab7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10880)();
  return;
}


// 0x102ab7b0  (ghidra: FUN_102ab7b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdd6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103144d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdd6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9b4) {
      FUN_103023e9(&DAT_104ea9b4);
      if (DAT_104ea9b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9cd8 = *(int *)(&DAT_103d30e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9b4);
      }
    }
    p_D2Client_DAT_6fbacdd6 = sub_GetDllOffset_102f10f0(0,DAT_104e9cd8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdd6;
}


// 0x102ab860  (ghidra: FUN_102ab860)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdd5(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314501;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdd5 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea780) {
      FUN_103023e9(&DAT_104ea780);
      if (DAT_104ea780 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91d0 = *(int *)(&DAT_103d46ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea780);
      }
    }
    p_D2Client_DAT_6fbacdd5 = sub_GetDllOffset_102f10f0(0,DAT_104e91d0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdd5;
}


// 0x102ab910  (ghidra: FUN_102ab910)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb5a090(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314531;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb5a090 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf54) {
      FUN_103023e9(&DAT_104eaf54);
      if (DAT_104eaf54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea550 = *(int *)(&DAT_103d387c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf54);
      }
    }
    UNIT_CUnit_6fb5a090 = sub_GetDllOffset_102f10f0(0,DAT_104ea550);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb5a090;
}


// 0x102ab9c0  [gap]
void UNIT_CUnit_6fb59f00(void)

{
  int iVar1;
  
  if (p_UNIT_CUnit_6fb59f00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_CUnit_6fb59f00 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7230 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ab9e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_CUnit_6fb59f00)();
  return;
}


// 0x102ab9f0  (ghidra: FUN_102ab9f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacd8c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314561;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacd8c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea988) {
      FUN_103023e9(&DAT_104ea988);
      if (DAT_104ea988 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea960 = *(int *)(&DAT_103d3de4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea988);
      }
    }
    p_D2Client_DAT_6fbacd8c = sub_GetDllOffset_102f10f0(0,DAT_104ea960);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacd8c;
}


// 0x102abaa0  (ghidra: FUN_102abaa0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdcd(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314591;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdcd == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac24) {
      FUN_103023e9(&DAT_104eac24);
      if (DAT_104eac24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea620 = *(int *)(&DAT_103d3ee4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac24);
      }
    }
    p_D2Client_DAT_6fbacdcd = sub_GetDllOffset_102f10f0(0,DAT_104ea620);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdcd;
}


// 0x102abb50  (ghidra: FUN_102abb50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdd5_102abb50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103145c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdd5_102abb50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9664) {
      FUN_103023e9(&DAT_104e9664);
      if (DAT_104e9664 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea688 = *(int *)(&DAT_103d4b54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9664);
      }
    }
    p_D2Client_DAT_6fbacdd5_102abb50 = sub_GetDllOffset_102f10f0(0,DAT_104ea688);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdd5_102abb50;
}


// 0x102abc00  (ghidra: FUN_102abc00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdbc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103145f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdbc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94b8) {
      FUN_103023e9(&DAT_104e94b8);
      if (DAT_104e94b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e74 = *(int *)(&DAT_103d2fdc + iVar2 * 4);
        FUN_1030239f(&DAT_104e94b8);
      }
    }
    p_D2Client_DAT_6fbacdbc = sub_GetDllOffset_102f10f0(0,DAT_104e9e74);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdbc;
}


// 0x102abcb0  (ghidra: FUN_102abcb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdbd(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314621;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdbd == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea080) {
      FUN_103023e9(&DAT_104ea080);
      if (DAT_104ea080 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9eb8 = *(int *)(&DAT_103d3a9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea080);
      }
    }
    p_D2Client_DAT_6fbacdbd = sub_GetDllOffset_102f10f0(0,DAT_104e9eb8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdbd;
}


// 0x102abd60  (ghidra: FUN_102abd60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb91180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314651;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb91180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a80) {
      FUN_103023e9(&DAT_104e9a80);
      if (DAT_104e9a80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae3c = *(int *)(&DAT_103d3424 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a80);
      }
    }
    p_D2Client_DAT_6fb91180 = sub_GetDllOffset_102f10f0(0,DAT_104eae3c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb91180;
}


// 0x102abe10  (ghidra: FUN_102abe10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb238(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314681;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb238 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fb0) {
      FUN_103023e9(&DAT_104e9fb0);
      if (DAT_104e9fb0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9350 = *(int *)(&DAT_103d4cec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fb0);
      }
    }
    p_D2Client_DAT_6fbbb238 = sub_GetDllOffset_102f10f0(0,DAT_104e9350);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb238;
}


// 0x102abec0  (ghidra: FUN_102abec0)  [gap]
uint32_t * GetPtr_sub_6faf7d60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103146b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf7d60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea694) {
      FUN_103023e9(&DAT_104ea694);
      if (DAT_104ea694 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea22c = *(int *)(&DAT_103d47dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea694);
      }
    }
    sub_6faf7d60 = sub_GetDllOffset_102f10f0(0,DAT_104ea22c);
  }
  ExceptionList = local_10;
  return &sub_6faf7d60;
}


// 0x102abf70  (ghidra: FUN_102abf70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103146e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9470) {
      FUN_103023e9(&DAT_104e9470);
      if (DAT_104e9470 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9dc0 = *(int *)(&DAT_103d434c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9470);
      }
    }
    p_D2Client_DAT_6fbcbc90 = sub_GetDllOffset_102f10f0(0,DAT_104e9dc0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc90;
}


// 0x102ac020  (ghidra: FUN_102ac020)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb554a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314711;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb554a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea71c) {
      FUN_103023e9(&DAT_104ea71c);
      if (DAT_104ea71c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacb0 = *(int *)(&DAT_103d3eec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea71c);
      }
    }
    UNIT_CUnit_6fb554a0 = sub_GetDllOffset_102f10f0(0,DAT_104eacb0);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb554a0;
}


// 0x102ac0d0  (ghidra: FUN_102ac0d0)  [gap]
uint32_t * GetPtr_sub_6fad9990(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314741;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad9990 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae6c) {
      FUN_103023e9(&DAT_104eae6c);
      if (DAT_104eae6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea03c = *(int *)(&DAT_103d3f8c + iVar2 * 4);
        FUN_1030239f(&DAT_104eae6c);
      }
    }
    sub_6fad9990 = sub_GetDllOffset_102f10f0(0,DAT_104ea03c);
  }
  ExceptionList = local_10;
  return &sub_6fad9990;
}


// 0x102ac180  (ghidra: FUN_102ac180)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc484(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314771;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc484 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea754) {
      FUN_103023e9(&DAT_104ea754);
      if (DAT_104ea754 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea12c = *(int *)(&DAT_103d495c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea754);
      }
    }
    p_D2Client_DAT_6fbcc484 = sub_GetDllOffset_102f10f0(0,DAT_104ea12c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc484;
}


// 0x102ac230  (ghidra: FUN_102ac230)  [gap]
uint32_t * GetPtr_sub_6fab1400(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103147a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fab1400 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1f4) {
      FUN_103023e9(&DAT_104ea1f4);
      if (DAT_104ea1f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9730 = *(int *)(&DAT_103d3204 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1f4);
      }
    }
    sub_6fab1400 = sub_GetDllOffset_102f10f0(0,DAT_104e9730);
  }
  ExceptionList = local_10;
  return &sub_6fab1400;
}


// 0x102ac2e0  [gap]
int __fastcall UNIT_CUnit_6fb55b40(int param_1,int param_2)

{
  int iVar1;
  
  if (p_UNIT_CUnit_6fb55b40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_CUnit_6fb55b40 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7248 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ac303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_UNIT_CUnit_6fb55b40)();
  return iVar1;
}


// 0x102ac310  [gap]
uint __fastcall sub_6fad16a0_102ac310(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fad16a0_102ac310 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fad16a0_102ac310 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6cd8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ac333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fad16a0_102ac310)();
  return uVar2;
}


// 0x102ac340  (ghidra: FUN_102ac340)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb1ba90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103147d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb1ba90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea554) {
      FUN_103023e9(&DAT_104ea554);
      if (DAT_104ea554 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9564 = *(int *)(&DAT_103d3814 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea554);
      }
    }
    ENGINE_Gfx_6fb1ba90 = sub_GetDllOffset_102f10f0(0,DAT_104e9564);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb1ba90;
}


// 0x102ac3f0  (ghidra: FUN_102ac3f0)  [gap]
uint32_t * GetPtr_sub_6fb166d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314801;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb166d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e04) {
      FUN_103023e9(&DAT_104e9e04);
      if (DAT_104e9e04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9154 = *(int *)(&DAT_103d33ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e04);
      }
    }
    sub_6fb166d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9154);
  }
  ExceptionList = local_10;
  return &sub_6fb166d0;
}


// 0x102ac4a0  (ghidra: FUN_102ac4a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9840(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314831;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9840 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d0c) {
      FUN_103023e9(&DAT_104e9d0c);
      if (DAT_104e9d0c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea34c = *(int *)(&DAT_103d39bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d0c);
      }
    }
    p_D2Client_DAT_6fbc9840 = sub_GetDllOffset_102f10f0(0,DAT_104ea34c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9840;
}


// 0x102ac550  [gap]
uint __fastcall D2Common_10858(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10858 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10858 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6758 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102ac576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10858)();
  return uVar2;
}

