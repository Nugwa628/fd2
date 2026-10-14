/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_1028e780.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x1028e780 - 0x10299fb0
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


// 0x1028e780  (ghidra: FUN_1028e780)  [gap]
uint32_t * GetPtr_D2Win_DAT_6f9014b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d931;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Win_DAT_6f9014b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea634) {
      FUN_103023e9(&DAT_104ea634);
      if (DAT_104ea634 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac18 = *(int *)(&DAT_103d3ccc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea634);
      }
    }
    p_D2Win_DAT_6f9014b0 = sub_GetDllOffset_102f10f0(4,DAT_104eac18);
  }
  ExceptionList = local_10;
  return &p_D2Win_DAT_6f9014b0;
}


// 0x1028e860  [gap]
int * UI_npcmenu_6faf6150(void)

{
  int iVar1;
  int *piVar2;
  
  if (p_UI_npcmenu_6faf6150 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_npcmenu_6faf6150 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7050 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_UI_npcmenu_6faf6150)();
  return piVar2;
}


// 0x1028e890  [gap]
int * UNIT_Monster_6fb01a80(void)

{
  int iVar1;
  int *piVar2;
  
  if (p_UNIT_Monster_6fb01a80 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_Monster_6fb01a80 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c66f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_UNIT_Monster_6fb01a80)();
  return piVar2;
}


// 0x1028e8c0  (ghidra: FUN_1028e8c0)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb56070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d961;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb56070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6f0) {
      FUN_103023e9(&DAT_104ea6f0);
      if (DAT_104ea6f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a74 = *(int *)(&DAT_103d3174 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6f0);
      }
    }
    UNIT_CUnit_6fb56070 = sub_GetDllOffset_102f10f0(0,DAT_104e9a74);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb56070;
}


// 0x1028e970  [gap]
uint UNIT_CUnit_6fb568e0(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_UNIT_CUnit_6fb568e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_CUnit_6fb568e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2cc4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_UNIT_CUnit_6fb568e0)();
  return uVar2;
}


// 0x1028e9a0  [gap]
int sub_6fac6020(void)

{
  int iVar1;
  
  if (p_sub_6fac6020 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fac6020 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2bd4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fac6020)();
  return iVar1;
}


// 0x1028e9d0  [gap]
void UI_inv_6fb414f0(void *param_1,int param_2,uint32_t param_s3)

{
  int iVar1;
  
  if (p_UI_inv_6fb414f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb414f0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2f54 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb414f0)();
  return;
}


// 0x1028ea00  (ghidra: FUN_1028ea00)  [gap]
uint32_t * GetPtr_sub_6fb04e10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d991;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb04e10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9fc) {
      FUN_103023e9(&DAT_104ea9fc);
      if (DAT_104ea9fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea750 = *(int *)(&DAT_103d3a44 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9fc);
      }
    }
    sub_6fb04e10 = sub_GetDllOffset_102f10f0(0,DAT_104ea750);
  }
  ExceptionList = local_10;
  return &sub_6fb04e10;
}


// 0x1028eab0  (ghidra: FUN_1028eab0)  [gap]
uint32_t * GetPtr_sub_6fb046e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d9c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb046e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e993c) {
      FUN_103023e9(&DAT_104e993c);
      if (DAT_104e993c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0f8 = *(int *)(&DAT_103d4bfc + iVar2 * 4);
        FUN_1030239f(&DAT_104e993c);
      }
    }
    sub_6fb046e0 = sub_GetDllOffset_102f10f0(0,DAT_104ea0f8);
  }
  ExceptionList = local_10;
  return &sub_6fb046e0;
}


// 0x1028eb60  [gap]
uint __fastcall sub_6fad16a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fad16a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fad16a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2d0c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028eb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fad16a0)();
  return uVar2;
}


// 0x1028eb90  [gap]
void UI_inv_6fb408c0(void)

{
  int iVar1;
  
  if (p_UI_inv_6fb408c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb408c0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7210 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ebb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb408c0)();
  return;
}


// 0x1028ebc0  [gap]
ulonglong __fastcall sub_6fb72790(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint32_t extraout_EDX;
  
  if (p_sub_6fb72790 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb72790 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7170 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ebe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb72790)();
  return CONCAT44(extraout_EDX,iVar1);
}


// 0x1028ebf0  [gap]
uint __fastcall sub_6fab1630(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fab1630 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fab1630 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7010 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ec13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fab1630)();
  return uVar2;
}


// 0x1028ec20  [gap]
uint __fastcall sub_6fab1660(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fab1660 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fab1660 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6570 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ec43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fab1660)();
  return uVar2;
}


// 0x1028ec50  [gap]
void UI_automap_6fb0fb50(void)

{
  int iVar1;
  
  if (p_UI_automap_6fb0fb50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_automap_6fb0fb50 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ec73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_automap_6fb0fb50)();
  return;
}


// 0x1028ec80  [gap]
int __fastcall UI_automap_6fb108d0(int param_1)

{
  int iVar1;
  
  if (p_UI_automap_6fb108d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_automap_6fb108d0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7d68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028eca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_UI_automap_6fb108d0)();
  return iVar1;
}


// 0x1028ecb0  [gap]
void sub_6fb11d00(int param_1,uint32_t param_s2)

{
  int iVar1;
  
  if (p_sub_6fb11d00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb11d00 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c75c8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ecd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb11d00)();
  return;
}


// 0x1028ece0  (ghidra: FUN_1028ece0)  [gap]
uint32_t * GetPtr_sub_6fb4f950(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d9f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb4f950 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea334) {
      FUN_103023e9(&DAT_104ea334);
      if (DAT_104ea334 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac48 = *(int *)(&DAT_103d4c14 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea334);
      }
    }
    sub_6fb4f950 = sub_GetDllOffset_102f10f0(0,DAT_104eac48);
  }
  ExceptionList = local_10;
  return &sub_6fb4f950;
}


// 0x1028ed90  [gap]
void sub_6fb4f7b0(int param_1,int param_2)

{
  int iVar1;
  
  if (p_sub_6fb4f7b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb4f7b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c75d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028edb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb4f7b0)();
  return;
}


// 0x1028edc0  (ghidra: FUN_1028edc0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb228(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030da21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb228 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fd8) {
      FUN_103023e9(&DAT_104e8fd8);
      if (DAT_104e8fd8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2b0 = *(int *)(&DAT_103d4cbc + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fd8);
      }
    }
    p_D2Client_DAT_6fbbb228 = sub_GetDllOffset_102f10f0(0,DAT_104ea2b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb228;
}


// 0x1028ee70  (ghidra: FUN_1028ee70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb210(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030da51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb210 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafc8) {
      FUN_103023e9(&DAT_104eafc8);
      if (DAT_104eafc8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea208 = *(int *)(&DAT_103d48d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafc8);
      }
    }
    p_D2Client_DAT_6fbbb210 = sub_GetDllOffset_102f10f0(0,DAT_104ea208);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb210;
}


// 0x1028ef20  (ghidra: FUN_1028ef20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb214(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030da81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb214 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93dc) {
      FUN_103023e9(&DAT_104e93dc);
      if (DAT_104e93dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1c4 = *(int *)(&DAT_103d4aa4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93dc);
      }
    }
    p_D2Client_DAT_6fbbb214 = sub_GetDllOffset_102f10f0(0,DAT_104ea1c4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb214;
}


// 0x1028efd0  (ghidra: FUN_1028efd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb21c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dab1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb21c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4a4) {
      FUN_103023e9(&DAT_104ea4a4);
      if (DAT_104ea4a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98ec = *(int *)(&DAT_103d3cf4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4a4);
      }
    }
    p_D2Client_DAT_6fbbb21c = sub_GetDllOffset_102f10f0(0,DAT_104e98ec);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb21c;
}


// 0x1028f080  (ghidra: FUN_1028f080)  [gap]
uint32_t * GetPtr_sub_6fb4be70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dae1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb4be70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead5c) {
      FUN_103023e9(&DAT_104ead5c);
      if (DAT_104ead5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9578 = *(int *)(&DAT_103d443c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead5c);
      }
    }
    sub_6fb4be70 = sub_GetDllOffset_102f10f0(0,DAT_104e9578);
  }
  ExceptionList = local_10;
  return &sub_6fb4be70;
}


// 0x1028f130  [gap]
void sub_6fb2d850(uint32_t param_s1,uint32_t param_s2)

{
  int iVar1;
  
  if (p_sub_6fb2d850 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb2d850 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6a98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb2d850)();
  return;
}


// 0x1028f160  (ghidra: FUN_1028f160)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb6e400(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030db11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb6e400 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa08) {
      FUN_103023e9(&DAT_104eaa08);
      if (DAT_104eaa08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea638 = *(int *)(&DAT_103d4ffc + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa08);
      }
    }
    D2Client_loc_6fb6e400 = sub_GetDllOffset_102f10f0(0,DAT_104ea638);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb6e400;
}


// 0x1028f210  [gap]
uint __fastcall sub_6fad3f20(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fad3f20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fad3f20 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c69a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fad3f20)();
  return uVar2;
}


// 0x1028f240  (ghidra: FUN_1028f240)  [gap]
uint32_t * GetPtr_sub_6fb70450(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030db41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb70450 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d1c) {
      FUN_103023e9(&DAT_104e9d1c);
      if (DAT_104e9d1c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91b4 = *(int *)(&DAT_103d4fbc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d1c);
      }
    }
    sub_6fb70450 = sub_GetDllOffset_102f10f0(0,DAT_104e91b4);
  }
  ExceptionList = local_10;
  return &sub_6fb70450;
}


// 0x1028f2f0  (ghidra: FUN_1028f2f0)  [gap]
uint32_t * GetPtr_sub_6fb6e4c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030db71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb6e4c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e54) {
      FUN_103023e9(&DAT_104e9e54);
      if (DAT_104e9e54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea730 = *(int *)(&DAT_103d501c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e54);
      }
    }
    sub_6fb6e4c0 = sub_GetDllOffset_102f10f0(0,DAT_104ea730);
  }
  ExceptionList = local_10;
  return &sub_6fb6e4c0;
}


// 0x1028f3a0  [gap]
void sub_6fb47840(void)

{
  int iVar1;
  
  if (p_sub_6fb47840 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb47840 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c67c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb47840)();
  return;
}


// 0x1028f3d0  [gap]
void sub_6fb6e2e0(void)

{
  int iVar1;
  
  if (p_sub_6fb6e2e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb6e2e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6b28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb6e2e0)();
  return;
}


// 0x1028f400  [gap]
void sub_6fb6eaf0(void)

{
  int iVar1;
  
  if (p_sub_6fb6eaf0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb6eaf0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c74e8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb6eaf0)();
  return;
}


// 0x1028f430  [gap]
uint SKILLS_Skills_6fb54d40(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_Skills_6fb54d40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fb54d40 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7110 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_Skills_6fb54d40)();
  return uVar2;
}


// 0x1028f460  [gap]
int sub_6fb54d60(void)

{
  int iVar1;
  
  if (p_sub_6fb54d60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb54d60 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7620 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028f483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fb54d60)();
  return iVar1;
}


// 0x1028f490  (ghidra: FUN_1028f490)  [gap]
uint32_t * GetPtr_sub_6fac43e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dba1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac43e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6bc) {
      FUN_103023e9(&DAT_104ea6bc);
      if (DAT_104ea6bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae8c = *(int *)(&DAT_103d3f24 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6bc);
      }
    }
    sub_6fac43e0 = sub_GetDllOffset_102f10f0(0,DAT_104eae8c);
  }
  ExceptionList = local_10;
  return &sub_6fac43e0;
}


// 0x1028f540  (ghidra: FUN_1028f540)  [gap]
uint32_t * GetPtr_sub_6fac4910(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dbd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac4910 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea820) {
      FUN_103023e9(&DAT_104ea820);
      if (DAT_104ea820 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7f8 = *(int *)(&DAT_103d39f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea820);
      }
    }
    sub_6fac4910 = sub_GetDllOffset_102f10f0(0,DAT_104ea7f8);
  }
  ExceptionList = local_10;
  return &sub_6fac4910;
}


// 0x1028f5f0  (ghidra: FUN_1028f5f0)  [gap]
uint32_t * GetPtr_sub_6fac49a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dc01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac49a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f6c) {
      FUN_103023e9(&DAT_104e9f6c);
      if (DAT_104e9f6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97c0 = *(int *)(&DAT_103d4044 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f6c);
      }
    }
    sub_6fac49a0 = sub_GetDllOffset_102f10f0(0,DAT_104e97c0);
  }
  ExceptionList = local_10;
  return &sub_6fac49a0;
}


// 0x1028f6a0  (ghidra: FUN_1028f6a0)  [gap]
uint32_t * GetPtr_sub_6fb4d850(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dc31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb4d850 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9630) {
      FUN_103023e9(&DAT_104e9630);
      if (DAT_104e9630 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fc8 = *(int *)(&DAT_103d48ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9630);
      }
    }
    sub_6fb4d850 = sub_GetDllOffset_102f10f0(0,DAT_104e9fc8);
  }
  ExceptionList = local_10;
  return &sub_6fb4d850;
}


// 0x1028f750  (ghidra: FUN_1028f750)  [gap]
uint32_t * GetPtr_UNIT_Player_6facb7f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dc61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Player_6facb7f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98a4) {
      FUN_103023e9(&DAT_104e98a4);
      if (DAT_104e98a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e973c = *(int *)(&DAT_103d482c + iVar2 * 4);
        FUN_1030239f(&DAT_104e98a4);
      }
    }
    UNIT_Player_6facb7f0 = sub_GetDllOffset_102f10f0(0,DAT_104e973c);
  }
  ExceptionList = local_10;
  return &UNIT_Player_6facb7f0;
}


// 0x1028f800  (ghidra: FUN_1028f800)  [gap]
uint32_t * GetPtr_sub_6fb01ae0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dc91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb01ae0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabb8) {
      FUN_103023e9(&DAT_104eabb8);
      if (DAT_104eabb8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae4c = *(int *)(&DAT_103d3594 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabb8);
      }
    }
    sub_6fb01ae0 = sub_GetDllOffset_102f10f0(0,DAT_104eae4c);
  }
  ExceptionList = local_10;
  return &sub_6fb01ae0;
}


// 0x1028f8b0  (ghidra: FUN_1028f8b0)  [gap]
uint32_t * GetPtr_sub_6fb6f5f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dcc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb6f5f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9624) {
      FUN_103023e9(&DAT_104e9624);
      if (DAT_104e9624 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea168 = *(int *)(&DAT_103d500c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9624);
      }
    }
    sub_6fb6f5f0 = sub_GetDllOffset_102f10f0(0,DAT_104ea168);
  }
  ExceptionList = local_10;
  return &sub_6fb6f5f0;
}


// 0x1028f960  (ghidra: FUN_1028f960)  [gap]
uint32_t * GetPtr_UI_npcmenu_6faf6230(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dcf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_npcmenu_6faf6230 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa10) {
      FUN_103023e9(&DAT_104eaa10);
      if (DAT_104eaa10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea73c = *(int *)(&DAT_103d50e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa10);
      }
    }
    UI_npcmenu_6faf6230 = sub_GetDllOffset_102f10f0(0,DAT_104ea73c);
  }
  ExceptionList = local_10;
  return &UI_npcmenu_6faf6230;
}


// 0x1028fa10  (ghidra: FUN_1028fa10)  [gap]
uint32_t * GetPtr_sub_6fb05f10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dd21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb05f10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafc4) {
      FUN_103023e9(&DAT_104eafc4);
      if (DAT_104eafc4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9294 = *(int *)(&DAT_103d3fd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafc4);
      }
    }
    sub_6fb05f10 = sub_GetDllOffset_102f10f0(0,DAT_104e9294);
  }
  ExceptionList = local_10;
  return &sub_6fb05f10;
}


// 0x1028fac0  (ghidra: FUN_1028fac0)  [gap]
uint32_t * GetPtr_sub_6fb05fb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dd51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb05fb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea160) {
      FUN_103023e9(&DAT_104ea160);
      if (DAT_104ea160 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0bc = *(int *)(&DAT_103d4894 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea160);
      }
    }
    sub_6fb05fb0 = sub_GetDllOffset_102f10f0(0,DAT_104eb0bc);
  }
  ExceptionList = local_10;
  return &sub_6fb05fb0;
}


// 0x1028fb70  (ghidra: FUN_1028fb70)  [gap]
uint32_t * GetPtr_UI_inv_6fb3d430(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dd81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_inv_6fb3d430 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea120) {
      FUN_103023e9(&DAT_104ea120);
      if (DAT_104ea120 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97e8 = *(int *)(&DAT_103d3e54 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea120);
      }
    }
    UI_inv_6fb3d430 = sub_GetDllOffset_102f10f0(0,DAT_104e97e8);
  }
  ExceptionList = local_10;
  return &UI_inv_6fb3d430;
}


// 0x1028fc20  (ghidra: FUN_1028fc20)  [gap]
uint32_t * GetPtr_UI_inv_6fb41360(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ddb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_inv_6fb41360 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac68) {
      FUN_103023e9(&DAT_104eac68);
      if (DAT_104eac68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9108 = *(int *)(&DAT_103d4e04 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac68);
      }
    }
    UI_inv_6fb41360 = sub_GetDllOffset_102f10f0(0,DAT_104e9108);
  }
  ExceptionList = local_10;
  return &UI_inv_6fb41360;
}


// 0x1028fcd0  [gap]
void __cdecl UI_inv_6fb40cb0(void *param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  if (p_UI_inv_6fb40cb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb40cb0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7548 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fcf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb40cb0)();
  return;
}


// 0x1028fd00  [gap]
void sub_6fb739e0(uint32_t param_s1)

{
  int iVar1;
  
  if (p_sub_6fb739e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb739e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c78e8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb739e0)();
  return;
}


// 0x1028fd30  [gap]
void UI_inv_6fb3cfb0(int param_1)

{
  int iVar1;
  
  if (p_UI_inv_6fb3cfb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb3cfb0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7cd8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fd53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb3cfb0)();
  return;
}


// 0x1028fd60  [gap]
void UI_inv_6fb3f260(void)

{
  int iVar1;
  
  if (p_UI_inv_6fb3f260 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb3f260 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c76f8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb3f260)();
  return;
}


// 0x1028fd90  [gap]
void UI_inv_6fb42440(void)

{
  int iVar1;
  
  if (p_UI_inv_6fb42440 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb42440 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7118 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fdb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb42440)();
  return;
}


// 0x1028fdc0  [gap]
void UI_inv_6fb453b0(void)

{
  int iVar1;
  
  if (p_UI_inv_6fb453b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb453b0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e80 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fde3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb453b0)();
  return;
}


// 0x1028fdf0  [gap]
void UI_inv_6fb458a0(int *param_1)

{
  int iVar1;
  
  if (p_UI_inv_6fb458a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_inv_6fb458a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6530 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fe13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_inv_6fb458a0)();
  return;
}


// 0x1028fe20  [gap]
void sub_6fb45c60(void)

{
  int iVar1;
  
  if (p_sub_6fb45c60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb45c60 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103d2e2c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fe43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb45c60)();
  return;
}


// 0x1028fe50  [gap]
void sub_6fb20140(void)

{
  int iVar1;
  
  if (p_sub_6fb20140 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb20140 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6658 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fe73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb20140)();
  return;
}


// 0x1028fe80  [gap]
void sub_6fb15230(void)

{
  int iVar1;
  
  if (p_sub_6fb15230 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb15230 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7820 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb15230)();
  return;
}


// 0x1028feb0  [gap]
void sub_6fac25a0(void)

{
  int iVar1;
  
  if (p_sub_6fac25a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fac25a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c70d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028fed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fac25a0)();
  return;
}


// 0x1028fee0  [gap]
void UNIT_CUnit_6fb5aec0(void)

{
  int iVar1;
  
  if (p_UNIT_CUnit_6fb5aec0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_CUnit_6fb5aec0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6ac0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ff03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_CUnit_6fb5aec0)();
  return;
}


// 0x1028ffd0  (ghidra: FUN_1028ffd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaada4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dde1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaada4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a00) {
      FUN_103023e9(&DAT_104e9a00);
      if (DAT_104e9a00 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98ac = *(int *)(&DAT_103d4b1c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a00);
      }
    }
    p_D2Client_DAT_6fbaada4 = sub_GetDllOffset_102f10f0(0,DAT_104e98ac);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaada4;
}


// 0x10290080  (ghidra: FUN_10290080)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaadac(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030de11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaadac == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5fc) {
      FUN_103023e9(&DAT_104ea5fc);
      if (DAT_104ea5fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f7c = *(int *)(&DAT_103d3f9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5fc);
      }
    }
    p_D2Client_DAT_6fbaadac = sub_GetDllOffset_102f10f0(0,DAT_104e9f7c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaadac;
}


// 0x10290130  (ghidra: FUN_10290130)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad94(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030de41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad94 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea724) {
      FUN_103023e9(&DAT_104ea724);
      if (DAT_104ea724 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead68 = *(int *)(&DAT_103d3c2c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea724);
      }
    }
    p_D2Client_DAT_6fbaad94 = sub_GetDllOffset_102f10f0(0,DAT_104ead68);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad94;
}


// 0x102901e0  (ghidra: FUN_102901e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaadd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030de71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaadd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d70) {
      FUN_103023e9(&DAT_104e9d70);
      if (DAT_104e9d70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e976c = *(int *)(&DAT_103d3524 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d70);
      }
    }
    p_D2Client_DAT_6fbaadd0 = sub_GetDllOffset_102f10f0(0,DAT_104e976c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaadd0;
}


// 0x10290290  (ghidra: FUN_10290290)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcfed8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dea1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcfed8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9584) {
      FUN_103023e9(&DAT_104e9584);
      if (DAT_104e9584 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0a0 = *(int *)(&DAT_103d441c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9584);
      }
    }
    p_D2Client_DAT_6fbcfed8 = sub_GetDllOffset_102f10f0(0,DAT_104ea0a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcfed8;
}


// 0x10290340  (ghidra: FUN_10290340)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb35c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ded1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb35c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea06c) {
      FUN_103023e9(&DAT_104ea06c);
      if (DAT_104ea06c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e908c = *(int *)(&DAT_103d4b44 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea06c);
      }
    }
    p_D2Client_DAT_6fbbb35c = sub_GetDllOffset_102f10f0(0,DAT_104e908c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb35c;
}


// 0x102903f0  (ghidra: FUN_102903f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca7c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030df01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca7c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea424) {
      FUN_103023e9(&DAT_104ea424);
      if (DAT_104ea424 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3fc = *(int *)(&DAT_103d445c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea424);
      }
    }
    p_D2Client_DAT_6fbca7c8 = sub_GetDllOffset_102f10f0(0,DAT_104ea3fc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca7c8;
}


// 0x102904a0  (ghidra: FUN_102904a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc64(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030df31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc64 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea394) {
      FUN_103023e9(&DAT_104ea394);
      if (DAT_104ea394 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e967c = *(int *)(&DAT_103d37b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea394);
      }
    }
    p_D2Client_DAT_6fbcbc64 = sub_GetDllOffset_102f10f0(0,DAT_104e967c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc64;
}


// 0x10290550  (ghidra: FUN_10290550)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030df61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab34) {
      FUN_103023e9(&DAT_104eab34);
      if (DAT_104eab34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4cc = *(int *)(&DAT_103d4c34 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab34);
      }
    }
    p_D2Client_DAT_6fbcbc70 = sub_GetDllOffset_102f10f0(0,DAT_104ea4cc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc70;
}


// 0x10290600  (ghidra: FUN_10290600)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc74(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030df91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc74 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea270) {
      FUN_103023e9(&DAT_104ea270);
      if (DAT_104ea270 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea204 = *(int *)(&DAT_103d3054 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea270);
      }
    }
    p_D2Client_DAT_6fbcbc74 = sub_GetDllOffset_102f10f0(0,DAT_104ea204);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc74;
}


// 0x102906b0  (ghidra: FUN_102906b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc78(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dfc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc78 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa60) {
      FUN_103023e9(&DAT_104eaa60);
      if (DAT_104eaa60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6c4 = *(int *)(&DAT_103d45cc + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa60);
      }
    }
    p_D2Client_DAT_6fbcbc78 = sub_GetDllOffset_102f10f0(0,DAT_104ea6c4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc78;
}


// 0x10290760  (ghidra: FUN_10290760)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc84(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030dff1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc84 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf88) {
      FUN_103023e9(&DAT_104eaf88);
      if (DAT_104eaf88 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3b0 = *(int *)(&DAT_103d3a74 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf88);
      }
    }
    p_D2Client_DAT_6fbcbc84 = sub_GetDllOffset_102f10f0(0,DAT_104ea3b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc84;
}


// 0x10290810  (ghidra: FUN_10290810)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbeb4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e021;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbeb4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead10) {
      FUN_103023e9(&DAT_104ead10);
      if (DAT_104ead10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb060 = *(int *)(&DAT_103d35d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead10);
      }
    }
    p_D2Client_DAT_6fbcbeb4 = sub_GetDllOffset_102f10f0(0,DAT_104eb060);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbeb4;
}


// 0x102908c0  (ghidra: FUN_102908c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbeb8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e051;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbeb8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a54) {
      FUN_103023e9(&DAT_104e9a54);
      if (DAT_104e9a54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d3c = *(int *)(&DAT_103d3214 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a54);
      }
    }
    p_D2Client_DAT_6fbcbeb8 = sub_GetDllOffset_102f10f0(0,DAT_104e9d3c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbeb8;
}


// 0x10290970  (ghidra: FUN_10290970)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbebc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e081;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbebc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafa4) {
      FUN_103023e9(&DAT_104eafa4);
      if (DAT_104eafa4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95dc = *(int *)(&DAT_103d4374 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafa4);
      }
    }
    p_D2Client_DAT_6fbcbebc = sub_GetDllOffset_102f10f0(0,DAT_104e95dc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbebc;
}


// 0x10290a20  (ghidra: FUN_10290a20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbec0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e0b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbec0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b54) {
      FUN_103023e9(&DAT_104e9b54);
      if (DAT_104e9b54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ad4 = *(int *)(&DAT_103d42dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b54);
      }
    }
    p_D2Client_DAT_6fbcbec0 = sub_GetDllOffset_102f10f0(0,DAT_104e9ad4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbec0;
}


// 0x10290ad0  (ghidra: FUN_10290ad0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbec4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e0e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbec4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea16c) {
      FUN_103023e9(&DAT_104ea16c);
      if (DAT_104ea16c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92a8 = *(int *)(&DAT_103d419c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea16c);
      }
    }
    p_D2Client_DAT_6fbcbec4 = sub_GetDllOffset_102f10f0(0,DAT_104e92a8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbec4;
}


// 0x10290b80  (ghidra: FUN_10290b80)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbec8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e111;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbec8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9900) {
      FUN_103023e9(&DAT_104e9900);
      if (DAT_104e9900 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9214 = *(int *)(&DAT_103d47cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9900);
      }
    }
    p_D2Client_DAT_6fbcbec8 = sub_GetDllOffset_102f10f0(0,DAT_104e9214);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbec8;
}


// 0x10290c30  (ghidra: FUN_10290c30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbecc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e141;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbecc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99a4) {
      FUN_103023e9(&DAT_104e99a4);
      if (DAT_104e99a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c50 = *(int *)(&DAT_103d393c + iVar2 * 4);
        FUN_1030239f(&DAT_104e99a4);
      }
    }
    p_D2Client_DAT_6fbcbecc = sub_GetDllOffset_102f10f0(0,DAT_104e9c50);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbecc;
}


// 0x10290ce0  (ghidra: FUN_10290ce0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbed0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e171;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbed0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea800) {
      FUN_103023e9(&DAT_104ea800);
      if (DAT_104ea800 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9940 = *(int *)(&DAT_103d4abc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea800);
      }
    }
    p_D2Client_DAT_6fbcbed0 = sub_GetDllOffset_102f10f0(0,DAT_104e9940);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbed0;
}


// 0x10290d90  (ghidra: FUN_10290d90)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbca784(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e1a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbca784 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fb4) {
      FUN_103023e9(&DAT_104e8fb4);
      if (DAT_104e8fb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fe8 = *(int *)(&DAT_103d46d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fb4);
      }
    }
    p_D2Client_DAT_6fbca784 = sub_GetDllOffset_102f10f0(0,DAT_104e9fe8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbca784;
}


// 0x10290e40  (ghidra: FUN_10290e40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc300(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e1d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc300 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea430) {
      FUN_103023e9(&DAT_104ea430);
      if (DAT_104ea430 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b00 = *(int *)(&DAT_103d41b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea430);
      }
    }
    p_D2Client_DAT_6fbcc300 = sub_GetDllOffset_102f10f0(0,DAT_104e9b00);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc300;
}


// 0x10290ef0  (ghidra: FUN_10290ef0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc304_10290ef0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e201;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc304_10290ef0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9728) {
      FUN_103023e9(&DAT_104e9728);
      if (DAT_104e9728 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb034 = *(int *)(&DAT_103d3894 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9728);
      }
    }
    p_D2Client_DAT_6fbcc304_10290ef0 = sub_GetDllOffset_102f10f0(0,DAT_104eb034);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc304_10290ef0;
}


// 0x10290fa0  (ghidra: FUN_10290fa0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe5c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e231;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe5c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea744) {
      FUN_103023e9(&DAT_104ea744);
      if (DAT_104ea744 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9aac = *(int *)(&DAT_103d44f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea744);
      }
    }
    p_D2Client_DAT_6fbcbe5c = sub_GetDllOffset_102f10f0(0,DAT_104e9aac);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe5c;
}


// 0x10291050  (ghidra: FUN_10291050)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e261;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb07c) {
      FUN_103023e9(&DAT_104eb07c);
      if (DAT_104eb07c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e999c = *(int *)(&DAT_103d36fc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb07c);
      }
    }
    p_D2Client_DAT_6fbcbe60 = sub_GetDllOffset_102f10f0(0,DAT_104e999c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe60;
}


// 0x10291100  (ghidra: FUN_10291100)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe64(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e291;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe64 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf24) {
      FUN_103023e9(&DAT_104eaf24);
      if (DAT_104eaf24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a9c = *(int *)(&DAT_103d4434 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf24);
      }
    }
    p_D2Client_DAT_6fbcbe64 = sub_GetDllOffset_102f10f0(0,DAT_104e9a9c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe64;
}


// 0x102911b0  (ghidra: FUN_102911b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e2c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab3c) {
      FUN_103023e9(&DAT_104eab3c);
      if (DAT_104eab3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac5c = *(int *)(&DAT_103d4fcc + iVar2 * 4);
        FUN_1030239f(&DAT_104eab3c);
      }
    }
    p_D2Client_DAT_6fbcbe68 = sub_GetDllOffset_102f10f0(0,DAT_104eac5c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe68;
}


// 0x10291260  (ghidra: FUN_10291260)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe6c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e2f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe6c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea030) {
      FUN_103023e9(&DAT_104ea030);
      if (DAT_104ea030 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea998 = *(int *)(&DAT_103d3ddc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea030);
      }
    }
    p_D2Client_DAT_6fbcbe6c = sub_GetDllOffset_102f10f0(0,DAT_104ea998);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe6c;
}


// 0x10291310  (ghidra: FUN_10291310)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe74(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e321;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe74 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c7c) {
      FUN_103023e9(&DAT_104e9c7c);
      if (DAT_104e9c7c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead84 = *(int *)(&DAT_103d475c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c7c);
      }
    }
    p_D2Client_DAT_6fbcbe74 = sub_GetDllOffset_102f10f0(0,DAT_104ead84);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe74;
}


// 0x102913c0  (ghidra: FUN_102913c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe78(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e351;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe78 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d78) {
      FUN_103023e9(&DAT_104e9d78);
      if (DAT_104e9d78 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9310 = *(int *)(&DAT_103d4464 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d78);
      }
    }
    p_D2Client_DAT_6fbcbe78 = sub_GetDllOffset_102f10f0(0,DAT_104e9310);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe78;
}


// 0x10291470  (ghidra: FUN_10291470)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe7c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e381;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe7c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9780) {
      FUN_103023e9(&DAT_104e9780);
      if (DAT_104e9780 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9084 = *(int *)(&DAT_103d4204 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9780);
      }
    }
    p_D2Client_DAT_6fbcbe7c = sub_GetDllOffset_102f10f0(0,DAT_104e9084);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe7c;
}


// 0x10291520  (ghidra: FUN_10291520)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e3b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93a4) {
      FUN_103023e9(&DAT_104e93a4);
      if (DAT_104e93a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa6c = *(int *)(&DAT_103d4964 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93a4);
      }
    }
    p_D2Client_DAT_6fbcbe80 = sub_GetDllOffset_102f10f0(0,DAT_104eaa6c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe80;
}


// 0x102915d0  (ghidra: FUN_102915d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe88(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e3e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe88 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9504) {
      FUN_103023e9(&DAT_104e9504);
      if (DAT_104e9504 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab84 = *(int *)(&DAT_103d3f44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9504);
      }
    }
    p_D2Client_DAT_6fbcbe88 = sub_GetDllOffset_102f10f0(0,DAT_104eab84);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe88;
}


// 0x10291680  (ghidra: FUN_10291680)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbedc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e411;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbedc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9420) {
      FUN_103023e9(&DAT_104e9420);
      if (DAT_104e9420 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9a4 = *(int *)(&DAT_103d512c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9420);
      }
    }
    p_D2Client_DAT_6fbcbedc = sub_GetDllOffset_102f10f0(0,DAT_104ea9a4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbedc;
}


// 0x10291730  (ghidra: FUN_10291730)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe84(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e441;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe84 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1ac) {
      FUN_103023e9(&DAT_104ea1ac);
      if (DAT_104ea1ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2a0 = *(int *)(&DAT_103d40d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1ac);
      }
    }
    p_D2Client_DAT_6fbcbe84 = sub_GetDllOffset_102f10f0(0,DAT_104ea2a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe84;
}


// 0x102917e0  (ghidra: FUN_102917e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe8c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e471;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe8c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90e8) {
      FUN_103023e9(&DAT_104e90e8);
      if (DAT_104e90e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead38 = *(int *)(&DAT_103d315c + iVar2 * 4);
        FUN_1030239f(&DAT_104e90e8);
      }
    }
    p_D2Client_DAT_6fbcbe8c = sub_GetDllOffset_102f10f0(0,DAT_104ead38);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe8c;
}


// 0x10291890  (ghidra: FUN_10291890)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe94(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e4a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe94 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e922c) {
      FUN_103023e9(&DAT_104e922c);
      if (DAT_104e922c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabbc = *(int *)(&DAT_103d390c + iVar2 * 4);
        FUN_1030239f(&DAT_104e922c);
      }
    }
    p_D2Client_DAT_6fbcbe94 = sub_GetDllOffset_102f10f0(0,DAT_104eabbc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe94;
}


// 0x10291940  (ghidra: FUN_10291940)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbee0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e4d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbee0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9998) {
      FUN_103023e9(&DAT_104e9998);
      if (DAT_104e9998 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9278 = *(int *)(&DAT_103d4114 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9998);
      }
    }
    p_D2Client_DAT_6fbcbee0 = sub_GetDllOffset_102f10f0(0,DAT_104e9278);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbee0;
}


// 0x102919f0  (ghidra: FUN_102919f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbeec(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e501;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbeec == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5a4) {
      FUN_103023e9(&DAT_104ea5a4);
      if (DAT_104ea5a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9650 = *(int *)(&DAT_103d45ac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5a4);
      }
    }
    p_D2Client_DAT_6fbcbeec = sub_GetDllOffset_102f10f0(0,DAT_104e9650);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbeec;
}


// 0x10291aa0  (ghidra: FUN_10291aa0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc4c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e531;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc4c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea914) {
      FUN_103023e9(&DAT_104ea914);
      if (DAT_104ea914 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9158 = *(int *)(&DAT_103d4d44 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea914);
      }
    }
    p_D2Client_DAT_6fbcbc4c = sub_GetDllOffset_102f10f0(0,DAT_104e9158);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc4c;
}


// 0x10291b50  (ghidra: FUN_10291b50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc54(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e561;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc54 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96cc) {
      FUN_103023e9(&DAT_104e96cc);
      if (DAT_104e96cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e944c = *(int *)(&DAT_103d3e84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96cc);
      }
    }
    p_D2Client_DAT_6fbcbc54 = sub_GetDllOffset_102f10f0(0,DAT_104e944c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc54;
}


// 0x10291c00  (ghidra: FUN_10291c00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc58(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e591;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc58 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9388) {
      FUN_103023e9(&DAT_104e9388);
      if (DAT_104e9388 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea38c = *(int *)(&DAT_103d4a74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9388);
      }
    }
    p_D2Client_DAT_6fbcbc58 = sub_GetDllOffset_102f10f0(0,DAT_104ea38c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc58;
}


// 0x10291cb0  (ghidra: FUN_10291cb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc5c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e5c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc5c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c60) {
      FUN_103023e9(&DAT_104e9c60);
      if (DAT_104e9c60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f80 = *(int *)(&DAT_103d3194 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c60);
      }
    }
    p_D2Client_DAT_6fbcbc5c = sub_GetDllOffset_102f10f0(0,DAT_104e9f80);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc5c;
}


// 0x10291d60  (ghidra: FUN_10291d60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e5f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea350) {
      FUN_103023e9(&DAT_104ea350);
      if (DAT_104ea350 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bec = *(int *)(&DAT_103d4a9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea350);
      }
    }
    p_D2Client_DAT_6fbcbc60 = sub_GetDllOffset_102f10f0(0,DAT_104e9bec);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc60;
}


// 0x10291e10  (ghidra: FUN_10291e10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbcb4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e621;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbcb4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7f4) {
      FUN_103023e9(&DAT_104ea7f4);
      if (DAT_104ea7f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb044 = *(int *)(&DAT_103d3274 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7f4);
      }
    }
    p_D2Client_DAT_6fbcbcb4 = sub_GetDllOffset_102f10f0(0,DAT_104eb044);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbcb4;
}


// 0x10291ec0  (ghidra: FUN_10291ec0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbcc8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e651;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbcc8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea974) {
      FUN_103023e9(&DAT_104ea974);
      if (DAT_104ea974 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1a0 = *(int *)(&DAT_103d3c9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea974);
      }
    }
    p_D2Client_DAT_6fbcbcc8 = sub_GetDllOffset_102f10f0(0,DAT_104ea1a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbcc8;
}


// 0x10291f70  (ghidra: FUN_10291f70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbcdc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e681;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbcdc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0a4) {
      FUN_103023e9(&DAT_104ea0a4);
      if (DAT_104ea0a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e14 = *(int *)(&DAT_103d4e5c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0a4);
      }
    }
    p_D2Client_DAT_6fbcbcdc = sub_GetDllOffset_102f10f0(0,DAT_104e9e14);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbcdc;
}


// 0x10292020  (ghidra: FUN_10292020)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbcf0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e6b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbcf0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fdc) {
      FUN_103023e9(&DAT_104e8fdc);
      if (DAT_104e8fdc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9408 = *(int *)(&DAT_103d3b24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fdc);
      }
    }
    p_D2Client_DAT_6fbcbcf0 = sub_GetDllOffset_102f10f0(0,DAT_104e9408);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbcf0;
}


// 0x102920d0  (ghidra: FUN_102920d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd04(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e6e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd04 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e94) {
      FUN_103023e9(&DAT_104e9e94);
      if (DAT_104e9e94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c2c = *(int *)(&DAT_103d34ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e94);
      }
    }
    p_D2Client_DAT_6fbcbd04 = sub_GetDllOffset_102f10f0(0,DAT_104e9c2c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd04;
}


// 0x10292180  (ghidra: FUN_10292180)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd18(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e711;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd18 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99a8) {
      FUN_103023e9(&DAT_104e99a8);
      if (DAT_104e99a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9da0 = *(int *)(&DAT_103d4c44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99a8);
      }
    }
    p_D2Client_DAT_6fbcbd18 = sub_GetDllOffset_102f10f0(0,DAT_104e9da0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd18;
}


// 0x10292230  (ghidra: FUN_10292230)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd2c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e741;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd2c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99e0) {
      FUN_103023e9(&DAT_104e99e0);
      if (DAT_104e99e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea608 = *(int *)(&DAT_103d372c + iVar2 * 4);
        FUN_1030239f(&DAT_104e99e0);
      }
    }
    p_D2Client_DAT_6fbcbd2c = sub_GetDllOffset_102f10f0(0,DAT_104ea608);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd2c;
}


// 0x102922e0  (ghidra: FUN_102922e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e771;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f90) {
      FUN_103023e9(&DAT_104e9f90);
      if (DAT_104e9f90 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94a4 = *(int *)(&DAT_103d465c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f90);
      }
    }
    p_D2Client_DAT_6fbcbd40 = sub_GetDllOffset_102f10f0(0,DAT_104e94a4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd40;
}


// 0x10292390  (ghidra: FUN_10292390)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd54(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e7a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd54 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9bc) {
      FUN_103023e9(&DAT_104ea9bc);
      if (DAT_104ea9bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c80 = *(int *)(&DAT_103d4b4c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9bc);
      }
    }
    p_D2Client_DAT_6fbcbd54 = sub_GetDllOffset_102f10f0(0,DAT_104e9c80);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd54;
}


// 0x10292440  (ghidra: FUN_10292440)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e7d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea99c) {
      FUN_103023e9(&DAT_104ea99c);
      if (DAT_104ea99c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95fc = *(int *)(&DAT_103d406c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea99c);
      }
    }
    p_D2Client_DAT_6fbcbd68 = sub_GetDllOffset_102f10f0(0,DAT_104e95fc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd68;
}


// 0x102924f0  (ghidra: FUN_102924f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc77ec(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e801;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc77ec == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea058) {
      FUN_103023e9(&DAT_104ea058);
      if (DAT_104ea058 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f00 = *(int *)(&DAT_103d4d4c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea058);
      }
    }
    p_D2Client_DAT_6fbc77ec = sub_GetDllOffset_102f10f0(0,DAT_104e9f00);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc77ec;
}


// 0x102925a0  (ghidra: FUN_102925a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc77fc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e831;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc77fc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9618) {
      FUN_103023e9(&DAT_104e9618);
      if (DAT_104e9618 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea084 = *(int *)(&DAT_103d4404 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9618);
      }
    }
    p_D2Client_DAT_6fbc77fc = sub_GetDllOffset_102f10f0(0,DAT_104ea084);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc77fc;
}


// 0x10292650  (ghidra: FUN_10292650)  [gap]
uint32_t * GetPtr_sub_6fac47a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e861;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac47a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9078) {
      FUN_103023e9(&DAT_104e9078);
      if (DAT_104e9078 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93b4 = *(int *)(&DAT_103d4264 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9078);
      }
    }
    sub_6fac47a0 = sub_GetDllOffset_102f10f0(0,DAT_104e93b4);
  }
  ExceptionList = local_10;
  return &sub_6fac47a0;
}


// 0x10292700  (ghidra: FUN_10292700)  [gap]
uint32_t * GetPtr_sub_6fb5ce20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e891;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb5ce20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0a8) {
      FUN_103023e9(&DAT_104ea0a8);
      if (DAT_104ea0a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91e4 = *(int *)(&DAT_103d48bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0a8);
      }
    }
    sub_6fb5ce20 = sub_GetDllOffset_102f10f0(0,DAT_104e91e4);
  }
  ExceptionList = local_10;
  return &sub_6fb5ce20;
}


// 0x102927b0  (ghidra: FUN_102927b0)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76aa0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e8c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb76aa0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e968c) {
      FUN_103023e9(&DAT_104e968c);
      if (DAT_104e968c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a78 = *(int *)(&DAT_103d4b0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e968c);
      }
    }
    SKILLS_SkillsBar_6fb76aa0 = sub_GetDllOffset_102f10f0(0,DAT_104e9a78);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb76aa0;
}


// 0x10292860  (ghidra: FUN_10292860)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb765b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e8f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb765b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0d0) {
      FUN_103023e9(&DAT_104eb0d0);
      if (DAT_104eb0d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea63c = *(int *)(&DAT_103d3f2c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0d0);
      }
    }
    SKILLS_SkillsBar_6fb765b0 = sub_GetDllOffset_102f10f0(0,DAT_104ea63c);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb765b0;
}


// 0x10292910  (ghidra: FUN_10292910)  [gap]
uint32_t * GetPtr_SKILLS_SkillsBar_6fb76060(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e921;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillsBar_6fb76060 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea574) {
      FUN_103023e9(&DAT_104ea574);
      if (DAT_104ea574 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea540 = *(int *)(&DAT_103d4ddc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea574);
      }
    }
    SKILLS_SkillsBar_6fb76060 = sub_GetDllOffset_102f10f0(0,DAT_104ea540);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillsBar_6fb76060;
}


// 0x102929c0  (ghidra: FUN_102929c0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb515c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e951;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb515c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb000) {
      FUN_103023e9(&DAT_104eb000);
      if (DAT_104eb000 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97d4 = *(int *)(&DAT_103d41bc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb000);
      }
    }
    SKILLS_Skills_6fb515c0 = sub_GetDllOffset_102f10f0(0,DAT_104e97d4);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb515c0;
}


// 0x10292a70  (ghidra: FUN_10292a70)  [gap]
uint32_t * GetPtr_sub_6fb69a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e981;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb69a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cd0) {
      FUN_103023e9(&DAT_104e9cd0);
      if (DAT_104e9cd0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf08 = *(int *)(&DAT_103d44bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cd0);
      }
    }
    sub_6fb69a80 = sub_GetDllOffset_102f10f0(0,DAT_104eaf08);
  }
  ExceptionList = local_10;
  return &sub_6fb69a80;
}


// 0x10292b20  [gap]
int * __fastcall UNIT_Missile_6fb630f0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (p_UNIT_Missile_6fb630f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_Missile_6fb630f0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6fd0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10292b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_UNIT_Missile_6fb630f0)();
  return piVar2;
}


// 0x10292b50  (ghidra: FUN_10292b50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc55b8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e9b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc55b8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacec) {
      FUN_103023e9(&DAT_104eacec);
      if (DAT_104eacec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea580 = *(int *)(&DAT_103d41ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eacec);
      }
    }
    p_D2Client_DAT_6fbc55b8 = sub_GetDllOffset_102f10f0(0,DAT_104ea580);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc55b8;
}


// 0x10292c00  (ghidra: FUN_10292c00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb84390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030e9e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb84390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae14) {
      FUN_103023e9(&DAT_104eae14);
      if (DAT_104eae14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea390 = *(int *)(&DAT_103d435c + iVar2 * 4);
        FUN_1030239f(&DAT_104eae14);
      }
    }
    p_D2Client_DAT_6fb84390 = sub_GetDllOffset_102f10f0(0,DAT_104ea390);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb84390;
}


// 0x10292cb0  (ghidra: FUN_10292cb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb84290(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ea11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb84290 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea338) {
      FUN_103023e9(&DAT_104ea338);
      if (DAT_104ea338 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9d4 = *(int *)(&DAT_103d44b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea338);
      }
    }
    p_D2Client_DAT_6fb84290 = sub_GetDllOffset_102f10f0(0,DAT_104ea9d4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb84290;
}


// 0x10292d60  (ghidra: FUN_10292d60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8bc48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ea41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8bc48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98c0) {
      FUN_103023e9(&DAT_104e98c0);
      if (DAT_104e98c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea028 = *(int *)(&DAT_103d507c + iVar2 * 4);
        FUN_1030239f(&DAT_104e98c0);
      }
    }
    p_D2Client_DAT_6fb8bc48 = sub_GetDllOffset_102f10f0(0,DAT_104ea028);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8bc48;
}


// 0x10292e10  (ghidra: FUN_10292e10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8bc4c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ea71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8bc4c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a10) {
      FUN_103023e9(&DAT_104e9a10);
      if (DAT_104e9a10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eade4 = *(int *)(&DAT_103d43cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a10);
      }
    }
    p_D2Client_DAT_6fb8bc4c = sub_GetDllOffset_102f10f0(0,DAT_104eade4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8bc4c;
}


// 0x10292ec0  (ghidra: FUN_10292ec0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90eb8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eaa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90eb8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb010) {
      FUN_103023e9(&DAT_104eb010);
      if (DAT_104eb010 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9474 = *(int *)(&DAT_103d4adc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb010);
      }
    }
    p_D2Client_DAT_6fb90eb8 = sub_GetDllOffset_102f10f0(0,DAT_104e9474);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90eb8;
}


// 0x10292f70  (ghidra: FUN_10292f70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90ebc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ead1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90ebc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94d0) {
      FUN_103023e9(&DAT_104e94d0);
      if (DAT_104e94d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaac0 = *(int *)(&DAT_103d3c74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e94d0);
      }
    }
    p_D2Client_DAT_6fb90ebc = sub_GetDllOffset_102f10f0(0,DAT_104eaac0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90ebc;
}


// 0x10293020  (ghidra: FUN_10293020)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90ea4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eb01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90ea4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaab8) {
      FUN_103023e9(&DAT_104eaab8);
      if (DAT_104eaab8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98bc = *(int *)(&DAT_103d4494 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaab8);
      }
    }
    p_D2Client_DAT_6fb90ea4 = sub_GetDllOffset_102f10f0(0,DAT_104e98bc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90ea4;
}


// 0x102930d0  (ghidra: FUN_102930d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90ea8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eb31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90ea8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b8c) {
      FUN_103023e9(&DAT_104e9b8c);
      if (DAT_104e9b8c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a3c = *(int *)(&DAT_103d379c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b8c);
      }
    }
    p_D2Client_DAT_6fb90ea8 = sub_GetDllOffset_102f10f0(0,DAT_104e9a3c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90ea8;
}


// 0x10293180  (ghidra: FUN_10293180)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90eac(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eb61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90eac == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0f8) {
      FUN_103023e9(&DAT_104eb0f8);
      if (DAT_104eb0f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea530 = *(int *)(&DAT_103d3b5c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0f8);
      }
    }
    p_D2Client_DAT_6fb90eac = sub_GetDllOffset_102f10f0(0,DAT_104ea530);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90eac;
}


// 0x10293230  (ghidra: FUN_10293230)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90eb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eb91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90eb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a4c) {
      FUN_103023e9(&DAT_104e9a4c);
      if (DAT_104e9a4c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e0c = *(int *)(&DAT_103d4e84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a4c);
      }
    }
    p_D2Client_DAT_6fb90eb0 = sub_GetDllOffset_102f10f0(0,DAT_104e9e0c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90eb0;
}


// 0x102932e0  (ghidra: FUN_102932e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90eb4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ebc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90eb4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9dbc) {
      FUN_103023e9(&DAT_104e9dbc);
      if (DAT_104e9dbc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9398 = *(int *)(&DAT_103d4aec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9dbc);
      }
    }
    p_D2Client_DAT_6fb90eb4 = sub_GetDllOffset_102f10f0(0,DAT_104e9398);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90eb4;
}


// 0x10293390  (ghidra: FUN_10293390)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90eb8_10293390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ebf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90eb8_10293390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fa8) {
      FUN_103023e9(&DAT_104e9fa8);
      if (DAT_104e9fa8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead50 = *(int *)(&DAT_103d35ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fa8);
      }
    }
    p_D2Client_DAT_6fb90eb8_10293390 = sub_GetDllOffset_102f10f0(0,DAT_104ead50);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90eb8_10293390;
}


// 0x10293440  (ghidra: FUN_10293440)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90ebc_10293440(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ec21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90ebc_10293440 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91ec) {
      FUN_103023e9(&DAT_104e91ec);
      if (DAT_104e91ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3f4 = *(int *)(&DAT_103d45fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e91ec);
      }
    }
    p_D2Client_DAT_6fb90ebc_10293440 = sub_GetDllOffset_102f10f0(0,DAT_104ea3f4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90ebc_10293440;
}


// 0x102934f0  (ghidra: FUN_102934f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb828(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ec51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb828 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa24) {
      FUN_103023e9(&DAT_104eaa24);
      if (DAT_104eaa24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9738 = *(int *)(&DAT_103d3b14 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa24);
      }
    }
    p_D2Client_DAT_6fbcb828 = sub_GetDllOffset_102f10f0(0,DAT_104e9738);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb828;
}


// 0x102935a0  (ghidra: FUN_102935a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb824(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ec81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb824 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaecc) {
      FUN_103023e9(&DAT_104eaecc);
      if (DAT_104eaecc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea768 = *(int *)(&DAT_103d42f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaecc);
      }
    }
    p_D2Client_DAT_6fbcb824 = sub_GetDllOffset_102f10f0(0,DAT_104ea768);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb824;
}


// 0x10293650  (ghidra: FUN_10293650)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb834(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ecb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb834 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b18) {
      FUN_103023e9(&DAT_104e9b18);
      if (DAT_104e9b18 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9280 = *(int *)(&DAT_103d3884 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b18);
      }
    }
    p_D2Client_DAT_6fbcb834 = sub_GetDllOffset_102f10f0(0,DAT_104e9280);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb834;
}


// 0x10293700  (ghidra: FUN_10293700)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc995c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ece1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc995c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90d0) {
      FUN_103023e9(&DAT_104e90d0);
      if (DAT_104e90d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94fc = *(int *)(&DAT_103d3004 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90d0);
      }
    }
    p_D2Client_DAT_6fbc995c = sub_GetDllOffset_102f10f0(0,DAT_104e94fc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc995c;
}


// 0x102937b0  (ghidra: FUN_102937b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9960(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ed11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9960 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9460) {
      FUN_103023e9(&DAT_104e9460);
      if (DAT_104e9460 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf90 = *(int *)(&DAT_103d334c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9460);
      }
    }
    p_D2Client_DAT_6fbc9960 = sub_GetDllOffset_102f10f0(0,DAT_104eaf90);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9960;
}


// 0x10293860  (ghidra: FUN_10293860)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb2a4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ed41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb2a4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead30) {
      FUN_103023e9(&DAT_104ead30);
      if (DAT_104ead30 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab1c = *(int *)(&DAT_103d3c84 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead30);
      }
    }
    p_D2Client_DAT_6fbbb2a4 = sub_GetDllOffset_102f10f0(0,DAT_104eab1c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb2a4;
}


// 0x10293910  (ghidra: FUN_10293910)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb430(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ed71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb430 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99c0) {
      FUN_103023e9(&DAT_104e99c0);
      if (DAT_104e99c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafe8 = *(int *)(&DAT_103d4e0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e99c0);
      }
    }
    p_D2Client_DAT_6fbbb430 = sub_GetDllOffset_102f10f0(0,DAT_104eafe8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb430;
}


// 0x102939c0  (ghidra: FUN_102939c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaada8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eda1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaada8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1d4) {
      FUN_103023e9(&DAT_104ea1d4);
      if (DAT_104ea1d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea710 = *(int *)(&DAT_103d4604 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1d4);
      }
    }
    p_D2Client_DAT_6fbaada8 = sub_GetDllOffset_102f10f0(0,DAT_104ea710);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaada8;
}


// 0x10293a70  (ghidra: FUN_10293a70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030edd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea128) {
      FUN_103023e9(&DAT_104ea128);
      if (DAT_104ea128 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf94 = *(int *)(&DAT_103d4c4c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea128);
      }
    }
    p_D2Client_DAT_6fbcc1b0 = sub_GetDllOffset_102f10f0(0,DAT_104eaf94);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1b0;
}


// 0x10293b20  (ghidra: FUN_10293b20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba16b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ee01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba16b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9128) {
      FUN_103023e9(&DAT_104e9128);
      if (DAT_104e9128 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4a0 = *(int *)(&DAT_103d4414 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9128);
      }
    }
    p_D2Client_DAT_6fba16b0 = sub_GetDllOffset_102f10f0(0,DAT_104ea4a0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba16b0;
}


// 0x10293bd0  (ghidra: FUN_10293bd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ee31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9654) {
      FUN_103023e9(&DAT_104e9654);
      if (DAT_104e9654 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9200 = *(int *)(&DAT_103d4d24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9654);
      }
    }
    p_D2Client_DAT_6fbcc1f8 = sub_GetDllOffset_102f10f0(0,DAT_104e9200);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1f8;
}


// 0x10293c80  (ghidra: FUN_10293c80)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ee61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea11c) {
      FUN_103023e9(&DAT_104ea11c);
      if (DAT_104ea11c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b68 = *(int *)(&DAT_103d3a0c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea11c);
      }
    }
    p_D2Client_DAT_6fbcbf00 = sub_GetDllOffset_102f10f0(0,DAT_104e9b68);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf00;
}


// 0x10293d30  (ghidra: FUN_10293d30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb9dc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ee91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb9dc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea84c) {
      FUN_103023e9(&DAT_104ea84c);
      if (DAT_104ea84c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99d4 = *(int *)(&DAT_103d4024 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea84c);
      }
    }
    p_D2Client_DAT_6fbbb9dc = sub_GetDllOffset_102f10f0(0,DAT_104e99d4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb9dc;
}


// 0x10293de0  [gap]
void WARDEN_WardenClient_6fb3afd0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (p_WARDEN_WardenClient_6fb3afd0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_WARDEN_WardenClient_6fb3afd0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6bd0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10293e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_WARDEN_WardenClient_6fb3afd0)();
  return;
}


// 0x10293e10  (ghidra: FUN_10293e10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbf78(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eec1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbf78 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea66c) {
      FUN_103023e9(&DAT_104ea66c);
      if (DAT_104ea66c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea094 = *(int *)(&DAT_103d3404 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea66c);
      }
    }
    p_D2Client_DAT_6fbcbf78 = sub_GetDllOffset_102f10f0(0,DAT_104ea094);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbf78;
}


// 0x10293ec0  (ghidra: FUN_10293ec0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc38f4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030eef1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc38f4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e920c) {
      FUN_103023e9(&DAT_104e920c);
      if (DAT_104e920c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab28 = *(int *)(&DAT_103d510c + iVar2 * 4);
        FUN_1030239f(&DAT_104e920c);
      }
    }
    p_D2Client_DAT_6fbc38f4 = sub_GetDllOffset_102f10f0(0,DAT_104eab28);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc38f4;
}


// 0x10293f70  (ghidra: FUN_10293f70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbff8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ef21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbff8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea258) {
      FUN_103023e9(&DAT_104ea258);
      if (DAT_104ea258 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92c4 = *(int *)(&DAT_103d3364 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea258);
      }
    }
    p_D2Client_DAT_6fbcbff8 = sub_GetDllOffset_102f10f0(0,DAT_104e92c4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbff8;
}


// 0x10294020  (ghidra: FUN_10294020)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc1c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ef51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc1c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac1c) {
      FUN_103023e9(&DAT_104eac1c);
      if (DAT_104eac1c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9adc = *(int *)(&DAT_103d3f7c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac1c);
      }
    }
    p_D2Client_DAT_6fbcc1c4 = sub_GetDllOffset_102f10f0(0,DAT_104e9adc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc1c4;
}


// 0x102940d0  (ghidra: FUN_102940d0)  [gap]
uint32_t * GetPtr_sub_6fb6c720(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ef81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb6c720 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99f4) {
      FUN_103023e9(&DAT_104e99f4);
      if (DAT_104e99f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ac8 = *(int *)(&DAT_103d4ccc + iVar2 * 4);
        FUN_1030239f(&DAT_104e99f4);
      }
    }
    sub_6fb6c720 = sub_GetDllOffset_102f10f0(0,DAT_104e9ac8);
  }
  ExceptionList = local_10;
  return &sub_6fb6c720;
}


// 0x10294180  (ghidra: FUN_10294180)  [gap]
uint32_t * GetPtr_UI_automap_6fb101a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030efb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_automap_6fb101a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea418) {
      FUN_103023e9(&DAT_104ea418);
      if (DAT_104ea418 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2f0 = *(int *)(&DAT_103d3cbc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea418);
      }
    }
    UI_automap_6fb101a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea2f0);
  }
  ExceptionList = local_10;
  return &UI_automap_6fb101a0;
}


// 0x10294230  (ghidra: FUN_10294230)  [gap]
uint32_t * GetPtr_UI_automap_6fb11490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030efe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_automap_6fb11490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fe0) {
      FUN_103023e9(&DAT_104e9fe0);
      if (DAT_104e9fe0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea53c = *(int *)(&DAT_103d3e1c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fe0);
      }
    }
    UI_automap_6fb11490 = sub_GetDllOffset_102f10f0(0,DAT_104ea53c);
  }
  ExceptionList = local_10;
  return &UI_automap_6fb11490;
}


// 0x102942e0  (ghidra: FUN_102942e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba23e8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f011;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba23e8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e10) {
      FUN_103023e9(&DAT_104e9e10);
      if (DAT_104e9e10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea510 = *(int *)(&DAT_103d4184 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e10);
      }
    }
    p_D2Client_DAT_6fba23e8 = sub_GetDllOffset_102f10f0(0,DAT_104ea510);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba23e8;
}


// 0x10294390  (ghidra: FUN_10294390)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc334(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f041;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc334 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea680) {
      FUN_103023e9(&DAT_104ea680);
      if (DAT_104ea680 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f3c = *(int *)(&DAT_103d5084 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea680);
      }
    }
    p_D2Client_DAT_6fbcc334 = sub_GetDllOffset_102f10f0(0,DAT_104e9f3c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc334;
}


// 0x10294440  (ghidra: FUN_10294440)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad5c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f071;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad5c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea700) {
      FUN_103023e9(&DAT_104ea700);
      if (DAT_104ea700 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac0c = *(int *)(&DAT_103d4f64 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea700);
      }
    }
    p_D2Client_DAT_6fbaad5c = sub_GetDllOffset_102f10f0(0,DAT_104eac0c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad5c;
}


// 0x102944f0  (ghidra: FUN_102944f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f0a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97fc) {
      FUN_103023e9(&DAT_104e97fc);
      if (DAT_104e97fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea368 = *(int *)(&DAT_103d47fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e97fc);
      }
    }
    p_D2Client_DAT_6fbaad60 = sub_GetDllOffset_102f10f0(0,DAT_104ea368);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad60;
}


// 0x102945a0  (ghidra: FUN_102945a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad64(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f0d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad64 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9be0) {
      FUN_103023e9(&DAT_104e9be0);
      if (DAT_104e9be0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea454 = *(int *)(&DAT_103d4fe4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9be0);
      }
    }
    p_D2Client_DAT_6fbaad64 = sub_GetDllOffset_102f10f0(0,DAT_104ea454);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad64;
}


// 0x10294650  (ghidra: FUN_10294650)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbaad68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f101;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbaad68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90e0) {
      FUN_103023e9(&DAT_104e90e0);
      if (DAT_104e90e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9210 = *(int *)(&DAT_103d4104 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90e0);
      }
    }
    p_D2Client_DAT_6fbaad68 = sub_GetDllOffset_102f10f0(0,DAT_104e9210);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbaad68;
}


// 0x10294700  (ghidra: FUN_10294700)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbbb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f131;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbbb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7e4) {
      FUN_103023e9(&DAT_104ea7e4);
      if (DAT_104ea7e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea088 = *(int *)(&DAT_103d388c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7e4);
      }
    }
    p_D2Client_DAT_6fbcbbb0 = sub_GetDllOffset_102f10f0(0,DAT_104ea088);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbbb0;
}


// 0x102947b0  (ghidra: FUN_102947b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba3ba0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f161;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba3ba0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafb0) {
      FUN_103023e9(&DAT_104eafb0);
      if (DAT_104eafb0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eade8 = *(int *)(&DAT_103d428c + iVar2 * 4);
        FUN_1030239f(&DAT_104eafb0);
      }
    }
    p_D2Client_DAT_6fba3ba0 = sub_GetDllOffset_102f10f0(0,DAT_104eade8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba3ba0;
}


// 0x10294860  (ghidra: FUN_10294860)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba42f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f191;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba42f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9560) {
      FUN_103023e9(&DAT_104e9560);
      if (DAT_104e9560 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94c0 = *(int *)(&DAT_103d453c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9560);
      }
    }
    p_D2Client_DAT_6fba42f0 = sub_GetDllOffset_102f10f0(0,DAT_104e94c0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba42f0;
}


// 0x10294910  (ghidra: sub_6faf8b20_10294910)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_6faf8b20(void)

{
  int iVar1;
  
  if (p_sub_6faf8b20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faf8b20 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7bb0));
  }
                    /* WARNING: Could not recover jumptable at 0x10294933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6faf8b20)();
  return;
}


// 0x10294940  [gap]
uint sub_6faf5980(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6faf5980 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faf5980 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c70b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10294963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6faf5980)();
  return uVar2;
}


// 0x10294970  (ghidra: FUN_10294970)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9763(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f1c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9763 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9318) {
      FUN_103023e9(&DAT_104e9318);
      if (DAT_104e9318 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab2c = *(int *)(&DAT_103d39d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9318);
      }
    }
    p_D2Client_DAT_6fbc9763 = sub_GetDllOffset_102f10f0(0,DAT_104eab2c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9763;
}


// 0x10294a20  (ghidra: FUN_10294a20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f1f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6a0) {
      FUN_103023e9(&DAT_104ea6a0);
      if (DAT_104ea6a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea450 = *(int *)(&DAT_103d3be4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6a0);
      }
    }
    p_D2Client_DAT_6fbc3a80 = sub_GetDllOffset_102f10f0(0,DAT_104ea450);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3a80;
}


// 0x10294ad0  (ghidra: FUN_10294ad0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbba808(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f221;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbba808 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9088) {
      FUN_103023e9(&DAT_104e9088);
      if (DAT_104e9088 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91b0 = *(int *)(&DAT_103d3ac4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9088);
      }
    }
    p_D2Client_DAT_6fbba808 = sub_GetDllOffset_102f10f0(0,DAT_104e91b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbba808;
}


// 0x10294b80  (ghidra: FUN_10294b80)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3aca(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f251;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3aca == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf70) {
      FUN_103023e9(&DAT_104eaf70);
      if (DAT_104eaf70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6b0 = *(int *)(&DAT_103d3f5c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf70);
      }
    }
    p_D2Client_DAT_6fbc3aca = sub_GetDllOffset_102f10f0(0,DAT_104ea6b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3aca;
}


// 0x10294c30  (ghidra: FUN_10294c30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc971d(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f281;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc971d == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96e4) {
      FUN_103023e9(&DAT_104e96e4);
      if (DAT_104e96e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea33c = *(int *)(&DAT_103d50bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e96e4);
      }
    }
    p_D2Client_DAT_6fbc971d = sub_GetDllOffset_102f10f0(0,DAT_104ea33c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc971d;
}


// 0x10294ce0  (ghidra: FUN_10294ce0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9721(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f2b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9721 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaca4) {
      FUN_103023e9(&DAT_104eaca4);
      if (DAT_104eaca4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea890 = *(int *)(&DAT_103d47ec + iVar2 * 4);
        FUN_1030239f(&DAT_104eaca4);
      }
    }
    p_D2Client_DAT_6fbc9721 = sub_GetDllOffset_102f10f0(0,DAT_104ea890);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9721;
}


// 0x10294d90  (ghidra: FUN_10294d90)  [gap]
uint32_t * GetPtr_sub_6faf6880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f2e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf6880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea560) {
      FUN_103023e9(&DAT_104ea560);
      if (DAT_104ea560 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9110 = *(int *)(&DAT_103d41f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea560);
      }
    }
    sub_6faf6880 = sub_GetDllOffset_102f10f0(0,DAT_104e9110);
  }
  ExceptionList = local_10;
  return &sub_6faf6880;
}


// 0x10294e40  [gap]
ulonglong sub_6faf8150(void)

{
  int iVar1;
  uint32_t extraout_EDX;
  
  if (p_sub_6faf8150 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faf8150 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6ed8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10294e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6faf8150)();
  return CONCAT44(extraout_EDX,iVar1);
}


// 0x10294e70  [gap]
uint sub_6fb2e6e0(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fb2e6e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb2e6e0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c66a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10294e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fb2e6e0)();
  return uVar2;
}


// 0x10294ea0  [gap]
void SKILLS_Skills_6fb53d20(void)

{
  int iVar1;
  
  if (p_SKILLS_Skills_6fb53d20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fb53d20 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7710 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10294ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_SKILLS_Skills_6fb53d20)();
  return;
}


// 0x10294ed0  (ghidra: FUN_10294ed0)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf8380(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f311;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf8380 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e7c) {
      FUN_103023e9(&DAT_104e9e7c);
      if (DAT_104e9e7c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaef0 = *(int *)(&DAT_103d31f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e7c);
      }
    }
    D2Client_loc_6faf8380 = sub_GetDllOffset_102f10f0(0,DAT_104eaef0);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf8380;
}


// 0x10294f80  (ghidra: FUN_10294f80)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf8350(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f341;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf8350 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9680) {
      FUN_103023e9(&DAT_104e9680);
      if (DAT_104e9680 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e34 = *(int *)(&DAT_103d309c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9680);
      }
    }
    D2Client_loc_6faf8350 = sub_GetDllOffset_102f10f0(0,DAT_104e9e34);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf8350;
}


// 0x10295030  (ghidra: FUN_10295030)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf8650(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f371;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf8650 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e70) {
      FUN_103023e9(&DAT_104e9e70);
      if (DAT_104e9e70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ea8 = *(int *)(&DAT_103d36e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e70);
      }
    }
    D2Client_loc_6faf8650 = sub_GetDllOffset_102f10f0(0,DAT_104e9ea8);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf8650;
}


// 0x102950e0  (ghidra: FUN_102950e0)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf9250(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f3a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf9250 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadec) {
      FUN_103023e9(&DAT_104eadec);
      if (DAT_104eadec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa8c = *(int *)(&DAT_103d330c + iVar2 * 4);
        FUN_1030239f(&DAT_104eadec);
      }
    }
    D2Client_loc_6faf9250 = sub_GetDllOffset_102f10f0(0,DAT_104eaa8c);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf9250;
}


// 0x10295190  (ghidra: FUN_10295190)  [gap]
uint32_t * GetPtr_D2Client_loc_6fafabe0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f3d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fafabe0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9038) {
      FUN_103023e9(&DAT_104e9038);
      if (DAT_104e9038 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf40 = *(int *)(&DAT_103d370c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9038);
      }
    }
    D2Client_loc_6fafabe0 = sub_GetDllOffset_102f10f0(0,DAT_104eaf40);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fafabe0;
}


// 0x10295240  (ghidra: FUN_10295240)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf91e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f401;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf91e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0e8) {
      FUN_103023e9(&DAT_104ea0e8);
      if (DAT_104ea0e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac98 = *(int *)(&DAT_103d430c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0e8);
      }
    }
    D2Client_loc_6faf91e0 = sub_GetDllOffset_102f10f0(0,DAT_104eac98);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf91e0;
}


// 0x102952f0  (ghidra: FUN_102952f0)  [gap]
uint32_t * GetPtr_sub_6faf9440(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f431;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf9440 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7bc) {
      FUN_103023e9(&DAT_104ea7bc);
      if (DAT_104ea7bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab68 = *(int *)(&DAT_103d43ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7bc);
      }
    }
    sub_6faf9440 = sub_GetDllOffset_102f10f0(0,DAT_104eab68);
  }
  ExceptionList = local_10;
  return &sub_6faf9440;
}


// 0x102953a0  (ghidra: FUN_102953a0)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf6af0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f461;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf6af0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaaa4) {
      FUN_103023e9(&DAT_104eaaa4);
      if (DAT_104eaaa4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaec8 = *(int *)(&DAT_103d3d24 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaaa4);
      }
    }
    D2Client_loc_6faf6af0 = sub_GetDllOffset_102f10f0(0,DAT_104eaec8);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf6af0;
}


// 0x10295450  (ghidra: FUN_10295450)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf9130(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f491;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf9130 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d40) {
      FUN_103023e9(&DAT_104e9d40);
      if (DAT_104e9d40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5ec = *(int *)(&DAT_103d300c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d40);
      }
    }
    D2Client_loc_6faf9130 = sub_GetDllOffset_102f10f0(0,DAT_104ea5ec);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf9130;
}


// 0x10295500  (ghidra: FUN_10295500)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf6d10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f4c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf6d10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9870) {
      FUN_103023e9(&DAT_104e9870);
      if (DAT_104e9870 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea42c = *(int *)(&DAT_103d3554 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9870);
      }
    }
    D2Client_loc_6faf6d10 = sub_GetDllOffset_102f10f0(0,DAT_104ea42c);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf6d10;
}


// 0x102955b0  (ghidra: FUN_102955b0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fafa2f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f4f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fafa2f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacd0) {
      FUN_103023e9(&DAT_104eacd0);
      if (DAT_104eacd0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea070 = *(int *)(&DAT_103d4e7c + iVar2 * 4);
        FUN_1030239f(&DAT_104eacd0);
      }
    }
    D2Client_loc_6fafa2f0 = sub_GetDllOffset_102f10f0(0,DAT_104ea070);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fafa2f0;
}


// 0x10295660  (ghidra: FUN_10295660)  [gap]
uint32_t * GetPtr_D2Client_loc_6fafaee0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f521;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fafaee0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea864) {
      FUN_103023e9(&DAT_104ea864);
      if (DAT_104ea864 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac70 = *(int *)(&DAT_103d4304 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea864);
      }
    }
    D2Client_loc_6fafaee0 = sub_GetDllOffset_102f10f0(0,DAT_104eac70);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fafaee0;
}


// 0x10295710  (ghidra: FUN_10295710)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf8750(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f551;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf8750 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea950) {
      FUN_103023e9(&DAT_104ea950);
      if (DAT_104ea950 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea078 = *(int *)(&DAT_103d4474 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea950);
      }
    }
    D2Client_loc_6faf8750 = sub_GetDllOffset_102f10f0(0,DAT_104ea078);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf8750;
}


// 0x102957c0  (ghidra: FUN_102957c0)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf87b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f581;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf87b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea148) {
      FUN_103023e9(&DAT_104ea148);
      if (DAT_104ea148 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaddc = *(int *)(&DAT_103d40ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea148);
      }
    }
    D2Client_loc_6faf87b0 = sub_GetDllOffset_102f10f0(0,DAT_104eaddc);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf87b0;
}


// 0x10295870  (ghidra: FUN_10295870)  [gap]
uint32_t * GetPtr_D2Client_loc_6faf8810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f5b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6faf8810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ca8) {
      FUN_103023e9(&DAT_104e9ca8);
      if (DAT_104e9ca8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9450 = *(int *)(&DAT_103d458c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ca8);
      }
    }
    D2Client_loc_6faf8810 = sub_GetDllOffset_102f10f0(0,DAT_104e9450);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6faf8810;
}


// 0x10295920  (ghidra: FUN_10295920)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb536f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f5e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb536f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9794) {
      FUN_103023e9(&DAT_104e9794);
      if (DAT_104e9794 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9dc4 = *(int *)(&DAT_103d4c54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9794);
      }
    }
    SKILLS_Skills_6fb536f0 = sub_GetDllOffset_102f10f0(0,DAT_104e9dc4);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb536f0;
}


// 0x102959d0  (ghidra: FUN_102959d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba3ee5(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f611;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba3ee5 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea180) {
      FUN_103023e9(&DAT_104ea180);
      if (DAT_104ea180 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb074 = *(int *)(&DAT_103d48ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea180);
      }
    }
    p_D2Client_DAT_6fba3ee5 = sub_GetDllOffset_102f10f0(0,DAT_104eb074);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba3ee5;
}


// 0x10295a80  (ghidra: FUN_10295a80)  [gap]
uint32_t * GetPtr_sub_6fb2de50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f641;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb2de50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb080) {
      FUN_103023e9(&DAT_104eb080);
      if (DAT_104eb080 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fe8 = *(int *)(&DAT_103d322c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb080);
      }
    }
    sub_6fb2de50 = sub_GetDllOffset_102f10f0(0,DAT_104e8fe8);
  }
  ExceptionList = local_10;
  return &sub_6fb2de50;
}


// 0x10295b30  (ghidra: FUN_10295b30)  [gap]
uint32_t * GetPtr_UI_inv_6fb3d600(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f671;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_inv_6fb3d600 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9520) {
      FUN_103023e9(&DAT_104e9520);
      if (DAT_104e9520 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea250 = *(int *)(&DAT_103d49b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9520);
      }
    }
    UI_inv_6fb3d600 = sub_GetDllOffset_102f10f0(0,DAT_104ea250);
  }
  ExceptionList = local_10;
  return &UI_inv_6fb3d600;
}


// 0x10295be0  (ghidra: FUN_10295be0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb288(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f6a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb288 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaec4) {
      FUN_103023e9(&DAT_104eaec4);
      if (DAT_104eaec4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94d4 = *(int *)(&DAT_103d4e24 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaec4);
      }
    }
    p_D2Client_DAT_6fbbb288 = sub_GetDllOffset_102f10f0(0,DAT_104e94d4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb288;
}


// 0x10295c90  (ghidra: FUN_10295c90)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb2d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f6d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb2d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93bc) {
      FUN_103023e9(&DAT_104e93bc);
      if (DAT_104e93bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e984c = *(int *)(&DAT_103d327c + iVar2 * 4);
        FUN_1030239f(&DAT_104e93bc);
      }
    }
    p_D2Client_DAT_6fbbb2d0 = sub_GetDllOffset_102f10f0(0,DAT_104e984c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb2d0;
}


// 0x10295d40  (ghidra: FUN_10295d40)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb2f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f701;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb2f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b78) {
      FUN_103023e9(&DAT_104e9b78);
      if (DAT_104e9b78 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b50 = *(int *)(&DAT_103d3e4c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b78);
      }
    }
    p_D2Client_DAT_6fbbb2f8 = sub_GetDllOffset_102f10f0(0,DAT_104e9b50);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb2f8;
}


// 0x10295df0  (ghidra: FUN_10295df0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb3b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f731;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb3b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9468) {
      FUN_103023e9(&DAT_104e9468);
      if (DAT_104e9468 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97ec = *(int *)(&DAT_103d350c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9468);
      }
    }
    p_D2Client_DAT_6fbbb3b0 = sub_GetDllOffset_102f10f0(0,DAT_104e97ec);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb3b0;
}


// 0x10295ea0  (ghidra: FUN_10295ea0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb3c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f761;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb3c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea284) {
      FUN_103023e9(&DAT_104ea284);
      if (DAT_104ea284 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e992c = *(int *)(&DAT_103d45c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea284);
      }
    }
    p_D2Client_DAT_6fbbb3c8 = sub_GetDllOffset_102f10f0(0,DAT_104e992c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb3c8;
}


// 0x10295f50  (ghidra: FUN_10295f50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbbb3e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f791;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbbb3e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ae0) {
      FUN_103023e9(&DAT_104e9ae0);
      if (DAT_104e9ae0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9204 = *(int *)(&DAT_103d312c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ae0);
      }
    }
    p_D2Client_DAT_6fbbb3e0 = sub_GetDllOffset_102f10f0(0,DAT_104e9204);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbbb3e0;
}


// 0x10296000  (ghidra: FUN_10296000)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbd94(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f7c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbd94 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaea0) {
      FUN_103023e9(&DAT_104eaea0);
      if (DAT_104eaea0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9480 = *(int *)(&DAT_103d3c14 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaea0);
      }
    }
    p_D2Client_DAT_6fbcbd94 = sub_GetDllOffset_102f10f0(0,DAT_104e9480);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbd94;
}


// 0x102960b0  (ghidra: FUN_102960b0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb4e180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f7f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb4e180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c28) {
      FUN_103023e9(&DAT_104e9c28);
      if (DAT_104e9c28 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9edc = *(int *)(&DAT_103d3fdc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c28);
      }
    }
    D2Client_loc_6fb4e180 = sub_GetDllOffset_102f10f0(0,DAT_104e9edc);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb4e180;
}


// 0x10296160  (ghidra: FUN_10296160)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb9a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f821;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb9a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf5c) {
      FUN_103023e9(&DAT_104eaf5c);
      if (DAT_104eaf5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e916c = *(int *)(&DAT_103d3ae4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf5c);
      }
    }
    p_D2Client_DAT_6fbcb9a0 = sub_GetDllOffset_102f10f0(0,DAT_104e916c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb9a0;
}


// 0x10296210  (ghidra: FUN_10296210)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb9a4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f851;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb9a4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94d8) {
      FUN_103023e9(&DAT_104e94d8);
      if (DAT_104e94d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0e0 = *(int *)(&DAT_103d4dbc + iVar2 * 4);
        FUN_1030239f(&DAT_104e94d8);
      }
    }
    p_D2Client_DAT_6fbcb9a4 = sub_GetDllOffset_102f10f0(0,DAT_104eb0e0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb9a4;
}


// 0x102962c0  (ghidra: FUN_102962c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb864(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f881;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb864 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92fc) {
      FUN_103023e9(&DAT_104e92fc);
      if (DAT_104e92fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea134 = *(int *)(&DAT_103d3bc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92fc);
      }
    }
    p_D2Client_DAT_6fbcb864 = sub_GetDllOffset_102f10f0(0,DAT_104ea134);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb864;
}


// 0x10296370  (ghidra: FUN_10296370)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc28(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f8b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc28 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9688) {
      FUN_103023e9(&DAT_104e9688);
      if (DAT_104e9688 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ac4 = *(int *)(&DAT_103d3514 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9688);
      }
    }
    p_D2Client_DAT_6fbcbc28 = sub_GetDllOffset_102f10f0(0,DAT_104e9ac4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc28;
}


// 0x10296420  (ghidra: FUN_10296420)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc2c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f8e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc2c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea790) {
      FUN_103023e9(&DAT_104ea790);
      if (DAT_104ea790 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95b8 = *(int *)(&DAT_103d37ac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea790);
      }
    }
    p_D2Client_DAT_6fbcbc2c = sub_GetDllOffset_102f10f0(0,DAT_104e95b8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc2c;
}


// 0x102964d0  (ghidra: FUN_102964d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc34(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f911;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc34 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e914c) {
      FUN_103023e9(&DAT_104e914c);
      if (DAT_104e914c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb008 = *(int *)(&DAT_103d3d9c + iVar2 * 4);
        FUN_1030239f(&DAT_104e914c);
      }
    }
    p_D2Client_DAT_6fbcbc34 = sub_GetDllOffset_102f10f0(0,DAT_104eb008);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc34;
}


// 0x10296580  (ghidra: FUN_10296580)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc3c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f941;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc3c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90b4) {
      FUN_103023e9(&DAT_104e90b4);
      if (DAT_104e90b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9830 = *(int *)(&DAT_103d338c + iVar2 * 4);
        FUN_1030239f(&DAT_104e90b4);
      }
    }
    p_D2Client_DAT_6fbcbc3c = sub_GetDllOffset_102f10f0(0,DAT_104e9830);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc3c;
}


// 0x10296630  (ghidra: FUN_10296630)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f971;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9824) {
      FUN_103023e9(&DAT_104e9824);
      if (DAT_104e9824 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7a8 = *(int *)(&DAT_103d4ee4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9824);
      }
    }
    p_D2Client_DAT_6fbcbc48 = sub_GetDllOffset_102f10f0(0,DAT_104ea7a8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc48;
}


// 0x102966e0  (ghidra: FUN_102966e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc97a8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f9a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc97a8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9928) {
      FUN_103023e9(&DAT_104e9928);
      if (DAT_104e9928 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3bc = *(int *)(&DAT_103d4664 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9928);
      }
    }
    p_D2Client_DAT_6fbc97a8 = sub_GetDllOffset_102f10f0(0,DAT_104ea3bc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc97a8;
}


// 0x10296790  (ghidra: FUN_10296790)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9804(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030f9d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9804 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea86c) {
      FUN_103023e9(&DAT_104ea86c);
      if (DAT_104ea86c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf30 = *(int *)(&DAT_103d366c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea86c);
      }
    }
    p_D2Client_DAT_6fbc9804 = sub_GetDllOffset_102f10f0(0,DAT_104eaf30);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9804;
}


// 0x10296840  (ghidra: FUN_10296840)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2ac(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fa01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2ac == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea684) {
      FUN_103023e9(&DAT_104ea684);
      if (DAT_104ea684 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9710 = *(int *)(&DAT_103d4cd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea684);
      }
    }
    p_D2Client_DAT_6fbcc2ac = sub_GetDllOffset_102f10f0(0,DAT_104e9710);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2ac;
}


// 0x102968f0  (ghidra: FUN_102968f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fa31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea13c) {
      FUN_103023e9(&DAT_104ea13c);
      if (DAT_104ea13c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e913c = *(int *)(&DAT_103d48e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea13c);
      }
    }
    p_D2Client_DAT_6fbc9810 = sub_GetDllOffset_102f10f0(0,DAT_104e913c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9810;
}


// 0x102969a0  (ghidra: FUN_102969a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba16b0_102969a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fa61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba16b0_102969a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa4c) {
      FUN_103023e9(&DAT_104eaa4c);
      if (DAT_104eaa4c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea640 = *(int *)(&DAT_103d3c4c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa4c);
      }
    }
    p_D2Client_DAT_6fba16b0_102969a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea640);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba16b0_102969a0;
}


// 0x10296a50  (ghidra: FUN_10296a50)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc278(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fa91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc278 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f60) {
      FUN_103023e9(&DAT_104e9f60);
      if (DAT_104e9f60 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea524 = *(int *)(&DAT_103d427c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f60);
      }
    }
    p_D2Client_DAT_6fbcc278 = sub_GetDllOffset_102f10f0(0,DAT_104ea524);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc278;
}


// 0x10296b00  (ghidra: FUN_10296b00)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc27c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fac1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc27c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea828) {
      FUN_103023e9(&DAT_104ea828);
      if (DAT_104ea828 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9d0 = *(int *)(&DAT_103d502c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea828);
      }
    }
    p_D2Client_DAT_6fbcc27c = sub_GetDllOffset_102f10f0(0,DAT_104ea9d0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc27c;
}


// 0x10296bb0  (ghidra: FUN_10296bb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3ace(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030faf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3ace == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e80) {
      FUN_103023e9(&DAT_104e9e80);
      if (DAT_104e9e80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea588 = *(int *)(&DAT_103d494c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e80);
      }
    }
    p_D2Client_DAT_6fbc3ace = sub_GetDllOffset_102f10f0(0,DAT_104ea588);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3ace;
}


// 0x10296c60  (ghidra: FUN_10296c60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc971d_10296c60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fb21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc971d_10296c60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaff8) {
      FUN_103023e9(&DAT_104eaff8);
      if (DAT_104eaff8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea698 = *(int *)(&DAT_103d33cc + iVar2 * 4);
        FUN_1030239f(&DAT_104eaff8);
      }
    }
    p_D2Client_DAT_6fbc971d_10296c60 = sub_GetDllOffset_102f10f0(0,DAT_104ea698);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc971d_10296c60;
}


// 0x10296d10  (ghidra: FUN_10296d10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3ac6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fb51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3ac6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9390) {
      FUN_103023e9(&DAT_104e9390);
      if (DAT_104e9390 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f38 = *(int *)(&DAT_103d3674 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9390);
      }
    }
    p_D2Client_DAT_6fbc3ac6 = sub_GetDllOffset_102f10f0(0,DAT_104e9f38);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3ac6;
}


// 0x10296dc0  (ghidra: FUN_10296dc0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3af4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fb81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3af4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa04) {
      FUN_103023e9(&DAT_104eaa04);
      if (DAT_104eaa04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa50 = *(int *)(&DAT_103d3ed4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa04);
      }
    }
    p_D2Client_DAT_6fbc3af4 = sub_GetDllOffset_102f10f0(0,DAT_104eaa50);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3af4;
}


// 0x10296e70  (ghidra: FUN_10296e70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3afa(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fbb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3afa == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea954) {
      FUN_103023e9(&DAT_104ea954);
      if (DAT_104ea954 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea00c = *(int *)(&DAT_103d33dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea954);
      }
    }
    p_D2Client_DAT_6fbc3afa = sub_GetDllOffset_102f10f0(0,DAT_104ea00c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3afa;
}


// 0x10296f20  (ghidra: FUN_10296f20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3afb(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fbe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3afb == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9acc) {
      FUN_103023e9(&DAT_104e9acc);
      if (DAT_104e9acc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c88 = *(int *)(&DAT_103d3b44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9acc);
      }
    }
    p_D2Client_DAT_6fbc3afb = sub_GetDllOffset_102f10f0(0,DAT_104e9c88);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3afb;
}


// 0x10296fd0  [gap]
int * sub_6fb2c5c0(void)

{
  int iVar1;
  int *piVar2;
  
  if (p_sub_6fb2c5c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb2c5c0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7a30 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10296ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_sub_6fb2c5c0)();
  return piVar2;
}


// 0x10297000  (ghidra: FUN_10297000)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2fc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fc11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2fc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea508) {
      FUN_103023e9(&DAT_104ea508);
      if (DAT_104ea508 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead4c = *(int *)(&DAT_103d3fb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea508);
      }
    }
    p_D2Client_DAT_6fbcc2fc = sub_GetDllOffset_102f10f0(0,DAT_104ead4c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2fc;
}


// 0x102970b0  (ghidra: FUN_102970b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3aba(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fc41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3aba == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4b4) {
      FUN_103023e9(&DAT_104ea4b4);
      if (DAT_104ea4b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ac0 = *(int *)(&DAT_103d4a6c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4b4);
      }
    }
    p_D2Client_DAT_6fbc3aba = sub_GetDllOffset_102f10f0(0,DAT_104e9ac0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3aba;
}


// 0x10297160  (ghidra: FUN_10297160)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3a7c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fc71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3a7c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead78) {
      FUN_103023e9(&DAT_104ead78);
      if (DAT_104ead78 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e982c = *(int *)(&DAT_103d3e7c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead78);
      }
    }
    p_D2Client_DAT_6fbc3a7c = sub_GetDllOffset_102f10f0(0,DAT_104e982c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3a7c;
}


// 0x10297210  (ghidra: FUN_10297210)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbd3448(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fca1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbd3448 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf8c) {
      FUN_103023e9(&DAT_104eaf8c);
      if (DAT_104eaf8c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabdc = *(int *)(&DAT_103d3304 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf8c);
      }
    }
    p_D2Client_DAT_6fbd3448 = sub_GetDllOffset_102f10f0(0,DAT_104eabdc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbd3448;
}


// 0x102972c0  (ghidra: FUN_102972c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc04(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fcd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc04 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eada4) {
      FUN_103023e9(&DAT_104eada4);
      if (DAT_104eada4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae90 = *(int *)(&DAT_103d452c + iVar2 * 4);
        FUN_1030239f(&DAT_104eada4);
      }
    }
    p_D2Client_DAT_6fbcbc04 = sub_GetDllOffset_102f10f0(0,DAT_104eae90);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc04;
}


// 0x10297370  (ghidra: FUN_10297370)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc3aec(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fd01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc3aec == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95a0) {
      FUN_103023e9(&DAT_104e95a0);
      if (DAT_104e95a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafd0 = *(int *)(&DAT_103d3e34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e95a0);
      }
    }
    p_D2Client_DAT_6fbc3aec = sub_GetDllOffset_102f10f0(0,DAT_104eafd0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc3aec;
}


// 0x10297420  (ghidra: FUN_10297420)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb91388(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fd31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb91388 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab04) {
      FUN_103023e9(&DAT_104eab04);
      if (DAT_104eab04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae58 = *(int *)(&DAT_103d38e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab04);
      }
    }
    p_D2Client_DAT_6fb91388 = sub_GetDllOffset_102f10f0(0,DAT_104eae58);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb91388;
}


// 0x102974d0  (ghidra: FUN_102974d0)  [gap]
uint32_t * GetPtr_sub_6faeccc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fd61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faeccc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91f0) {
      FUN_103023e9(&DAT_104e91f0);
      if (DAT_104e91f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d74 = *(int *)(&DAT_103d418c + iVar2 * 4);
        FUN_1030239f(&DAT_104e91f0);
      }
    }
    sub_6faeccc0 = sub_GetDllOffset_102f10f0(0,DAT_104e9d74);
  }
  ExceptionList = local_10;
  return &sub_6faeccc0;
}


// 0x10297580  (ghidra: FUN_10297580)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc973b(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fd91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc973b == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0f0) {
      FUN_103023e9(&DAT_104eb0f0);
      if (DAT_104eb0f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95b4 = *(int *)(&DAT_103d3c1c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0f0);
      }
    }
    p_D2Client_DAT_6fbc973b = sub_GetDllOffset_102f10f0(0,DAT_104e95b4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc973b;
}


// 0x10297630  (ghidra: FUN_10297630)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc97ac(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fdc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc97ac == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9be4) {
      FUN_103023e9(&DAT_104e9be4);
      if (DAT_104e9be4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f04 = *(int *)(&DAT_103d3a64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9be4);
      }
    }
    p_D2Client_DAT_6fbc97ac = sub_GetDllOffset_102f10f0(0,DAT_104e9f04);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc97ac;
}


// 0x102976e0  (ghidra: FUN_102976e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc97b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fdf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc97b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ed4) {
      FUN_103023e9(&DAT_104e9ed4);
      if (DAT_104e9ed4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92b4 = *(int *)(&DAT_103d3c8c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ed4);
      }
    }
    p_D2Client_DAT_6fbc97b0 = sub_GetDllOffset_102f10f0(0,DAT_104e92b4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc97b0;
}


// 0x10297790  (ghidra: FUN_10297790)  [gap]
uint32_t * GetPtr_UNIT_Item_6fb31ce0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fe21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Item_6fb31ce0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea54c) {
      FUN_103023e9(&DAT_104ea54c);
      if (DAT_104ea54c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a60 = *(int *)(&DAT_103d3bec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea54c);
      }
    }
    UNIT_Item_6fb31ce0 = sub_GetDllOffset_102f10f0(0,DAT_104e9a60);
  }
  ExceptionList = local_10;
  return &UNIT_Item_6fb31ce0;
}


// 0x10297840  (ghidra: FUN_10297840)  [gap]
uint32_t * GetPtr_UNIT_Item_6fb31e40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fe51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Item_6fb31e40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7d8) {
      FUN_103023e9(&DAT_104ea7d8);
      if (DAT_104ea7d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9884 = *(int *)(&DAT_103d4d6c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7d8);
      }
    }
    UNIT_Item_6fb31e40 = sub_GetDllOffset_102f10f0(0,DAT_104e9884);
  }
  ExceptionList = local_10;
  return &UNIT_Item_6fb31e40;
}


// 0x102978f0  (ghidra: FUN_102978f0)  [gap]
uint32_t * GetPtr_UNIT_UnitSnd_6fad23d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fe81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_UnitSnd_6fad23d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9db4) {
      FUN_103023e9(&DAT_104e9db4);
      if (DAT_104e9db4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea55c = *(int *)(&DAT_103d3144 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9db4);
      }
    }
    UNIT_UnitSnd_6fad23d0 = sub_GetDllOffset_102f10f0(0,DAT_104ea55c);
  }
  ExceptionList = local_10;
  return &UNIT_UnitSnd_6fad23d0;
}


// 0x102979a0  (ghidra: FUN_102979a0)  [gap]
uint32_t * GetPtr_UNIT_UnitSnd_6fad2430(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030feb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_UnitSnd_6fad2430 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9370) {
      FUN_103023e9(&DAT_104e9370);
      if (DAT_104e9370 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea010 = *(int *)(&DAT_103d3e14 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9370);
      }
    }
    UNIT_UnitSnd_6fad2430 = sub_GetDllOffset_102f10f0(0,DAT_104ea010);
  }
  ExceptionList = local_10;
  return &UNIT_UnitSnd_6fad2430;
}


// 0x10297a50  (ghidra: FUN_10297a50)  [gap]
uint32_t * GetPtr_UNIT_UnitSnd_6fad2490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030fee1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_UnitSnd_6fad2490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9888) {
      FUN_103023e9(&DAT_104e9888);
      if (DAT_104e9888 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac7c = *(int *)(&DAT_103d4de4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9888);
      }
    }
    UNIT_UnitSnd_6fad2490 = sub_GetDllOffset_102f10f0(0,DAT_104eac7c);
  }
  ExceptionList = local_10;
  return &UNIT_UnitSnd_6fad2490;
}


// 0x10297b00  (ghidra: FUN_10297b00)  [gap]
uint32_t * GetPtr_sub_6fad2a70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ff11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad2a70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaeb4) {
      FUN_103023e9(&DAT_104eaeb4);
      if (DAT_104eaeb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab30 = *(int *)(&DAT_103d3df4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaeb4);
      }
    }
    sub_6fad2a70 = sub_GetDllOffset_102f10f0(0,DAT_104eab30);
  }
  ExceptionList = local_10;
  return &sub_6fad2a70;
}


// 0x10297bb0  (ghidra: FUN_10297bb0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc975b(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ff41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc975b == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fe4) {
      FUN_103023e9(&DAT_104e8fe4);
      if (DAT_104e8fe4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9910 = *(int *)(&DAT_103d496c + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fe4);
      }
    }
    p_D2Client_DAT_6fbc975b = sub_GetDllOffset_102f10f0(0,DAT_104e9910);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc975b;
}


// 0x10297c60  (ghidra: FUN_10297c60)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc08(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ff71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc08 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d58) {
      FUN_103023e9(&DAT_104e9d58);
      if (DAT_104e9d58 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d64 = *(int *)(&DAT_103d4f94 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d58);
      }
    }
    p_D2Client_DAT_6fbcbc08 = sub_GetDllOffset_102f10f0(0,DAT_104e9d64);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc08;
}


// 0x10297d10  (ghidra: FUN_10297d10)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc04_10297d10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ffa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc04_10297d10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9410) {
      FUN_103023e9(&DAT_104e9410);
      if (DAT_104e9410 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaad0 = *(int *)(&DAT_103d4344 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9410);
      }
    }
    p_D2Client_DAT_6fbcbc04_10297d10 = sub_GetDllOffset_102f10f0(0,DAT_104eaad0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc04_10297d10;
}


// 0x10297dc0  (ghidra: FUN_10297dc0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbacdd1(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ffd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbacdd1 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaed4) {
      FUN_103023e9(&DAT_104eaed4);
      if (DAT_104eaed4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e960c = *(int *)(&DAT_103d4ae4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaed4);
      }
    }
    p_D2Client_DAT_6fbacdd1 = sub_GetDllOffset_102f10f0(0,DAT_104e960c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbacdd1;
}


// 0x10297e70  (ghidra: FUN_10297e70)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbbc4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310001;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbbc4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95f8) {
      FUN_103023e9(&DAT_104e95f8);
      if (DAT_104e95f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9478 = *(int *)(&DAT_103d3a7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e95f8);
      }
    }
    p_D2Client_DAT_6fbcbbc4 = sub_GetDllOffset_102f10f0(0,DAT_104e9478);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbbc4;
}


// 0x10297f20  (ghidra: FUN_10297f20)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbbfc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310031;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbbfc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9264) {
      FUN_103023e9(&DAT_104e9264);
      if (DAT_104e9264 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6a4 = *(int *)(&DAT_103d4bb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9264);
      }
    }
    p_D2Client_DAT_6fbcbbfc = sub_GetDllOffset_102f10f0(0,DAT_104ea6a4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbbfc;
}


// 0x10297fd0  (ghidra: FUN_10297fd0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc38(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310061;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc38 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea598) {
      FUN_103023e9(&DAT_104ea598);
      if (DAT_104ea598 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1e8 = *(int *)(&DAT_103d3abc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea598);
      }
    }
    p_D2Client_DAT_6fbcbc38 = sub_GetDllOffset_102f10f0(0,DAT_104ea1e8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc38;
}


// 0x10298080  (ghidra: FUN_10298080)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc14(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310091;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc14 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e98) {
      FUN_103023e9(&DAT_104e9e98);
      if (DAT_104e9e98 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea93c = *(int *)(&DAT_103d3cac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e98);
      }
    }
    p_D2Client_DAT_6fbcbc14 = sub_GetDllOffset_102f10f0(0,DAT_104ea93c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc14;
}


// 0x10298130  (ghidra: FUN_10298130)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbc94(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103100c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbc94 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d44) {
      FUN_103023e9(&DAT_104e9d44);
      if (DAT_104e9d44 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5b4 = *(int *)(&DAT_103d4f7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d44);
      }
    }
    p_D2Client_DAT_6fbcbc94 = sub_GetDllOffset_102f10f0(0,DAT_104ea5b4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbc94;
}


// 0x102981e0  (ghidra: FUN_102981e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe64_102981e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103100f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe64_102981e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea748) {
      FUN_103023e9(&DAT_104ea748);
      if (DAT_104ea748 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb004 = *(int *)(&DAT_103d3e3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea748);
      }
    }
    p_D2Client_DAT_6fbcbe64_102981e0 = sub_GetDllOffset_102f10f0(0,DAT_104eb004);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe64_102981e0;
}


// 0x10298290  (ghidra: FUN_10298290)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcbe74_10298290(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310121;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcbe74_10298290 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b44) {
      FUN_103023e9(&DAT_104e9b44);
      if (DAT_104e9b44 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98b0 = *(int *)(&DAT_103d3aac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b44);
      }
    }
    p_D2Client_DAT_6fbcbe74_10298290 = sub_GetDllOffset_102f10f0(0,DAT_104e98b0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcbe74_10298290;
}


// 0x10298340  (ghidra: FUN_10298340)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2cc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310151;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2cc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafec) {
      FUN_103023e9(&DAT_104eafec);
      if (DAT_104eafec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e946c = *(int *)(&DAT_103d31ec + iVar2 * 4);
        FUN_1030239f(&DAT_104eafec);
      }
    }
    p_D2Client_DAT_6fbcc2cc = sub_GetDllOffset_102f10f0(0,DAT_104e946c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2cc;
}


// 0x102983f0  (ghidra: FUN_102983f0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc9854(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310181;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc9854 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaabc) {
      FUN_103023e9(&DAT_104eaabc);
      if (DAT_104eaabc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91f4 = *(int *)(&DAT_103d339c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaabc);
      }
    }
    p_D2Client_DAT_6fbc9854 = sub_GetDllOffset_102f10f0(0,DAT_104e91f4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc9854;
}


// 0x102984a0  (ghidra: FUN_102984a0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3bc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103101b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3bc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5a0) {
      FUN_103023e9(&DAT_104ea5a0);
      if (DAT_104ea5a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadd8 = *(int *)(&DAT_103d48b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5a0);
      }
    }
    p_D2Client_DAT_6fbcc3bc = sub_GetDllOffset_102f10f0(0,DAT_104eadd8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3bc;
}


// 0x10298550  (ghidra: FUN_10298550)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbc5591(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103101e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbc5591 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c68) {
      FUN_103023e9(&DAT_104e9c68);
      if (DAT_104e9c68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea518 = *(int *)(&DAT_103d32fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c68);
      }
    }
    p_D2Client_DAT_6fbc5591 = sub_GetDllOffset_102f10f0(0,DAT_104ea518);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbc5591;
}


// 0x10298600  (ghidra: FUN_10298600)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc3ec(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310211;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc3ec == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e935c) {
      FUN_103023e9(&DAT_104e935c);
      if (DAT_104e935c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9064 = *(int *)(&DAT_103d3604 + iVar2 * 4);
        FUN_1030239f(&DAT_104e935c);
      }
    }
    p_D2Client_DAT_6fbcc3ec = sub_GetDllOffset_102f10f0(0,DAT_104e9064);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc3ec;
}


// 0x102986b0  (ghidra: FUN_102986b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc2f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310241;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc2f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f34) {
      FUN_103023e9(&DAT_104e9f34);
      if (DAT_104e9f34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab14 = *(int *)(&DAT_103d37fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f34);
      }
    }
    p_D2Client_DAT_6fbcc2f0 = sub_GetDllOffset_102f10f0(0,DAT_104eab14);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc2f0;
}


// 0x10298760  (ghidra: FUN_10298760)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb980(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310271;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb980 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea288) {
      FUN_103023e9(&DAT_104ea288);
      if (DAT_104ea288 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea50c = *(int *)(&DAT_103d439c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea288);
      }
    }
    p_D2Client_DAT_6fbcb980 = sub_GetDllOffset_102f10f0(0,DAT_104ea50c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb980;
}


// 0x10298810  (ghidra: FUN_10298810)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcec80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103102a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcec80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98fc) {
      FUN_103023e9(&DAT_104e98fc);
      if (DAT_104e98fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9174 = *(int *)(&DAT_103d44dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e98fc);
      }
    }
    p_D2Client_DAT_6fbcec80 = sub_GetDllOffset_102f10f0(0,DAT_104e9174);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcec80;
}


// 0x102988c0  (ghidra: FUN_102988c0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb5a8b3(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103102d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb5a8b3 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b80) {
      FUN_103023e9(&DAT_104e9b80);
      if (DAT_104e9b80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9908 = *(int *)(&DAT_103d380c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b80);
      }
    }
    D2Client_loc_6fb5a8b3 = sub_GetDllOffset_102f10f0(0,DAT_104e9908);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb5a8b3;
}


// 0x10298970  (ghidra: FUN_10298970)  [gap]
uint32_t * GetPtr_sub_6faf6ee0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310301;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf6ee0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9188) {
      FUN_103023e9(&DAT_104e9188);
      if (DAT_104e9188 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9440 = *(int *)(&DAT_103d5064 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9188);
      }
    }
    sub_6faf6ee0 = sub_GetDllOffset_102f10f0(0,DAT_104e9440);
  }
  ExceptionList = local_10;
  return &sub_6faf6ee0;
}


// 0x10298a20  (ghidra: FUN_10298a20)  [gap]
uint32_t * GetPtr_D2Client_loc_6fad8260(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310331;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fad8260 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabe8) {
      FUN_103023e9(&DAT_104eabe8);
      if (DAT_104eabe8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae9c = *(int *)(&DAT_103d3734 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabe8);
      }
    }
    D2Client_loc_6fad8260 = sub_GetDllOffset_102f10f0(0,DAT_104eae9c);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fad8260;
}


// 0x10298ad0  (ghidra: FUN_10298ad0)  [gap]
uint32_t * GetPtr_sub_6fb48b60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310361;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb48b60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9648) {
      FUN_103023e9(&DAT_104e9648);
      if (DAT_104e9648 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a98 = *(int *)(&DAT_103d32b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9648);
      }
    }
    sub_6fb48b60 = sub_GetDllOffset_102f10f0(0,DAT_104e9a98);
  }
  ExceptionList = local_10;
  return &sub_6fb48b60;
}


// 0x10298b80  (ghidra: FUN_10298b80)  [gap]
uint32_t * GetPtr_sub_6fac4a10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310391;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac4a10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d84) {
      FUN_103023e9(&DAT_104e9d84);
      if (DAT_104e9d84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e907c = *(int *)(&DAT_103d3b7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d84);
      }
    }
    sub_6fac4a10 = sub_GetDllOffset_102f10f0(0,DAT_104e907c);
  }
  ExceptionList = local_10;
  return &sub_6fac4a10;
}


// 0x10298c30  (ghidra: FUN_10298c30)  [gap]
uint32_t * GetPtr_sub_6facbde0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103103c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6facbde0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab48) {
      FUN_103023e9(&DAT_104eab48);
      if (DAT_104eab48 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e958c = *(int *)(&DAT_103d42ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eab48);
      }
    }
    sub_6facbde0 = sub_GetDllOffset_102f10f0(0,DAT_104e958c);
  }
  ExceptionList = local_10;
  return &sub_6facbde0;
}


// 0x10298ce0  (ghidra: FUN_10298ce0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb4e180_10298ce0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103103f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb4e180_10298ce0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95d0) {
      FUN_103023e9(&DAT_104e95d0);
      if (DAT_104e95d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae80 = *(int *)(&DAT_103d4ad4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e95d0);
      }
    }
    D2Client_loc_6fb4e180_10298ce0 = sub_GetDllOffset_102f10f0(0,DAT_104eae80);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb4e180_10298ce0;
}


// 0x10298d90  (ghidra: FUN_10298d90)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb273a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310421;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb273a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3c4) {
      FUN_103023e9(&DAT_104ea3c4);
      if (DAT_104ea3c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea948 = *(int *)(&DAT_103d3a5c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3c4);
      }
    }
    D2Client_loc_6fb273a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea948);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb273a0;
}


// 0x10298e40  (ghidra: FUN_10298e40)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb55d90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310451;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb55d90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e955c) {
      FUN_103023e9(&DAT_104e955c);
      if (DAT_104e955c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea44c = *(int *)(&DAT_103d37dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e955c);
      }
    }
    UNIT_CUnit_6fb55d90 = sub_GetDllOffset_102f10f0(0,DAT_104ea44c);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb55d90;
}


// 0x10298ef0  (ghidra: FUN_10298ef0)  [gap]
uint32_t * GetPtr_sub_6fb060b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310481;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb060b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacd4) {
      FUN_103023e9(&DAT_104eacd4);
      if (DAT_104eacd4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9044 = *(int *)(&DAT_103d50ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eacd4);
      }
    }
    sub_6fb060b0 = sub_GetDllOffset_102f10f0(0,DAT_104e9044);
  }
  ExceptionList = local_10;
  return &sub_6fb060b0;
}


// 0x10298fa0  (ghidra: FUN_10298fa0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb57630(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103104b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb57630 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d94) {
      FUN_103023e9(&DAT_104e9d94);
      if (DAT_104e9d94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9234 = *(int *)(&DAT_103d3494 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d94);
      }
    }
    D2Client_loc_6fb57630 = sub_GetDllOffset_102f10f0(0,DAT_104e9234);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb57630;
}


// 0x10299050  (ghidra: FUN_10299050)  [gap]
uint32_t * GetPtr_UNIT_Monster_6faffd90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103104e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Monster_6faffd90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea228) {
      FUN_103023e9(&DAT_104ea228);
      if (DAT_104ea228 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c78 = *(int *)(&DAT_103d4ea4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea228);
      }
    }
    UNIT_Monster_6faffd90 = sub_GetDllOffset_102f10f0(0,DAT_104e9c78);
  }
  ExceptionList = local_10;
  return &UNIT_Monster_6faffd90;
}


// 0x10299100  (ghidra: FUN_10299100)  [gap]
uint32_t * GetPtr_sub_6fac47a0_10299100(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310511;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fac47a0_10299100 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea48c) {
      FUN_103023e9(&DAT_104ea48c);
      if (DAT_104ea48c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98d0 = *(int *)(&DAT_103d302c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea48c);
      }
    }
    sub_6fac47a0_10299100 = sub_GetDllOffset_102f10f0(0,DAT_104e98d0);
  }
  ExceptionList = local_10;
  return &sub_6fac47a0_10299100;
}


// 0x102991b0  (ghidra: FUN_102991b0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fb20ec6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310541;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fb20ec6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bf0) {
      FUN_103023e9(&DAT_104e9bf0);
      if (DAT_104e9bf0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7fc = *(int *)(&DAT_103d4854 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bf0);
      }
    }
    D2Client_loc_6fb20ec6 = sub_GetDllOffset_102f10f0(0,DAT_104ea7fc);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fb20ec6;
}


// 0x10299260  (ghidra: FUN_10299260)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb90ec4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310571;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb90ec4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea324) {
      FUN_103023e9(&DAT_104ea324);
      if (DAT_104ea324 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4f4 = *(int *)(&DAT_103d3cfc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea324);
      }
    }
    p_D2Client_DAT_6fb90ec4 = sub_GetDllOffset_102f10f0(0,DAT_104ea4f4);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb90ec4;
}


// 0x10299310  (ghidra: FUN_10299310)  [gap]
uint32_t * GetPtr_UNIT_Monster_6fb01650(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103105a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Monster_6fb01650 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9068) {
      FUN_103023e9(&DAT_104e9068);
      if (DAT_104e9068 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2b4 = *(int *)(&DAT_103d4bbc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9068);
      }
    }
    UNIT_Monster_6fb01650 = sub_GetDllOffset_102f10f0(0,DAT_104ea2b4);
  }
  ExceptionList = local_10;
  return &UNIT_Monster_6fb01650;
}


// 0x102993c0  (ghidra: FUN_102993c0)  [gap]
uint32_t * GetPtr_UNIT_Monster_6fb01390(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103105d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Monster_6fb01390 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea874) {
      FUN_103023e9(&DAT_104ea874);
      if (DAT_104ea874 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9548 = *(int *)(&DAT_103d38ac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea874);
      }
    }
    UNIT_Monster_6fb01390 = sub_GetDllOffset_102f10f0(0,DAT_104e9548);
  }
  ExceptionList = local_10;
  return &UNIT_Monster_6fb01390;
}


// 0x10299470  (ghidra: FUN_10299470)  [gap]
uint32_t * GetPtr_sub_6fadb360(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310601;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fadb360 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafb4) {
      FUN_103023e9(&DAT_104eafb4);
      if (DAT_104eafb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f48 = *(int *)(&DAT_103d3ebc + iVar2 * 4);
        FUN_1030239f(&DAT_104eafb4);
      }
    }
    sub_6fadb360 = sub_GetDllOffset_102f10f0(0,DAT_104e9f48);
  }
  ExceptionList = local_10;
  return &sub_6fadb360;
}


// 0x10299520  (ghidra: FUN_10299520)  [gap]
uint32_t * GetPtr_sub_6fadb420(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310631;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fadb420 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0fc) {
      FUN_103023e9(&DAT_104ea0fc);
      if (DAT_104ea0fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0cc = *(int *)(&DAT_103d3654 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0fc);
      }
    }
    sub_6fadb420 = sub_GetDllOffset_102f10f0(0,DAT_104ea0cc);
  }
  ExceptionList = local_10;
  return &sub_6fadb420;
}


// 0x102995d0  (ghidra: FUN_102995d0)  [gap]
uint32_t * GetPtr_D2Client_loc_6fac4d30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310661;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Client_loc_6fac4d30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e902c) {
      FUN_103023e9(&DAT_104e902c);
      if (DAT_104e902c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0dc = *(int *)(&DAT_103d4764 + iVar2 * 4);
        FUN_1030239f(&DAT_104e902c);
      }
    }
    D2Client_loc_6fac4d30 = sub_GetDllOffset_102f10f0(0,DAT_104ea0dc);
  }
  ExceptionList = local_10;
  return &D2Client_loc_6fac4d30;
}


// 0x10299680  (ghidra: FUN_10299680)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310691;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab38) {
      FUN_103023e9(&DAT_104eab38);
      if (DAT_104eab38 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea2dc = *(int *)(&DAT_103d470c + iVar2 * 4);
        FUN_1030239f(&DAT_104eab38);
      }
    }
    p_D2Client_DAT_6fbcc4e0 = sub_GetDllOffset_102f10f0(0,DAT_104ea2dc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4e0;
}


// 0x10299730  (ghidra: FUN_10299730)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4e8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103106c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4e8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9074) {
      FUN_103023e9(&DAT_104e9074);
      if (DAT_104e9074 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea85c = *(int *)(&DAT_103d49f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9074);
      }
    }
    p_D2Client_DAT_6fbcc4e8 = sub_GetDllOffset_102f10f0(0,DAT_104ea85c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4e8;
}


// 0x102997e0  (ghidra: FUN_102997e0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc4f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103106f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc4f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9380) {
      FUN_103023e9(&DAT_104e9380);
      if (DAT_104e9380 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabd8 = *(int *)(&DAT_103d34dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9380);
      }
    }
    p_D2Client_DAT_6fbcc4f8 = sub_GetDllOffset_102f10f0(0,DAT_104eabd8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc4f8;
}


// 0x10299890  (ghidra: FUN_10299890)  [gap]
uint32_t * GetPtr_sub_6fad17e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310721;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fad17e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea798) {
      FUN_103023e9(&DAT_104ea798);
      if (DAT_104ea798 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9720 = *(int *)(&DAT_103d3f1c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea798);
      }
    }
    sub_6fad17e0 = sub_GetDllOffset_102f10f0(0,DAT_104e9720);
  }
  ExceptionList = local_10;
  return &sub_6fad17e0;
}


// 0x10299940  (ghidra: FUN_10299940)  [gap]
uint32_t * GetPtr_Sound_SoundHdr_6fb0d110(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310751;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Sound_SoundHdr_6fb0d110 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0d4) {
      FUN_103023e9(&DAT_104ea0d4);
      if (DAT_104ea0d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea76c = *(int *)(&DAT_103d4bac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0d4);
      }
    }
    Sound_SoundHdr_6fb0d110 = sub_GetDllOffset_102f10f0(0,DAT_104ea76c);
  }
  ExceptionList = local_10;
  return &Sound_SoundHdr_6fb0d110;
}


// 0x102999f0  (ghidra: FUN_102999f0)  [gap]
uint32_t * GetPtr_UNIT_CUnit_6fb56500(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310781;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_CUnit_6fb56500 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9404) {
      FUN_103023e9(&DAT_104e9404);
      if (DAT_104e9404 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaed8 = *(int *)(&DAT_103d4724 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9404);
      }
    }
    UNIT_CUnit_6fb56500 = sub_GetDllOffset_102f10f0(0,DAT_104eaed8);
  }
  ExceptionList = local_10;
  return &UNIT_CUnit_6fb56500;
}


// 0x10299aa0  (ghidra: FUN_10299aa0)  [gap]
uint32_t * GetPtr_UI_SkillDesc_6fadf0a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103107b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_SkillDesc_6fadf0a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d18) {
      FUN_103023e9(&DAT_104e9d18);
      if (DAT_104e9d18 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea894 = *(int *)(&DAT_103d30b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d18);
      }
    }
    UI_SkillDesc_6fadf0a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea894);
  }
  ExceptionList = local_10;
  return &UI_SkillDesc_6fadf0a0;
}


// 0x10299b50  [gap]
void UI_SkillDesc_6fadd3c0
               (int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
               uint32_t param_s7)

{
  int iVar1;
  
  if (p_UI_SkillDesc_6fadd3c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_SkillDesc_6fadd3c0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6ae0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10299b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_SkillDesc_6fadd3c0)();
  return;
}


// 0x10299b80  (ghidra: FUN_10299b80)  [gap]
uint32_t * GetPtr_UI_SkillDesc_6fae0b40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103107e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_SkillDesc_6fae0b40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea888) {
      FUN_103023e9(&DAT_104ea888);
      if (DAT_104ea888 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea56c = *(int *)(&DAT_103d3d4c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea888);
      }
    }
    UI_SkillDesc_6fae0b40 = sub_GetDllOffset_102f10f0(0,DAT_104ea56c);
  }
  ExceptionList = local_10;
  return &UI_SkillDesc_6fae0b40;
}


// 0x10299c60  [gap]
uint D2Common_10435_10299c60(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10435_10299c60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10435_10299c60 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7250 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10299c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10435_10299c60)();
  return uVar2;
}


// 0x10299c90  [gap]
void __fastcall
UI_SkillDesc_6fae3240
          (void *param_1,int *param_2,int *param_3,uint *param_4,uint param_5,uint param_6,
          uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  if (p_UI_SkillDesc_6fae3240 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_SkillDesc_6fae3240 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6a80 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10299cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_SkillDesc_6fae3240)();
  return;
}


// 0x10299cc0  [gap]
void UI_SkillDesc_6fae0e30(uint param_1,int *param_2,int *param_3,uint *param_4,uint32_t param_s5)

{
  int iVar1;
  
  if (p_UI_SkillDesc_6fae0e30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_SkillDesc_6fae0e30 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7e38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10299ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UI_SkillDesc_6fae0e30)();
  return;
}


// 0x10299cf0  (ghidra: FUN_10299cf0)  [gap]
uint32_t * GetPtr_UI_SkillDesc_6fade140(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310811;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_SkillDesc_6fade140 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1dc) {
      FUN_103023e9(&DAT_104ea1dc);
      if (DAT_104ea1dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d68 = *(int *)(&DAT_103d4fac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1dc);
      }
    }
    UI_SkillDesc_6fade140 = sub_GetDllOffset_102f10f0(0,DAT_104e9d68);
  }
  ExceptionList = local_10;
  return &UI_SkillDesc_6fade140;
}


// 0x10299da0  (ghidra: FUN_10299da0)  [gap]
uint32_t * GetPtr_UI_SkillDesc_6fade190(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310841;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UI_SkillDesc_6fade190 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea630) {
      FUN_103023e9(&DAT_104ea630);
      if (DAT_104ea630 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa70 = *(int *)(&DAT_103d464c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea630);
      }
    }
    UI_SkillDesc_6fade190 = sub_GetDllOffset_102f10f0(0,DAT_104eaa70);
  }
  ExceptionList = local_10;
  return &UI_SkillDesc_6fade190;
}


// 0x10299e50  (ghidra: FUN_10299e50)  [gap]
uint32_t * GetPtr_sub_6fadc190(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10310871;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fadc190 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9488) {
      FUN_103023e9(&DAT_104e9488);
      if (DAT_104e9488 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5e4 = *(int *)(&DAT_103d3164 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9488);
      }
    }
    sub_6fadc190 = sub_GetDllOffset_102f10f0(0,DAT_104ea5e4);
  }
  ExceptionList = local_10;
  return &sub_6fadc190;
}


// 0x10299f00  (ghidra: FUN_10299f00)  [gap]
uint32_t * GetPtr_sub_6fadc230(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103108a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fadc230 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead14) {
      FUN_103023e9(&DAT_104ead14);
      if (DAT_104ead14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c54 = *(int *)(&DAT_103d3b64 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead14);
      }
    }
    sub_6fadc230 = sub_GetDllOffset_102f10f0(0,DAT_104e9c54);
  }
  ExceptionList = local_10;
  return &sub_6fadc230;
}


// 0x10299fb0  [gap]
uint UI_SkillDesc_6fadf980(uint param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_UI_SkillDesc_6fadf980 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UI_SkillDesc_6fadf980 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7038 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10299fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_UI_SkillDesc_6fadf980)();
  return uVar2;
}

