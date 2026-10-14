/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_10299fe0.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10299fe0 - 0x102a0cc0
 * Functions     : 300
 * Attribution   : gap=300
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10299fe0  [gap]
int UI_SkillDesc_6fadfb50(void)

{
  int iVar1;
  
  if (p_UI_SkillDesc_6fadfb50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_SkillDesc_6fadfb50 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c69f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_UI_SkillDesc_6fadfb50)();
  return iVar1;
}


// 0x1029a010  (ghidra: FUN_1029a010)  [gap]
uint32_t * GetPtr_sub_6fb23760(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103108d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb23760 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9614) {
      FUN_103023e9(&DAT_104e9614);
      if (DAT_104e9614 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94f8 = *(int *)(&DAT_103d4b3c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9614);
      }
    }
    sub_6fb23760 = sub_GetDllOffset_102f10f0(0,DAT_104e94f8);
  }
  ExceptionList = local_10;
  return &sub_6fb23760;
}


// 0x1029a0c0  [gap]
int UI_inv_6fb3f710(byte param_1)

{
  int iVar1;
  
  if (p_UI_inv_6fb3f710 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb3f710 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6978 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_UI_inv_6fb3f710)();
  return iVar1;
}


// 0x1029a0f0  (ghidra: FUN_1029a0f0)  [gap]
uint32_t * GetPtr_UI_npcmenu_6faf60a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310901;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_npcmenu_6faf60a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9300) {
      FUN_103023e9(&DAT_104e9300);
      if (DAT_104e9300 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9f0 = *(int *)(&DAT_103d5074 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9300);
      }
    }
    UI_npcmenu_6faf60a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea9f0);
  }
  ExceptionList = local_10;
  return &UI_npcmenu_6faf60a0;
}


// 0x1029a1a0  (ghidra: FUN_1029a1a0)  [gap]
uint32_t * GetPtr_sub_6fc57540(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310931;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc57540 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e28) {
      FUN_103023e9(&DAT_104e9e28);
      if (DAT_104e9e28 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea294 = *(int *)(&DAT_103d4cac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e28);
      }
    }
    sub_6fc57540 = sub_GetDllOffset_102f10f0(6,DAT_104ea294);
  }
  ExceptionList = local_10;
  return &sub_6fc57540;
}


// 0x1029a250  (ghidra: FUN_1029a250)  [gap]
uint32_t * GetPtr_sub_6fc57260(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310961;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc57260 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9af4) {
      FUN_103023e9(&DAT_104e9af4);
      if (DAT_104e9af4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90b0 = *(int *)(&DAT_103d36ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9af4);
      }
    }
    sub_6fc57260 = sub_GetDllOffset_102f10f0(6,DAT_104e90b0);
  }
  ExceptionList = local_10;
  return &sub_6fc57260;
}


// 0x1029a300  [gap]
uint * sub_6fc572c0_1029a300(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (p_sub_6fc572c0_1029a300 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc572c0_1029a300 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2eb4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_sub_6fc572c0_1029a300)();
  return puVar2;
}


// 0x1029a330  [gap]
void SKILLS_Skills_6fb51860
               (int *param_1,uchar *param_2,uint param_3,int param_4,uint param_5,int param_6,
               uint32_t param_s7,uint32_t param_s8)

{
  int iVar1;
  
  if (p_SKILLS_Skills_6fb51860 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fb51860 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6558 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_SKILLS_Skills_6fb51860)();
  return;
}


// 0x1029a360  (ghidra: FUN_1029a360)  [gap]
uint32_t * GetPtr_sub_6fb77e30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310991;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb77e30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94ac) {
      FUN_103023e9(&DAT_104e94ac);
      if (DAT_104e94ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7ac = *(int *)(&DAT_103d3034 + iVar2 * 4);
        FUN_1030239f(&DAT_104e94ac);
      }
    }
    sub_6fb77e30 = sub_GetDllOffset_102f10f0(0,DAT_104ea7ac);
  }
  ExceptionList = local_10;
  return &sub_6fb77e30;
}


// 0x1029a410  (ghidra: FUN_1029a410)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb50880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103109c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb50880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99f0) {
      FUN_103023e9(&DAT_104e99f0);
      if (DAT_104e99f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea898 = *(int *)(&DAT_103d4a44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99f0);
      }
    }
    SKILLS_Skills_6fb50880 = sub_GetDllOffset_102f10f0(0,DAT_104ea898);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb50880;
}


// 0x1029a4c0  (ghidra: FUN_1029a4c0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb50750(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103109f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb50750 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb058) {
      FUN_103023e9(&DAT_104eb058);
      if (DAT_104eb058 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea90c = *(int *)(&DAT_103d4274 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb058);
      }
    }
    SKILLS_Skills_6fb50750 = sub_GetDllOffset_102f10f0(0,DAT_104ea90c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb50750;
}


// 0x1029a5d0  [gap]
int sub_6fb5bf50(void)

{
  int iVar1;
  
  if (p_sub_6fb5bf50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb5bf50 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7a98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb5bf50)();
  return iVar1;
}


// 0x1029a630  [gap]
void sub_6fad3200(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_sub_6fad3200 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fad3200 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2d1c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029a653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fad3200)();
  return;
}


// 0x1029a660  (ghidra: FUN_1029a660)  [gap]
uint32_t * GetPtr_sub_6facd740(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310a21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6facd740 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1c0) {
      FUN_103023e9(&DAT_104ea1c0);
      if (DAT_104ea1c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa74 = *(int *)(&DAT_103d333c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1c0);
      }
    }
    sub_6facd740 = sub_GetDllOffset_102f10f0(0,DAT_104eaa74);
  }
  ExceptionList = local_10;
  return &sub_6facd740;
}


// 0x1029a710  (ghidra: FUN_1029a710)  [gap]
uint32_t * GetPtr_sub_6f8f2940(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310a51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6f8f2940 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae7c) {
      FUN_103023e9(&DAT_104eae7c);
      if (DAT_104eae7c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ee4 = *(int *)(&DAT_103d4d34 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae7c);
      }
    }
    sub_6f8f2940 = sub_GetDllOffset_102f10f0(4,DAT_104e9ee4);
  }
  ExceptionList = local_10;
  return &sub_6f8f2940;
}


// 0x1029a7c0  (ghidra: FUN_1029a7c0)  [gap]
uint32_t * GetPtr_sub_6fb04e10_1029a7c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310a81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb04e10_1029a7c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9320) {
      FUN_103023e9(&DAT_104e9320);
      if (DAT_104e9320 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e985c = *(int *)(&DAT_103d42fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9320);
      }
    }
    sub_6fb04e10_1029a7c0 = sub_GetDllOffset_102f10f0(0,DAT_104e985c);
  }
  ExceptionList = local_10;
  return &sub_6fb04e10_1029a7c0;
}


// 0x1029a870  (ghidra: FUN_1029a870)  [gap]
uint32_t * GetPtr_sub_6fadb4c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ab1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fadb4c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96f4) {
      FUN_103023e9(&DAT_104e96f4);
      if (DAT_104e96f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9424 = *(int *)(&DAT_103d35c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96f4);
      }
    }
    sub_6fadb4c0 = sub_GetDllOffset_102f10f0(0,DAT_104e9424);
  }
  ExceptionList = local_10;
  return &sub_6fadb4c0;
}


// 0x1029a920  (ghidra: FUN_1029a920)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76450(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ae1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb76450 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9eec) {
      FUN_103023e9(&DAT_104e9eec);
      if (DAT_104e9eec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ea0 = *(int *)(&DAT_103d43bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9eec);
      }
    }
    SKILLS_SkillsBar_6fb76450 = sub_GetDllOffset_102f10f0(0,DAT_104e9ea0);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb76450;
}


// 0x1029a9d0  (ghidra: FUN_1029a9d0)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb77290(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310b11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb77290 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea200) {
      FUN_103023e9(&DAT_104ea200);
      if (DAT_104ea200 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e977c = *(int *)(&DAT_103d450c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea200);
      }
    }
    SKILLS_SkillsBar_6fb77290 = sub_GetDllOffset_102f10f0(0,DAT_104e977c);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb77290;
}


// 0x1029aa80  (ghidra: FUN_1029aa80)  [gap]
uint32_t * GetPtr_sub_6fb5c1b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310b41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb5c1b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e942c) {
      FUN_103023e9(&DAT_104e942c);
      if (DAT_104e942c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1b0 = *(int *)(&DAT_103d38f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e942c);
      }
    }
    sub_6fb5c1b0 = sub_GetDllOffset_102f10f0(0,DAT_104ea1b0);
  }
  ExceptionList = local_10;
  return &sub_6fb5c1b0;
}


// 0x1029ab30  (ghidra: FUN_1029ab30)  [gap]
uint32_t * GetPtr_sub_6fb6e240(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310b71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb6e240 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaac4) {
      FUN_103023e9(&DAT_104eaac4);
      if (DAT_104eaac4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9dac = *(int *)(&DAT_103d3974 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaac4);
      }
    }
    sub_6fb6e240 = sub_GetDllOffset_102f10f0(0,DAT_104e9dac);
  }
  ExceptionList = local_10;
  return &sub_6fb6e240;
}


// 0x1029abe0  (ghidra: FUN_1029abe0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb54e20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ba1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb54e20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9484) {
      FUN_103023e9(&DAT_104e9484);
      if (DAT_104e9484 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea794 = *(int *)(&DAT_103d4ff4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9484);
      }
    }
    SKILLS_Skills_6fb54e20 = sub_GetDllOffset_102f10f0(0,DAT_104ea794);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb54e20;
}


// 0x1029ac90  (ghidra: FUN_1029ac90)  [gap]
uint32_t * GetPtr_sub_6fabd810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310bd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fabd810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5f8) {
      FUN_103023e9(&DAT_104ea5f8);
      if (DAT_104ea5f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3ac = *(int *)(&DAT_103d3064 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5f8);
      }
    }
    sub_6fabd810 = sub_GetDllOffset_102f10f0(0,DAT_104ea3ac);
  }
  ExceptionList = local_10;
  return &sub_6fabd810;
}


// 0x1029ad70  (ghidra: FUN_1029ad70)  [gap]
uint32_t * GetPtr_PLAYER_PlrMsg_6fcec550(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310c01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrMsg_6fcec550 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf3c) {
      FUN_103023e9(&DAT_104eaf3c);
      if (DAT_104eaf3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fd4 = *(int *)(&DAT_103d5104 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf3c);
      }
    }
    PLAYER_PlrMsg_6fcec550 = sub_GetDllOffset_102f10f0(6,DAT_104e9fd4);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrMsg_6fcec550;
}


// 0x1029ae20  (ghidra: FUN_1029ae20)  [gap]
uint32_t * GetPtr_sub_6fcaf070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310c31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcaf070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb024) {
      FUN_103023e9(&DAT_104eb024);
      if (DAT_104eb024 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fb8 = *(int *)(&DAT_103d349c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb024);
      }
    }
    sub_6fcaf070 = sub_GetDllOffset_102f10f0(6,DAT_104e9fb8);
  }
  ExceptionList = local_10;
  return &sub_6fcaf070;
}


// 0x1029aed0  [gap]
uint Fog_10022(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10022 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10022 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6628 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029aef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10022)();
  return uVar2;
}


// 0x1029af00  [gap]
void __cdecl Fog_10024(char *szMsg,char *szFile,int nLine)

{
  int iVar1;
  
  if (p_Fog_10024 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10024 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6858 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029af26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10024)();
  return;
}


// 0x1029af30  [gap]
uint * __fastcall Fog_10042(uint param_1,char *param_2,uint param_3,uint32_t param_s2)

{
  int iVar1;
  uint *puVar2;
  
  if (p_Fog_10042 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10042 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c73f8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029af56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_Fog_10042)();
  return puVar2;
}


// 0x1029af60  [gap]
uint Fog_10043(uint32_t param_s1,uint32_t param_s2)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10043 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10043 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6dc0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029af86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10043)();
  return uVar2;
}


// 0x1029af90  [gap]
void * __fastcall Fog_10045(void *pMemPool,int nSize,char *szFile,int nLine,int n0)

{
  int iVar1;
  void *pvVar2;
  
  if (p_Fog_10045 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10045 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7d08 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029afb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*p_Fog_10045)();
  return pvVar2;
}


// 0x1029afc0  [gap]
void __fastcall Fog_10046(void *pMemPool,void *pMemory,char *szFile,int nLine,int n0)

{
  int iVar1;
  
  if (p_Fog_10046 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10046 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c72e0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029afe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10046)();
  return;
}


// 0x1029aff0  [gap]
void __fastcall Fog_10050(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  
  if (p_Fog_10050 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10050 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c64e8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10050)();
  return;
}


// 0x1029b020  [gap]
int Fog_10055(void)

{
  int iVar1;
  
  if (p_Fog_10055 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10055 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7b40 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10055)();
  return iVar1;
}


// 0x1029b050  [gap]
int * __fastcall
Fog_10091(int *param_1,uint param_2,int param_3,int param_4,int *param_5,int *param_6,uint param_7,
         uint param_8,uint32_t param_s7,uint32_t param_s8)

{
  int iVar1;
  int *piVar2;
  
  if (p_Fog_10091 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10091 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7968 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_Fog_10091)();
  return piVar2;
}


// 0x1029b080  [gap]
uint __fastcall Fog_10092(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10092 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10092 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6790 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10092)();
  return uVar2;
}


// 0x1029b0b0  [gap]
uint __fastcall Fog_10094(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10094 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10094 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2b34 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10094)();
  return uVar2;
}


// 0x1029b0e0  [gap]
uint __fastcall Fog_10095(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10095 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10095 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7510 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10095)();
  return uVar2;
}


// 0x1029b110  [gap]
void __fastcall Fog_10097(uint param_1)

{
  int iVar1;
  
  if (p_Fog_10097 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10097 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7ea8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10097)();
  return;
}


// 0x1029b140  [gap]
int __fastcall Fog_10102(uint param_1,uint param_2)

{
  int iVar1;
  
  if (p_Fog_10102 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10102 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c74a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10102)();
  return iVar1;
}


// 0x1029b170  [gap]
void __fastcall Fog_10103(uint param_1)

{
  int iVar1;
  
  if (p_Fog_10103 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10103 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6d70 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10103)();
  return;
}


// 0x1029b1a0  [gap]
int __fastcall Fog_10105(uint param_1,uint param_2)

{
  int iVar1;
  
  if (p_Fog_10105 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10105 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c74a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10105)();
  return iVar1;
}


// 0x1029b1d0  [gap]
int __fastcall
Fog_10107(LPCSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,DWORD param_5,
         DWORD param_6,HANDLE param_7)

{
  int iVar1;
  
  if (p_Fog_10107 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10107 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7410 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10107)();
  return iVar1;
}


// 0x1029b200  [gap]
void __fastcall Fog_10109(HANDLE param_1)

{
  int iVar1;
  
  if (p_Fog_10109 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10109 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7d90 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10109)();
  return;
}


// 0x1029b230  [gap]
void __fastcall
Fog_10110(HANDLE param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)

{
  int iVar1;
  
  if (p_Fog_10110 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10110 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c71d0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10110)();
  return;
}


// 0x1029b260  [gap]
void __fastcall
Fog_10111(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)

{
  int iVar1;
  
  if (p_Fog_10111 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10111 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2da4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10111)();
  return;
}


// 0x1029b290  [gap]
uint __fastcall Fog_10114(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10114 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10114 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6ed0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10114)();
  return uVar2;
}


// 0x1029b2c0  [gap]
void __fastcall Fog_10115(LPCSTR param_1,uint param_2,uint32_t param_s1,uint32_t param_s2)

{
  int iVar1;
  
  if (p_Fog_10115 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10115 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6d98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10115)();
  return;
}


// 0x1029b2f0  [gap]
void __fastcall Fog_10116(LPCSTR param_1,uint param_2)

{
  int iVar1;
  
  if (p_Fog_10116 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10116 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c73a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10116)();
  return;
}


// 0x1029b320  [gap]
void Fog_10126(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (p_Fog_10126 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10126 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7338 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10126)();
  return;
}


// 0x1029b350  [gap]
int Fog_10127(int param_1)

{
  int iVar1;
  
  if (p_Fog_10127 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10127 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7a28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10127)();
  return iVar1;
}


// 0x1029b380  [gap]
int Fog_10128(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_Fog_10128 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10128 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c77b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b3a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10128)();
  return iVar1;
}


// 0x1029b3b0  [gap]
uint Fog_10129(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10129 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10129 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6e30 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10129)();
  return uVar2;
}


// 0x1029b3e0  [gap]
int Fog_10130(uint param_1,int param_2)

{
  int iVar1;
  
  if (p_Fog_10130 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10130 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c77d0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10130)();
  return iVar1;
}


// 0x1029b410  [gap]
uint Fog_10137(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10137 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10137 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2d44 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10137)();
  return uVar2;
}


// 0x1029b440  [gap]
void Fog_10207(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (p_Fog_10207 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10207 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2e1c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10207)();
  return;
}


// 0x1029b470  [gap]
uint * Fog_10211(char *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (p_Fog_10211 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10211 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2be4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_Fog_10211)();
  return puVar2;
}


// 0x1029b4a0  [gap]
uint * Fog_10208(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (p_Fog_10208 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10208 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2b8c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_Fog_10208)();
  return puVar2;
}


// 0x1029b4d0  [gap]
void Fog_10209(uint *param_1)

{
  int iVar1;
  
  if (p_Fog_10209 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10209 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c6d20 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10209)();
  return;
}


// 0x1029b500  [gap]
uint Fog_10213(int *param_1,uint param_2,uint32_t param_s3)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10213 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10213 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2bcc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10213)();
  return uVar2;
}


// 0x1029b530  [gap]
void Fog_10086(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (p_Fog_10086 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10086 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7608 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Fog_10086)();
  return;
}


// 0x1029b560  [gap]
int Fog_10070(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  
  if (p_Fog_10070 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10070 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103d2dfc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10070)();
  return iVar1;
}


// 0x1029b590  [gap]
uint Fog_10227(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_Fog_10227 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10227 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c79b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Fog_10227)();
  return uVar2;
}


// 0x1029b5c0  (ghidra: FUN_1029b5c0)  [gap]
uint32_t * GetPtr_D2MCPClient_DAT_6fa2aeb4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310c61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2MCPClient_DAT_6fa2aeb4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93ac) {
      FUN_103023e9(&DAT_104e93ac);
      if (DAT_104e93ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea328 = *(int *)(&DAT_103d4484 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93ac);
      }
    }
    p_D2MCPClient_DAT_6fa2aeb4 = sub_GetDllOffset_102f10f0(0xd,DAT_104ea328);
  }
  ExceptionList = local_10;
  return &p_D2MCPClient_DAT_6fa2aeb4;
}


// 0x1029b670  (ghidra: FUN_1029b670)  [gap]
uint32_t * GetPtr_D2MCPClient_DAT_6fa2b028(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310c91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2MCPClient_DAT_6fa2b028 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadbc) {
      FUN_103023e9(&DAT_104eadbc);
      if (DAT_104eadbc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9da4 = *(int *)(&DAT_103d3bf4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eadbc);
      }
    }
    p_D2MCPClient_DAT_6fa2b028 = sub_GetDllOffset_102f10f0(0xd,DAT_104e9da4);
  }
  ExceptionList = local_10;
  return &p_D2MCPClient_DAT_6fa2b028;
}


// 0x1029b720  (ghidra: FUN_1029b720)  [gap]
uint32_t * GetPtr_D2MCPClient_DAT_6fa2aed8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310cc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2MCPClient_DAT_6fa2aed8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea344) {
      FUN_103023e9(&DAT_104ea344);
      if (DAT_104ea344 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf48 = *(int *)(&DAT_103d44c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea344);
      }
    }
    p_D2MCPClient_DAT_6fa2aed8 = sub_GetDllOffset_102f10f0(0xd,DAT_104eaf48);
  }
  ExceptionList = local_10;
  return &p_D2MCPClient_DAT_6fa2aed8;
}


// 0x1029b7d0  (ghidra: FUN_1029b7d0)  [gap]
uint32_t * GetPtr_D2MCPClient_DAT_6fa2b1c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310cf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2MCPClient_DAT_6fa2b1c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9100) {
      FUN_103023e9(&DAT_104e9100);
      if (DAT_104e9100 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac3c = *(int *)(&DAT_103d4b84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9100);
      }
    }
    p_D2MCPClient_DAT_6fa2b1c8 = sub_GetDllOffset_102f10f0(0xd,DAT_104eac3c);
  }
  ExceptionList = local_10;
  return &p_D2MCPClient_DAT_6fa2b1c8;
}


// 0x1029b880  (ghidra: FUN_1029b880)  [gap]
uint32_t * GetPtr_D2MCPClient_10058(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310d21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2MCPClient_10058 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fd0) {
      FUN_103023e9(&DAT_104e8fd0);
      if (DAT_104e8fd0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a1c = *(int *)(&DAT_103d511c + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fd0);
      }
    }
    D2MCPClient_10058 = sub_GetDllOffset_102f10f0(0xd,DAT_104e9a1c);
  }
  ExceptionList = local_10;
  return &D2MCPClient_10058;
}


// 0x1029b930  [gap]
int __fastcall Fog_10007(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (p_Fog_10007 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Fog_10007 = sub_GetDllOffset_102f10f0(8,*(int *)(&DAT_103c7f18 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Fog_10007)();
  return iVar1;
}


// 0x1029b960  [gap]
void sub_6ff362b0(void)

{
  int iVar1;
  
  if (p_sub_6ff362b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6ff362b0 = sub_GetDllOffset_102f10f0(9,*(int *)(&DAT_103c74b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6ff362b0)();
  return;
}


// 0x1029b990  [gap]
uint * BnDownload_6ff2d320(uint *param_1,uint *param_2,uchar *param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (p_BnDownload_6ff2d320 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_BnDownload_6ff2d320 = sub_GetDllOffset_102f10f0(9,*(int *)(&DAT_103c7c78 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029b9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_BnDownload_6ff2d320)();
  return puVar2;
}


// 0x1029b9c0  (ghidra: FUN_1029b9c0)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3e8d8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310d51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3e8d8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fd8) {
      FUN_103023e9(&DAT_104e9fd8);
      if (DAT_104e9fd8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea024 = *(int *)(&DAT_103d3024 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fd8);
      }
    }
    p_Bnclient_DAT_6ff3e8d8 = sub_GetDllOffset_102f10f0(9,DAT_104ea024);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3e8d8;
}


// 0x1029ba70  (ghidra: FUN_1029ba70)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3e8e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310d81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3e8e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9240) {
      FUN_103023e9(&DAT_104e9240);
      if (DAT_104e9240 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb048 = *(int *)(&DAT_103d3c54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9240);
      }
    }
    p_Bnclient_DAT_6ff3e8e0 = sub_GetDllOffset_102f10f0(9,DAT_104eb048);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3e8e0;
}


// 0x1029bb20  (ghidra: FUN_1029bb20)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3e8e4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310db1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3e8e4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb040) {
      FUN_103023e9(&DAT_104eb040);
      if (DAT_104eb040 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea15c = *(int *)(&DAT_103d34b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb040);
      }
    }
    p_Bnclient_DAT_6ff3e8e4 = sub_GetDllOffset_102f10f0(9,DAT_104ea15c);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3e8e4;
}


// 0x1029bbd0  (ghidra: FUN_1029bbd0)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3f1dc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310de1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3f1dc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea114) {
      FUN_103023e9(&DAT_104ea114);
      if (DAT_104ea114 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e48 = *(int *)(&DAT_103d3b1c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea114);
      }
    }
    p_Bnclient_DAT_6ff3f1dc = sub_GetDllOffset_102f10f0(9,DAT_104e9e48);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3f1dc;
}


// 0x1029bc80  (ghidra: FUN_1029bc80)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3f1f4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310e11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3f1f4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92c8) {
      FUN_103023e9(&DAT_104e92c8);
      if (DAT_104e92c8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae70 = *(int *)(&DAT_103d504c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92c8);
      }
    }
    p_Bnclient_DAT_6ff3f1f4 = sub_GetDllOffset_102f10f0(9,DAT_104eae70);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3f1f4;
}


// 0x1029bd30  (ghidra: FUN_1029bd30)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3f930(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310e41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3f930 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac60) {
      FUN_103023e9(&DAT_104eac60);
      if (DAT_104eac60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3ec = *(int *)(&DAT_103d426c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac60);
      }
    }
    p_Bnclient_DAT_6ff3f930 = sub_GetDllOffset_102f10f0(9,DAT_104ea3ec);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3f930;
}


// 0x1029bde0  (ghidra: FUN_1029bde0)  [gap]
uint32_t * GetPtr_Bnclient_DAT_6ff3f654(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310e71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_Bnclient_DAT_6ff3f654 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9698) {
      FUN_103023e9(&DAT_104e9698);
      if (DAT_104e9698 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f2c = *(int *)(&DAT_103d48fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9698);
      }
    }
    p_Bnclient_DAT_6ff3f654 = sub_GetDllOffset_102f10f0(9,DAT_104e9f2c);
  }
  ExceptionList = local_10;
  return &p_Bnclient_DAT_6ff3f654;
}


// 0x1029be90  (ghidra: FUN_1029be90)  [gap]
uint32_t * GetPtr_sub_6ff36070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ea1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6ff36070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea39c) {
      FUN_103023e9(&DAT_104ea39c);
      if (DAT_104ea39c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9670 = *(int *)(&DAT_103d31a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea39c);
      }
    }
    sub_6ff36070 = sub_GetDllOffset_102f10f0(9,DAT_104e9670);
  }
  ExceptionList = local_10;
  return &sub_6ff36070;
}


// 0x1029bf40  [gap]
uint Storm_252(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_252 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_252 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c7b30 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029bf66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_252)();
  return uVar2;
}


// 0x1029bf70  [gap]
uint Storm_253(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_253 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_253 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c73c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029bf96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_253)();
  return uVar2;
}


// 0x1029bfa0  [gap]
DWORD Storm_265(int param_1,LPDWORD param_2)

{
  int iVar1;
  DWORD DVar2;
  
  if (p_Storm_265 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_265 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c6878 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029bfc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = (*p_Storm_265)();
  return DVar2;
}


// 0x1029bfd0  [gap]
uint Storm_266(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_266 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_266 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c65b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029bff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_266)();
  return uVar2;
}


// 0x1029c000  [gap]
uint Storm_268(void *param_1,uint *param_2,byte param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_268 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_268 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103d2e5c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_268)();
  return uVar2;
}


// 0x1029c030  [gap]
void Storm_269(uint param_1,uint *param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  
  if (p_Storm_269 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_269 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c6ee8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Storm_269)();
  return;
}


// 0x1029c060  [gap]
uint Storm_280(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_280 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_280 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c7670 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_280)();
  return uVar2;
}


// 0x1029c090  [gap]
uint * Storm_401(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  
  if (p_Storm_401 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_401 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c6980 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c0b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_Storm_401)();
  return puVar2;
}


// 0x1029c0c0  [gap]
uint Storm_403(uint *param_1,uint *param_2,int param_3,uint32_t param_s4)

{
  int iVar1;
  uint uVar2;
  
  if (p_Storm_403 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_403 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103d2c74 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_Storm_403)();
  return uVar2;
}


// 0x1029c0f0  [gap]
ulonglong __fastcall
Storm_491(uint unused_ECX,uint reg_EDX,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uint32_t extraout_EDX;
  
  if (p_Storm_491 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_491 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103d2f5c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Storm_491)();
  return CONCAT44(extraout_EDX,iVar1);
}


// 0x1029c120  [gap]
uchar * Storm_501(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uchar *puVar2;
  
  if (p_Storm_501 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_501 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103c7788 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uchar *)(*p_Storm_501)();
  return puVar2;
}


// 0x1029c150  [gap]
char * Storm_506(uint *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (p_Storm_506 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Storm_506 = sub_GetDllOffset_102f10f0(10,*(int *)(&DAT_103d2a7c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(*p_Storm_506)();
  return pcVar2;
}


// 0x1029c180  [gap]
int D2Common_10309(uint32_t param_s1)

{
  int iVar1;
  
  if (p_D2Common_10309 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10309 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7d80 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10309)();
  return iVar1;
}


// 0x1029c1b0  [gap]
uint D2Common_10939(uint32_t param_s1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10939 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10939 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2bdc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10939)();
  return uVar2;
}


// 0x1029c1e0  [gap]
uint * D2Common_10387(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (p_D2Common_10387 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10387 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7b48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_D2Common_10387)();
  return puVar2;
}


// 0x1029c210  (ghidra: FUN_1029c210)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c24(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ed1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c24 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98e4) {
      FUN_103023e9(&DAT_104e98e4);
      if (DAT_104e98e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5c8 = *(int *)(&DAT_103d468c + iVar2 * 4);
        FUN_1030239f(&DAT_104e98e4);
      }
    }
    p_D2Game_DAT_6fd31c24 = sub_GetDllOffset_102f10f0(6,DAT_104ea5c8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c24;
}


// 0x1029c2c0  (ghidra: FUN_1029c2c0)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdf1420(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310f01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdf1420 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea584) {
      FUN_103023e9(&DAT_104ea584);
      if (DAT_104ea584 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ec4 = *(int *)(&DAT_103d33bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea584);
      }
    }
    p_D2Common_DAT_6fdf1420 = sub_GetDllOffset_102f10f0(1,DAT_104e9ec4);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdf1420;
}


// 0x1029c370  (ghidra: FUN_1029c370)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdf1424(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310f31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdf1424 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b24) {
      FUN_103023e9(&DAT_104e9b24);
      if (DAT_104e9b24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea18c = *(int *)(&DAT_103d30d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b24);
      }
    }
    p_D2Common_DAT_6fdf1424 = sub_GetDllOffset_102f10f0(1,DAT_104ea18c);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdf1424;
}


// 0x1029c420  [gap]
uint D2Common_10031(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10031 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10031 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7490 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10031)();
  return uVar2;
}


// 0x1029c450  (ghidra: FUN_1029c450)  [gap]
uint32_t * GetPtr_sub_6fd7e840(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310f61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd7e840 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa84) {
      FUN_103023e9(&DAT_104eaa84);
      if (DAT_104eaa84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9114 = *(int *)(&DAT_103d4c3c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa84);
      }
    }
    sub_6fd7e840 = sub_GetDllOffset_102f10f0(1,DAT_104e9114);
  }
  ExceptionList = local_10;
  return &sub_6fd7e840;
}


// 0x1029c500  [gap]
void D2Common_10153(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  if (p_D2Common_10153 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10153 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c71d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10153)();
  return;
}


// 0x1029c530  [gap]
uint __fastcall D2Common_10030(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10030 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10030 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103d2dc4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10030)();
  return uVar2;
}


// 0x1029c560  (ghidra: FUN_1029c560)  [gap]
uint32_t * GetPtr_sub_6fd7e790(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310f91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd7e790 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e20) {
      FUN_103023e9(&DAT_104e9e20);
      if (DAT_104e9e20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ffc = *(int *)(&DAT_103d3534 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e20);
      }
    }
    sub_6fd7e790 = sub_GetDllOffset_102f10f0(1,DAT_104e9ffc);
  }
  ExceptionList = local_10;
  return &sub_6fd7e790;
}


// 0x1029c610  [gap]
uint D2Common_10889(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10889 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10889 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6548 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10889)();
  return uVar2;
}


// 0x1029c640  [gap]
void GAME_Game_6fc4c120(int param_1,int param_2)

{
  int iVar1;
  
  if (p_GAME_Game_6fc4c120 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_GAME_Game_6fc4c120 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6808 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_GAME_Game_6fc4c120)();
  return;
}


// 0x1029c670  (ghidra: FUN_1029c670)  [gap]
uint32_t * GetPtr_sub_6fd7f100(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310fc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd7f100 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea764) {
      FUN_103023e9(&DAT_104ea764);
      if (DAT_104ea764 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9eb4 = *(int *)(&DAT_103d2fec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea764);
      }
    }
    sub_6fd7f100 = sub_GetDllOffset_102f10f0(1,DAT_104e9eb4);
  }
  ExceptionList = local_10;
  return &sub_6fd7f100;
}


// 0x1029c720  (ghidra: FUN_1029c720)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbeb80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310ff1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbeb80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93cc) {
      FUN_103023e9(&DAT_104e93cc);
      if (DAT_104e93cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea01c = *(int *)(&DAT_103d38c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93cc);
      }
    }
    SKILLS_Skills_6fcbeb80 = sub_GetDllOffset_102f10f0(6,DAT_104ea01c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbeb80;
}


// 0x1029c7d0  (ghidra: FUN_1029c7d0)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc99100(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311021;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc99100 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb028) {
      FUN_103023e9(&DAT_104eb028);
      if (DAT_104eb028 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a40 = *(int *)(&DAT_103d39b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb028);
      }
    }
    PLAYER_PlrModes_6fc99100 = sub_GetDllOffset_102f10f0(6,DAT_104e9a40);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc99100;
}


// 0x1029c880  (ghidra: FUN_1029c880)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc98a90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311051;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc98a90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1fc) {
      FUN_103023e9(&DAT_104ea1fc);
      if (DAT_104ea1fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9690 = *(int *)(&DAT_103d4364 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1fc);
      }
    }
    PLAYER_PlrModes_6fc98a90 = sub_GetDllOffset_102f10f0(6,DAT_104e9690);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc98a90;
}


// 0x1029c930  [gap]
int D2Common_10920(int *param_1)

{
  int iVar1;
  
  if (p_D2Common_10920 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10920 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6eb8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10920)();
  return iVar1;
}


// 0x1029c960  [gap]
void D2Common_10286(int param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  
  if (p_D2Common_10286 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10286 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6c18 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029c986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10286)();
  return;
}


// 0x1029c990  (ghidra: FUN_1029c990)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc98610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311081;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc98610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb02c) {
      FUN_103023e9(&DAT_104eb02c);
      if (DAT_104eb02c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf44 = *(int *)(&DAT_103d32f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb02c);
      }
    }
    PLAYER_PlrModes_6fc98610 = sub_GetDllOffset_102f10f0(6,DAT_104eaf44);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc98610;
}


// 0x1029ca40  (ghidra: FUN_1029ca40)  [gap]
uint32_t * GetPtr_sub_6fc58620(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103110b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc58620 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c04) {
      FUN_103023e9(&DAT_104e9c04);
      if (DAT_104e9c04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9760 = *(int *)(&DAT_103d3844 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c04);
      }
    }
    sub_6fc58620 = sub_GetDllOffset_102f10f0(6,DAT_104e9760);
  }
  ExceptionList = local_10;
  return &sub_6fc58620;
}


// 0x1029caf0  (ghidra: FUN_1029caf0)  [gap]
uint32_t * GetPtr_GAME_Targets_6fd0fed0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103110e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Targets_6fd0fed0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea968) {
      FUN_103023e9(&DAT_104ea968);
      if (DAT_104ea968 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab80 = *(int *)(&DAT_103d4134 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea968);
      }
    }
    GAME_Targets_6fd0fed0 = sub_GetDllOffset_102f10f0(6,DAT_104eab80);
  }
  ExceptionList = local_10;
  return &GAME_Targets_6fd0fed0;
}


// 0x1029cba0  (ghidra: FUN_1029cba0)  [gap]
uint32_t * GetPtr_sub_6fc73720(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311111;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc73720 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea004) {
      FUN_103023e9(&DAT_104ea004);
      if (DAT_104ea004 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b20 = *(int *)(&DAT_103d46bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea004);
      }
    }
    sub_6fc73720 = sub_GetDllOffset_102f10f0(6,DAT_104e9b20);
  }
  ExceptionList = local_10;
  return &sub_6fc73720;
}


// 0x1029cc50  (ghidra: FUN_1029cc50)  [gap]
uint32_t * GetPtr_sub_6fd0b2c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311141;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b2c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf60) {
      FUN_103023e9(&DAT_104eaf60);
      if (DAT_104eaf60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4e4 = *(int *)(&DAT_103d3d34 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf60);
      }
    }
    sub_6fd0b2c0 = sub_GetDllOffset_102f10f0(6,DAT_104ea4e4);
  }
  ExceptionList = local_10;
  return &sub_6fd0b2c0;
}


// 0x1029cd00  [gap]
int D2Common_10522(int *param_1,int *param_2)

{
  int iVar1;
  
  if (p_D2Common_10522 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10522 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c67d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029cd26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10522)();
  return iVar1;
}


// 0x1029cd30  [gap]
int D2Common_10080(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_D2Common_10080 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10080 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c70b8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029cd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10080)();
  return iVar1;
}


// 0x1029cd60  (ghidra: FUN_1029cd60)  [gap]
uint32_t * GetPtr_sub_6fc21560(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311171;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21560 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0bc) {
      FUN_103023e9(&DAT_104ea0bc);
      if (DAT_104ea0bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead20 = *(int *)(&DAT_103d5114 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0bc);
      }
    }
    sub_6fc21560 = sub_GetDllOffset_102f10f0(6,DAT_104ead20);
  }
  ExceptionList = local_10;
  return &sub_6fc21560;
}


// 0x1029ce10  (ghidra: FUN_1029ce10)  [gap]
uint32_t * GetPtr_sub_6fcd0a20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103111a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcd0a20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1c8) {
      FUN_103023e9(&DAT_104ea1c8);
      if (DAT_104ea1c8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea600 = *(int *)(&DAT_103d49c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1c8);
      }
    }
    sub_6fcd0a20 = sub_GetDllOffset_102f10f0(6,DAT_104ea600);
  }
  ExceptionList = local_10;
  return &sub_6fcd0a20;
}


// 0x1029cec0  (ghidra: FUN_1029cec0)  [gap]
uint32_t * GetPtr_sub_6fd12870(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103111d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd12870 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa5c) {
      FUN_103023e9(&DAT_104eaa5c);
      if (DAT_104eaa5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98f4 = *(int *)(&DAT_103d4af4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa5c);
      }
    }
    sub_6fd12870 = sub_GetDllOffset_102f10f0(6,DAT_104e98f4);
  }
  ExceptionList = local_10;
  return &sub_6fd12870;
}


// 0x1029cf70  (ghidra: FUN_1029cf70)  [gap]
uint32_t * GetPtr_sub_6fd12d80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311201;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd12d80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3a8) {
      FUN_103023e9(&DAT_104ea3a8);
      if (DAT_104ea3a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea054 = *(int *)(&DAT_103d3dbc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3a8);
      }
    }
    sub_6fd12d80 = sub_GetDllOffset_102f10f0(6,DAT_104ea054);
  }
  ExceptionList = local_10;
  return &sub_6fd12d80;
}


// 0x1029d020  (ghidra: FUN_1029d020)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb560d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311231;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb560d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cc0) {
      FUN_103023e9(&DAT_104e9cc0);
      if (DAT_104e9cc0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c20 = *(int *)(&DAT_103d481c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cc0);
      }
    }
    UNIT_CUnit_6fb560d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9c20);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb560d0;
}


// 0x1029d0d0  (ghidra: FUN_1029d0d0)  [gap]
uint32_t * GetPtr_sub_6fcbe170(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311261;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcbe170 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa90) {
      FUN_103023e9(&DAT_104eaa90);
      if (DAT_104eaa90 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0c8 = *(int *)(&DAT_103d4dc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa90);
      }
    }
    sub_6fcbe170 = sub_GetDllOffset_102f10f0(6,DAT_104ea0c8);
  }
  ExceptionList = local_10;
  return &sub_6fcbe170;
}


// 0x1029d180  (ghidra: FUN_1029d180)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc24c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311291;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc24c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb01c) {
      FUN_103023e9(&DAT_104eb01c);
      if (DAT_104eb01c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab20 = *(int *)(&DAT_103d345c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb01c);
      }
    }
    p_D2Client_DAT_6fbcc24c = sub_GetDllOffset_102f10f0(0,DAT_104eab20);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc24c;
}


// 0x1029d230  (ghidra: FUN_1029d230)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc250(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103112c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc250 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadc4) {
      FUN_103023e9(&DAT_104eadc4);
      if (DAT_104eadc4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea718 = *(int *)(&DAT_103d35f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eadc4);
      }
    }
    p_D2Client_DAT_6fbcc250 = sub_GetDllOffset_102f10f0(0,DAT_104ea718);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc250;
}


// 0x1029d2e0  (ghidra: FUN_1029d2e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc254(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103112f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc254 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6ec) {
      FUN_103023e9(&DAT_104ea6ec);
      if (DAT_104ea6ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e974c = *(int *)(&DAT_103d385c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6ec);
      }
    }
    p_D2Client_DAT_6fbcc254 = sub_GetDllOffset_102f10f0(0,DAT_104e974c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc254;
}


// 0x1029d390  (ghidra: FUN_1029d390)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc258(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311321;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc258 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fc0) {
      FUN_103023e9(&DAT_104e8fc0);
      if (DAT_104e8fc0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea69c = *(int *)(&DAT_103d4bd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fc0);
      }
    }
    p_D2Client_DAT_6fbcc258 = sub_GetDllOffset_102f10f0(0,DAT_104ea69c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc258;
}


// 0x1029d440  (ghidra: FUN_1029d440)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc25c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311351;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc25c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c6c) {
      FUN_103023e9(&DAT_104e9c6c);
      if (DAT_104e9c6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f94 = *(int *)(&DAT_103d4904 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c6c);
      }
    }
    p_D2Client_DAT_6fbcc25c = sub_GetDllOffset_102f10f0(0,DAT_104e9f94);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc25c;
}


// 0x1029d4f0  (ghidra: FUN_1029d4f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc260(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311381;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc260 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93d8) {
      FUN_103023e9(&DAT_104e93d8);
      if (DAT_104e93d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2d0 = *(int *)(&DAT_103d45a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93d8);
      }
    }
    p_D2Client_DAT_6fbcc260 = sub_GetDllOffset_102f10f0(0,DAT_104ea2d0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc260;
}


// 0x1029d5a0  (ghidra: FUN_1029d5a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc75b8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103113b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc75b8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9984) {
      FUN_103023e9(&DAT_104e9984);
      if (DAT_104e9984 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead00 = *(int *)(&DAT_103d4b14 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9984);
      }
    }
    p_D2Client_DAT_6fbc75b8 = sub_GetDllOffset_102f10f0(0,DAT_104ead00);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc75b8;
}


// 0x1029d650  (ghidra: FUN_1029d650)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103113e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea79c) {
      FUN_103023e9(&DAT_104ea79c);
      if (DAT_104ea79c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f30 = *(int *)(&DAT_103d3ffc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea79c);
      }
    }
    p_D2Client_DAT_6fbcc280 = sub_GetDllOffset_102f10f0(0,DAT_104e9f30);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc280;
}


// 0x1029d700  [gap]
uint D2sound_10001(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10001 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10001 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6b30 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10001)();
  return uVar2;
}


// 0x1029d760  [gap]
void __fastcall D2sound_10005(int *param_1)

{
  int iVar1;
  
  if (p_D2sound_10005 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10005 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6a60 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10005)();
  return;
}


// 0x1029d790  [gap]
void __fastcall D2sound_10006(int *param_1)

{
  int iVar1;
  
  if (p_D2sound_10006 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10006 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6868 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10006)();
  return;
}


// 0x1029d7c0  [gap]
void __fastcall D2sound_10008(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2sound_10008 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10008 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6c98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d7e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10008)();
  return;
}


// 0x1029d7f0  [gap]
uint D2sound_10011(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10011 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10011 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7d70 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10011)();
  return uVar2;
}


// 0x1029d820  [gap]
void __fastcall D2sound_10018(int *param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2sound_10018 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10018 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6d10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10018)();
  return;
}


// 0x1029d850  [gap]
void __fastcall D2sound_10023(uint param_1)

{
  int iVar1;
  
  if (p_D2sound_10023 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10023 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6880 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10023)();
  return;
}


// 0x1029d880  [gap]
int * __fastcall D2sound_10025(int *param_1,uint *param_2,ushort *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (p_D2sound_10025 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10025 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7c10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_D2sound_10025)();
  return piVar2;
}


// 0x1029d8b0  [gap]
void __thiscall D2sound_10026(void *this)

{
  int iVar1;
  
  if (p_D2sound_10026 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10026 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7aa0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10026)();
  return;
}


// 0x1029d8e0  [gap]
void __fastcall D2sound_10028(uint *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2sound_10028 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10028 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7418 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10028)();
  return;
}


// 0x1029d910  [gap]
uint __fastcall D2sound_10032(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10032 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10032 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7310 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10032)();
  return uVar2;
}


// 0x1029d940  [gap]
void __fastcall D2sound_10034(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2sound_10034 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10034 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7958 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10034)();
  return;
}


// 0x1029d970  [gap]
uint __fastcall D2sound_10037(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10037 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10037 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7318 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10037)();
  return uVar2;
}


// 0x1029d9a0  [gap]
void __fastcall D2sound_10038(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2sound_10038 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10038 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6f38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10038)();
  return;
}


// 0x1029d9d0  [gap]
uint __thiscall D2sound_10039(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10039 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10039 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6c20 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029d9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10039)();
  return uVar2;
}


// 0x1029da00  [gap]
uint D2sound_10041(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10041 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10041 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6ee0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029da26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10041)();
  return uVar2;
}


// 0x1029da30  [gap]
int __fastcall D2sound_10044(int *param_1)

{
  int iVar1;
  
  if (p_D2sound_10044 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10044 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103d2bfc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029da56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2sound_10044)();
  return iVar1;
}


// 0x1029da60  [gap]
uint D2sound_10046(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10046 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10046 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6ad8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029da86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10046)();
  return uVar2;
}


// 0x1029da90  [gap]
void __fastcall D2sound_10047(int *param_1,int *param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  
  if (p_D2sound_10047 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10047 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7ec0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10047)();
  return;
}


// 0x1029dac0  [gap]
void __fastcall D2sound_10049(int *param_1)

{
  int iVar1;
  
  if (p_D2sound_10049 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10049 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6b00 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10049)();
  return;
}


// 0x1029daf0  [gap]
void __fastcall D2sound_10050(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2sound_10050 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10050 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7a48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029db16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10050)();
  return;
}


// 0x1029db20  [gap]
void __thiscall D2sound_10051(void *this)

{
  int iVar1;
  
  if (p_D2sound_10051 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10051 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7900 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029db46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10051)();
  return;
}


// 0x1029db50  [gap]
uint __fastcall D2sound_10053(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10053 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10053 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103d2b24 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029db76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10053)();
  return uVar2;
}


// 0x1029db80  [gap]
uint D2sound_10056(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10056 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10056 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6550 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10056)();
  return uVar2;
}


// 0x1029dbb0  [gap]
uint D2sound_10059(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10059 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10059 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c65c8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dbd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10059)();
  return uVar2;
}


// 0x1029dbe0  [gap]
void __fastcall D2sound_10061(int param_1)

{
  int iVar1;
  
  if (p_D2sound_10061 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10061 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7c98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dc06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10061)();
  return;
}


// 0x1029dc10  [gap]
void __fastcall D2sound_10062(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2sound_10062 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10062 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6670 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10062)();
  return;
}


// 0x1029dc40  [gap]
void __fastcall D2sound_10063(int *param_1)

{
  int iVar1;
  
  if (p_D2sound_10063 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10063 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c75b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dc66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2sound_10063)();
  return;
}


// 0x1029dc70  [gap]
uint * __fastcall D2sound_10065(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (p_D2sound_10065 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10065 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7e78 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_D2sound_10065)();
  return puVar2;
}


// 0x1029dca0  [gap]
uint __fastcall D2sound_10066(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10066 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10066 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6d60 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dcc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10066)();
  return uVar2;
}


// 0x1029dcd0  [gap]
uint D2sound_10067(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10067 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10067 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c7f28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10067)();
  return uVar2;
}


// 0x1029dd00  [gap]
uint __fastcall D2sound_10069(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2sound_10069 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2sound_10069 = sub_GetDllOffset_102f10f0(0xe,*(int *)(&DAT_103c6ff8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dd26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2sound_10069)();
  return uVar2;
}


// 0x1029dd30  (ghidra: FUN_1029dd30)  [gap]
uint32_t * GetPtr_D2sound_10020(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311411;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2sound_10020 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2c0) {
      FUN_103023e9(&DAT_104ea2c0);
      if (DAT_104ea2c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a04 = *(int *)(&DAT_103d4614 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2c0);
      }
    }
    D2sound_10020 = sub_GetDllOffset_102f10f0(0xe,DAT_104e9a04);
  }
  ExceptionList = local_10;
  return &D2sound_10020;
}


// 0x1029dde0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13610(void)

{
  int iVar1;
  
  if (p_sub_6fb13610 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13610 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6aa0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029de03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13610)();
  return iVar1;
}


// 0x1029de10  [gap]
int sub_6fb143e0(void)

{
  int iVar1;
  
  if (p_sub_6fb143e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb143e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6af8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029de33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb143e0)();
  return iVar1;
}


// 0x1029de40  [gap]
int sub_6fb14310(void)

{
  int iVar1;
  
  if (p_sub_6fb14310 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14310 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c74c8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029de63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14310)();
  return iVar1;
}


// 0x1029de70  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14370(void)

{
  int iVar1;
  
  if (p_sub_6fb14370 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14370 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6ef0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029de93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14370)();
  return iVar1;
}


// 0x1029dea0  [gap]
int sub_6fb13410(void)

{
  int iVar1;
  
  if (p_sub_6fb13410 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13410 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7c00 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029dec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13410)();
  return iVar1;
}


// 0x1029ded0  (ghidra: FUN_1029ded0)  [gap]
uint32_t * GetPtr_sub_6fb14080(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311441;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb14080 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9db8) {
      FUN_103023e9(&DAT_104e9db8);
      if (DAT_104e9db8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1a8 = *(int *)(&DAT_103d38bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9db8);
      }
    }
    sub_6fb14080 = sub_GetDllOffset_102f10f0(0,DAT_104ea1a8);
  }
  ExceptionList = local_10;
  return &sub_6fb14080;
}


// 0x1029df80  (ghidra: FUN_1029df80)  [gap]
uint32_t * GetPtr_sub_6fb14fd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311471;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb14fd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea278) {
      FUN_103023e9(&DAT_104ea278);
      if (DAT_104ea278 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea358 = *(int *)(&DAT_103d3754 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea278);
      }
    }
    sub_6fb14fd0 = sub_GetDllOffset_102f10f0(0,DAT_104ea358);
  }
  ExceptionList = local_10;
  return &sub_6fb14fd0;
}


// 0x1029e030  (ghidra: FUN_1029e030)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb15180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103114a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb15180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9304) {
      FUN_103023e9(&DAT_104e9304);
      if (DAT_104e9304 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a34 = *(int *)(&DAT_103d4cfc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9304);
      }
    }
    D2Client_loc_6fb15180 = sub_GetDllOffset_102f10f0(0,DAT_104e9a34);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb15180;
}


// 0x1029e0e0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb15e00(void)

{
  int iVar1;
  
  if (p_sub_6fb15e00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb15e00 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6738));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb15e00)();
  return iVar1;
}


// 0x1029e110  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb15df0(void)

{
  int iVar1;
  
  if (p_sub_6fb15df0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb15df0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7bb8));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb15df0)();
  return iVar1;
}


// 0x1029e140  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb15c70(void)

{
  int iVar1;
  
  if (p_sub_6fb15c70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb15c70 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c70c8));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb15c70)();
  return iVar1;
}


// 0x1029e170  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14460(void)

{
  int iVar1;
  
  if (p_sub_6fb14460 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14460 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7430));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14460)();
  return iVar1;
}


// 0x1029e1a0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14440(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb14440 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14440 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c79a0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e1c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14440)();
  return;
}


// 0x1029e1d0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14420(void)

{
  int iVar1;
  
  if (p_sub_6fb14420 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14420 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7e08));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14420)();
  return iVar1;
}


// 0x1029e200  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14400(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb14400 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14400 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6cb8));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14400)();
  return;
}


// 0x1029e230  [gap]
int sub_6fb143a0(void)

{
  int iVar1;
  
  if (p_sub_6fb143a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb143a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2d2c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb143a0)();
  return iVar1;
}


// 0x1029e260  [gap]
int sub_6fb142e0(void)

{
  int iVar1;
  
  if (p_sub_6fb142e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb142e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2e84 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb142e0)();
  return iVar1;
}


// 0x1029e290  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14350(void)

{
  int iVar1;
  
  if (p_sub_6fb14350 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14350 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6680));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14350)();
  return iVar1;
}


// 0x1029e2c0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14330(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb14330 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14330 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c78d0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e2e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14330)();
  return;
}


// 0x1029e2f0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14250(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb14250 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14250 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6cc8));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14250)();
  return;
}


// 0x1029e320  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14960(void)

{
  int iVar1;
  
  if (p_sub_6fb14960 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14960 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7068));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14960)();
  return iVar1;
}


// 0x1029e350  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb135b0(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb135b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb135b0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6690));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb135b0)();
  return;
}


// 0x1029e380  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13580(void)

{
  int iVar1;
  
  if (p_sub_6fb13580 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13580 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6db8));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13580)();
  return iVar1;
}


// 0x1029e3b0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14910(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb14910 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14910 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6ca0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14910)();
  return;
}


// 0x1029e3e0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14b30(void)

{
  int iVar1;
  
  if (p_sub_6fb14b30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14b30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2c64));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14b30)();
  return iVar1;
}


// 0x1029e410  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14150(void)

{
  int iVar1;
  
  if (p_sub_6fb14150 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14150 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c73f0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14150)();
  return iVar1;
}


// 0x1029e440  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14890(void)

{
  int iVar1;
  
  if (p_sub_6fb14890 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14890 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6828));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14890)();
  return iVar1;
}


// 0x1029e470  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb14110(uint reg_ECX)

{
  int iVar1;
  
  if (p_sub_6fb14110 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14110 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7c50));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb14110)();
  return;
}


// 0x1029e4a0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb14810(void)

{
  int iVar1;
  
  if (p_sub_6fb14810 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb14810 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6cf0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb14810)();
  return iVar1;
}


// 0x1029e4d0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_6fb13520(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb13520 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13520 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c76c0));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb13520)();
  return;
}


// 0x1029e500  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb134a0(void)

{
  int iVar1;
  
  if (p_sub_6fb134a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb134a0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2efc));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb134a0)();
  return iVar1;
}


// 0x1029e530  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13470(void)

{
  int iVar1;
  
  if (p_sub_6fb13470 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13470 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7768));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13470)();
  return iVar1;
}


// 0x1029e560  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13460(void)

{
  int iVar1;
  
  if (p_sub_6fb13460 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13460 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2bc4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13460)();
  return iVar1;
}


// 0x1029e590  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13430(void)

{
  int iVar1;
  
  if (p_sub_6fb13430 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13430 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2dac));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13430)();
  return iVar1;
}


// 0x1029e5c0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb13420(void)

{
  int iVar1;
  
  if (p_sub_6fb13420 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb13420 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2cf4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e5e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb13420)();
  return iVar1;
}


// 0x1029e5f0  [gap]
int sub_6fb133e0(void)

{
  int iVar1;
  
  if (p_sub_6fb133e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb133e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7070 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb133e0)();
  return iVar1;
}


// 0x1029e620  [gap]
int sub_6fb133b0(void)

{
  int iVar1;
  
  if (p_sub_6fb133b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb133b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2dd4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb133b0)();
  return iVar1;
}


// 0x1029e650  [gap]
int sub_6fb156b0(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fb156b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb156b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7810 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb156b0)();
  return iVar1;
}


// 0x1029e680  [gap]
void WARDEN_WardenClient_6fb3bbf0(void)

{
  int iVar1;
  
  if (p_WARDEN_WardenClient_6fb3bbf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_WARDEN_WardenClient_6fb3bbf0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2d14 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_WARDEN_WardenClient_6fb3bbf0)();
  return;
}


// 0x1029e6b0  (ghidra: FUN_1029e6b0)  [gap]
uint32_t * GetPtr_sub_6fb13270(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103114d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb13270 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a44) {
      FUN_103023e9(&DAT_104e9a44);
      if (DAT_104e9a44 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8bc = *(int *)(&DAT_103d474c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a44);
      }
    }
    sub_6fb13270 = sub_GetDllOffset_102f10f0(0,DAT_104ea8bc);
  }
  ExceptionList = local_10;
  return &sub_6fb13270;
}


// 0x1029e790  [gap]
void __fastcall sub_6fac4660(uint param_1)

{
  int iVar1;
  
  if (p_sub_6fac4660 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fac4660 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7f48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1029e7b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fac4660)();
  return;
}


// 0x1029e7c0  (ghidra: FUN_1029e7c0)  [gap]
uint32_t * GetPtr_sub_6fac4a30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311501;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac4a30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d00) {
      FUN_103023e9(&DAT_104e9d00);
      if (DAT_104e9d00 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b5c = *(int *)(&DAT_103d46dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d00);
      }
    }
    sub_6fac4a30 = sub_GetDllOffset_102f10f0(0,DAT_104e9b5c);
  }
  ExceptionList = local_10;
  return &sub_6fac4a30;
}


// 0x1029e870  (ghidra: FUN_1029e870)  [gap]
uint32_t * GetPtr_sub_6faecc60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311531;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faecc60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabd4) {
      FUN_103023e9(&DAT_104eabd4);
      if (DAT_104eabd4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadb0 = *(int *)(&DAT_103d4f54 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabd4);
      }
    }
    sub_6faecc60 = sub_GetDllOffset_102f10f0(0,DAT_104eadb0);
  }
  ExceptionList = local_10;
  return &sub_6faecc60;
}


// 0x1029e920  (ghidra: FUN_1029e920)  [gap]
uint32_t * GetPtr_sub_6faeccc0_1029e920(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311561;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faeccc0_1029e920 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea498) {
      FUN_103023e9(&DAT_104ea498);
      if (DAT_104ea498 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea978 = *(int *)(&DAT_103d32ac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea498);
      }
    }
    sub_6faeccc0_1029e920 = sub_GetDllOffset_102f10f0(0,DAT_104ea978);
  }
  ExceptionList = local_10;
  return &sub_6faeccc0_1029e920;
}


// 0x1029e9d0  (ghidra: FUN_1029e9d0)  [gap]
uint32_t * GetPtr_sub_6faf7b20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311591;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf7b20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99b8) {
      FUN_103023e9(&DAT_104e99b8);
      if (DAT_104e99b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea51c = *(int *)(&DAT_103d3dcc + iVar2 * 4);
        FUN_1030239f(&DAT_104e99b8);
      }
    }
    sub_6faf7b20 = sub_GetDllOffset_102f10f0(0,DAT_104ea51c);
  }
  ExceptionList = local_10;
  return &sub_6faf7b20;
}


// 0x1029ea80  (ghidra: FUN_1029ea80)  [gap]
uint32_t * GetPtr_WARDEN_WardenClient_6fb3a4d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103115c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (WARDEN_WardenClient_6fb3a4d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea244) {
      FUN_103023e9(&DAT_104ea244);
      if (DAT_104ea244 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9518 = *(int *)(&DAT_103d3fbc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea244);
      }
    }
    WARDEN_WardenClient_6fb3a4d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9518);
  }
  ExceptionList = local_10;
  return &WARDEN_WardenClient_6fb3a4d0;
}


// 0x1029eb30  (ghidra: FUN_1029eb30)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb55440(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103115f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb55440 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9150) {
      FUN_103023e9(&DAT_104e9150);
      if (DAT_104e9150 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93e8 = *(int *)(&DAT_103d36f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9150);
      }
    }
    UNIT_CUnit_6fb55440 = sub_GetDllOffset_102f10f0(0,DAT_104e93e8);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb55440;
}


// 0x1029ebe0  (ghidra: FUN_1029ebe0)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb56210(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311621;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb56210 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9340) {
      FUN_103023e9(&DAT_104e9340);
      if (DAT_104e9340 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea068 = *(int *)(&DAT_103d42d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9340);
      }
    }
    UNIT_CUnit_6fb56210 = sub_GetDllOffset_102f10f0(0,DAT_104ea068);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb56210;
}


// 0x1029ec90  (ghidra: FUN_1029ec90)  [gap]
uint32_t * GetPtr_sub_6fb71a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311651;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb71a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97a4) {
      FUN_103023e9(&DAT_104e97a4);
      if (DAT_104e97a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9818 = *(int *)(&DAT_103d404c + iVar2 * 4);
        FUN_1030239f(&DAT_104e97a4);
      }
    }
    sub_6fb71a80 = sub_GetDllOffset_102f10f0(0,DAT_104e9818);
  }
  ExceptionList = local_10;
  return &sub_6fb71a80;
}


// 0x1029ed40  (ghidra: FUN_1029ed40)  [gap]
uint32_t * GetPtr_sub_6fb721f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311681;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb721f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9668) {
      FUN_103023e9(&DAT_104e9668);
      if (DAT_104e9668 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9018 = *(int *)(&DAT_103d50b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9668);
      }
    }
    sub_6fb721f0 = sub_GetDllOffset_102f10f0(0,DAT_104e9018);
  }
  ExceptionList = local_10;
  return &sub_6fb721f0;
}


// 0x1029edf0  (ghidra: FUN_1029edf0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb9c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103116b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb9c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9194) {
      FUN_103023e9(&DAT_104e9194);
      if (DAT_104e9194 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9080 = *(int *)(&DAT_103d3a14 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9194);
      }
    }
    p_D2Client_DAT_6fbcb9c0 = sub_GetDllOffset_102f10f0(0,DAT_104e9080);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb9c0;
}


// 0x1029eea0  (ghidra: FUN_1029eea0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103116e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae54) {
      FUN_103023e9(&DAT_104eae54);
      if (DAT_104eae54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea098 = *(int *)(&DAT_103d42b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae54);
      }
    }
    p_D2Client_DAT_6fbcc070 = sub_GetDllOffset_102f10f0(0,DAT_104ea098);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc070;
}


// 0x1029ef50  (ghidra: FUN_1029ef50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc074(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311711;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc074 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e939c) {
      FUN_103023e9(&DAT_104e939c);
      if (DAT_104e939c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead24 = *(int *)(&DAT_103d4ac4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e939c);
      }
    }
    p_D2Client_DAT_6fbcc074 = sub_GetDllOffset_102f10f0(0,DAT_104ead24);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc074;
}


// 0x1029f000  (ghidra: FUN_1029f000)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc078(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311741;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc078 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b60) {
      FUN_103023e9(&DAT_104e9b60);
      if (DAT_104e9b60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8fc = *(int *)(&DAT_103d3934 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b60);
      }
    }
    p_D2Client_DAT_6fbcc078 = sub_GetDllOffset_102f10f0(0,DAT_104ea8fc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc078;
}


// 0x1029f0b0  (ghidra: FUN_1029f0b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc07c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311771;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc07c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea628) {
      FUN_103023e9(&DAT_104ea628);
      if (DAT_104ea628 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e88 = *(int *)(&DAT_103d35a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea628);
      }
    }
    p_D2Client_DAT_6fbcc07c = sub_GetDllOffset_102f10f0(0,DAT_104e9e88);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc07c;
}


// 0x1029f160  (ghidra: FUN_1029f160)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103117a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90bc) {
      FUN_103023e9(&DAT_104e90bc);
      if (DAT_104e90bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9544 = *(int *)(&DAT_103d4e34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90bc);
      }
    }
    p_D2Client_DAT_6fbcc3c4 = sub_GetDllOffset_102f10f0(0,DAT_104e9544);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3c4;
}


// 0x1029f210  (ghidra: FUN_1029f210)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8d5d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103117d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8d5d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98a8) {
      FUN_103023e9(&DAT_104e98a8);
      if (DAT_104e98a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e30 = *(int *)(&DAT_103d4054 + iVar2 * 4);
        FUN_1030239f(&DAT_104e98a8);
      }
    }
    p_D2Client_DAT_6fb8d5d0 = sub_GetDllOffset_102f10f0(0,DAT_104e9e30);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8d5d0;
}


// 0x1029f2c0  (ghidra: FUN_1029f2c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8d854(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311801;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8d854 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91a8) {
      FUN_103023e9(&DAT_104e91a8);
      if (DAT_104e91a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea460 = *(int *)(&DAT_103d3d1c + iVar2 * 4);
        FUN_1030239f(&DAT_104e91a8);
      }
    }
    p_D2Client_DAT_6fb8d854 = sub_GetDllOffset_102f10f0(0,DAT_104ea460);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8d854;
}


// 0x1029f370  (ghidra: FUN_1029f370)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8d538(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311831;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8d538 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e990c) {
      FUN_103023e9(&DAT_104e990c);
      if (DAT_104e990c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7c8 = *(int *)(&DAT_103d4b04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e990c);
      }
    }
    p_D2Client_DAT_6fb8d538 = sub_GetDllOffset_102f10f0(0,DAT_104ea7c8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8d538;
}


// 0x1029f420  (ghidra: FUN_1029f420)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca75c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311861;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca75c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9cc) {
      FUN_103023e9(&DAT_104ea9cc);
      if (DAT_104ea9cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac8c = *(int *)(&DAT_103d41fc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9cc);
      }
    }
    p_D2Client_DAT_6fbca75c = sub_GetDllOffset_102f10f0(0,DAT_104eac8c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca75c;
}


// 0x1029f4d0  (ghidra: FUN_1029f4d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca760(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311891;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca760 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea838) {
      FUN_103023e9(&DAT_104ea838);
      if (DAT_104ea838 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab6c = *(int *)(&DAT_103d4504 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea838);
      }
    }
    p_D2Client_DAT_6fbca760 = sub_GetDllOffset_102f10f0(0,DAT_104eab6c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca760;
}


// 0x1029f580  (ghidra: FUN_1029f580)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9e60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103118c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9e60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab0c) {
      FUN_103023e9(&DAT_104eab0c);
      if (DAT_104eab0c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9198 = *(int *)(&DAT_103d41d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab0c);
      }
    }
    p_D2Client_DAT_6fbc9e60 = sub_GetDllOffset_102f10f0(0,DAT_104e9198);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9e60;
}


// 0x1029f630  (ghidra: FUN_1029f630)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca764(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103118f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca764 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9de4) {
      FUN_103023e9(&DAT_104e9de4);
      if (DAT_104e9de4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea000 = *(int *)(&DAT_103d410c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9de4);
      }
    }
    p_D2Client_DAT_6fbca764 = sub_GetDllOffset_102f10f0(0,DAT_104ea000);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca764;
}


// 0x1029f6e0  (ghidra: FUN_1029f6e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca76c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311921;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca76c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6c0) {
      FUN_103023e9(&DAT_104ea6c0);
      if (DAT_104ea6c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab90 = *(int *)(&DAT_103d34f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6c0);
      }
    }
    p_D2Client_DAT_6fbca76c = sub_GetDllOffset_102f10f0(0,DAT_104eab90);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca76c;
}


// 0x1029f790  (ghidra: FUN_1029f790)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca754(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311951;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca754 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e995c) {
      FUN_103023e9(&DAT_104e995c);
      if (DAT_104e995c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea10c = *(int *)(&DAT_103d42c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e995c);
      }
    }
    p_D2Client_DAT_6fbca754 = sub_GetDllOffset_102f10f0(0,DAT_104ea10c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca754;
}


// 0x1029f840  (ghidra: FUN_1029f840)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca758(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311981;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca758 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f08) {
      FUN_103023e9(&DAT_104e9f08);
      if (DAT_104e9f08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac50 = *(int *)(&DAT_103d4984 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f08);
      }
    }
    p_D2Client_DAT_6fbca758 = sub_GetDllOffset_102f10f0(0,DAT_104eac50);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca758;
}


// 0x1029f8f0  (ghidra: FUN_1029f8f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca768(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103119b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca768 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ccc) {
      FUN_103023e9(&DAT_104e9ccc);
      if (DAT_104e9ccc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9054 = *(int *)(&DAT_103d3624 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ccc);
      }
    }
    p_D2Client_DAT_6fbca768 = sub_GetDllOffset_102f10f0(0,DAT_104e9054);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca768;
}


// 0x1029f9a0  (ghidra: FUN_1029f9a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca7d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103119e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca7d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e90) {
      FUN_103023e9(&DAT_104e9e90);
      if (DAT_104e9e90 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fa8 = *(int *)(&DAT_103d3acc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e90);
      }
    }
    p_D2Client_DAT_6fbca7d0 = sub_GetDllOffset_102f10f0(0,DAT_104e8fa8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca7d0;
}


// 0x1029fa50  (ghidra: FUN_1029fa50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca7d1(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311a11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca7d1 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a5c) {
      FUN_103023e9(&DAT_104e9a5c);
      if (DAT_104e9a5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa7c = *(int *)(&DAT_103d2fe4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a5c);
      }
    }
    p_D2Client_DAT_6fbca7d1 = sub_GetDllOffset_102f10f0(0,DAT_104eaa7c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca7d1;
}


// 0x1029fb00  (ghidra: FUN_1029fb00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca7d2(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311a41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca7d2 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e950c) {
      FUN_103023e9(&DAT_104e950c);
      if (DAT_104e950c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5a8 = *(int *)(&DAT_103d3964 + iVar2 * 4);
        FUN_1030239f(&DAT_104e950c);
      }
    }
    p_D2Client_DAT_6fbca7d2 = sub_GetDllOffset_102f10f0(0,DAT_104ea5a8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca7d2;
}


// 0x1029fbb0  (ghidra: FUN_1029fbb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca7d3(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311a71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca7d3 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9658) {
      FUN_103023e9(&DAT_104e9658);
      if (DAT_104e9658 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95c0 = *(int *)(&DAT_103d457c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9658);
      }
    }
    p_D2Client_DAT_6fbca7d3 = sub_GetDllOffset_102f10f0(0,DAT_104e95c0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca7d3;
}


// 0x1029fc60  (ghidra: FUN_1029fc60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc216(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311aa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc216 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea834) {
      FUN_103023e9(&DAT_104ea834);
      if (DAT_104ea834 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa2c = *(int *)(&DAT_103d44ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea834);
      }
    }
    p_D2Client_DAT_6fbcc216 = sub_GetDllOffset_102f10f0(0,DAT_104eaa2c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc216;
}


// 0x1029fd10  (ghidra: FUN_1029fd10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8e85c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311ad1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8e85c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9778) {
      FUN_103023e9(&DAT_104e9778);
      if (DAT_104e9778 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96a8 = *(int *)(&DAT_103d3c04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9778);
      }
    }
    p_D2Client_DAT_6fb8e85c = sub_GetDllOffset_102f10f0(0,DAT_104e96a8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8e85c;
}


// 0x1029fdc0  (ghidra: FUN_1029fdc0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8e868(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311b01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8e868 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9754) {
      FUN_103023e9(&DAT_104e9754);
      if (DAT_104e9754 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3e0 = *(int *)(&DAT_103d3c5c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9754);
      }
    }
    p_D2Client_DAT_6fb8e868 = sub_GetDllOffset_102f10f0(0,DAT_104ea3e0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8e868;
}


// 0x1029fe70  (ghidra: FUN_1029fe70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb80680(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311b31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb80680 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e994c) {
      FUN_103023e9(&DAT_104e994c);
      if (DAT_104e994c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ebc = *(int *)(&DAT_103d3374 + iVar2 * 4);
        FUN_1030239f(&DAT_104e994c);
      }
    }
    p_D2Client_DAT_6fb80680 = sub_GetDllOffset_102f10f0(0,DAT_104e9ebc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb80680;
}


// 0x1029ff20  (ghidra: FUN_1029ff20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8bdb8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311b61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8bdb8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6ac) {
      FUN_103023e9(&DAT_104ea6ac);
      if (DAT_104ea6ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea544 = *(int *)(&DAT_103d363c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6ac);
      }
    }
    p_D2Client_DAT_6fb8bdb8 = sub_GetDllOffset_102f10f0(0,DAT_104ea544);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8bdb8;
}


// 0x1029ffd0  (ghidra: FUN_1029ffd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8be18(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311b91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8be18 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d04) {
      FUN_103023e9(&DAT_104e9d04);
      if (DAT_104e9d04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabe0 = *(int *)(&DAT_103d3d94 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d04);
      }
    }
    p_D2Client_DAT_6fb8be18 = sub_GetDllOffset_102f10f0(0,DAT_104eabe0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8be18;
}


// 0x102a0080  (ghidra: FUN_102a0080)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba51bc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311bc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba51bc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b9c) {
      FUN_103023e9(&DAT_104e9b9c);
      if (DAT_104e9b9c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95c4 = *(int *)(&DAT_103d4fd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b9c);
      }
    }
    p_D2Client_DAT_6fba51bc = sub_GetDllOffset_102f10f0(0,DAT_104e95c4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba51bc;
}


// 0x102a0130  (ghidra: FUN_102a0130)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb928f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311bf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb928f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e963c) {
      FUN_103023e9(&DAT_104e963c);
      if (DAT_104e963c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ed0 = *(int *)(&DAT_103d3864 + iVar2 * 4);
        FUN_1030239f(&DAT_104e963c);
      }
    }
    p_D2Client_DAT_6fb928f8 = sub_GetDllOffset_102f10f0(0,DAT_104e9ed0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb928f8;
}


// 0x102a01e0  [gap]
int sub_6faec5b0(void)

{
  int iVar1;
  
  if (p_sub_6faec5b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec5b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2eac + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec5b0)();
  return iVar1;
}


// 0x102a0210  [gap]
int sub_6faec2a0(void)

{
  int iVar1;
  
  if (p_sub_6faec2a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec2a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec2a0)();
  return iVar1;
}


// 0x102a0240  [gap]
int sub_6faebfc0(void)

{
  int iVar1;
  
  if (p_sub_6faebfc0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faebfc0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e40 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faebfc0)();
  return iVar1;
}


// 0x102a0270  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faebeb0(void)

{
  int iVar1;
  
  if (p_sub_6faebeb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faebeb0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6a08));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faebeb0)();
  return iVar1;
}


// 0x102a02a0  [gap]
int sub_6faec8c0(void)

{
  int iVar1;
  
  if (p_sub_6faec8c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec8c0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e70 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a02c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec8c0)();
  return iVar1;
}


// 0x102a02d0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faebc10(void)

{
  int iVar1;
  
  if (p_sub_6faebc10 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faebc10 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7308));
  }
                    /* WARNING: Could not recover jumptable at 0x102a02f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faebc10)();
  return iVar1;
}


// 0x102a0300  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeba70_102a0300(void)

{
  int iVar1;
  
  if (p_sub_6faeba70_102a0300 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeba70_102a0300 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6850));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeba70_102a0300)();
  return iVar1;
}


// 0x102a0330  [gap]
int sub_6faeb8b0(void)

{
  int iVar1;
  
  if (p_sub_6faeb8b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeb8b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6810 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeb8b0)();
  return iVar1;
}


// 0x102a0360  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faea690(void)

{
  int iVar1;
  
  if (p_sub_6faea690 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faea690 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c78a8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faea690)();
  return iVar1;
}


// 0x102a0390  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9e20(void)

{
  int iVar1;
  
  if (p_sub_6fae9e20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9e20 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7ec8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a03b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9e20)();
  return iVar1;
}


// 0x102a03c0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9df0(void)

{
  int iVar1;
  
  if (p_sub_6fae9df0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9df0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7438));
  }
                    /* WARNING: Could not recover jumptable at 0x102a03e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9df0)();
  return iVar1;
}


// 0x102a03f0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9dc0(void)

{
  int iVar1;
  
  if (p_sub_6fae9dc0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9dc0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c72f8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9dc0)();
  return iVar1;
}


// 0x102a0420  [gap]
int sub_6faeb5b0(void)

{
  int iVar1;
  
  if (p_sub_6faeb5b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeb5b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6b88 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeb5b0)();
  return iVar1;
}


// 0x102a0450  [gap]
int sub_6faeb470(void)

{
  int iVar1;
  
  if (p_sub_6faeb470 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeb470 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7938 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeb470)();
  return iVar1;
}


// 0x102a0480  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeadb0(void)

{
  int iVar1;
  
  if (p_sub_6faeadb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeadb0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7590));
  }
                    /* WARNING: Could not recover jumptable at 0x102a04a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeadb0)();
  return iVar1;
}


// 0x102a04b0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faead70(void)

{
  int iVar1;
  
  if (p_sub_6faead70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faead70 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2adc));
  }
                    /* WARNING: Could not recover jumptable at 0x102a04d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faead70)();
  return iVar1;
}


// 0x102a04e0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faead30(void)

{
  int iVar1;
  
  if (p_sub_6faead30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faead30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2fbc));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faead30)();
  return iVar1;
}


// 0x102a0510  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeacf0(void)

{
  int iVar1;
  
  if (p_sub_6faeacf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeacf0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c74b0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeacf0)();
  return iVar1;
}


// 0x102a0540  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeacb0(void)

{
  int iVar1;
  
  if (p_sub_6faeacb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeacb0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c66f8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeacb0)();
  return iVar1;
}


// 0x102a0570  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeac70(void)

{
  int iVar1;
  
  if (p_sub_6faeac70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeac70 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6870));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeac70)();
  return iVar1;
}


// 0x102a05a0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeac30(void)

{
  int iVar1;
  
  if (p_sub_6faeac30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeac30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c67c8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a05c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeac30)();
  return iVar1;
}


// 0x102a05d0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeabf0(void)

{
  int iVar1;
  
  if (p_sub_6faeabf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeabf0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c76e8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a05f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeabf0)();
  return iVar1;
}


// 0x102a0600  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeb300(void)

{
  int iVar1;
  
  if (p_sub_6faeb300 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeb300 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7ca8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeb300)();
  return iVar1;
}


// 0x102a0630  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faec9a0(void)

{
  int iVar1;
  
  if (p_sub_6faec9a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec9a0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6c08));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec9a0)();
  return iVar1;
}


// 0x102a0660  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faec960(void)

{
  int iVar1;
  
  if (p_sub_6faec960 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec960 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7028));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec960)();
  return iVar1;
}


// 0x102a0690  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faec920(void)

{
  int iVar1;
  
  if (p_sub_6faec920 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec920 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c77d8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a06b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec920)();
  return iVar1;
}


// 0x102a06c0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faec8e0(void)

{
  int iVar1;
  
  if (p_sub_6faec8e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faec8e0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7850));
  }
                    /* WARNING: Could not recover jumptable at 0x102a06e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faec8e0)();
  return iVar1;
}


// 0x102a06f0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9d60(void)

{
  int iVar1;
  
  if (p_sub_6fae9d60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9d60 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c74e0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9d60)();
  return iVar1;
}


// 0x102a0720  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9d40(void)

{
  int iVar1;
  
  if (p_sub_6fae9d40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9d40 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6580));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9d40)();
  return iVar1;
}


// 0x102a0750  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9d20(void)

{
  int iVar1;
  
  if (p_sub_6fae9d20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9d20 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2d8c));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9d20)();
  return iVar1;
}


// 0x102a0780  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9d00(void)

{
  int iVar1;
  
  if (p_sub_6fae9d00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9d00 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7778));
  }
                    /* WARNING: Could not recover jumptable at 0x102a07a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9d00)();
  return iVar1;
}


// 0x102a07b0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9ce0(void)

{
  int iVar1;
  
  if (p_sub_6fae9ce0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9ce0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6b20));
  }
                    /* WARNING: Could not recover jumptable at 0x102a07d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9ce0)();
  return iVar1;
}


// 0x102a07e0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9cc0(void)

{
  int iVar1;
  
  if (p_sub_6fae9cc0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9cc0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c78d8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9cc0)();
  return iVar1;
}


// 0x102a0810  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9ca0(void)

{
  int iVar1;
  
  if (p_sub_6fae9ca0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9ca0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2f6c));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9ca0)();
  return iVar1;
}


// 0x102a0840  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeae40(void)

{
  int iVar1;
  
  if (p_sub_6faeae40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeae40 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2d94));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeae40)();
  return iVar1;
}


// 0x102a0870  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeadf0(void)

{
  int iVar1;
  
  if (p_sub_6faeadf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeadf0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7af8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeadf0)();
  return iVar1;
}


// 0x102a08a0  [gap]
int sub_6fae9c60(void)

{
  int iVar1;
  
  if (p_sub_6fae9c60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c60 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6bc8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a08c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c60)();
  return iVar1;
}


// 0x102a08d0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9c50(void)

{
  int iVar1;
  
  if (p_sub_6fae9c50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c50 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7c58));
  }
                    /* WARNING: Could not recover jumptable at 0x102a08f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c50)();
  return iVar1;
}


// 0x102a0900  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9c20(void)

{
  int iVar1;
  
  if (p_sub_6fae9c20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c20 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7ae0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c20)();
  return iVar1;
}


// 0x102a0930  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeb230(void)

{
  int iVar1;
  
  if (p_sub_6faeb230 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeb230 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7b98));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeb230)();
  return iVar1;
}


// 0x102a0960  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeaea0(void)

{
  int iVar1;
  
  if (p_sub_6faeaea0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaea0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7be0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaea0)();
  return iVar1;
}


// 0x102a0990  (ghidra: FUN_102a0990)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_6faea900(void)

{
  int iVar1;
  
  if (p_sub_6faea900 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faea900 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c73d8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a09b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6faea900)();
  return;
}


// 0x102a09c0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faea8e0(void)

{
  int iVar1;
  
  if (p_sub_6faea8e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faea8e0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c79d8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a09e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faea8e0)();
  return iVar1;
}


// 0x102a09f0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faea8c0(void)

{
  int iVar1;
  
  if (p_sub_6faea8c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faea8c0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2d5c));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faea8c0)();
  return iVar1;
}


// 0x102a0a20  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9c30(void)

{
  int iVar1;
  
  if (p_sub_6fae9c30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7158));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c30)();
  return iVar1;
}


// 0x102a0a50  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fb0c3d0(void)

{
  int iVar1;
  
  if (p_sub_6fb0c3d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb0c3d0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6e70));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb0c3d0)();
  return iVar1;
}


// 0x102a0a80  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9d80(void)

{
  int iVar1;
  
  if (p_sub_6fae9d80 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9d80 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6aa8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9d80)();
  return iVar1;
}


// 0x102a0ab0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeabb0(void)

{
  int iVar1;
  
  if (p_sub_6faeabb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeabb0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6f70));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeabb0)();
  return iVar1;
}


// 0x102a0ae0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeab70(void)

{
  int iVar1;
  
  if (p_sub_6faeab70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeab70 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7740));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeab70)();
  return iVar1;
}


// 0x102a0b10  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeab30(void)

{
  int iVar1;
  
  if (p_sub_6faeab30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeab30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c66e0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeab30)();
  return iVar1;
}


// 0x102a0b40  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeaaf0(void)

{
  int iVar1;
  
  if (p_sub_6faeaaf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaaf0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2b2c));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaaf0)();
  return iVar1;
}


// 0x102a0b70  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeaab0(void)

{
  int iVar1;
  
  if (p_sub_6faeaab0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaab0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7718));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaab0)();
  return iVar1;
}


// 0x102a0ba0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeaa70(void)

{
  int iVar1;
  
  if (p_sub_6faeaa70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaa70 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c77a0));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaa70)();
  return iVar1;
}


// 0x102a0bd0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faeaa30(void)

{
  int iVar1;
  
  if (p_sub_6faeaa30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaa30 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6ae8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaa30)();
  return iVar1;
}


// 0x102a0c00  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6faea9f0(void)

{
  int iVar1;
  
  if (p_sub_6faea9f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faea9f0 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c6fb8));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faea9f0)();
  return iVar1;
}


// 0x102a0c30  [gap]
int sub_6faeaee0(void)

{
  int iVar1;
  
  if (p_sub_6faeaee0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faeaee0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7648 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faeaee0)();
  return iVar1;
}


// 0x102a0c60  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fae9c80(void)

{
  int iVar1;
  
  if (p_sub_6fae9c80 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fae9c80 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103d2b5c));
  }
                    /* WARNING: Could not recover jumptable at 0x102a0c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fae9c80)();
  return iVar1;
}


// 0x102a0cc0  (ghidra: FUN_102a0cc0)  [gap]
uint32_t * GetPtr_sub_6fae8cd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10311c21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fae8cd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafcc) {
      FUN_103023e9(&DAT_104eafcc);
      if (DAT_104eafcc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead90 = *(int *)(&DAT_103d4dd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafcc);
      }
    }
    sub_6fae8cd0 = sub_GetDllOffset_102f10f0(0,DAT_104ead90);
  }
  ExceptionList = local_10;
  return &sub_6fae8cd0;
}

