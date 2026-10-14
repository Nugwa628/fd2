/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_102851a0.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102851a0 - 0x1028e6d0
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


// 0x102851a0  [gap]
uint * PLAYER_PlrModes_6fc99210
                 (int *param_1,int param_2,uint param_3,int param_4,uint32_t param_s5)

{
  int iVar1;
  uint *puVar2;
  
  if (p_PLAYER_PlrModes_6fc99210 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrModes_6fc99210 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7270 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102851c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_PLAYER_PlrModes_6fc99210)();
  return puVar2;
}


// 0x102851d0  (ghidra: FUN_102851d0)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6600(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b681;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb6600 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9678) {
      FUN_103023e9(&DAT_104e9678);
      if (DAT_104e9678 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead8c = *(int *)(&DAT_103d3714 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9678);
      }
    }
    PLAYER_PlayerPets_6fcb6600 = sub_GetDllOffset_102f10f0(6,DAT_104ead8c);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb6600;
}


// 0x10285280  (ghidra: FUN_10285280)  [gap]
uint32_t * GetPtr_sub_6fc215d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b6b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc215d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e930c) {
      FUN_103023e9(&DAT_104e930c);
      if (DAT_104e930c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea19c = *(int *)(&DAT_103d3114 + iVar2 * 4);
        FUN_1030239f(&DAT_104e930c);
      }
    }
    sub_6fc215d0 = sub_GetDllOffset_102f10f0(6,DAT_104ea19c);
  }
  ExceptionList = local_10;
  return &sub_6fc215d0;
}


// 0x10285330  [gap]
void __fastcall UNIT_Missile_6fb617c0(void *param_1)

{
  int iVar1;
  
  if (p_UNIT_Missile_6fb617c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_Missile_6fb617c0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7328 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10285353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_Missile_6fb617c0)();
  return;
}


// 0x10285390  [gap]
uint __fastcall sub_6faf15a0(int param_1,int param_2,uint32_t param_s1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6faf15a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faf15a0 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6c68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102853b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6faf15a0)();
  return uVar2;
}


// 0x102853c0  (ghidra: FUN_102853c0)  [gap]
uint32_t * GetPtr_sub_6fcb3d60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b6e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb3d60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea904) {
      FUN_103023e9(&DAT_104ea904);
      if (DAT_104ea904 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e917c = *(int *)(&DAT_103d310c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea904);
      }
    }
    sub_6fcb3d60 = sub_GetDllOffset_102f10f0(6,DAT_104e917c);
  }
  ExceptionList = local_10;
  return &sub_6fcb3d60;
}


// 0x10285470  (ghidra: FUN_10285470)  [gap]
uint32_t * GetPtr_sub_6faf0f00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b711;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf0f00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9aec) {
      FUN_103023e9(&DAT_104e9aec);
      if (DAT_104e9aec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ec0 = *(int *)(&DAT_103d469c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9aec);
      }
    }
    sub_6faf0f00 = sub_GetDllOffset_102f10f0(0,DAT_104e9ec0);
  }
  ExceptionList = local_10;
  return &sub_6faf0f00;
}


// 0x10285520  (ghidra: FUN_10285520)  [gap]
uint32_t * GetPtr_sub_6fd00a60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b741;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd00a60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea68c) {
      FUN_103023e9(&DAT_104ea68c);
      if (DAT_104ea68c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bf8 = *(int *)(&DAT_103d4e74 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea68c);
      }
    }
    sub_6fd00a60 = sub_GetDllOffset_102f10f0(6,DAT_104e9bf8);
  }
  ExceptionList = local_10;
  return &sub_6fd00a60;
}


// 0x102855d0  (ghidra: FUN_102855d0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fd003a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b771;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fd003a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cc8) {
      FUN_103023e9(&DAT_104e9cc8);
      if (DAT_104e9cc8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa14 = *(int *)(&DAT_103d4924 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cc8);
      }
    }
    UNIT_SUnitDmg_6fd003a0 = sub_GetDllOffset_102f10f0(6,DAT_104eaa14);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fd003a0;
}


// 0x10285680  (ghidra: FUN_10285680)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc19a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b7a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc19a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cec) {
      FUN_103023e9(&DAT_104e9cec);
      if (DAT_104e9cec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fec = *(int *)(&DAT_103d30a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cec);
      }
    }
    SKILLS_Skills_6fcc19a0 = sub_GetDllOffset_102f10f0(6,DAT_104e9fec);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc19a0;
}


// 0x10285730  (ghidra: FUN_10285730)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbfd00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b7d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbfd00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabfc) {
      FUN_103023e9(&DAT_104eabfc);
      if (DAT_104eabfc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab94 = *(int *)(&DAT_103d4c8c + iVar2 * 4);
        FUN_1030239f(&DAT_104eabfc);
      }
    }
    SKILLS_Skills_6fcbfd00 = sub_GetDllOffset_102f10f0(6,DAT_104eab94);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbfd00;
}


// 0x102857e0  (ghidra: FUN_102857e0)  [gap]
uint32_t * GetPtr_sub_6fd0af80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b801;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0af80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92a0) {
      FUN_103023e9(&DAT_104e92a0);
      if (DAT_104e92a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9558 = *(int *)(&DAT_103d4a64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92a0);
      }
    }
    sub_6fd0af80 = sub_GetDllOffset_102f10f0(6,DAT_104e9558);
  }
  ExceptionList = local_10;
  return &sub_6fd0af80;
}


// 0x10285890  (ghidra: FUN_10285890)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc1280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b831;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc1280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6a8) {
      FUN_103023e9(&DAT_104ea6a8);
      if (DAT_104ea6a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea400 = *(int *)(&DAT_103d4ce4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6a8);
      }
    }
    SKILLS_Skills_6fcc1280 = sub_GetDllOffset_102f10f0(6,DAT_104ea400);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc1280;
}


// 0x10285940  (ghidra: FUN_10285940)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbf9a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b861;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbf9a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac2c) {
      FUN_103023e9(&DAT_104eac2c);
      if (DAT_104eac2c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea760 = *(int *)(&DAT_103d49ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eac2c);
      }
    }
    SKILLS_Skills_6fcbf9a0 = sub_GetDllOffset_102f10f0(6,DAT_104ea760);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbf9a0;
}


// 0x102859f0  (ghidra: FUN_102859f0)  [gap]
uint32_t * GetPtr_sub_6fcb1340(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b891;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb1340 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ca4) {
      FUN_103023e9(&DAT_104e9ca4);
      if (DAT_104e9ca4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91ac = *(int *)(&DAT_103d415c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ca4);
      }
    }
    sub_6fcb1340 = sub_GetDllOffset_102f10f0(6,DAT_104e91ac);
  }
  ExceptionList = local_10;
  return &sub_6fcb1340;
}


// 0x10285aa0  (ghidra: FUN_10285aa0)  [gap]
uint32_t * GetPtr_sub_6faf0550(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b8c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6faf0550 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96dc) {
      FUN_103023e9(&DAT_104e96dc);
      if (DAT_104e96dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e941c = *(int *)(&DAT_103d3d2c + iVar2 * 4);
        FUN_1030239f(&DAT_104e96dc);
      }
    }
    sub_6faf0550 = sub_GetDllOffset_102f10f0(0,DAT_104e941c);
  }
  ExceptionList = local_10;
  return &sub_6faf0550;
}


// 0x10285b50  (ghidra: FUN_10285b50)  [gap]
uint32_t * GetPtr_sub_6fcb1240(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b8f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb1240 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d8c) {
      FUN_103023e9(&DAT_104e9d8c);
      if (DAT_104e9d8c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea538 = *(int *)(&DAT_103d449c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d8c);
      }
    }
    sub_6fcb1240 = sub_GetDllOffset_102f10f0(6,DAT_104ea538);
  }
  ExceptionList = local_10;
  return &sub_6fcb1240;
}


// 0x10285c00  (ghidra: FUN_10285c00)  [gap]
uint32_t * GetPtr_sub_6fd02480(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b921;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd02480 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9634) {
      FUN_103023e9(&DAT_104e9634);
      if (DAT_104e9634 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c58 = *(int *)(&DAT_103d47e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9634);
      }
    }
    sub_6fd02480 = sub_GetDllOffset_102f10f0(6,DAT_104e9c58);
  }
  ExceptionList = local_10;
  return &sub_6fd02480;
}


// 0x10285cb0  (ghidra: FUN_10285cb0)  [gap]
uint32_t * GetPtr_sub_6fb23bc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b951;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb23bc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e989c) {
      FUN_103023e9(&DAT_104e989c);
      if (DAT_104e989c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e972c = *(int *)(&DAT_103d398c + iVar2 * 4);
        FUN_1030239f(&DAT_104e989c);
      }
    }
    sub_6fb23bc0 = sub_GetDllOffset_102f10f0(0,DAT_104e972c);
  }
  ExceptionList = local_10;
  return &sub_6fb23bc0;
}


// 0x10285d60  (ghidra: FUN_10285d60)  [gap]
uint32_t * GetPtr_SKILLS_SkillDruid_6fc654e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b981;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillDruid_6fc654e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9880) {
      FUN_103023e9(&DAT_104e9880);
      if (DAT_104e9880 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93a0 = *(int *)(&DAT_103d33fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9880);
      }
    }
    SKILLS_SkillDruid_6fc654e0 = sub_GetDllOffset_102f10f0(6,DAT_104e93a0);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillDruid_6fc654e0;
}


// 0x10285e10  [gap]
uint sub_6fc8b070(int param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fc8b070 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc8b070 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2f3c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10285e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fc8b070)();
  return uVar2;
}


// 0x10285e40  (ghidra: FUN_10285e40)  [gap]
uint32_t * GetPtr_sub_6fc31070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b9b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc31070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac84) {
      FUN_103023e9(&DAT_104eac84);
      if (DAT_104eac84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9974 = *(int *)(&DAT_103d389c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac84);
      }
    }
    sub_6fc31070 = sub_GetDllOffset_102f10f0(6,DAT_104e9974);
  }
  ExceptionList = local_10;
  return &sub_6fc31070;
}


// 0x10285ef0  (ghidra: FUN_10285ef0)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcf4230(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b9e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcf4230 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99ec) {
      FUN_103023e9(&DAT_104e99ec);
      if (DAT_104e99ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1b8 = *(int *)(&DAT_103d45b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99ec);
      }
    }
    D2Game_loc_6fcf4230 = sub_GetDllOffset_102f10f0(6,DAT_104ea1b8);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcf4230;
}


// 0x10285fa0  (ghidra: FUN_10285fa0)  [gap]
uint32_t * GetPtr_sub_6fc57680(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ba11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc57680 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9978) {
      FUN_103023e9(&DAT_104e9978);
      if (DAT_104e9978 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8b4 = *(int *)(&DAT_103d49bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9978);
      }
    }
    sub_6fc57680 = sub_GetDllOffset_102f10f0(6,DAT_104ea8b4);
  }
  ExceptionList = local_10;
  return &sub_6fc57680;
}


// 0x10286050  (ghidra: FUN_10286050)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf24b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ba41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf24b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea29c) {
      FUN_103023e9(&DAT_104ea29c);
      if (DAT_104ea29c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa1c = *(int *)(&DAT_103d4c7c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea29c);
      }
    }
    ITEMS_ItemMode_6fcf24b0 = sub_GetDllOffset_102f10f0(6,DAT_104eaa1c);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf24b0;
}


// 0x10286100  [gap]
void __fastcall
ITEMS_ItemMode_6fcf9470
          (void *param_1,uint *param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (p_ITEMS_ItemMode_6fcf9470 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_ITEMS_ItemMode_6fcf9470 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6ce8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_ITEMS_ItemMode_6fcf9470)();
  return;
}


// 0x10286130  (ghidra: FUN_10286130)  [gap]
uint32_t * GetPtr_sub_6fccdb30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ba71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fccdb30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c40) {
      FUN_103023e9(&DAT_104e9c40);
      if (DAT_104e9c40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7e8 = *(int *)(&DAT_103d47f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c40);
      }
    }
    sub_6fccdb30 = sub_GetDllOffset_102f10f0(6,DAT_104ea7e8);
  }
  ExceptionList = local_10;
  return &sub_6fccdb30;
}


// 0x102861e0  (ghidra: FUN_102861e0)  [gap]
uint32_t * GetPtr_SKILLS_SkillItem_6fccd050(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030baa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillItem_6fccd050 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9894) {
      FUN_103023e9(&DAT_104e9894);
      if (DAT_104e9894 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae34 = *(int *)(&DAT_103d42a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9894);
      }
    }
    SKILLS_SkillItem_6fccd050 = sub_GetDllOffset_102f10f0(6,DAT_104eae34);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillItem_6fccd050;
}


// 0x10286290  (ghidra: FUN_10286290)  [gap]
uint32_t * GetPtr_UNIT_SUnitEvent_6fc570e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bad1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitEvent_6fc570e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5b8) {
      FUN_103023e9(&DAT_104ea5b8);
      if (DAT_104ea5b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99e4 = *(int *)(&DAT_103d44d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5b8);
      }
    }
    UNIT_SUnitEvent_6fc570e0 = sub_GetDllOffset_102f10f0(6,DAT_104e99e4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitEvent_6fc570e0;
}


// 0x10286340  (ghidra: FUN_10286340)  [gap]
uint32_t * GetPtr_sub_6fd0b090(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bb01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b090 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0ec) {
      FUN_103023e9(&DAT_104eb0ec);
      if (DAT_104eb0ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea65c = *(int *)(&DAT_103d3b9c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0ec);
      }
    }
    sub_6fd0b090 = sub_GetDllOffset_102f10f0(6,DAT_104ea65c);
  }
  ExceptionList = local_10;
  return &sub_6fd0b090;
}


// 0x102863f0  (ghidra: FUN_102863f0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc030(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bb31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfc030 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fac) {
      FUN_103023e9(&DAT_104e9fac);
      if (DAT_104e9fac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9850 = *(int *)(&DAT_103d4e94 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fac);
      }
    }
    UNIT_SUnitDmg_6fcfc030 = sub_GetDllOffset_102f10f0(6,DAT_104e9850);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfc030;
}


// 0x102864a0  (ghidra: FUN_102864a0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdcb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bb61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfdcb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99dc) {
      FUN_103023e9(&DAT_104e99dc);
      if (DAT_104e99dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99bc = *(int *)(&DAT_103d31fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e99dc);
      }
    }
    UNIT_SUnitDmg_6fcfdcb0 = sub_GetDllOffset_102f10f0(6,DAT_104e99bc);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfdcb0;
}


// 0x10286550  (ghidra: FUN_10286550)  [gap]
uint32_t * GetPtr_UNIT_Party_6fcbc070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bb91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Party_6fcbc070 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacf4) {
      FUN_103023e9(&DAT_104eacf4);
      if (DAT_104eacf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98e0 = *(int *)(&DAT_103d40dc + iVar2 * 4);
        FUN_1030239f(&DAT_104eacf4);
      }
    }
    UNIT_Party_6fcbc070 = sub_GetDllOffset_102f10f0(6,DAT_104e98e0);
  }
  ExceptionList = local_10;
  return &UNIT_Party_6fcbc070;
}


// 0x10286600  (ghidra: FUN_10286600)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffcc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bbc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcffcc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e68) {
      FUN_103023e9(&DAT_104e9e68);
      if (DAT_104e9e68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab54 = *(int *)(&DAT_103d3fe4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e68);
      }
    }
    UNIT_SUnitDmg_6fcffcc0 = sub_GetDllOffset_102f10f0(6,DAT_104eab54);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcffcc0;
}


// 0x102866e0  [gap]
uint sub_6fc344d0(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fc344d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc344d0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7a70 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fc344d0)();
  return uVar2;
}


// 0x10286710  [gap]
int sub_6fcb2030(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcb2030 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb2030 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2ce4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcb2030)();
  return iVar1;
}


// 0x10286740  [gap]
int sub_6fcb3340(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcb3340 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb3340 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7b28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcb3340)();
  return iVar1;
}


// 0x10286770  [gap]
uint __fastcall sub_6fcb4970(void *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fcb4970 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb4970 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7df0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fcb4970)();
  return uVar2;
}


// 0x102867a0  [gap]
uint __fastcall sub_6fcb4b10(uint param_1,uchar *param_2,int param_3,uint32_t param_s2)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fcb4b10 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb4b10 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6cf8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102867c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fcb4b10)();
  return uVar2;
}


// 0x102867d0  [gap]
uint __fastcall sub_6fc71750(uint param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fc71750 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc71750 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6e58 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102867f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fc71750)();
  return uVar2;
}


// 0x10286800  [gap]
int sub_6fc71540(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fc71540 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc71540 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2db4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc71540)();
  return iVar1;
}


// 0x10286830  [gap]
int sub_6fccdfa0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fccdfa0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fccdfa0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7f20 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fccdfa0)();
  return iVar1;
}


// 0x10286860  [gap]
uint __fastcall sub_6fcb34a0(uint param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fcb34a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb34a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7558 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fcb34a0)();
  return uVar2;
}


// 0x10286890  [gap]
uint __fastcall sub_6fcb4e60(void *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fcb4e60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcb4e60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7eb0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102868b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fcb4e60)();
  return uVar2;
}


// 0x102868c0  (ghidra: FUN_102868c0)  [gap]
uint32_t * GetPtr_sub_6fc641c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bbf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc641c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96f8) {
      FUN_103023e9(&DAT_104e96f8);
      if (DAT_104e96f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99c4 = *(int *)(&DAT_103d386c + iVar2 * 4);
        FUN_1030239f(&DAT_104e96f8);
      }
    }
    sub_6fc641c0 = sub_GetDllOffset_102f10f0(6,DAT_104e99c4);
  }
  ExceptionList = local_10;
  return &sub_6fc641c0;
}


// 0x10286970  (ghidra: FUN_10286970)  [gap]
uint32_t * GetPtr_sub_6fc639a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bc21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc639a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bb4) {
      FUN_103023e9(&DAT_104e9bb4);
      if (DAT_104e9bb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9148 = *(int *)(&DAT_103d440c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bb4);
      }
    }
    sub_6fc639a0 = sub_GetDllOffset_102f10f0(6,DAT_104e9148);
  }
  ExceptionList = local_10;
  return &sub_6fc639a0;
}


// 0x10286a20  (ghidra: FUN_10286a20)  [gap]
uint32_t * GetPtr_sub_6fb24480(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bc51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb24480 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cf0) {
      FUN_103023e9(&DAT_104e9cf0);
      if (DAT_104e9cf0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea404 = *(int *)(&DAT_103d472c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cf0);
      }
    }
    sub_6fb24480 = sub_GetDllOffset_102f10f0(0,DAT_104ea404);
  }
  ExceptionList = local_10;
  return &sub_6fb24480;
}


// 0x10286ad0  [gap]
void UNIT_SUnitDmg_6fcfd450
               (uint param_1,int *param_2,int *param_3,uint *param_4,uint param_5,byte param_6)

{
  int iVar1;
  
  if (p_UNIT_SUnitDmg_6fcfd450 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_SUnitDmg_6fcfd450 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7d88 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_SUnitDmg_6fcfd450)();
  return;
}


// 0x10286b00  [gap]
int __fastcall Ai_AiThink4_6fccc940(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_Ai_AiThink4_6fccc940 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Ai_AiThink4_6fccc940 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7cb0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10286b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_Ai_AiThink4_6fccc940)();
  return iVar1;
}


// 0x10286b30  (ghidra: FUN_10286b30)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc530(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bc81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfc530 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a20) {
      FUN_103023e9(&DAT_104e9a20);
      if (DAT_104e9a20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0c0 = *(int *)(&DAT_103d3e0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a20);
      }
    }
    UNIT_SUnitDmg_6fcfc530 = sub_GetDllOffset_102f10f0(6,DAT_104ea0c0);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfc530;
}


// 0x10286be0  (ghidra: FUN_10286be0)  [gap]
uint32_t * GetPtr_sub_6fcb1b70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bcb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb1b70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90c0) {
      FUN_103023e9(&DAT_104e90c0);
      if (DAT_104e90c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96fc = *(int *)(&DAT_103d40b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90c0);
      }
    }
    sub_6fcb1b70 = sub_GetDllOffset_102f10f0(6,DAT_104e96fc);
  }
  ExceptionList = local_10;
  return &sub_6fcb1b70;
}


// 0x10286c90  (ghidra: FUN_10286c90)  [gap]
uint32_t * GetPtr_sub_6fcb5370(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bce1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb5370 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7e0) {
      FUN_103023e9(&DAT_104ea7e0);
      if (DAT_104ea7e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea298 = *(int *)(&DAT_103d4fdc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7e0);
      }
    }
    sub_6fcb5370 = sub_GetDllOffset_102f10f0(6,DAT_104ea298);
  }
  ExceptionList = local_10;
  return &sub_6fcb5370;
}


// 0x10286d40  (ghidra: FUN_10286d40)  [gap]
uint32_t * GetPtr_sub_6fcb22a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bd11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb22a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac4c) {
      FUN_103023e9(&DAT_104eac4c);
      if (DAT_104eac4c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fc8 = *(int *)(&DAT_103d4454 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac4c);
      }
    }
    sub_6fcb22a0 = sub_GetDllOffset_102f10f0(6,DAT_104e8fc8);
  }
  ExceptionList = local_10;
  return &sub_6fcb22a0;
}


// 0x10286df0  (ghidra: FUN_10286df0)  [gap]
uint32_t * GetPtr_sub_6fcb1e30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bd41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb1e30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93a8) {
      FUN_103023e9(&DAT_104e93a8);
      if (DAT_104e93a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93e0 = *(int *)(&DAT_103d2ffc + iVar2 * 4);
        FUN_1030239f(&DAT_104e93a8);
      }
    }
    sub_6fcb1e30 = sub_GetDllOffset_102f10f0(6,DAT_104e93e0);
  }
  ExceptionList = local_10;
  return &sub_6fcb1e30;
}


// 0x10286ea0  (ghidra: FUN_10286ea0)  [gap]
uint32_t * GetPtr_sub_6fd007a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bd71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd007a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b4c) {
      FUN_103023e9(&DAT_104e9b4c);
      if (DAT_104e9b4c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaae0 = *(int *)(&DAT_103d34fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b4c);
      }
    }
    sub_6fd007a0 = sub_GetDllOffset_102f10f0(6,DAT_104eaae0);
  }
  ExceptionList = local_10;
  return &sub_6fd007a0;
}


// 0x10286f50  (ghidra: FUN_10286f50)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfaa90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bda1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfaa90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea670) {
      FUN_103023e9(&DAT_104ea670);
      if (DAT_104ea670 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae78 = *(int *)(&DAT_103d40a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea670);
      }
    }
    UNIT_SUnitDmg_6fcfaa90 = sub_GetDllOffset_102f10f0(6,DAT_104eae78);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfaa90;
}


// 0x10287000  (ghidra: FUN_10287000)  [gap]
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a190(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bdd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitMsg_6fc9a190 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95d4) {
      FUN_103023e9(&DAT_104e95d4);
      if (DAT_104e95d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3b8 = *(int *)(&DAT_103d37f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e95d4);
      }
    }
    UNIT_SUnitMsg_6fc9a190 = sub_GetDllOffset_102f10f0(6,DAT_104ea3b8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitMsg_6fc9a190;
}


// 0x102870b0  (ghidra: FUN_102870b0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4d090(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030be01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4d090 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea164) {
      FUN_103023e9(&DAT_104ea164);
      if (DAT_104ea164 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea188 = *(int *)(&DAT_103d42bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea164);
      }
    }
    GAME_Game_6fc4d090 = sub_GetDllOffset_102f10f0(6,DAT_104ea188);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4d090;
}


// 0x10287160  (ghidra: FUN_10287160)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6b7f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030be31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6b7f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea038) {
      FUN_103023e9(&DAT_104ea038);
      if (DAT_104ea038 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e905c = *(int *)(&DAT_103d331c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea038);
      }
    }
    GAME_Clients_6fc6b7f0 = sub_GetDllOffset_102f10f0(6,DAT_104e905c);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6b7f0;
}


// 0x10287210  (ghidra: FUN_10287210)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6b500(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030be61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6b500 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96f0) {
      FUN_103023e9(&DAT_104e96f0);
      if (DAT_104e96f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c38 = *(int *)(&DAT_103d4834 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96f0);
      }
    }
    GAME_Clients_6fc6b500 = sub_GetDllOffset_102f10f0(6,DAT_104e9c38);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6b500;
}


// 0x102872c0  (ghidra: FUN_102872c0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4bf90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030be91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4bf90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9df0) {
      FUN_103023e9(&DAT_104e9df0);
      if (DAT_104e9df0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e928c = *(int *)(&DAT_103d421c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9df0);
      }
    }
    GAME_Game_6fc4bf90 = sub_GetDllOffset_102f10f0(6,DAT_104e928c);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4bf90;
}


// 0x10287370  (ghidra: FUN_10287370)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbe370(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bec1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbe370 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb078) {
      FUN_103023e9(&DAT_104eb078);
      if (DAT_104eb078 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8cc = *(int *)(&DAT_103d4e1c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb078);
      }
    }
    SKILLS_Skills_6fcbe370 = sub_GetDllOffset_102f10f0(6,DAT_104ea8cc);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbe370;
}


// 0x10287420  [gap]
void __fastcall PLAYER_PlrMsg_6fcec2f0(int *param_1,ushort param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (p_PLAYER_PlrMsg_6fcec2f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrMsg_6fcec2f0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6648 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10287446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_PLAYER_PlrMsg_6fcec2f0)();
  return;
}


// 0x10287450  (ghidra: FUN_10287450)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcdf810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bef1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcdf810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea064) {
      FUN_103023e9(&DAT_104ea064);
      if (DAT_104ea064 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaff4 = *(int *)(&DAT_103d4d8c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea064);
      }
    }
    D2Game_loc_6fcdf810 = sub_GetDllOffset_102f10f0(6,DAT_104eaff4);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcdf810;
}


// 0x10287500  (ghidra: FUN_10287500)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcb02e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bf21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcb02e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0f4) {
      FUN_103023e9(&DAT_104eb0f4);
      if (DAT_104eb0f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b30 = *(int *)(&DAT_103d3b2c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0f4);
      }
    }
    UNIT_sunitproxy_6fcb02e0 = sub_GetDllOffset_102f10f0(6,DAT_104e9b30);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcb02e0;
}


// 0x102875b0  (ghidra: FUN_102875b0)  [gap]
uint32_t * GetPtr_D2Game_loc_6fc68710(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bf51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fc68710 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac88) {
      FUN_103023e9(&DAT_104eac88);
      if (DAT_104eac88 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9034 = *(int *)(&DAT_103d4afc + iVar2 * 4);
        FUN_1030239f(&DAT_104eac88);
      }
    }
    D2Game_loc_6fc68710 = sub_GetDllOffset_102f10f0(6,DAT_104e9034);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fc68710;
}


// 0x10287660  (ghidra: FUN_10287660)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf4e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bf81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcaf4e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9338) {
      FUN_103023e9(&DAT_104e9338);
      if (DAT_104e9338 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaee8 = *(int *)(&DAT_103d401c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9338);
      }
    }
    UNIT_sunitproxy_6fcaf4e0 = sub_GetDllOffset_102f10f0(6,DAT_104eaee8);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcaf4e0;
}


// 0x10287710  (ghidra: FUN_10287710)  [gap]
uint32_t * GetPtr_D2Game_loc_6fce00c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bfb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fce00c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e5c) {
      FUN_103023e9(&DAT_104e9e5c);
      if (DAT_104e9e5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea964 = *(int *)(&DAT_103d4844 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e5c);
      }
    }
    D2Game_loc_6fce00c0 = sub_GetDllOffset_102f10f0(6,DAT_104ea964);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fce00c0;
}


// 0x102877c0  (ghidra: FUN_102877c0)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcafaa0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030bfe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcafaa0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99fc) {
      FUN_103023e9(&DAT_104e99fc);
      if (DAT_104e99fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92ac = *(int *)(&DAT_103d33a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99fc);
      }
    }
    UNIT_sunitproxy_6fcafaa0 = sub_GetDllOffset_102f10f0(6,DAT_104e92ac);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcafaa0;
}


// 0x10287870  (ghidra: FUN_10287870)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcdcd90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c011;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcdcd90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae10) {
      FUN_103023e9(&DAT_104eae10);
      if (DAT_104eae10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f5c = *(int *)(&DAT_103d4174 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae10);
      }
    }
    D2Game_loc_6fcdcd90 = sub_GetDllOffset_102f10f0(6,DAT_104e9f5c);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcdcd90;
}


// 0x10287920  (ghidra: FUN_10287920)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf5c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c041;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcaf5c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92a4) {
      FUN_103023e9(&DAT_104e92a4);
      if (DAT_104e92a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bd4 = *(int *)(&DAT_103d4d04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92a4);
      }
    }
    UNIT_sunitproxy_6fcaf5c0 = sub_GetDllOffset_102f10f0(6,DAT_104e9bd4);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcaf5c0;
}


// 0x102879d0  (ghidra: FUN_102879d0)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf820(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c071;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcaf820 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9060) {
      FUN_103023e9(&DAT_104e9060);
      if (DAT_104e9060 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac80 = *(int *)(&DAT_103d395c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9060);
      }
    }
    UNIT_sunitproxy_6fcaf820 = sub_GetDllOffset_102f10f0(6,DAT_104eac80);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcaf820;
}


// 0x10287a80  (ghidra: FUN_10287a80)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcaf620(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c0a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcaf620 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96c4) {
      FUN_103023e9(&DAT_104e96c4);
      if (DAT_104e96c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8e0 = *(int *)(&DAT_103d3994 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96c4);
      }
    }
    D2Game_loc_6fcaf620 = sub_GetDllOffset_102f10f0(6,DAT_104ea8e0);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcaf620;
}


// 0x10287b30  [gap]
void ITEMS_ItemMode_6fcf51a0(int param_1,int *param_2,uint32_t param_s3)

{
  int iVar1;
  
  if (p_ITEMS_ItemMode_6fcf51a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_ITEMS_ItemMode_6fcf51a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c75a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10287b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_ITEMS_ItemMode_6fcf51a0)();
  return;
}


// 0x10287b60  (ghidra: FUN_10287b60)  [gap]
uint32_t * GetPtr_sub_6fcdca20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c0d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdca20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea520) {
      FUN_103023e9(&DAT_104ea520);
      if (DAT_104ea520 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3d8 = *(int *)(&DAT_103d3d84 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea520);
      }
    }
    sub_6fcdca20 = sub_GetDllOffset_102f10f0(6,DAT_104ea3d8);
  }
  ExceptionList = local_10;
  return &sub_6fcdca20;
}


// 0x10287c10  (ghidra: FUN_10287c10)  [gap]
uint32_t * GetPtr_D2Game_loc_6fceb610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c101;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fceb610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93e4) {
      FUN_103023e9(&DAT_104e93e4);
      if (DAT_104e93e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a24 = *(int *)(&DAT_103d47ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e93e4);
      }
    }
    D2Game_loc_6fceb610 = sub_GetDllOffset_102f10f0(6,DAT_104e9a24);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fceb610;
}


// 0x10287cc0  (ghidra: FUN_10287cc0)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcad5f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c131;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcad5f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1e0) {
      FUN_103023e9(&DAT_104ea1e0);
      if (DAT_104ea1e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea74c = *(int *)(&DAT_103d3aec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1e0);
      }
    }
    GAME_SCmd_6fcad5f0 = sub_GetDllOffset_102f10f0(6,DAT_104ea74c);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcad5f0;
}


// 0x10287d70  (ghidra: FUN_10287d70)  [gap]
uint32_t * GetPtr_D2Game_loc_6fc21740(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c161;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fc21740 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea938) {
      FUN_103023e9(&DAT_104ea938);
      if (DAT_104ea938 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9964 = *(int *)(&DAT_103d48a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea938);
      }
    }
    D2Game_loc_6fc21740 = sub_GetDllOffset_102f10f0(6,DAT_104e9964);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fc21740;
}


// 0x10287e20  (ghidra: FUN_10287e20)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbfae0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c191;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbfae0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea80c) {
      FUN_103023e9(&DAT_104ea80c);
      if (DAT_104ea80c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ce0 = *(int *)(&DAT_103d2ff4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea80c);
      }
    }
    SKILLS_Skills_6fcbfae0 = sub_GetDllOffset_102f10f0(6,DAT_104e9ce0);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbfae0;
}


// 0x10287ed0  (ghidra: FUN_10287ed0)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcc3d00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c1c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcc3d00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac54) {
      FUN_103023e9(&DAT_104eac54);
      if (DAT_104eac54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea434 = *(int *)(&DAT_103d3b0c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac54);
      }
    }
    D2Game_loc_6fcc3d00 = sub_GetDllOffset_102f10f0(6,DAT_104ea434);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcc3d00;
}


// 0x10287f80  (ghidra: FUN_10287f80)  [gap]
uint32_t * GetPtr_Ai_AiThink4_6fcc3d60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c1f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiThink4_6fcc3d60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9330) {
      FUN_103023e9(&DAT_104e9330);
      if (DAT_104e9330 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9434 = *(int *)(&DAT_103d3324 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9330);
      }
    }
    Ai_AiThink4_6fcc3d60 = sub_GetDllOffset_102f10f0(6,DAT_104e9434);
  }
  ExceptionList = local_10;
  return &Ai_AiThink4_6fcc3d60;
}


// 0x10288030  (ghidra: FUN_10288030)  [gap]
uint32_t * GetPtr_sub_6fc2f2f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c221;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2f2f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea308) {
      FUN_103023e9(&DAT_104ea308);
      if (DAT_104ea308 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c8c = *(int *)(&DAT_103d4be4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea308);
      }
    }
    sub_6fc2f2f0 = sub_GetDllOffset_102f10f0(6,DAT_104e9c8c);
  }
  ExceptionList = local_10;
  return &sub_6fc2f2f0;
}


// 0x102880e0  [gap]
void PLAYER_PlayerPets_6fcb6fa0(uint param_1,int *param_2)

{
  int iVar1;
  
  if (p_PLAYER_PlayerPets_6fcb6fa0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlayerPets_6fcb6fa0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7160 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10288106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_PLAYER_PlayerPets_6fcb6fa0)();
  return;
}


// 0x10288140  (ghidra: FUN_10288140)  [gap]
uint32_t * GetPtr_sub_6fcb83b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c251;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb83b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead2c) {
      FUN_103023e9(&DAT_104ead2c);
      if (DAT_104ead2c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9180 = *(int *)(&DAT_103d4c9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead2c);
      }
    }
    sub_6fcb83b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9180);
  }
  ExceptionList = local_10;
  return &sub_6fcb83b0;
}


// 0x102881f0  (ghidra: FUN_102881f0)  [gap]
uint32_t * GetPtr_sub_6fd02310(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c281;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd02310 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9058) {
      FUN_103023e9(&DAT_104e9058);
      if (DAT_104e9058 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac44 = *(int *)(&DAT_103d3b94 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9058);
      }
    }
    sub_6fd02310 = sub_GetDllOffset_102f10f0(6,DAT_104eac44);
  }
  ExceptionList = local_10;
  return &sub_6fd02310;
}


// 0x102882a0  (ghidra: FUN_102882a0)  [gap]
uint32_t * GetPtr_sub_6fcb8e30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c2b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb8e30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96b4) {
      FUN_103023e9(&DAT_104e96b4);
      if (DAT_104e96b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf04 = *(int *)(&DAT_103d45f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96b4);
      }
    }
    sub_6fcb8e30 = sub_GetDllOffset_102f10f0(6,DAT_104eaf04);
  }
  ExceptionList = local_10;
  return &sub_6fcb8e30;
}


// 0x10288350  (ghidra: FUN_10288350)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf6e30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c2e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf6e30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9958) {
      FUN_103023e9(&DAT_104e9958);
      if (DAT_104e9958 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9704 = *(int *)(&DAT_103d30ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9958);
      }
    }
    ITEMS_ItemMode_6fcf6e30 = sub_GetDllOffset_102f10f0(6,DAT_104e9704);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf6e30;
}


// 0x10288400  (ghidra: FUN_10288400)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf7160(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c311;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf7160 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9070) {
      FUN_103023e9(&DAT_104e9070);
      if (DAT_104e9070 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea52c = *(int *)(&DAT_103d30fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9070);
      }
    }
    ITEMS_ItemMode_6fcf7160 = sub_GetDllOffset_102f10f0(6,DAT_104ea52c);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf7160;
}


// 0x102884b0  (ghidra: FUN_102884b0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd27238(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c341;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd27238 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e933c) {
      FUN_103023e9(&DAT_104e933c);
      if (DAT_104e933c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9aa8 = *(int *)(&DAT_103d4c04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e933c);
      }
    }
    p_D2Game_DAT_6fd27238 = sub_GetDllOffset_102f10f0(6,DAT_104e9aa8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd27238;
}


// 0x10288560  (ghidra: FUN_10288560)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd274a8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c371;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd274a8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9990) {
      FUN_103023e9(&DAT_104e9990);
      if (DAT_104e9990 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaeec = *(int *)(&DAT_103d321c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9990);
      }
    }
    p_D2Game_DAT_6fd274a8 = sub_GetDllOffset_102f10f0(6,DAT_104eaeec);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd274a8;
}


// 0x10288610  (ghidra: FUN_10288610)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd277a8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c3a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd277a8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e945c) {
      FUN_103023e9(&DAT_104e945c);
      if (DAT_104e945c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead60 = *(int *)(&DAT_103d3804 + iVar2 * 4);
        FUN_1030239f(&DAT_104e945c);
      }
    }
    p_D2Game_DAT_6fd277a8 = sub_GetDllOffset_102f10f0(6,DAT_104ead60);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd277a8;
}


// 0x102886c0  (ghidra: FUN_102886c0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2e550(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c3d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2e550 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e978c) {
      FUN_103023e9(&DAT_104e978c);
      if (DAT_104e978c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9224 = *(int *)(&DAT_103d35b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e978c);
      }
    }
    p_D2Game_DAT_6fd2e550 = sub_GetDllOffset_102f10f0(6,DAT_104e9224);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2e550;
}


// 0x10288770  (ghidra: FUN_10288770)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8ea48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c401;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8ea48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9e0) {
      FUN_103023e9(&DAT_104ea9e0);
      if (DAT_104ea9e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f78 = *(int *)(&DAT_103d412c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9e0);
      }
    }
    p_D2Client_DAT_6fb8ea48 = sub_GetDllOffset_102f10f0(0,DAT_104e9f78);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8ea48;
}


// 0x10288820  (ghidra: FUN_10288820)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd27338(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c431;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd27338 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9004) {
      FUN_103023e9(&DAT_104e9004);
      if (DAT_104e9004 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ae4 = *(int *)(&DAT_103d4b74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9004);
      }
    }
    p_D2Game_DAT_6fd27338 = sub_GetDllOffset_102f10f0(6,DAT_104e9ae4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd27338;
}


// 0x102888d0  (ghidra: FUN_102888d0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8e928(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c461;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8e928 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb08c) {
      FUN_103023e9(&DAT_104eb08c);
      if (DAT_104eb08c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3c8 = *(int *)(&DAT_103d33e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb08c);
      }
    }
    p_D2Client_DAT_6fb8e928 = sub_GetDllOffset_102f10f0(0,DAT_104ea3c8);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8e928;
}


// 0x10288980  (ghidra: FUN_10288980)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba5210(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c491;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba5210 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6e0) {
      FUN_103023e9(&DAT_104ea6e0);
      if (DAT_104ea6e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7f0 = *(int *)(&DAT_103d3874 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6e0);
      }
    }
    p_D2Client_DAT_6fba5210 = sub_GetDllOffset_102f10f0(0,DAT_104ea7f0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba5210;
}


// 0x10288a30  (ghidra: FUN_10288a30)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8de60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c4c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8de60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eace0) {
      FUN_103023e9(&DAT_104eace0);
      if (DAT_104eace0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb018 = *(int *)(&DAT_103d4284 + iVar2 * 4);
        FUN_1030239f(&DAT_104eace0);
      }
    }
    p_D2Client_DAT_6fb8de60 = sub_GetDllOffset_102f10f0(0,DAT_104eb018);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8de60;
}


// 0x10288ae0  (ghidra: FUN_10288ae0)  [gap]
uint32_t * GetPtr_D2Net_DAT_6fbfa900(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c4f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Net_DAT_6fbfa900 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9118) {
      FUN_103023e9(&DAT_104e9118);
      if (DAT_104e9118 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95cc = *(int *)(&DAT_103d3a34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9118);
      }
    }
    p_D2Net_DAT_6fbfa900 = sub_GetDllOffset_102f10f0(5,DAT_104e95cc);
  }
  ExceptionList = local_10;
  return &p_D2Net_DAT_6fbfa900;
}


// 0x10288b90  (ghidra: FUN_10288b90)  [gap]
uint32_t * GetPtr_D2Net_DAT_6fbfabd8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c521;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Net_DAT_6fbfabd8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6d0) {
      FUN_103023e9(&DAT_104ea6d0);
      if (DAT_104ea6d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90dc = *(int *)(&DAT_103d303c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6d0);
      }
    }
    p_D2Net_DAT_6fbfabd8 = sub_GetDllOffset_102f10f0(5,DAT_104e90dc);
  }
  ExceptionList = local_10;
  return &p_D2Net_DAT_6fbfabd8;
}


// 0x10288c40  (ghidra: FUN_10288c40)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a078(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c551;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a078 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9734) {
      FUN_103023e9(&DAT_104e9734);
      if (DAT_104e9734 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaba8 = *(int *)(&DAT_103d3724 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9734);
      }
    }
    p_D2Game_DAT_6fd1a078 = sub_GetDllOffset_102f10f0(6,DAT_104eaba8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a078;
}


// 0x10288cf0  (ghidra: FUN_10288cf0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbba608(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c581;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbba608 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9afc) {
      FUN_103023e9(&DAT_104e9afc);
      if (DAT_104e9afc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fb0 = *(int *)(&DAT_103d335c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9afc);
      }
    }
    p_D2Client_DAT_6fbba608 = sub_GetDllOffset_102f10f0(0,DAT_104e8fb0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbba608;
}


// 0x10288da0  (ghidra: FUN_10288da0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbb9a08(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c5b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbb9a08 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eada0) {
      FUN_103023e9(&DAT_104eada0);
      if (DAT_104eada0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadf0 = *(int *)(&DAT_103d477c + iVar2 * 4);
        FUN_1030239f(&DAT_104eada0);
      }
    }
    p_D2Client_DAT_6fbb9a08 = sub_GetDllOffset_102f10f0(0,DAT_104eadf0);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbb9a08;
}


// 0x10288e50  (ghidra: FUN_10288e50)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2e788(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c5e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2e788 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e971c) {
      FUN_103023e9(&DAT_104e971c);
      if (DAT_104e971c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa0c = *(int *)(&DAT_103d4cf4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e971c);
      }
    }
    p_D2Game_DAT_6fd2e788 = sub_GetDllOffset_102f10f0(6,DAT_104eaa0c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2e788;
}


// 0x10288f00  (ghidra: FUN_10288f00)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2da48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c611;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2da48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2a4) {
      FUN_103023e9(&DAT_104ea2a4);
      if (DAT_104ea2a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d28 = *(int *)(&DAT_103d3dfc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2a4);
      }
    }
    p_D2Game_DAT_6fd2da48 = sub_GetDllOffset_102f10f0(6,DAT_104e9d28);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2da48;
}


// 0x10288fb0  (ghidra: FUN_10288fb0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2db68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c641;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2db68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea320) {
      FUN_103023e9(&DAT_104ea320);
      if (DAT_104ea320 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf00 = *(int *)(&DAT_103d361c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea320);
      }
    }
    p_D2Game_DAT_6fd2db68 = sub_GetDllOffset_102f10f0(6,DAT_104eaf00);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2db68;
}


// 0x10289060  (ghidra: FUN_10289060)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2d970(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c671;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2d970 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ce4) {
      FUN_103023e9(&DAT_104e9ce4);
      if (DAT_104e9ce4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9050 = *(int *)(&DAT_103d346c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ce4);
      }
    }
    p_D2Game_DAT_6fd2d970 = sub_GetDllOffset_102f10f0(6,DAT_104e9050);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2d970;
}


// 0x10289110  (ghidra: FUN_10289110)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8da10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c6a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8da10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9898) {
      FUN_103023e9(&DAT_104e9898);
      if (DAT_104e9898 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf74 = *(int *)(&DAT_103d488c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9898);
      }
    }
    p_D2Client_DAT_6fb8da10 = sub_GetDllOffset_102f10f0(0,DAT_104eaf74);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8da10;
}


// 0x102891c0  (ghidra: FUN_102891c0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8d8a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c6d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8d8a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac6c) {
      FUN_103023e9(&DAT_104eac6c);
      if (DAT_104eac6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea398 = *(int *)(&DAT_103d40cc + iVar2 * 4);
        FUN_1030239f(&DAT_104eac6c);
      }
    }
    p_D2Client_DAT_6fb8d8a0 = sub_GetDllOffset_102f10f0(0,DAT_104ea398);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8d8a0;
}


// 0x10289270  (ghidra: FUN_10289270)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb8d810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c701;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb8d810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea490) {
      FUN_103023e9(&DAT_104ea490);
      if (DAT_104ea490 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fbc = *(int *)(&DAT_103d36cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea490);
      }
    }
    p_D2Client_DAT_6fb8d810 = sub_GetDllOffset_102f10f0(0,DAT_104e8fbc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb8d810;
}


// 0x10289320  (ghidra: FUN_10289320)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2d8bc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c731;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2d8bc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea478) {
      FUN_103023e9(&DAT_104ea478);
      if (DAT_104ea478 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f1c = *(int *)(&DAT_103d50d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea478);
      }
    }
    p_D2Game_DAT_6fd2d8bc = sub_GetDllOffset_102f10f0(6,DAT_104e9f1c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2d8bc;
}


// 0x102893d0  (ghidra: FUN_102893d0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c761;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9980) {
      FUN_103023e9(&DAT_104e9980);
      if (DAT_104e9980 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97d0 = *(int *)(&DAT_103d4694 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9980);
      }
    }
    p_D2Game_DAT_6fd31c30 = sub_GetDllOffset_102f10f0(6,DAT_104e97d0);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c30;
}


// 0x10289480  (ghidra: FUN_10289480)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c3c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c791;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c3c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93c4) {
      FUN_103023e9(&DAT_104e93c4);
      if (DAT_104e93c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf84 = *(int *)(&DAT_103d3434 + iVar2 * 4);
        FUN_1030239f(&DAT_104e93c4);
      }
    }
    p_D2Game_DAT_6fd31c3c = sub_GetDllOffset_102f10f0(6,DAT_104eaf84);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c3c;
}


// 0x10289530  (ghidra: FUN_10289530)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a3f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c7c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a3f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94c4) {
      FUN_103023e9(&DAT_104e94c4);
      if (DAT_104e94c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9de8 = *(int *)(&DAT_103d3454 + iVar2 * 4);
        FUN_1030239f(&DAT_104e94c4);
      }
    }
    p_D2Game_DAT_6fd1a3f8 = sub_GetDllOffset_102f10f0(6,DAT_104e9de8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a3f8;
}


// 0x102895e0  (ghidra: FUN_102895e0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2e050(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c7f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2e050 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9950) {
      FUN_103023e9(&DAT_104e9950);
      if (DAT_104e9950 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0e4 = *(int *)(&DAT_103d4014 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9950);
      }
    }
    p_D2Game_DAT_6fd2e050 = sub_GetDllOffset_102f10f0(6,DAT_104eb0e4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2e050;
}


// 0x10289690  (ghidra: FUN_10289690)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd27bb8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c821;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd27bb8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e943c) {
      FUN_103023e9(&DAT_104e943c);
      if (DAT_104e943c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea494 = *(int *)(&DAT_103d368c + iVar2 * 4);
        FUN_1030239f(&DAT_104e943c);
      }
    }
    p_D2Game_DAT_6fd27bb8 = sub_GetDllOffset_102f10f0(6,DAT_104ea494);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd27bb8;
}


// 0x10289740  (ghidra: FUN_10289740)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a5f8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c851;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a5f8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea910) {
      FUN_103023e9(&DAT_104ea910);
      if (DAT_104ea910 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea814 = *(int *)(&DAT_103d45bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea910);
      }
    }
    p_D2Game_DAT_6fd1a5f8 = sub_GetDllOffset_102f10f0(6,DAT_104ea814);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a5f8;
}


// 0x102897f0  (ghidra: FUN_102897f0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2f850(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c881;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2f850 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac20) {
      FUN_103023e9(&DAT_104eac20);
      if (DAT_104eac20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b14 = *(int *)(&DAT_103d39c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac20);
      }
    }
    p_D2Game_DAT_6fd2f850 = sub_GetDllOffset_102f10f0(6,DAT_104e9b14);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2f850;
}


// 0x102898a0  (ghidra: FUN_102898a0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd26f0c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c8b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd26f0c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac34) {
      FUN_103023e9(&DAT_104eac34);
      if (DAT_104eac34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8f0 = *(int *)(&DAT_103d4f0c + iVar2 * 4);
        FUN_1030239f(&DAT_104eac34);
      }
    }
    p_D2Game_DAT_6fd26f0c = sub_GetDllOffset_102f10f0(6,DAT_104ea8f0);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd26f0c;
}


// 0x10289950  (ghidra: FUN_10289950)  [gap]
uint32_t * GetPtr_D2Common_DAT_6fdeb0c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c8e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Common_DAT_6fdeb0c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e3c) {
      FUN_103023e9(&DAT_104e9e3c);
      if (DAT_104e9e3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92f4 = *(int *)(&DAT_103d367c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e3c);
      }
    }
    p_D2Common_DAT_6fdeb0c8 = sub_GetDllOffset_102f10f0(1,DAT_104e92f4);
  }
  ExceptionList = local_10;
  return &p_D2Common_DAT_6fdeb0c8;
}


// 0x10289a00  (ghidra: FUN_10289a00)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2f448(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c911;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2f448 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae2c) {
      FUN_103023e9(&DAT_104eae2c);
      if (DAT_104eae2c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9844 = *(int *)(&DAT_103d40f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae2c);
      }
    }
    p_D2Game_DAT_6fd2f448 = sub_GetDllOffset_102f10f0(6,DAT_104e9844);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2f448;
}


// 0x10289ab0  (ghidra: FUN_10289ab0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa7b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c941;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfa7b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead34) {
      FUN_103023e9(&DAT_104ead34);
      if (DAT_104ead34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea234 = *(int *)(&DAT_103d3adc + iVar2 * 4);
        FUN_1030239f(&DAT_104ead34);
      }
    }
    UNIT_SUnitDmg_6fcfa7b0 = sub_GetDllOffset_102f10f0(6,DAT_104ea234);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfa7b0;
}


// 0x10289b60  (ghidra: FUN_10289b60)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd19f68(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c971;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd19f68 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9988) {
      FUN_103023e9(&DAT_104e9988);
      if (DAT_104e9988 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0c4 = *(int *)(&DAT_103d3edc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9988);
      }
    }
    p_D2Game_DAT_6fd19f68 = sub_GetDllOffset_102f10f0(6,DAT_104ea0c4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd19f68;
}


// 0x10289c10  (ghidra: FUN_10289c10)  [gap]
uint32_t * GetPtr_sub_6fc5f320(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c9a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5f320 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacc8) {
      FUN_103023e9(&DAT_104eacc8);
      if (DAT_104eacc8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e988c = *(int *)(&DAT_103d4f2c + iVar2 * 4);
        FUN_1030239f(&DAT_104eacc8);
      }
    }
    sub_6fc5f320 = sub_GetDllOffset_102f10f0(6,DAT_104e988c);
  }
  ExceptionList = local_10;
  return &sub_6fc5f320;
}


// 0x10289cc0  [gap]
int sub_6fce32c0(void)

{
  int iVar1;
  
  if (p_sub_6fce32c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fce32c0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7898 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fce32c0)();
  return iVar1;
}


// 0x10289cf0  [gap]
int sub_6fc8abb0(void)

{
  int iVar1;
  
  if (p_sub_6fc8abb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc8abb0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2fc4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc8abb0)();
  return iVar1;
}


// 0x10289d20  [gap]
int sub_6fc8ace0(void)

{
  int iVar1;
  
  if (p_sub_6fc8ace0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc8ace0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7498 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc8ace0)();
  return iVar1;
}


// 0x10289d50  [gap]
int sub_6fc8ac30(void)

{
  int iVar1;
  
  if (p_sub_6fc8ac30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc8ac30 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7dc8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc8ac30)();
  return iVar1;
}


// 0x10289d80  [gap]
int __fastcall PLAYER_PlrMsg_6fcee520(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (p_PLAYER_PlrMsg_6fcee520 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrMsg_6fcee520 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7878 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_PLAYER_PlrMsg_6fcee520)();
  return iVar1;
}


// 0x10289db0  [gap]
int PLAYER_PlrMsg_6fcedbb0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_PLAYER_PlrMsg_6fcedbb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrMsg_6fcedbb0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6fb0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_PLAYER_PlrMsg_6fcedbb0)();
  return iVar1;
}


// 0x10289de0  [gap]
int sub_6fcf08b0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf08b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf08b0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c69f8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf08b0)();
  return iVar1;
}


// 0x10289e10  [gap]
int sub_6fcef380(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcef380 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcef380 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2ddc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcef380)();
  return iVar1;
}


// 0x10289e40  [gap]
int sub_6fcf1370(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf1370 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1370 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7df8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1370)();
  return iVar1;
}


// 0x10289e70  [gap]
int sub_6fceee60(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fceee60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fceee60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c67f8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fceee60)();
  return iVar1;
}


// 0x10289ea0  [gap]
int sub_6fcef2f0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcef2f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcef2f0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2aa4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcef2f0)();
  return iVar1;
}


// 0x10289ed0  [gap]
int sub_6fcf12e0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf12e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf12e0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6da0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf12e0)();
  return iVar1;
}


// 0x10289f00  [gap]
int sub_6fcf1200(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf1200 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1200 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c71f8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1200)();
  return iVar1;
}


// 0x10289f30  [gap]
int sub_6fcf1140(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf1140 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1140 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7440 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1140)();
  return iVar1;
}


// 0x10289f60  [gap]
int sub_6fcf1010(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf1010 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1010 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7100 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1010)();
  return iVar1;
}


// 0x10289f90  [gap]
int sub_6fceebd0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fceebd0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fceebd0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6e28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fceebd0)();
  return iVar1;
}


// 0x10289fc0  [gap]
int sub_6fcef510(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcef510 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcef510 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7750 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10289fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcef510)();
  return iVar1;
}


// 0x10289ff0  [gap]
int sub_6fcf0bc0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf0bc0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf0bc0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c72f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf0bc0)();
  return iVar1;
}


// 0x1028a020  [gap]
int sub_6fcef570(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcef570 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcef570 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c66c8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcef570)();
  return iVar1;
}


// 0x1028a050  [gap]
int sub_6fcf0e90(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcf0e90 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf0e90 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c67f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf0e90)();
  return iVar1;
}


// 0x1028a080  [gap]
void __fastcall sub_6fb5dd30(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb5dd30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb5dd30 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6e60 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb5dd30)();
  return;
}


// 0x1028a0b0  (ghidra: FUN_1028a0b0)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fba20c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030c9d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fba20c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabf4) {
      FUN_103023e9(&DAT_104eabf4);
      if (DAT_104eabf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea31c = *(int *)(&DAT_103d40fc + iVar2 * 4);
        FUN_1030239f(&DAT_104eabf4);
      }
    }
    p_D2Client_DAT_6fba20c8 = sub_GetDllOffset_102f10f0(0,DAT_104ea31c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fba20c8;
}


// 0x1028a160  (ghidra: FUN_1028a160)  [gap]
uint32_t * GetPtr_UNIT_PlrSkills_6fb22610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ca01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_PlrSkills_6fb22610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bd8) {
      FUN_103023e9(&DAT_104e9bd8);
      if (DAT_104e9bd8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9104 = *(int *)(&DAT_103d391c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bd8);
      }
    }
    UNIT_PlrSkills_6fb22610 = sub_GetDllOffset_102f10f0(0,DAT_104e9104);
  }
  ExceptionList = local_10;
  return &UNIT_PlrSkills_6fb22610;
}


// 0x1028a210  (ghidra: FUN_1028a210)  [gap]
uint32_t * GetPtr_UNIT_PlrSkills_6fb22530(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ca31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_PlrSkills_6fb22530 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea24c) {
      FUN_103023e9(&DAT_104ea24c);
      if (DAT_104ea24c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea380 = *(int *)(&DAT_103d36b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea24c);
      }
    }
    UNIT_PlrSkills_6fb22530 = sub_GetDllOffset_102f10f0(0,DAT_104ea380);
  }
  ExceptionList = local_10;
  return &UNIT_PlrSkills_6fb22530;
}


// 0x1028a2c0  (ghidra: FUN_1028a2c0)  [gap]
uint32_t * GetPtr_ENGINE_Gfx_6fb1cb30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ca61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ENGINE_Gfx_6fb1cb30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb064) {
      FUN_103023e9(&DAT_104eb064);
      if (DAT_104eb064 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafa0 = *(int *)(&DAT_103d341c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb064);
      }
    }
    ENGINE_Gfx_6fb1cb30 = sub_GetDllOffset_102f10f0(0,DAT_104eafa0);
  }
  ExceptionList = local_10;
  return &ENGINE_Gfx_6fb1cb30;
}


// 0x1028a370  [gap]
void __fastcall sub_6fb03c30(int param_1)

{
  int iVar1;
  
  if (p_sub_6fb03c30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb03c30 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6500 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb03c30)();
  return;
}


// 0x1028a3a0  [gap]
int * UNIT_CUnit_6fb57780(uint *param_1,ushort param_2,ushort param_3,int param_4,
                         uint32_t param_s5,uint32_t param_s6)

{
  int iVar1;
  int *piVar2;
  
  if (p_UNIT_CUnit_6fb57780 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_CUnit_6fb57780 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6ea8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_UNIT_CUnit_6fb57780)();
  return piVar2;
}


// 0x1028a3d0  [gap]
void sub_6fb04880(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fb04880 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb04880 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c6c78 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb04880)();
  return;
}


// 0x1028a400  [gap]
void sub_6fb04780(void *param_1)

{
  int iVar1;
  
  if (p_sub_6fb04780 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fb04780 = sub_GetDllOffset_102f10f0(0,*(int *)(&DAT_103c7268 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fb04780)();
  return;
}


// 0x1028a430  (ghidra: FUN_1028a430)  [gap]
uint32_t * GetPtr_sub_6fb04280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ca91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fb04280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae20) {
      FUN_103023e9(&DAT_104eae20);
      if (DAT_104eae20 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9df8 = *(int *)(&DAT_103d3f4c + iVar2 * 4);
        FUN_1030239f(&DAT_104eae20);
      }
    }
    sub_6fb04280 = sub_GetDllOffset_102f10f0(0,DAT_104e9df8);
  }
  ExceptionList = local_10;
  return &sub_6fb04280;
}


// 0x1028a4e0  (ghidra: FUN_1028a4e0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd22ab0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cac1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd22ab0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab64) {
      FUN_103023e9(&DAT_104eab64);
      if (DAT_104eab64 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99b4 = *(int *)(&DAT_103d34ec + iVar2 * 4);
        FUN_1030239f(&DAT_104eab64);
      }
    }
    p_D2Game_DAT_6fd22ab0 = sub_GetDllOffset_102f10f0(6,DAT_104e99b4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd22ab0;
}


// 0x1028a590  (ghidra: FUN_1028a590)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1c3e8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030caf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1c3e8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9324) {
      FUN_103023e9(&DAT_104e9324);
      if (DAT_104e9324 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafac = *(int *)(&DAT_103d49fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9324);
      }
    }
    p_D2Game_DAT_6fd1c3e8 = sub_GetDllOffset_102f10f0(6,DAT_104eafac);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1c3e8;
}


// 0x1028a640  (ghidra: FUN_1028a640)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fb869c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cb21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fb869c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c00) {
      FUN_103023e9(&DAT_104e9c00);
      if (DAT_104e9c00 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90cc = *(int *)(&DAT_103d47c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c00);
      }
    }
    p_D2Client_DAT_6fb869c4 = sub_GetDllOffset_102f10f0(0,DAT_104e90cc);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fb869c4;
}


// 0x1028a6f0  (ghidra: FUN_1028a6f0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a3dc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cb51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a3dc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea728) {
      FUN_103023e9(&DAT_104ea728);
      if (DAT_104ea728 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab8c = *(int *)(&DAT_103d4e9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea728);
      }
    }
    p_D2Game_DAT_6fd1a3dc = sub_GetDllOffset_102f10f0(6,DAT_104eab8c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a3dc;
}


// 0x1028a7a0  (ghidra: FUN_1028a7a0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a01c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cb81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a01c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac58) {
      FUN_103023e9(&DAT_104eac58);
      if (DAT_104eac58 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9610 = *(int *)(&DAT_103d37c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac58);
      }
    }
    p_D2Game_DAT_6fd1a01c = sub_GetDllOffset_102f10f0(6,DAT_104e9610);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a01c;
}


// 0x1028a850  (ghidra: FUN_1028a850)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1a048(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cbb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1a048 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa38) {
      FUN_103023e9(&DAT_104eaa38);
      if (DAT_104eaa38 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91c8 = *(int *)(&DAT_103d3474 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa38);
      }
    }
    p_D2Game_DAT_6fd1a048 = sub_GetDllOffset_102f10f0(6,DAT_104e91c8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1a048;
}


// 0x1028a900  [gap]
uint D2Common_10066(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10066 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10066 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c71f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10066)();
  return uVar2;
}


// 0x1028a930  [gap]
uint D2Common_10399(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10399 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10399 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7e90 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10399)();
  return uVar2;
}


// 0x1028a960  [gap]
void D2Common_10563(int param_1)

{
  int iVar1;
  
  if (p_D2Common_10563 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10563 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7b68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10563)();
  return;
}


// 0x1028a990  [gap]
void D2Common_10943(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_D2Common_10943 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10943 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7398 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Common_10943)();
  return;
}


// 0x1028a9c0  [gap]
uint __fastcall D2Common_10241(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_10241 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10241 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6b10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028a9e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_10241)();
  return uVar2;
}


// 0x1028a9f0  [gap]
int * D2Common_10849(uint param_1,char *param_2,uint param_3,int *param_4,uint32_t param_s5)

{
  int iVar1;
  int *piVar2;
  
  if (p_D2Common_10849 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10849 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6620 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028aa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_D2Common_10849)();
  return piVar2;
}


// 0x1028aa20  (ghidra: FUN_1028aa20)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4a850(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cbe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4a850 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead64) {
      FUN_103023e9(&DAT_104ead64);
      if (DAT_104ead64 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea824 = *(int *)(&DAT_103d4584 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead64);
      }
    }
    GAME_Game_6fc4a850 = sub_GetDllOffset_102f10f0(6,DAT_104ea824);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4a850;
}


// 0x1028aad0  (ghidra: FUN_1028aad0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4c2d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cc11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4c2d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8e8) {
      FUN_103023e9(&DAT_104ea8e8);
      if (DAT_104ea8e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadc8 = *(int *)(&DAT_103d4fb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8e8);
      }
    }
    GAME_Game_6fc4c2d0 = sub_GetDllOffset_102f10f0(6,DAT_104eadc8);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4c2d0;
}


// 0x1028ab80  (ghidra: FUN_1028ab80)  [gap]
uint32_t * GetPtr_GAME_CCmd_6fcead60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cc41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_CCmd_6fcead60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95b0) {
      FUN_103023e9(&DAT_104e95b0);
      if (DAT_104e95b0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92b0 = *(int *)(&DAT_103d4214 + iVar2 * 4);
        FUN_1030239f(&DAT_104e95b0);
      }
    }
    GAME_CCmd_6fcead60 = sub_GetDllOffset_102f10f0(6,DAT_104e92b0);
  }
  ExceptionList = local_10;
  return &GAME_CCmd_6fcead60;
}


// 0x1028ac30  (ghidra: FUN_1028ac30)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcac4b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cc71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcac4b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae08) {
      FUN_103023e9(&DAT_104eae08);
      if (DAT_104eae08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5f0 = *(int *)(&DAT_103d3b54 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae08);
      }
    }
    GAME_SCmd_6fcac4b0 = sub_GetDllOffset_102f10f0(6,DAT_104ea5f0);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcac4b0;
}


// 0x1028ace0  (ghidra: FUN_1028ace0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4a740(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cca1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4a740 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea100) {
      FUN_103023e9(&DAT_104ea100);
      if (DAT_104ea100 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90d8 = *(int *)(&DAT_103d4714 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea100);
      }
    }
    GAME_Game_6fc4a740 = sub_GetDllOffset_102f10f0(6,DAT_104e90d8);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4a740;
}


// 0x1028ad90  (ghidra: FUN_1028ad90)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4bb10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ccd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4bb10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96b8) {
      FUN_103023e9(&DAT_104e96b8);
      if (DAT_104e96b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9580 = *(int *)(&DAT_103d3e24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96b8);
      }
    }
    GAME_Game_6fc4bb10 = sub_GetDllOffset_102f10f0(6,DAT_104e9580);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4bb10;
}


// 0x1028ae40  (ghidra: FUN_1028ae40)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc69930(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cd01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc69930 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e986c) {
      FUN_103023e9(&DAT_104e986c);
      if (DAT_104e986c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9db0 = *(int *)(&DAT_103d50f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e986c);
      }
    }
    GAME_Clients_6fc69930 = sub_GetDllOffset_102f10f0(6,DAT_104e9db0);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc69930;
}


// 0x1028aef0  [gap]
void GAME_Game_6fc4dc70(int param_1,uint32_t param_s2)

{
  int iVar1;
  
  if (p_GAME_Game_6fc4dc70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_GAME_Game_6fc4dc70 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7908 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028af16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_GAME_Game_6fc4dc70)();
  return;
}


// 0x1028af20  (ghidra: FUN_1028af20)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4ba10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cd31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4ba10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f14) {
      FUN_103023e9(&DAT_104e9f14);
      if (DAT_104e9f14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9848 = *(int *)(&DAT_103d420c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f14);
      }
    }
    GAME_Game_6fc4ba10 = sub_GetDllOffset_102f10f0(6,DAT_104e9848);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4ba10;
}


// 0x1028afd0  (ghidra: FUN_1028afd0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4e360(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cd61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4e360 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cfc) {
      FUN_103023e9(&DAT_104e9cfc);
      if (DAT_104e9cfc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf4c = *(int *)(&DAT_103d4c64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cfc);
      }
    }
    GAME_Game_6fc4e360 = sub_GetDllOffset_102f10f0(6,DAT_104eaf4c);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4e360;
}


// 0x1028b080  (ghidra: FUN_1028b080)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4aac0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cd91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4aac0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9528) {
      FUN_103023e9(&DAT_104e9528);
      if (DAT_104e9528 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae98 = *(int *)(&DAT_103d4a54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9528);
      }
    }
    GAME_Game_6fc4aac0 = sub_GetDllOffset_102f10f0(6,DAT_104eae98);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4aac0;
}


// 0x1028b130  (ghidra: FUN_1028b130)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6a780(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cdc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6a780 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea130) {
      FUN_103023e9(&DAT_104ea130);
      if (DAT_104ea130 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ea4 = *(int *)(&DAT_103d35bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea130);
      }
    }
    GAME_Clients_6fc6a780 = sub_GetDllOffset_102f10f0(6,DAT_104e9ea4);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6a780;
}


// 0x1028b1e0  (ghidra: FUN_1028b1e0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4a6e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cdf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4a6e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea1bc) {
      FUN_103023e9(&DAT_104ea1bc);
      if (DAT_104ea1bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6b8 = *(int *)(&DAT_103d437c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea1bc);
      }
    }
    GAME_Game_6fc4a6e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea6b8);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4a6e0;
}


// 0x1028b290  (ghidra: FUN_1028b290)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4d7e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ce21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4d7e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e919c) {
      FUN_103023e9(&DAT_104e919c);
      if (DAT_104e919c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea290 = *(int *)(&DAT_103d360c + iVar2 * 4);
        FUN_1030239f(&DAT_104e919c);
      }
    }
    GAME_Game_6fc4d7e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea290);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4d7e0;
}


// 0x1028b340  (ghidra: FUN_1028b340)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6a0a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ce51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6a0a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fcc) {
      FUN_103023e9(&DAT_104e8fcc);
      if (DAT_104e8fcc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab88 = *(int *)(&DAT_103d487c + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fcc);
      }
    }
    GAME_Clients_6fc6a0a0 = sub_GetDllOffset_102f10f0(6,DAT_104eab88);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6a0a0;
}


// 0x1028b3f0  (ghidra: FUN_1028b3f0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00110(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ce81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fd00110 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafc0) {
      FUN_103023e9(&DAT_104eafc0);
      if (DAT_104eafc0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea564 = *(int *)(&DAT_103d33b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eafc0);
      }
    }
    UNIT_SUnitDmg_6fd00110 = sub_GetDllOffset_102f10f0(6,DAT_104ea564);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fd00110;
}


// 0x1028b4a0  [gap]
void __fastcall D2Game_10049(int param_1)

{
  int iVar1;
  
  if (p_D2Game_10049 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Game_10049 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6668 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028b4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Game_10049)();
  return;
}


// 0x1028b4d0  [gap]
uint __fastcall D2Game_10015(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Game_10015 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Game_10015 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7200 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028b4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Game_10015)();
  return uVar2;
}


// 0x1028b500  [gap]
uint GAME_Game_6fc4a220(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_GAME_Game_6fc4a220 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_GAME_Game_6fc4a220 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c65a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028b526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_GAME_Game_6fc4a220)();
  return uVar2;
}


// 0x1028b530  (ghidra: FUN_1028b530)  [gap]
uint32_t * GetPtr_sub_6fc22060(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ceb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc22060 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97f8) {
      FUN_103023e9(&DAT_104e97f8);
      if (DAT_104e97f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9444 = *(int *)(&DAT_103d4324 + iVar2 * 4);
        FUN_1030239f(&DAT_104e97f8);
      }
    }
    sub_6fc22060 = sub_GetDllOffset_102f10f0(6,DAT_104e9444);
  }
  ExceptionList = local_10;
  return &sub_6fc22060;
}


// 0x1028b5e0  (ghidra: FUN_1028b5e0)  [gap]
uint32_t * GetPtr_sub_6fc22090(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cee1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc22090 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e961c) {
      FUN_103023e9(&DAT_104e961c);
      if (DAT_104e961c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9abc = *(int *)(&DAT_103d4b6c + iVar2 * 4);
        FUN_1030239f(&DAT_104e961c);
      }
    }
    sub_6fc22090 = sub_GetDllOffset_102f10f0(6,DAT_104e9abc);
  }
  ExceptionList = local_10;
  return &sub_6fc22090;
}


// 0x1028b690  (ghidra: FUN_1028b690)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4bc90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cf11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4bc90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaed0) {
      FUN_103023e9(&DAT_104eaed0);
      if (DAT_104eaed0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1f8 = *(int *)(&DAT_103d3d64 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaed0);
      }
    }
    GAME_Game_6fc4bc90 = sub_GetDllOffset_102f10f0(6,DAT_104ea1f8);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4bc90;
}


// 0x1028b740  (ghidra: FUN_1028b740)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4a900(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cf41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4a900 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea17c) {
      FUN_103023e9(&DAT_104ea17c);
      if (DAT_104ea17c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaacc = *(int *)(&DAT_103d3584 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea17c);
      }
    }
    GAME_Game_6fc4a900 = sub_GetDllOffset_102f10f0(6,DAT_104eaacc);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4a900;
}


// 0x1028b7f0  (ghidra: FUN_1028b7f0)  [gap]
uint32_t * GetPtr_GAME_Event_6fcae630(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cf71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Event_6fcae630 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91b8) {
      FUN_103023e9(&DAT_104e91b8);
      if (DAT_104e91b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea370 = *(int *)(&DAT_103d4eec + iVar2 * 4);
        FUN_1030239f(&DAT_104e91b8);
      }
    }
    GAME_Event_6fcae630 = sub_GetDllOffset_102f10f0(6,DAT_104ea370);
  }
  ExceptionList = local_10;
  return &GAME_Event_6fcae630;
}


// 0x1028b8a0  (ghidra: FUN_1028b8a0)  [gap]
uint32_t * GetPtr_GAME_Arena_6fcd2560(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cfa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Arena_6fcd2560 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ad0) {
      FUN_103023e9(&DAT_104e9ad0);
      if (DAT_104e9ad0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95f0 = *(int *)(&DAT_103d323c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ad0);
      }
    }
    GAME_Arena_6fcd2560 = sub_GetDllOffset_102f10f0(6,DAT_104e95f0);
  }
  ExceptionList = local_10;
  return &GAME_Arena_6fcd2560;
}


// 0x1028b950  (ghidra: FUN_1028b950)  [gap]
uint32_t * GetPtr_UNIT_Party_6fcbbe40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030cfd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Party_6fcbbe40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2a8) {
      FUN_103023e9(&DAT_104ea2a8);
      if (DAT_104ea2a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea738 = *(int *)(&DAT_103d4a34 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2a8);
      }
    }
    UNIT_Party_6fcbbe40 = sub_GetDllOffset_102f10f0(6,DAT_104ea738);
  }
  ExceptionList = local_10;
  return &UNIT_Party_6fcbbe40;
}


// 0x1028ba00  (ghidra: FUN_1028ba00)  [gap]
uint32_t * GetPtr_MONSTER_MonsterRegion_6fceacc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d001;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (MONSTER_MonsterRegion_6fceacc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f68) {
      FUN_103023e9(&DAT_104e9f68);
      if (DAT_104e9f68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c0c = *(int *)(&DAT_103d4444 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f68);
      }
    }
    MONSTER_MonsterRegion_6fceacc0 = sub_GetDllOffset_102f10f0(6,DAT_104e9c0c);
  }
  ExceptionList = local_10;
  return &MONSTER_MonsterRegion_6fceacc0;
}


// 0x1028bab0  [gap]
uint OBJECTS_objrgn_6fc2b9a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_OBJECTS_objrgn_6fc2b9a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_OBJECTS_objrgn_6fc2b9a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7208 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028bad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_OBJECTS_objrgn_6fc2b9a0)();
  return uVar2;
}


// 0x1028bae0  [gap]
void UNIT_sunitproxy_6fcafbe0(int param_1)

{
  int iVar1;
  
  if (p_UNIT_sunitproxy_6fcafbe0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_sunitproxy_6fcafbe0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7348 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028bb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_sunitproxy_6fcafbe0)();
  return;
}


// 0x1028bb10  [gap]
void sub_6fc548a0(int param_1)

{
  int iVar1;
  
  if (p_sub_6fc548a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc548a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7930 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028bb36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc548a0)();
  return;
}


// 0x1028bb40  [gap]
void GAME_Game_6fc4a2d0(uint param_1,ushort param_2)

{
  int iVar1;
  
  if (p_GAME_Game_6fc4a2d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_GAME_Game_6fc4a2d0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7080 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028bb66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_GAME_Game_6fc4a2d0)();
  return;
}


// 0x1028bb70  (ghidra: FUN_1028bb70)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4ac60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d031;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4ac60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea458) {
      FUN_103023e9(&DAT_104ea458);
      if (DAT_104ea458 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae30 = *(int *)(&DAT_103d3944 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea458);
      }
    }
    GAME_Game_6fc4ac60 = sub_GetDllOffset_102f10f0(6,DAT_104eae30);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4ac60;
}


// 0x1028bc20  (ghidra: FUN_1028bc20)  [gap]
uint32_t * GetPtr_sub_6fccf610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d061;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fccf610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93fc) {
      FUN_103023e9(&DAT_104e93fc);
      if (DAT_104e93fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b64 = *(int *)(&DAT_103d3c6c + iVar2 * 4);
        FUN_1030239f(&DAT_104e93fc);
      }
    }
    sub_6fccf610 = sub_GetDllOffset_102f10f0(6,DAT_104e9b64);
  }
  ExceptionList = local_10;
  return &sub_6fccf610;
}


// 0x1028bcd0  (ghidra: FUN_1028bcd0)  [gap]
uint32_t * GetPtr_sub_6fab1260(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d091;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fab1260 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead80) {
      FUN_103023e9(&DAT_104ead80);
      if (DAT_104ead80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3cc = *(int *)(&DAT_103d3ca4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead80);
      }
    }
    sub_6fab1260 = sub_GetDllOffset_102f10f0(0,DAT_104ea3cc);
  }
  ExceptionList = local_10;
  return &sub_6fab1260;
}


// 0x1028bd80  (ghidra: FUN_1028bd80)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4570(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d0c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf4570 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6b4) {
      FUN_103023e9(&DAT_104ea6b4);
      if (DAT_104ea6b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb050 = *(int *)(&DAT_103d36dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6b4);
      }
    }
    ITEMS_ItemMode_6fcf4570 = sub_GetDllOffset_102f10f0(6,DAT_104eb050);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf4570;
}


// 0x1028be30  (ghidra: FUN_1028be30)  [gap]
uint32_t * GetPtr_sub_6fc32df0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d0f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc32df0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f10) {
      FUN_103023e9(&DAT_104e9f10);
      if (DAT_104e9f10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94e0 = *(int *)(&DAT_103d3ad4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f10);
      }
    }
    sub_6fc32df0 = sub_GetDllOffset_102f10f0(6,DAT_104e94e0);
  }
  ExceptionList = local_10;
  return &sub_6fc32df0;
}


// 0x1028bee0  (ghidra: FUN_1028bee0)  [gap]
uint32_t * GetPtr_sub_6fc21670(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d121;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21670 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea774) {
      FUN_103023e9(&DAT_104ea774);
      if (DAT_104ea774 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea158 = *(int *)(&DAT_103d4a0c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea774);
      }
    }
    sub_6fc21670 = sub_GetDllOffset_102f10f0(6,DAT_104ea158);
  }
  ExceptionList = local_10;
  return &sub_6fc21670;
}


// 0x1028bf90  (ghidra: FUN_1028bf90)  [gap]
uint32_t * GetPtr_INVENTORY_InvMode_6fcbb570(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d151;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_InvMode_6fcbb570 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaee0) {
      FUN_103023e9(&DAT_104eaee0);
      if (DAT_104eaee0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacac = *(int *)(&DAT_103d4d0c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaee0);
      }
    }
    INVENTORY_InvMode_6fcbb570 = sub_GetDllOffset_102f10f0(6,DAT_104eacac);
  }
  ExceptionList = local_10;
  return &INVENTORY_InvMode_6fcbb570;
}


// 0x1028c040  (ghidra: FUN_1028c040)  [gap]
uint32_t * GetPtr_sub_6fcd88c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d181;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcd88c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ae8) {
      FUN_103023e9(&DAT_104e9ae8);
      if (DAT_104e9ae8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97b0 = *(int *)(&DAT_103d4e54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ae8);
      }
    }
    sub_6fcd88c0 = sub_GetDllOffset_102f10f0(6,DAT_104e97b0);
  }
  ExceptionList = local_10;
  return &sub_6fcd88c0;
}


// 0x1028c0f0  (ghidra: FUN_1028c0f0)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc919a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d1b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc919a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97e4) {
      FUN_103023e9(&DAT_104e97e4);
      if (DAT_104e97e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac10 = *(int *)(&DAT_103d491c + iVar2 * 4);
        FUN_1030239f(&DAT_104e97e4);
      }
    }
    PLAYER_PlrTrade_6fc919a0 = sub_GetDllOffset_102f10f0(6,DAT_104eac10);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc919a0;
}


// 0x1028c1a0  (ghidra: FUN_1028c1a0)  [gap]
uint32_t * GetPtr_sub_6fc93ba0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d1e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc93ba0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d5c) {
      FUN_103023e9(&DAT_104e9d5c);
      if (DAT_104e9d5c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5f4 = *(int *)(&DAT_103d3f0c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d5c);
      }
    }
    sub_6fc93ba0 = sub_GetDllOffset_102f10f0(6,DAT_104ea5f4);
  }
  ExceptionList = local_10;
  return &sub_6fc93ba0;
}


// 0x1028c250  [gap]
char * D2Common_10762(int param_1,uint32_t param_s2,uint32_t param_s3,uint32_t param_s4)

{
  int iVar1;
  char *pcVar2;
  
  if (p_D2Common_10762 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10762 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c65d0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028c276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(*p_D2Common_10762)();
  return pcVar2;
}


// 0x1028c280  [gap]
uint D2Common_11060(uint32_t param_s1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Common_11060 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_11060 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c7b60 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028c2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Common_11060)();
  return uVar2;
}


// 0x1028c2b0  (ghidra: FUN_1028c2b0)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4d980(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d211;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4d980 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fb4) {
      FUN_103023e9(&DAT_104e9fb4);
      if (DAT_104e9fb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9808 = *(int *)(&DAT_103d3824 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fb4);
      }
    }
    GAME_Game_6fc4d980 = sub_GetDllOffset_102f10f0(6,DAT_104e9808);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4d980;
}


// 0x1028c360  (ghidra: FUN_1028c360)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4ce20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d241;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4ce20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9ec) {
      FUN_103023e9(&DAT_104ea9ec);
      if (DAT_104ea9ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf64 = *(int *)(&DAT_103d4dfc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9ec);
      }
    }
    GAME_Game_6fc4ce20 = sub_GetDllOffset_102f10f0(6,DAT_104eaf64);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4ce20;
}


// 0x1028c410  (ghidra: FUN_1028c410)  [gap]
uint32_t * GetPtr_GAME_CCmd_6fceae80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d271;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_CCmd_6fceae80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e08) {
      FUN_103023e9(&DAT_104e9e08);
      if (DAT_104e9e08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9cbc = *(int *)(&DAT_103d4d2c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e08);
      }
    }
    GAME_CCmd_6fceae80 = sub_GetDllOffset_102f10f0(6,DAT_104e9cbc);
  }
  ExceptionList = local_10;
  return &GAME_CCmd_6fceae80;
}


// 0x1028c4c0  (ghidra: FUN_1028c4c0)  [gap]
uint32_t * GetPtr_sub_6fc22130(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d2a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc22130 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea784) {
      FUN_103023e9(&DAT_104ea784);
      if (DAT_104ea784 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea364 = *(int *)(&DAT_103d37ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea784);
      }
    }
    sub_6fc22130 = sub_GetDllOffset_102f10f0(6,DAT_104ea364);
  }
  ExceptionList = local_10;
  return &sub_6fc22130;
}


// 0x1028c570  (ghidra: FUN_1028c570)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4e050(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d2d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4e050 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea61c) {
      FUN_103023e9(&DAT_104ea61c);
      if (DAT_104ea61c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9930 = *(int *)(&DAT_103d3c3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea61c);
      }
    }
    GAME_Game_6fc4e050 = sub_GetDllOffset_102f10f0(6,DAT_104e9930);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4e050;
}


// 0x1028c620  (ghidra: FUN_1028c620)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd303b8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d301;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd303b8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea194) {
      FUN_103023e9(&DAT_104ea194);
      if (DAT_104ea194 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8f4 = *(int *)(&DAT_103d4a3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea194);
      }
    }
    p_D2Game_DAT_6fd303b8 = sub_GetDllOffset_102f10f0(6,DAT_104ea8f4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd303b8;
}


// 0x1028c6d0  (ghidra: FUN_1028c6d0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd307b8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d331;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd307b8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e954c) {
      FUN_103023e9(&DAT_104e954c);
      if (DAT_104e954c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf28 = *(int *)(&DAT_103d3c34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e954c);
      }
    }
    p_D2Game_DAT_6fd307b8 = sub_GetDllOffset_102f10f0(6,DAT_104eaf28);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd307b8;
}


// 0x1028c780  (ghidra: FUN_1028c780)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd30bb8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d361;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd30bb8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e91cc) {
      FUN_103023e9(&DAT_104e91cc);
      if (DAT_104e91cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fc0 = *(int *)(&DAT_103d32cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e91cc);
      }
    }
    p_D2Game_DAT_6fd30bb8 = sub_GetDllOffset_102f10f0(6,DAT_104e9fc0);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd30bb8;
}


// 0x1028c830  (ghidra: FUN_1028c830)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd30bd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d391;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd30bd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea860) {
      FUN_103023e9(&DAT_104ea860);
      if (DAT_104ea860 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb020 = *(int *)(&DAT_103d3bd4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea860);
      }
    }
    p_D2Game_DAT_6fd30bd0 = sub_GetDllOffset_102f10f0(6,DAT_104eb020);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd30bd0;
}


// 0x1028c8e0  (ghidra: FUN_1028c8e0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd30be8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d3c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd30be8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5e0) {
      FUN_103023e9(&DAT_104ea5e0);
      if (DAT_104ea5e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e927c = *(int *)(&DAT_103d4d1c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5e0);
      }
    }
    p_D2Game_DAT_6fd30be8 = sub_GetDllOffset_102f10f0(6,DAT_104e927c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd30be8;
}


// 0x1028c990  (ghidra: FUN_1028c990)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd30c08(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d3f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd30c08 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5c4) {
      FUN_103023e9(&DAT_104ea5c4);
      if (DAT_104ea5c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9494 = *(int *)(&DAT_103d4c94 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5c4);
      }
    }
    p_D2Game_DAT_6fd30c08 = sub_GetDllOffset_102f10f0(6,DAT_104e9494);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd30c08;
}


// 0x1028ca40  (ghidra: FUN_1028ca40)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c08(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d421;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c08 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92b8) {
      FUN_103023e9(&DAT_104e92b8);
      if (DAT_104e92b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3dc = *(int *)(&DAT_103d4bf4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92b8);
      }
    }
    p_D2Game_DAT_6fd31c08 = sub_GetDllOffset_102f10f0(6,DAT_104ea3dc);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c08;
}


// 0x1028caf0  (ghidra: FUN_1028caf0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c18(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d451;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c18 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8c0) {
      FUN_103023e9(&DAT_104ea8c0);
      if (DAT_104ea8c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94e4 = *(int *)(&DAT_103d318c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8c0);
      }
    }
    p_D2Game_DAT_6fd31c18 = sub_GetDllOffset_102f10f0(6,DAT_104e94e4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c18;
}


// 0x1028cba0  (ghidra: FUN_1028cba0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c08_1028cba0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d481;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c08_1028cba0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9644) {
      FUN_103023e9(&DAT_104e9644);
      if (DAT_104e9644 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4d8 = *(int *)(&DAT_103d480c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9644);
      }
    }
    p_D2Game_DAT_6fd31c08_1028cba0 = sub_GetDllOffset_102f10f0(6,DAT_104ea4d8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c08_1028cba0;
}


// 0x1028cc50  (ghidra: FUN_1028cc50)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c44(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d4b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c44 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d88) {
      FUN_103023e9(&DAT_104e9d88);
      if (DAT_104e9d88 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa9c = *(int *)(&DAT_103d3294 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d88);
      }
    }
    p_D2Game_DAT_6fd31c44 = sub_GetDllOffset_102f10f0(6,DAT_104eaa9c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c44;
}


// 0x1028cd00  (ghidra: FUN_1028cd00)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31f70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d4e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31f70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea848) {
      FUN_103023e9(&DAT_104ea848);
      if (DAT_104ea848 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e936c = *(int *)(&DAT_103d4dcc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea848);
      }
    }
    p_D2Game_DAT_6fd31f70 = sub_GetDllOffset_102f10f0(6,DAT_104e936c);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31f70;
}


// 0x1028cdb0  (ghidra: FUN_1028cdb0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31f84(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d511;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31f84 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7d0) {
      FUN_103023e9(&DAT_104ea7d0);
      if (DAT_104ea7d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea6d8 = *(int *)(&DAT_103d32bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7d0);
      }
    }
    p_D2Game_DAT_6fd31f84 = sub_GetDllOffset_102f10f0(6,DAT_104ea6d8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31f84;
}


// 0x1028ce60  (ghidra: FUN_1028ce60)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd2e35c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d541;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd2e35c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9230) {
      FUN_103023e9(&DAT_104e9230);
      if (DAT_104e9230 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9dfc = *(int *)(&DAT_103d3b34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9230);
      }
    }
    p_D2Game_DAT_6fd2e35c = sub_GetDllOffset_102f10f0(6,DAT_104e9dfc);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd2e35c;
}


// 0x1028cf10  (ghidra: FUN_1028cf10)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd31c48(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d571;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd31c48 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7d4) {
      FUN_103023e9(&DAT_104ea7d4);
      if (DAT_104ea7d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabcc = *(int *)(&DAT_103d447c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7d4);
      }
    }
    p_D2Game_DAT_6fd31c48 = sub_GetDllOffset_102f10f0(6,DAT_104eabcc);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd31c48;
}


// 0x1028cfc0  (ghidra: D2Net_10024_1028cfc0)  [gap]
uint D2Net_10024(ushort param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Net_10024 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Net_10024 = sub_GetDllOffset_102f10f0(5,*(int *)(&DAT_103c6e68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028cfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Net_10024)();
  return uVar2;
}


// 0x1028cff0  [gap]
void D2Net_10001(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (p_D2Net_10001 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Net_10001 = sub_GetDllOffset_102f10f0(5,*(int *)(&DAT_103d2c24 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Net_10001)();
  return;
}


// 0x1028d020  [gap]
uint D2Net_10002(char param_1,uint param_2,byte *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Net_10002 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Net_10002 = sub_GetDllOffset_102f10f0(5,*(int *)(&DAT_103c6ec8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Net_10002)();
  return uVar2;
}


// 0x1028d050  [gap]
void D2Net_10021(int param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2Net_10021 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Net_10021 = sub_GetDllOffset_102f10f0(5,*(int *)(&DAT_103c65d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Net_10021)();
  return;
}


// 0x1028d080  (ghidra: FUN_1028d080)  [gap]
uint32_t * GetPtr_D2Net_DAT_6fbfb400(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d5a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Net_DAT_6fbfb400 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0e8) {
      FUN_103023e9(&DAT_104eb0e8);
      if (DAT_104eb0e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9020 = *(int *)(&DAT_103d319c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0e8);
      }
    }
    p_D2Net_DAT_6fbfb400 = sub_GetDllOffset_102f10f0(5,DAT_104e9020);
  }
  ExceptionList = local_10;
  return &p_D2Net_DAT_6fbfb400;
}


// 0x1028d130  [gap]
void __fastcall D2gfx_10006(uint param_1)

{
  int iVar1;
  
  if (p_D2gfx_10006 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10006 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c7cc0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10006)();
  return;
}


// 0x1028d160  [gap]
void D2gfx_10010(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (p_D2gfx_10010 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10010 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c7518 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10010)();
  return;
}


// 0x1028d190  [gap]
uint D2gfx_10012(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2gfx_10012 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10012 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c7d48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2gfx_10012)();
  return uVar2;
}


// 0x1028d1c0  [gap]
uint D2gfx_10013(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2gfx_10013 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10013 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c6af0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2gfx_10013)();
  return uVar2;
}


// 0x1028d1f0  [gap]
void D2gfx_10014(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (p_D2gfx_10014 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10014 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c70e0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10014)();
  return;
}


// 0x1028d220  [gap]
void D2gfx_10023(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if (p_D2gfx_10023 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10023 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103d2bbc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10023)();
  return;
}


// 0x1028d250  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint D2gfx_10036(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2gfx_10036 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10036 = sub_GetDllOffset_102f10f0(2,*(int *)(iVar1 * 4 + 0x103c6a30));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2gfx_10036)();
  return uVar2;
}


// 0x1028d280  [gap]
void D2gfx_10062(uint param_1)

{
  int iVar1;
  
  if (p_D2gfx_10062 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10062 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c77b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10062)();
  return;
}


// 0x1028d2b0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void D2gfx_10082(uint32_t param_s1)

{
  int iVar1;
  
  if (p_D2gfx_10082 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10082 = sub_GetDllOffset_102f10f0(2,*(int *)(iVar1 * 4 + 0x103c77e8));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10082)();
  return;
}


// 0x1028d2e0  [gap]
void D2gfx_10041(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (p_D2gfx_10041 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10041 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c75c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10041)();
  return;
}


// 0x1028d310  [gap]
void D2gfx_10019(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (p_D2gfx_10019 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10019 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c6f98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2gfx_10019)();
  return;
}


// 0x1028d340  [gap]
uint D2gfx_10048(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2gfx_10048 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2gfx_10048 = sub_GetDllOffset_102f10f0(2,*(int *)(&DAT_103c6660 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2gfx_10048)();
  return uVar2;
}


// 0x1028d370  (ghidra: FUN_1028d370)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcc304(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d5d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcc304 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9904) {
      FUN_103023e9(&DAT_104e9904);
      if (DAT_104e9904 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b38 = *(int *)(&DAT_103d41cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9904);
      }
    }
    p_D2Client_DAT_6fbcc304 = sub_GetDllOffset_102f10f0(0,DAT_104e9b38);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcc304;
}


// 0x1028d420  (ghidra: FUN_1028d420)  [gap]
uint32_t * GetPtr_D2Client_DAT_6fbcb9c4(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d601;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Client_DAT_6fbcb9c4 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb00c) {
      FUN_103023e9(&DAT_104eb00c);
      if (DAT_104eb00c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf1c = *(int *)(&DAT_103d4bcc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb00c);
      }
    }
    p_D2Client_DAT_6fbcb9c4 = sub_GetDllOffset_102f10f0(0,DAT_104eaf1c);
  }
  ExceptionList = local_10;
  return &p_D2Client_DAT_6fbcb9c4;
}


// 0x1028d4d0  [gap]
int sub_6f9dcb30(void)

{
  int iVar1;
  
  if (p_sub_6f9dcb30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6f9dcb30 = sub_GetDllOffset_102f10f0(0xc,*(int *)(&DAT_103c79f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6f9dcb30)();
  return iVar1;
}


// 0x1028d500  [gap]
void sub_6f9dc690(void)

{
  int iVar1;
  
  if (p_sub_6f9dc690 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6f9dc690 = sub_GetDllOffset_102f10f0(0xc,*(int *)(&DAT_103d2b54 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028d526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6f9dc690)();
  return;
}


// 0x1028d530  (ghidra: FUN_1028d530)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6fa08f18(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d631;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6fa08f18 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9448) {
      FUN_103023e9(&DAT_104e9448);
      if (DAT_104e9448 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea970 = *(int *)(&DAT_103d4c84 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9448);
      }
    }
    p_D2Multi_DAT_6fa08f18 = sub_GetDllOffset_102f10f0(0xc,DAT_104ea970);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6fa08f18;
}


// 0x1028d5e0  (ghidra: FUN_1028d5e0)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6fa09cc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d661;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6fa09cc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97ac) {
      FUN_103023e9(&DAT_104e97ac);
      if (DAT_104e97ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8d0 = *(int *)(&DAT_103d4d14 + iVar2 * 4);
        FUN_1030239f(&DAT_104e97ac);
      }
    }
    p_D2Multi_DAT_6fa09cc0 = sub_GetDllOffset_102f10f0(0xc,DAT_104ea8d0);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6fa09cc0;
}


// 0x1028d690  (ghidra: FUN_1028d690)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6f9e9c60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d691;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6f9e9c60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf78) {
      FUN_103023e9(&DAT_104eaf78);
      if (DAT_104eaf78 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea900 = *(int *)(&DAT_103d4d9c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf78);
      }
    }
    p_D2Multi_DAT_6f9e9c60 = sub_GetDllOffset_102f10f0(0xc,DAT_104ea900);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6f9e9c60;
}


// 0x1028d740  (ghidra: FUN_1028d740)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6fa09cd8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d6c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6fa09cd8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac14) {
      FUN_103023e9(&DAT_104eac14);
      if (DAT_104eac14 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91d4 = *(int *)(&DAT_103d38ec + iVar2 * 4);
        FUN_1030239f(&DAT_104eac14);
      }
    }
    p_D2Multi_DAT_6fa09cd8 = sub_GetDllOffset_102f10f0(0xc,DAT_104e91d4);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6fa09cd8;
}


// 0x1028d7f0  (ghidra: FUN_1028d7f0)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6fa0a0c8(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d6f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6fa0a0c8 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ff8) {
      FUN_103023e9(&DAT_104e9ff8);
      if (DAT_104e9ff8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac30 = *(int *)(&DAT_103d4c74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ff8);
      }
    }
    p_D2Multi_DAT_6fa0a0c8 = sub_GetDllOffset_102f10f0(0xc,DAT_104eac30);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6fa0a0c8;
}


// 0x1028d8a0  (ghidra: FUN_1028d8a0)  [gap]
uint32_t * GetPtr_D2Multi_DAT_6fa0a0d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d721;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Multi_DAT_6fa0a0d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9384) {
      FUN_103023e9(&DAT_104e9384);
      if (DAT_104e9384 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c44 = *(int *)(&DAT_103d3784 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9384);
      }
    }
    p_D2Multi_DAT_6fa0a0d0 = sub_GetDllOffset_102f10f0(0xc,DAT_104e9c44);
  }
  ExceptionList = local_10;
  return &p_D2Multi_DAT_6fa0a0d0;
}


// 0x1028d950  (ghidra: FUN_1028d950)  [gap]
uint32_t * GetPtr_D2Multi_loc_6f9e08a6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d751;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Multi_loc_6f9e08a6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bac) {
      FUN_103023e9(&DAT_104e9bac);
      if (DAT_104e9bac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea124 = *(int *)(&DAT_103d425c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bac);
      }
    }
    D2Multi_loc_6f9e08a6 = sub_GetDllOffset_102f10f0(0xc,DAT_104ea124);
  }
  ExceptionList = local_10;
  return &D2Multi_loc_6f9e08a6;
}


// 0x1028da00  (ghidra: FUN_1028da00)  [gap]
uint32_t * GetPtr_D2Multi_loc_6f9e07a6(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d781;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Multi_loc_6f9e07a6 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94a0) {
      FUN_103023e9(&DAT_104e94a0);
      if (DAT_104e94a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae40 = *(int *)(&DAT_103d3d44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e94a0);
      }
    }
    D2Multi_loc_6f9e07a6 = sub_GetDllOffset_102f10f0(0xc,DAT_104eae40);
  }
  ExceptionList = local_10;
  return &D2Multi_loc_6f9e07a6;
}


// 0x1028dab0  (ghidra: FUN_1028dab0)  [gap]
uint32_t * GetPtr_sub_6f9e0000(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d7b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6f9e0000 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2ac) {
      FUN_103023e9(&DAT_104ea2ac);
      if (DAT_104ea2ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea448 = *(int *)(&DAT_103d43d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2ac);
      }
    }
    sub_6f9e0000 = sub_GetDllOffset_102f10f0(0xc,DAT_104ea448);
  }
  ExceptionList = local_10;
  return &sub_6f9e0000;
}


// 0x1028db60  (ghidra: FUN_1028db60)  [gap]
uint32_t * GetPtr_D2Multi_loc_6f9dd5b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d7e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Multi_loc_6f9dd5b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab58) {
      FUN_103023e9(&DAT_104eab58);
      if (DAT_104eab58 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9368 = *(int *)(&DAT_103d50dc + iVar2 * 4);
        FUN_1030239f(&DAT_104eab58);
      }
    }
    D2Multi_loc_6f9dd5b0 = sub_GetDllOffset_102f10f0(0xc,DAT_104e9368);
  }
  ExceptionList = local_10;
  return &D2Multi_loc_6f9dd5b0;
}


// 0x1028dc10  [gap]
uint D2CMP_10000(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2CMP_10000 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10000 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c6b70 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2CMP_10000)();
  return uVar2;
}


// 0x1028dc40  [gap]
uint __thiscall D2CMP_10005(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2CMP_10005 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10005 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c6f68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dc66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2CMP_10005)();
  return uVar2;
}


// 0x1028dca0  [gap]
void D2CMP_10054(uint param_1,uint param_2)

{
  int iVar1;
  
  if (p_D2CMP_10054 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10054 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c7a80 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dcc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2CMP_10054)();
  return;
}


// 0x1028dcd0  [gap]
uint D2CMP_10060(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2CMP_10060 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10060 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c7220 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2CMP_10060)();
  return uVar2;
}


// 0x1028dd30  [gap]
void D2CMP_10068(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (p_D2CMP_10068 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10068 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c70a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2CMP_10068)();
  return;
}


// 0x1028dd90  [gap]
uchar * D2CMP_10091(int param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if (p_D2CMP_10091 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2CMP_10091 = sub_GetDllOffset_102f10f0(0xb,*(int *)(&DAT_103c7770 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ddb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uchar *)(*p_D2CMP_10091)();
  return puVar2;
}


// 0x1028ddc0  [gap]
int __fastcall D2Lang_10003(uint param_1)

{
  int iVar1;
  
  if (p_D2Lang_10003 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10003 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c7de0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dde6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Lang_10003)();
  return iVar1;
}


// 0x1028ddf0  [gap]
void D2Lang_10004(char *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2Lang_10004 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10004 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c7ca0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028de16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Lang_10004)();
  return;
}


// 0x1028de20  [gap]
uint __fastcall D2Lang_10011(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Lang_10011 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10011 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c69b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028de46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Lang_10011)();
  return uVar2;
}


// 0x1028de50  [gap]
void * __fastcall Unicode_strcat(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (p_Unicode_strcat == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Unicode_strcat = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103d2c44 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028de76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*p_Unicode_strcat)();
  return pvVar2;
}


// 0x1028de80  [gap]
void D2Lang_10006(int param_1,ulong param_2,int param_3)

{
  int iVar1;
  
  if (p_D2Lang_10006 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10006 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c7358 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028dea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Lang_10006)();
  return;
}


// 0x1028deb0  [gap]
uint __fastcall D2Lang_10008(uint param_1,char *param_2,uint32_t param_s1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Lang_10008 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10008 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c6578 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028ded6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Lang_10008)();
  return uVar2;
}


// 0x1028dee0  [gap]
uint D2Lang_10009(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Lang_10009 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10009 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c7ed0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028df06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Lang_10009)();
  return uVar2;
}


// 0x1028df10  [gap]
uint D2Lang_10010(byte *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Lang_10010 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10010 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c6ef8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028df36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Lang_10010)();
  return uVar2;
}


// 0x1028df40  (ghidra: FUN_1028df40)  [gap]
uint32_t * GetPtr_D2Lang_DAT_6fc10a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d811;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Lang_DAT_6fc10a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea37c) {
      FUN_103023e9(&DAT_104ea37c);
      if (DAT_104ea37c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9228 = *(int *)(&DAT_103d4294 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea37c);
      }
    }
    p_D2Lang_DAT_6fc10a80 = sub_GetDllOffset_102f10f0(3,DAT_104e9228);
  }
  ExceptionList = local_10;
  return &p_D2Lang_DAT_6fc10a80;
}


// 0x1028dff0  (ghidra: FUN_1028dff0)  [gap]
uint32_t * GetPtr_D2Lang_DAT_6fc10a6c(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d841;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Lang_DAT_6fc10a6c == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4b8) {
      FUN_103023e9(&DAT_104ea4b8);
      if (DAT_104ea4b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea844 = *(int *)(&DAT_103d3f04 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4b8);
      }
    }
    p_D2Lang_DAT_6fc10a6c = sub_GetDllOffset_102f10f0(3,DAT_104ea844);
  }
  ExceptionList = local_10;
  return &p_D2Lang_DAT_6fc10a6c;
}


// 0x1028e0a0  (ghidra: FUN_1028e0a0)  [gap]
uint32_t * GetPtr_Unicode_strlen(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d871;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Unicode_strlen == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8a0) {
      FUN_103023e9(&DAT_104ea8a0);
      if (DAT_104ea8a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea41c = *(int *)(&DAT_103d3b84 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8a0);
      }
    }
    Unicode_strlen = sub_GetDllOffset_102f10f0(3,DAT_104ea41c);
  }
  ExceptionList = local_10;
  return &Unicode_strlen;
}


// 0x1028e150  (ghidra: FUN_1028e150)  [gap]
uint32_t * GetPtr_D2Launch_DAT_6fa65abc(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d8a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Launch_DAT_6fa65abc == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e84) {
      FUN_103023e9(&DAT_104e9e84);
      if (DAT_104e9e84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a0c = *(int *)(&DAT_103d37d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e84);
      }
    }
    p_D2Launch_DAT_6fa65abc = sub_GetDllOffset_102f10f0(7,DAT_104e9a0c);
  }
  ExceptionList = local_10;
  return &p_D2Launch_DAT_6fa65abc;
}


// 0x1028e200  [gap]
void __fastcall D2Win_10150(void *this,uint reg_EDX,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (p_D2Win_10150 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10150 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7450 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10150)();
  return;
}


// 0x1028e230  [gap]
uint D2Win_10083(void)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Win_10083 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10083 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c76a8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Win_10083)();
  return uVar2;
}


// 0x1028e260  [gap]
void __fastcall D2Win_10085(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if (p_D2Win_10085 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10085 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103d2ea4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10085)();
  return;
}


// 0x1028e290  [gap]
int __fastcall D2Win_10028(void *param_1)

{
  int iVar1;
  
  if (p_D2Win_10028 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10028 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7e20 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Win_10028)();
  return iVar1;
}


// 0x1028e2c0  [gap]
void __fastcall D2Win_10177(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_D2Win_10177 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10177 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103d2d3c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10177)();
  return;
}


// 0x1028e2f0  [gap]
int __fastcall D2Win_10184(int param_1)

{
  int iVar1;
  
  if (p_D2Win_10184 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10184 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103d2f74 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Win_10184)();
  return iVar1;
}


// 0x1028e320  [gap]
uint __fastcall D2Win_10042(int *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Win_10042 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10042 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7888 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Win_10042)();
  return uVar2;
}


// 0x1028e350  [gap]
int D2Win_10190(uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  
  if (p_D2Win_10190 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10190 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7e30 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Win_10190)();
  return iVar1;
}


// 0x1028e380  [gap]
int D2Win_10190_1028e380(uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  
  if (p_D2Win_10190_1028e380 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10190_1028e380 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7b38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e3a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Win_10190_1028e380)();
  return iVar1;
}


// 0x1028e3b0  [gap]
int * D2Win_10098(uint *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (p_D2Win_10098 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10098 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7728 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_D2Win_10098)();
  return piVar2;
}


// 0x1028e3e0  [gap]
int * __thiscall
D2Win_10204(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5,int *param_6,
           uint32_t param_s8,uint32_t param_s9)

{
  int iVar1;
  int *piVar2;
  
  if (p_D2Win_10204 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10204 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7500 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_D2Win_10204)();
  return piVar2;
}


// 0x1028e410  [gap]
void __fastcall D2Win_10041(int *param_1)

{
  int iVar1;
  
  if (p_D2Win_10041 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10041 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c6a18 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10041)();
  return;
}


// 0x1028e440  [gap]
void __fastcall D2Win_10020(int *param_1,void *param_2)

{
  int iVar1;
  
  if (p_D2Win_10020 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10020 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7990 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10020)();
  return;
}


// 0x1028e470  [gap]
uint __fastcall D2Win_10000(int *param_1,void *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Win_10000 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10000 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c6840 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Win_10000)();
  return uVar2;
}


// 0x1028e4a0  [gap]
uint * __fastcall
D2Win_10068(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
           uint param_7,int param_8,uint param_9,uint32_t param_s8,uint32_t param_s9)

{
  int iVar1;
  uint *puVar2;
  
  if (p_D2Win_10068 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10068 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7280 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_D2Win_10068)();
  return puVar2;
}


// 0x1028e4d0  [gap]
void __fastcall D2Win_10155(int *param_1,uint32_t param_s1)

{
  int iVar1;
  
  if (p_D2Win_10155 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10155 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c73e8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10155)();
  return;
}


// 0x1028e500  [gap]
uint __fastcall D2Win_10003(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Win_10003 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10003 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c6630 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Win_10003)();
  return uVar2;
}


// 0x1028e530  [gap]
void __fastcall D2Win_10097(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_D2Win_10097 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10097 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c6d48 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10097)();
  return;
}


// 0x1028e560  [gap]
void __fastcall D2Win_10192(int *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  
  if (p_D2Win_10192 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10192 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c72a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10192)();
  return;
}


// 0x1028e590  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void D2Win_10187(void)

{
  int iVar1;
  
  if (p_D2Win_10187 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10187 = sub_GetDllOffset_102f10f0(4,*(int *)(iVar1 * 4 + 0x103c7278));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10187)();
  return;
}


// 0x1028e5c0  [gap]
void __fastcall
D2Win_10013(void *param_1,uint param_2,int param_3,uint32_t param_s2,uint32_t param_s3,
           uint32_t param_s4)

{
  int iVar1;
  
  if (p_D2Win_10013 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10013 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7390 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_D2Win_10013)();
  return;
}


// 0x1028e5f0  [gap]
uint D2Win_10050(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Win_10050 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Win_10050 = sub_GetDllOffset_102f10f0(4,*(int *)(&DAT_103c7ac0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028e616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Win_10050)();
  return uVar2;
}


// 0x1028e620  (ghidra: FUN_1028e620)  [gap]
uint32_t * GetPtr_sub_6f8e7e60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d8d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6f8e7e60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea04c) {
      FUN_103023e9(&DAT_104ea04c);
      if (DAT_104ea04c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9c8 = *(int *)(&DAT_103d4784 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea04c);
      }
    }
    sub_6f8e7e60 = sub_GetDllOffset_102f10f0(4,DAT_104ea9c8);
  }
  ExceptionList = local_10;
  return &sub_6f8e7e60;
}


// 0x1028e6d0  (ghidra: FUN_1028e6d0)  [gap]
uint32_t * GetPtr_D2Win_DAT_6f9014a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030d901;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Win_DAT_6f9014a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98b8) {
      FUN_103023e9(&DAT_104e98b8);
      if (DAT_104e98b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9314 = *(int *)(&DAT_103d4f44 + iVar2 * 4);
        FUN_1030239f(&DAT_104e98b8);
      }
    }
    p_D2Win_DAT_6f9014a0 = sub_GetDllOffset_102f10f0(4,DAT_104e9314);
  }
  ExceptionList = local_10;
  return &p_D2Win_DAT_6f9014a0;
}

