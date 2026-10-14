/*
 * _unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit29_1027aac0.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x1027aac0 - 0x10285170
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


// 0x1027aac0  (ghidra: FUN_1027aac0)  [gap]
uint32_t * GetPtr_sub_6fc2fc40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308d71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2fc40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea830) {
      FUN_103023e9(&DAT_104ea830);
      if (DAT_104ea830 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0b0 = *(int *)(&DAT_103d4eac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea830);
      }
    }
    sub_6fc2fc40 = sub_GetDllOffset_102f10f0(6,DAT_104eb0b0);
  }
  ExceptionList = local_10;
  return &sub_6fc2fc40;
}


// 0x1027ab70  (ghidra: FUN_1027ab70)  [gap]
uint32_t * GetPtr_sub_6fc2e5d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308da1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2e5d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b28) {
      FUN_103023e9(&DAT_104e9b28);
      if (DAT_104e9b28 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac90 = *(int *)(&DAT_103d4004 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b28);
      }
    }
    sub_6fc2e5d0 = sub_GetDllOffset_102f10f0(6,DAT_104eac90);
  }
  ExceptionList = local_10;
  return &sub_6fc2e5d0;
}


// 0x1027ac20  [gap]
void sub_6fc95680(int *param_1,int param_2,uint32_t param_s3,uint32_t param_s4)

{
  int iVar1;
  
  if (p_sub_6fc95680 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc95680 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c66b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027ac46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc95680)();
  return;
}


// 0x1027ac50  (ghidra: FUN_1027ac50)  [gap]
uint32_t * GetPtr_sub_6fc31880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308dd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc31880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2d8) {
      FUN_103023e9(&DAT_104ea2d8);
      if (DAT_104ea2d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94cc = *(int *)(&DAT_103d384c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2d8);
      }
    }
    sub_6fc31880 = sub_GetDllOffset_102f10f0(6,DAT_104e94cc);
  }
  ExceptionList = local_10;
  return &sub_6fc31880;
}


// 0x1027ad00  [gap]
short * D2Common_10634(ushort param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  if (p_D2Common_10634 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10634 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6a90 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027ad26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  psVar2 = (short *)(*p_D2Common_10634)();
  return psVar2;
}


// 0x1027ad30  (ghidra: FUN_1027ad30)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd30208(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308e01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd30208 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0b4) {
      FUN_103023e9(&DAT_104eb0b4);
      if (DAT_104eb0b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e8fd4 = *(int *)(&DAT_103d3e44 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0b4);
      }
    }
    p_D2Game_DAT_6fd30208 = sub_GetDllOffset_102f10f0(6,DAT_104e8fd4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd30208;
}


// 0x1027ade0  [gap]
int sub_6fd142d0(uint param_1,uint param_2,uint param_3,uint32_t param_s4)

{
  int iVar1;
  
  if (p_sub_6fd142d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd142d0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c71b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027ae06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fd142d0)();
  return iVar1;
}


// 0x1027ae10  (ghidra: FUN_1027ae10)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc0c70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308e31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc0c70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9430) {
      FUN_103023e9(&DAT_104e9430);
      if (DAT_104e9430 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ddc = *(int *)(&DAT_103d43a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9430);
      }
    }
    SKILLS_Skills_6fcc0c70 = sub_GetDllOffset_102f10f0(6,DAT_104e9ddc);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc0c70;
}


// 0x1027aec0  (ghidra: FUN_1027aec0)  [gap]
uint32_t * GetPtr_SKILLS_SkillDruid_6fc648e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308e61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillDruid_6fc648e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabd0) {
      FUN_103023e9(&DAT_104eabd0);
      if (DAT_104eabd0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea340 = *(int *)(&DAT_103d4094 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabd0);
      }
    }
    SKILLS_SkillDruid_6fc648e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea340);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillDruid_6fc648e0;
}


// 0x1027af70  (ghidra: FUN_1027af70)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc00b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308e91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc00b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2ec) {
      FUN_103023e9(&DAT_104ea2ec);
      if (DAT_104ea2ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea714 = *(int *)(&DAT_103d4774 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2ec);
      }
    }
    SKILLS_Skills_6fcc00b0 = sub_GetDllOffset_102f10f0(6,DAT_104ea714);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc00b0;
}


// 0x1027b020  (ghidra: FUN_1027b020)  [gap]
uint32_t * GetPtr_sub_6fc6c220(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308ec1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc6c220 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92f0) {
      FUN_103023e9(&DAT_104e92f0);
      if (DAT_104e92f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5c0 = *(int *)(&DAT_103d454c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92f0);
      }
    }
    sub_6fc6c220 = sub_GetDllOffset_102f10f0(6,DAT_104ea5c0);
  }
  ExceptionList = local_10;
  return &sub_6fc6c220;
}


// 0x1027b0d0  [gap]
int __fastcall sub_6fc21160(uint *param_1)

{
  int iVar1;
  
  if (p_sub_6fc21160 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc21160 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2c1c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027b0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc21160)();
  return iVar1;
}


// 0x1027b100  (ghidra: FUN_1027b100)  [gap]
uint32_t * GetPtr_sub_6fcae6f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308ef1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcae6f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae04) {
      FUN_103023e9(&DAT_104eae04);
      if (DAT_104eae04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea514 = *(int *)(&DAT_103d364c + iVar2 * 4);
        FUN_1030239f(&DAT_104eae04);
      }
    }
    sub_6fcae6f0 = sub_GetDllOffset_102f10f0(6,DAT_104ea514);
  }
  ExceptionList = local_10;
  return &sub_6fcae6f0;
}


// 0x1027b1b0  (ghidra: FUN_1027b1b0)  [gap]
uint32_t * GetPtr_SKILLS_SkillBar_6fc48740(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308f21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_SkillBar_6fc48740 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e903c) {
      FUN_103023e9(&DAT_104e903c);
      if (DAT_104e903c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf10 = *(int *)(&DAT_103d4744 + iVar2 * 4);
        FUN_1030239f(&DAT_104e903c);
      }
    }
    SKILLS_SkillBar_6fc48740 = sub_GetDllOffset_102f10f0(6,DAT_104eaf10);
  }
  ExceptionList = local_10;
  return &SKILLS_SkillBar_6fc48740;
}


// 0x1027b260  (ghidra: FUN_1027b260)  [gap]
uint32_t * GetPtr_sub_6fc3e140(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308f51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc3e140 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea280) {
      FUN_103023e9(&DAT_104ea280);
      if (DAT_104ea280 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93b8 = *(int *)(&DAT_103d39ac + iVar2 * 4);
        FUN_1030239f(&DAT_104ea280);
      }
    }
    sub_6fc3e140 = sub_GetDllOffset_102f10f0(6,DAT_104e93b8);
  }
  ExceptionList = local_10;
  return &sub_6fc3e140;
}


// 0x1027b310  [gap]
uint __fastcall SKILLS_Skills_6fcc1210(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_Skills_6fcc1210 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fcc1210 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6ec0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027b336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_Skills_6fcc1210)();
  return uVar2;
}


// 0x1027b370  (ghidra: FUN_1027b370)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc10b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308f81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc10b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9604) {
      FUN_103023e9(&DAT_104e9604);
      if (DAT_104e9604 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e964c = *(int *)(&DAT_103d4554 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9604);
      }
    }
    SKILLS_Skills_6fcc10b0 = sub_GetDllOffset_102f10f0(6,DAT_104e964c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc10b0;
}


// 0x1027b420  (ghidra: FUN_1027b420)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc0f40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308fb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc0f40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafe4) {
      FUN_103023e9(&DAT_104eafe4);
      if (DAT_104eafe4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea388 = *(int *)(&DAT_103d400c + iVar2 * 4);
        FUN_1030239f(&DAT_104eafe4);
      }
    }
    SKILLS_Skills_6fcc0f40 = sub_GetDllOffset_102f10f0(6,DAT_104ea388);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc0f40;
}


// 0x1027b4d0  (ghidra: FUN_1027b4d0)  [gap]
uint32_t * GetPtr_sub_6fc5a280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10308fe1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5a280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9a0) {
      FUN_103023e9(&DAT_104ea9a0);
      if (DAT_104ea9a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea468 = *(int *)(&DAT_103d4dec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9a0);
      }
    }
    sub_6fc5a280 = sub_GetDllOffset_102f10f0(6,DAT_104ea468);
  }
  ExceptionList = local_10;
  return &sub_6fc5a280;
}


// 0x1027b580  (ghidra: FUN_1027b580)  [gap]
uint32_t * GetPtr_sub_6fc5a4e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309011;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5a4e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea198) {
      FUN_103023e9(&DAT_104ea198);
      if (DAT_104ea198 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98f0 = *(int *)(&DAT_103d4db4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea198);
      }
    }
    sub_6fc5a4e0 = sub_GetDllOffset_102f10f0(6,DAT_104e98f0);
  }
  ExceptionList = local_10;
  return &sub_6fc5a4e0;
}


// 0x1027b630  (ghidra: FUN_1027b630)  [gap]
uint32_t * GetPtr_sub_6fc5ede0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309041;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5ede0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9840) {
      FUN_103023e9(&DAT_104e9840);
      if (DAT_104e9840 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac94 = *(int *)(&DAT_103d4124 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9840);
      }
    }
    sub_6fc5ede0 = sub_GetDllOffset_102f10f0(6,DAT_104eac94);
  }
  ExceptionList = local_10;
  return &sub_6fc5ede0;
}


// 0x1027b6e0  (ghidra: FUN_1027b6e0)  [gap]
uint32_t * GetPtr_UNIT_Missile_6fb61420(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309071;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Missile_6fb61420 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92d0) {
      FUN_103023e9(&DAT_104e92d0);
      if (DAT_104e92d0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead44 = *(int *)(&DAT_103d3e6c + iVar2 * 4);
        FUN_1030239f(&DAT_104e92d0);
      }
    }
    UNIT_Missile_6fb61420 = sub_GetDllOffset_102f10f0(0,DAT_104ead44);
  }
  ExceptionList = local_10;
  return &UNIT_Missile_6fb61420;
}


// 0x1027b790  (ghidra: FUN_1027b790)  [gap]
uint32_t * GetPtr_Stats_StatsEx_6fd882f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103090a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Stats_StatsEx_6fd882f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea374) {
      FUN_103023e9(&DAT_104ea374);
      if (DAT_104ea374 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9308 = *(int *)(&DAT_103d3954 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea374);
      }
    }
    Stats_StatsEx_6fd882f0 = sub_GetDllOffset_102f10f0(1,DAT_104e9308);
  }
  ExceptionList = local_10;
  return &Stats_StatsEx_6fd882f0;
}


// 0x1027b840  [gap]
int * __fastcall
SKILLS_Skills_6fcc28f0
          (void *param_1,uint param_2,int *param_3,uint param_4,uint param_5,int param_6,int param_7
          ,int param_8,int param_9,int param_10)

{
  int iVar1;
  int *piVar2;
  
  if (p_SKILLS_Skills_6fcc28f0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fcc28f0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2cfc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027b866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_SKILLS_Skills_6fcc28f0)();
  return piVar2;
}


// 0x1027b870  (ghidra: FUN_1027b870)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc1880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103090d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc1880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9fcc) {
      FUN_103023e9(&DAT_104e9fcc);
      if (DAT_104e9fcc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac74 = *(int *)(&DAT_103d320c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9fcc);
      }
    }
    SKILLS_Skills_6fcc1880 = sub_GetDllOffset_102f10f0(6,DAT_104eac74);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc1880;
}


// 0x1027b920  (ghidra: FUN_1027b920)  [gap]
uint32_t * GetPtr_MISSILES_Missiles_6fc8f620(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309101;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (MISSILES_Missiles_6fc8f620 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9354) {
      FUN_103023e9(&DAT_104e9354);
      if (DAT_104e9354 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98c4 = *(int *)(&DAT_103d4524 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9354);
      }
    }
    MISSILES_Missiles_6fc8f620 = sub_GetDllOffset_102f10f0(6,DAT_104e98c4);
  }
  ExceptionList = local_10;
  return &MISSILES_Missiles_6fc8f620;
}


// 0x1027b9d0  (ghidra: FUN_1027b9d0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc0000(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309131;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc0000 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a30) {
      FUN_103023e9(&DAT_104e9a30);
      if (DAT_104e9a30 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c5c = *(int *)(&DAT_103d39e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a30);
      }
    }
    SKILLS_Skills_6fcc0000 = sub_GetDllOffset_102f10f0(6,DAT_104e9c5c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc0000;
}


// 0x1027ba80  [gap]
int __thiscall D2Common_10621(void *this)

{
  int iVar1;
  
  if (p_D2Common_10621 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Common_10621 = sub_GetDllOffset_102f10f0(1,*(int *)(&DAT_103c6a50 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027baa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_D2Common_10621)();
  return iVar1;
}


// 0x1027bab0  [gap]
uint * sub_6fc572c0(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (p_sub_6fc572c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc572c0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7b80 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027bad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (uint *)(*p_sub_6fc572c0)();
  return puVar2;
}


// 0x1027bae0  (ghidra: FUN_1027bae0)  [gap]
uint32_t * GetPtr_ITEMS_Items_6fd7c630(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309161;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_Items_6fd7c630 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea014) {
      FUN_103023e9(&DAT_104ea014);
      if (DAT_104ea014 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b70 = *(int *)(&DAT_103d31cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea014);
      }
    }
    ITEMS_Items_6fd7c630 = sub_GetDllOffset_102f10f0(1,DAT_104e9b70);
  }
  ExceptionList = local_10;
  return &ITEMS_Items_6fd7c630;
}


// 0x1027bb90  (ghidra: FUN_1027bb90)  [gap]
uint32_t * GetPtr_sub_6fd11730(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309191;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd11730 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eafd4) {
      FUN_103023e9(&DAT_104eafd4);
      if (DAT_104eafd4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e2c = *(int *)(&DAT_103d325c + iVar2 * 4);
        FUN_1030239f(&DAT_104eafd4);
      }
    }
    sub_6fd11730 = sub_GetDllOffset_102f10f0(6,DAT_104e9e2c);
  }
  ExceptionList = local_10;
  return &sub_6fd11730;
}


// 0x1027bc40  (ghidra: FUN_1027bc40)  [gap]
uint32_t * GetPtr_sub_6fd117e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103091c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd117e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea26c) {
      FUN_103023e9(&DAT_104ea26c);
      if (DAT_104ea26c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90ac = *(int *)(&DAT_103d4974 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea26c);
      }
    }
    sub_6fd117e0 = sub_GetDllOffset_102f10f0(6,DAT_104e90ac);
  }
  ExceptionList = local_10;
  return &sub_6fd117e0;
}


// 0x1027bcf0  (ghidra: FUN_1027bcf0)  [gap]
uint32_t * GetPtr_sub_6fd114f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103091f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd114f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9514) {
      FUN_103023e9(&DAT_104e9514);
      if (DAT_104e9514 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaad8 = *(int *)(&DAT_103d4224 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9514);
      }
    }
    sub_6fd114f0 = sub_GetDllOffset_102f10f0(6,DAT_104eaad8);
  }
  ExceptionList = local_10;
  return &sub_6fd114f0;
}


// 0x1027bda0  (ghidra: FUN_1027bda0)  [gap]
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a440(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309221;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitMsg_6fc9a440 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9208) {
      FUN_103023e9(&DAT_104e9208);
      if (DAT_104e9208 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea23c = *(int *)(&DAT_103d37cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9208);
      }
    }
    UNIT_SUnitMsg_6fc9a440 = sub_GetDllOffset_102f10f0(6,DAT_104ea23c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitMsg_6fc9a440;
}


// 0x1027be50  (ghidra: FUN_1027be50)  [gap]
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a4c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309251;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitMsg_6fc9a4c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e959c) {
      FUN_103023e9(&DAT_104e959c);
      if (DAT_104e959c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0c8 = *(int *)(&DAT_103d50a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e959c);
      }
    }
    UNIT_SUnitMsg_6fc9a4c0 = sub_GetDllOffset_102f10f0(6,DAT_104eb0c8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitMsg_6fc9a4c0;
}


// 0x1027bf00  [gap]
void __fastcall sub_6fd02240(int *param_1,int param_2)

{
  int iVar1;
  
  if (p_sub_6fd02240 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd02240 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6518 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027bf26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fd02240)();
  return;
}


// 0x1027bf30  (ghidra: FUN_1027bf30)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc97fa0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309281;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc97fa0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b94) {
      FUN_103023e9(&DAT_104e9b94);
      if (DAT_104e9b94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9534 = *(int *)(&DAT_103d4eb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b94);
      }
    }
    PLAYER_PlrModes_6fc97fa0 = sub_GetDllOffset_102f10f0(6,DAT_104e9534);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc97fa0;
}


// 0x1027bfe0  (ghidra: FUN_1027bfe0)  [gap]
uint32_t * GetPtr_UNIT_SUnitMsg_6fc9a0f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103092b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitMsg_6fc9a0f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab98) {
      FUN_103023e9(&DAT_104eab98);
      if (DAT_104eab98 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacb8 = *(int *)(&DAT_103d4b9c + iVar2 * 4);
        FUN_1030239f(&DAT_104eab98);
      }
    }
    UNIT_SUnitMsg_6fc9a0f0 = sub_GetDllOffset_102f10f0(6,DAT_104eacb8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitMsg_6fc9a0f0;
}


// 0x1027c090  (ghidra: FUN_1027c090)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbfa30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103092e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbfa30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96d8) {
      FUN_103023e9(&DAT_104e96d8);
      if (DAT_104e96d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf6c = *(int *)(&DAT_103d4cb4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96d8);
      }
    }
    SKILLS_Skills_6fcbfa30 = sub_GetDllOffset_102f10f0(6,DAT_104eaf6c);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbfa30;
}


// 0x1027c140  (ghidra: FUN_1027c140)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fb51340(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309311;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fb51340 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6e4) {
      FUN_103023e9(&DAT_104ea6e4);
      if (DAT_104ea6e4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fd0 = *(int *)(&DAT_103d4e2c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6e4);
      }
    }
    SKILLS_Skills_6fb51340 = sub_GetDllOffset_102f10f0(0,DAT_104e9fd0);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fb51340;
}


// 0x1027c1f0  (ghidra: FUN_1027c1f0)  [gap]
uint32_t * GetPtr_sub_6fd019c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309341;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd019c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9918) {
      FUN_103023e9(&DAT_104e9918);
      if (DAT_104e9918 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab44 = *(int *)(&DAT_103d3ff4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9918);
      }
    }
    sub_6fd019c0 = sub_GetDllOffset_102f10f0(6,DAT_104eab44);
  }
  ExceptionList = local_10;
  return &sub_6fd019c0;
}


// 0x1027c2a0  (ghidra: FUN_1027c2a0)  [gap]
uint32_t * GetPtr_sub_6fcb8a70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309371;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb8a70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2e8) {
      FUN_103023e9(&DAT_104ea2e8);
      if (DAT_104ea2e8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf9c = *(int *)(&DAT_103d411c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2e8);
      }
    }
    sub_6fcb8a70 = sub_GetDllOffset_102f10f0(6,DAT_104eaf9c);
  }
  ExceptionList = local_10;
  return &sub_6fcb8a70;
}


// 0x1027c350  (ghidra: FUN_1027c350)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe0c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103093a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfe0c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e94b4) {
      FUN_103023e9(&DAT_104e94b4);
      if (DAT_104e94b4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98c8 = *(int *)(&DAT_103d429c + iVar2 * 4);
        FUN_1030239f(&DAT_104e94b4);
      }
    }
    UNIT_SUnitDmg_6fcfe0c0 = sub_GetDllOffset_102f10f0(6,DAT_104e98c8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfe0c0;
}


// 0x1027c400  (ghidra: FUN_1027c400)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfcf20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103093d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfcf20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9394) {
      FUN_103023e9(&DAT_104e9394);
      if (DAT_104e9394 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0e4 = *(int *)(&DAT_103d41a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9394);
      }
    }
    UNIT_SUnitDmg_6fcfcf20 = sub_GetDllOffset_102f10f0(6,DAT_104ea0e4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfcf20;
}


// 0x1027c4b0  (ghidra: FUN_1027c4b0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe5a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309401;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfe5a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea858) {
      FUN_103023e9(&DAT_104ea858);
      if (DAT_104ea858 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95e4 = *(int *)(&DAT_103d3fc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea858);
      }
    }
    UNIT_SUnitDmg_6fcfe5a0 = sub_GetDllOffset_102f10f0(6,DAT_104e95e4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfe5a0;
}


// 0x1027c560  (ghidra: FUN_1027c560)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdde0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309431;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfdde0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cd4) {
      FUN_103023e9(&DAT_104e9cd4);
      if (DAT_104e9cd4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabc4 = *(int *)(&DAT_103d3834 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cd4);
      }
    }
    UNIT_SUnitDmg_6fcfdde0 = sub_GetDllOffset_102f10f0(6,DAT_104eabc4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfdde0;
}


// 0x1027c610  (ghidra: FUN_1027c610)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbf210(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309461;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbf210 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaffc) {
      FUN_103023e9(&DAT_104eaffc);
      if (DAT_104eaffc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9f4 = *(int *)(&DAT_103d4644 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaffc);
      }
    }
    SKILLS_Skills_6fcbf210 = sub_GetDllOffset_102f10f0(6,DAT_104ea9f4);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbf210;
}


// 0x1027c6c0  (ghidra: FUN_1027c6c0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbf1a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309491;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbf1a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a48) {
      FUN_103023e9(&DAT_104e9a48);
      if (DAT_104e9a48 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9828 = *(int *)(&DAT_103d3744 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a48);
      }
    }
    SKILLS_Skills_6fcbf1a0 = sub_GetDllOffset_102f10f0(6,DAT_104e9828);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbf1a0;
}


// 0x1027c770  (ghidra: FUN_1027c770)  [gap]
uint32_t * GetPtr_sub_6fc5aff0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103094c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5aff0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaaf8) {
      FUN_103023e9(&DAT_104eaaf8);
      if (DAT_104eaaf8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9344 = *(int *)(&DAT_103d4f9c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaaf8);
      }
    }
    sub_6fc5aff0 = sub_GetDllOffset_102f10f0(6,DAT_104e9344);
  }
  ExceptionList = local_10;
  return &sub_6fc5aff0;
}


// 0x1027c820  (ghidra: FUN_1027c820)  [gap]
uint32_t * GetPtr_sub_6fc5a280_1027c820(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103094f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc5a280_1027c820 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5dc) {
      FUN_103023e9(&DAT_104ea5dc);
      if (DAT_104ea5dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99d0 = *(int *)(&DAT_103d4e3c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5dc);
      }
    }
    sub_6fc5a280_1027c820 = sub_GetDllOffset_102f10f0(6,DAT_104e99d0);
  }
  ExceptionList = local_10;
  return &sub_6fc5a280_1027c820;
}


// 0x1027c8d0  [gap]
void UNIT_SUnitDmg_6fcfed30(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_UNIT_SUnitDmg_6fcfed30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_SUnitDmg_6fcfed30 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2f94 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027c8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_SUnitDmg_6fcfed30)();
  return;
}


// 0x1027c900  (ghidra: FUN_1027c900)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfeba0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309521;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfeba0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9574) {
      FUN_103023e9(&DAT_104e9574);
      if (DAT_104e9574 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e940c = *(int *)(&DAT_103d40bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9574);
      }
    }
    UNIT_SUnitDmg_6fcfeba0 = sub_GetDllOffset_102f10f0(6,DAT_104e940c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfeba0;
}


// 0x1027c9b0  [gap]
void __fastcall
PLAYER_PlrModes_6fc98550
          (int param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6,int param_7)

{
  int iVar1;
  
  if (p_PLAYER_PlrModes_6fc98550 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrModes_6fc98550 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7e10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027c9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_PLAYER_PlrModes_6fc98550)();
  return;
}


// 0x1027c9e0  (ghidra: FUN_1027c9e0)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcfa540(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309551;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcfa540 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea480) {
      FUN_103023e9(&DAT_104ea480);
      if (DAT_104ea480 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea660 = *(int *)(&DAT_103d444c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea480);
      }
    }
    ITEMS_ItemMode_6fcfa540 = sub_GetDllOffset_102f10f0(6,DAT_104ea660);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcfa540;
}


// 0x1027ca90  (ghidra: FUN_1027ca90)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfb030(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309581;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfb030 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b6c) {
      FUN_103023e9(&DAT_104e9b6c);
      if (DAT_104e9b6c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c18 = *(int *)(&DAT_103d5034 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b6c);
      }
    }
    UNIT_SUnitDmg_6fcfb030 = sub_GetDllOffset_102f10f0(6,DAT_104e9c18);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfb030;
}


// 0x1027cb40  (ghidra: FUN_1027cb40)  [gap]
uint32_t * GetPtr_sub_6fc46a30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103095b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc46a30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cf4) {
      FUN_103023e9(&DAT_104e9cf4);
      if (DAT_104e9cf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9eac = *(int *)(&DAT_103d4674 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cf4);
      }
    }
    sub_6fc46a30 = sub_GetDllOffset_102f10f0(6,DAT_104e9eac);
  }
  ExceptionList = local_10;
  return &sub_6fc46a30;
}


// 0x1027cbf0  (ghidra: FUN_1027cbf0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfba40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103095e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfba40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea040) {
      FUN_103023e9(&DAT_104ea040);
      if (DAT_104ea040 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea594 = *(int *)(&DAT_103d383c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea040);
      }
    }
    UNIT_SUnitDmg_6fcfba40 = sub_GetDllOffset_102f10f0(6,DAT_104ea594);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfba40;
}


// 0x1027cca0  (ghidra: FUN_1027cca0)  [gap]
uint32_t * GetPtr_sub_6fcc2de0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309611;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcc2de0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ee8) {
      FUN_103023e9(&DAT_104e9ee8);
      if (DAT_104e9ee8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b88 = *(int *)(&DAT_103d355c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ee8);
      }
    }
    sub_6fcc2de0 = sub_GetDllOffset_102f10f0(6,DAT_104e9b88);
  }
  ExceptionList = local_10;
  return &sub_6fcc2de0;
}


// 0x1027cd50  (ghidra: FUN_1027cd50)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfce70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309641;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfce70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaac8) {
      FUN_103023e9(&DAT_104eaac8);
      if (DAT_104eaac8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e97a0 = *(int *)(&DAT_103d4b5c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaac8);
      }
    }
    UNIT_SUnitDmg_6fcfce70 = sub_GetDllOffset_102f10f0(6,DAT_104e97a0);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfce70;
}


// 0x1027ce00  (ghidra: FUN_1027ce00)  [gap]
uint32_t * GetPtr_sub_6fc21620(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309671;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21620 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b1c) {
      FUN_103023e9(&DAT_104e9b1c);
      if (DAT_104e9b1c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabf0 = *(int *)(&DAT_103d36a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b1c);
      }
    }
    sub_6fc21620 = sub_GetDllOffset_102f10f0(6,DAT_104eabf0);
  }
  ExceptionList = local_10;
  return &sub_6fc21620;
}


// 0x1027ceb0  (ghidra: FUN_1027ceb0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfb570(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103096a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfb570 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9814) {
      FUN_103023e9(&DAT_104e9814);
      if (DAT_104e9814 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9efc = *(int *)(&DAT_103d35fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9814);
      }
    }
    UNIT_SUnitDmg_6fcfb570 = sub_GetDllOffset_102f10f0(6,DAT_104e9efc);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfb570;
}


// 0x1027cf60  (ghidra: FUN_1027cf60)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa970(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103096d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfa970 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e93f8) {
      FUN_103023e9(&DAT_104e93f8);
      if (DAT_104e93f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e99d8 = *(int *)(&DAT_103d3efc + iVar2 * 4);
        FUN_1030239f(&DAT_104e93f8);
      }
    }
    UNIT_SUnitDmg_6fcfa970 = sub_GetDllOffset_102f10f0(6,DAT_104e99d8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfa970;
}


// 0x1027d010  (ghidra: FUN_1027d010)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa930(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309701;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfa930 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cf8) {
      FUN_103023e9(&DAT_104e9cf8);
      if (DAT_104e9cf8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea060 = *(int *)(&DAT_103d3f6c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cf8);
      }
    }
    UNIT_SUnitDmg_6fcfa930 = sub_GetDllOffset_102f10f0(6,DAT_104ea060);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfa930;
}


// 0x1027d0c0  (ghidra: FUN_1027d0c0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfc780(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309731;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfc780 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7a0) {
      FUN_103023e9(&DAT_104ea7a0);
      if (DAT_104ea7a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacf0 = *(int *)(&DAT_103d38cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7a0);
      }
    }
    UNIT_SUnitDmg_6fcfc780 = sub_GetDllOffset_102f10f0(6,DAT_104eacf0);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfc780;
}


// 0x1027d170  (ghidra: FUN_1027d170)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfdac0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309761;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfdac0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9694) {
      FUN_103023e9(&DAT_104e9694);
      if (DAT_104e9694 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa28 = *(int *)(&DAT_103d369c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9694);
      }
    }
    UNIT_SUnitDmg_6fcfdac0 = sub_GetDllOffset_102f10f0(6,DAT_104eaa28);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfdac0;
}


// 0x1027d220  [gap]
void __thiscall UNIT_SUnitDmg_6fcfc940(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_UNIT_SUnitDmg_6fcfc940 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_UNIT_SUnitDmg_6fcfc940 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6de8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027d246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_UNIT_SUnitDmg_6fcfc940)();
  return;
}


// 0x1027d250  (ghidra: FUN_1027d250)  [gap]
uint32_t * GetPtr_sub_6fcb0f30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309791;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb0f30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eadd0) {
      FUN_103023e9(&DAT_104eadd0);
      if (DAT_104eadd0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea050 = *(int *)(&DAT_103d30cc + iVar2 * 4);
        FUN_1030239f(&DAT_104eadd0);
      }
    }
    sub_6fcb0f30 = sub_GetDllOffset_102f10f0(6,DAT_104ea050);
  }
  ExceptionList = local_10;
  return &sub_6fcb0f30;
}


// 0x1027d300  (ghidra: FUN_1027d300)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfa6d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103097c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfa6d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c64) {
      FUN_103023e9(&DAT_104e9c64);
      if (DAT_104e9c64 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea88c = *(int *)(&DAT_103d49dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c64);
      }
    }
    UNIT_SUnitDmg_6fcfa6d0 = sub_GetDllOffset_102f10f0(6,DAT_104ea88c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfa6d0;
}


// 0x1027d3b0  (ghidra: FUN_1027d3b0)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf3280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103097f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf3280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2b8) {
      FUN_103023e9(&DAT_104ea2b8);
      if (DAT_104ea2b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5bc = *(int *)(&DAT_103d4164 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2b8);
      }
    }
    ITEMS_ItemMode_6fcf3280 = sub_GetDllOffset_102f10f0(6,DAT_104ea5bc);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf3280;
}


// 0x1027d460  (ghidra: FUN_1027d460)  [gap]
uint32_t * GetPtr_UNIT_SUnitEvent_6fc57030(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309821;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitEvent_6fc57030 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90f4) {
      FUN_103023e9(&DAT_104e90f4);
      if (DAT_104e90f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d30 = *(int *)(&DAT_103d3924 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90f4);
      }
    }
    UNIT_SUnitEvent_6fc57030 = sub_GetDllOffset_102f10f0(6,DAT_104e9d30);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitEvent_6fc57030;
}


// 0x1027d510  [gap]
int * __fastcall MISSILES_Missiles_6fc8f930(uint param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (p_MISSILES_Missiles_6fc8f930 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_MISSILES_Missiles_6fc8f930 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6b50 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027d536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_MISSILES_Missiles_6fc8f930)();
  return piVar2;
}


// 0x1027d540  (ghidra: FUN_1027d540)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcd31d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309851;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcd31d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9718) {
      FUN_103023e9(&DAT_104e9718);
      if (DAT_104e9718 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d10 = *(int *)(&DAT_103d31ac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9718);
      }
    }
    D2Game_loc_6fcd31d0 = sub_GetDllOffset_102f10f0(6,DAT_104e9d10);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcd31d0;
}


// 0x1027d620  (ghidra: FUN_1027d620)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1b870(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309881;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1b870 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9804) {
      FUN_103023e9(&DAT_104e9804);
      if (DAT_104e9804 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3b4 = *(int *)(&DAT_103d30bc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9804);
      }
    }
    p_D2Game_DAT_6fd1b870 = sub_GetDllOffset_102f10f0(6,DAT_104ea3b4);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1b870;
}


// 0x1027d6d0  (ghidra: FUN_1027d6d0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1b770(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103098b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1b770 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e952c) {
      FUN_103023e9(&DAT_104e952c);
      if (DAT_104e952c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae28 = *(int *)(&DAT_103d3ec4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e952c);
      }
    }
    p_D2Game_DAT_6fd1b770 = sub_GetDllOffset_102f10f0(6,DAT_104eae28);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1b770;
}


// 0x1027d780  (ghidra: FUN_1027d780)  [gap]
uint32_t * GetPtr_sub_6fc211d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103098e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc211d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e92e0) {
      FUN_103023e9(&DAT_104e92e0);
      if (DAT_104e92e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e93b0 = *(int *)(&DAT_103d3664 + iVar2 * 4);
        FUN_1030239f(&DAT_104e92e0);
      }
    }
    sub_6fc211d0 = sub_GetDllOffset_102f10f0(6,DAT_104e93b0);
  }
  ExceptionList = local_10;
  return &sub_6fc211d0;
}


// 0x1027d830  [gap]
void __fastcall
SKILLS_Skills_6fcbefe0
          (int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,int *param_7)

{
  int iVar1;
  
  if (p_SKILLS_Skills_6fcbefe0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fcbefe0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ea0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027d856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_SKILLS_Skills_6fcbefe0)();
  return;
}


// 0x1027d860  [gap]
uint __fastcall sub_6fc21100(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fc21100 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc21100 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7e58 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027d886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fc21100)();
  return uVar2;
}


// 0x1027d890  [gap]
uint __fastcall sub_6fc21130(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fc21130 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc21130 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6f28 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027d8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fc21130)();
  return uVar2;
}


// 0x1027d8c0  (ghidra: FUN_1027d8c0)  [gap]
uint32_t * GetPtr_sub_6fc21280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309911;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a50) {
      FUN_103023e9(&DAT_104e9a50);
      if (DAT_104e9a50 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fe4 = *(int *)(&DAT_103d45ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a50);
      }
    }
    sub_6fc21280 = sub_GetDllOffset_102f10f0(6,DAT_104e9fe4);
  }
  ExceptionList = local_10;
  return &sub_6fc21280;
}


// 0x1027d9a0  (ghidra: FUN_1027d9a0)  [gap]
uint32_t * GetPtr_Ai_AiGeneral_6fc40cf0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309941;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiGeneral_6fc40cf0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9b8) {
      FUN_103023e9(&DAT_104ea9b8);
      if (DAT_104ea9b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ef4 = *(int *)(&DAT_103d3084 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9b8);
      }
    }
    Ai_AiGeneral_6fc40cf0 = sub_GetDllOffset_102f10f0(6,DAT_104e9ef4);
  }
  ExceptionList = local_10;
  return &Ai_AiGeneral_6fc40cf0;
}


// 0x1027da50  (ghidra: FUN_1027da50)  [gap]
uint32_t * GetPtr_Ai_AiGeneral_6fc416a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309971;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiGeneral_6fc416a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9628) {
      FUN_103023e9(&DAT_104e9628);
      if (DAT_104e9628 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea378 = *(int *)(&DAT_103d4fc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9628);
      }
    }
    Ai_AiGeneral_6fc416a0 = sub_GetDllOffset_102f10f0(6,DAT_104ea378);
  }
  ExceptionList = local_10;
  return &Ai_AiGeneral_6fc416a0;
}


// 0x1027db30  (ghidra: FUN_1027db30)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd18be0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103099a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd18be0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9498) {
      FUN_103023e9(&DAT_104e9498);
      if (DAT_104e9498 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9858 = *(int *)(&DAT_103d3284 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9498);
      }
    }
    p_D2Game_DAT_6fd18be0 = sub_GetDllOffset_102f10f0(6,DAT_104e9858);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd18be0;
}


// 0x1027dbe0  (ghidra: FUN_1027dbe0)  [gap]
uint32_t * GetPtr_D2Game_DAT_6fd1b454(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103099d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (p_D2Game_DAT_6fd1b454 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e18) {
      FUN_103023e9(&DAT_104e9e18);
      if (DAT_104e9e18 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaeb8 = *(int *)(&DAT_103d39cc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e18);
      }
    }
    p_D2Game_DAT_6fd1b454 = sub_GetDllOffset_102f10f0(6,DAT_104eaeb8);
  }
  ExceptionList = local_10;
  return &p_D2Game_DAT_6fd1b454;
}


// 0x1027dc90  [gap]
uint __thiscall
SKILLS_Skills_6fcc0ad0(void *this,int param_1,uint param_2,int param_3,uint32_t param_s5)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_Skills_6fcc0ad0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_Skills_6fcc0ad0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7240 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027dcb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_Skills_6fcc0ad0)();
  return uVar2;
}


// 0x1027dcc0  (ghidra: FUN_1027dcc0)  [gap]
uint32_t * GetPtr_sub_6fc214d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309a01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc214d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead88) {
      FUN_103023e9(&DAT_104ead88);
      if (DAT_104ead88 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae50 = *(int *)(&DAT_103d4ef4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead88);
      }
    }
    sub_6fc214d0 = sub_GetDllOffset_102f10f0(6,DAT_104eae50);
  }
  ExceptionList = local_10;
  return &sub_6fc214d0;
}


// 0x1027dda0  (ghidra: FUN_1027dda0)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcbee50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309a31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcbee50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0a8) {
      FUN_103023e9(&DAT_104eb0a8);
      if (DAT_104eb0a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92d4 = *(int *)(&DAT_103d36bc + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0a8);
      }
    }
    SKILLS_Skills_6fcbee50 = sub_GetDllOffset_102f10f0(6,DAT_104e92d4);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcbee50;
}


// 0x1027de50  (ghidra: FUN_1027de50)  [gap]
uint32_t * GetPtr_sub_6fc2e7e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309a61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2e7e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab7c) {
      FUN_103023e9(&DAT_104eab7c);
      if (DAT_104eab7c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b7c = *(int *)(&DAT_103d47b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab7c);
      }
    }
    sub_6fc2e7e0 = sub_GetDllOffset_102f10f0(6,DAT_104e9b7c);
  }
  ExceptionList = local_10;
  return &sub_6fc2e7e0;
}


// 0x1027df00  (ghidra: FUN_1027df00)  [gap]
uint32_t * GetPtr_sub_6fcc3610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309a91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcc3610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea678) {
      FUN_103023e9(&DAT_104ea678);
      if (DAT_104ea678 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacfc = *(int *)(&DAT_103d462c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea678);
      }
    }
    sub_6fcc3610 = sub_GetDllOffset_102f10f0(6,DAT_104eacfc);
  }
  ExceptionList = local_10;
  return &sub_6fcc3610;
}


// 0x1027dfb0  (ghidra: FUN_1027dfb0)  [gap]
uint32_t * GetPtr_sub_6fc6e2a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309ac1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc6e2a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea604) {
      FUN_103023e9(&DAT_104ea604);
      if (DAT_104ea604 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9954 = *(int *)(&DAT_103d3334 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea604);
      }
    }
    sub_6fc6e2a0 = sub_GetDllOffset_102f10f0(6,DAT_104e9954);
  }
  ExceptionList = local_10;
  return &sub_6fc6e2a0;
}


// 0x1027e060  [gap]
uint SKILLS_SkillNec_6fc6f970
               (int param_1,int param_2,int *param_3,int param_4,uint param_5,uint32_t param_s6)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_SkillNec_6fc6f970 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_SkillNec_6fc6f970 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2d04 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027e086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_SkillNec_6fc6f970)();
  return uVar2;
}


// 0x1027e090  (ghidra: FUN_1027e090)  [gap]
uint32_t * GetPtr_sub_6fccfdb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309af1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fccfdb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead40) {
      FUN_103023e9(&DAT_104ead40);
      if (DAT_104ead40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb038 = *(int *)(&DAT_103d343c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead40);
      }
    }
    sub_6fccfdb0 = sub_GetDllOffset_102f10f0(6,DAT_104eb038);
  }
  ExceptionList = local_10;
  return &sub_6fccfdb0;
}


// 0x1027e140  (ghidra: FUN_1027e140)  [gap]
uint32_t * GetPtr_sub_6fd00460(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309b21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd00460 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e975c) {
      FUN_103023e9(&DAT_104e975c);
      if (DAT_104e975c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9878 = *(int *)(&DAT_103d4b64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e975c);
      }
    }
    sub_6fd00460 = sub_GetDllOffset_102f10f0(6,DAT_104e9878);
  }
  ExceptionList = local_10;
  return &sub_6fd00460;
}


// 0x1027e1f0  (ghidra: FUN_1027e1f0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00210(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309b51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fd00210 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e99f8) {
      FUN_103023e9(&DAT_104e99f8);
      if (DAT_104e99f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaaf0 = *(int *)(&DAT_103d32c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e99f8);
      }
    }
    UNIT_SUnitDmg_6fd00210 = sub_GetDllOffset_102f10f0(6,DAT_104eaaf0);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fd00210;
}


// 0x1027e2a0  (ghidra: FUN_1027e2a0)  [gap]
uint32_t * GetPtr_sub_6fd00660(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309b81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd00660 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4fc) {
      FUN_103023e9(&DAT_104ea4fc);
      if (DAT_104ea4fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae0c = *(int *)(&DAT_103d347c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4fc);
      }
    }
    sub_6fd00660 = sub_GetDllOffset_102f10f0(6,DAT_104eae0c);
  }
  ExceptionList = local_10;
  return &sub_6fd00660;
}


// 0x1027e350  (ghidra: FUN_1027e350)  [gap]
uint32_t * GetPtr_sub_6fc59b40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309bb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc59b40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea3d4) {
      FUN_103023e9(&DAT_104ea3d4);
      if (DAT_104ea3d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb05c = *(int *)(&DAT_103d3f74 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea3d4);
      }
    }
    sub_6fc59b40 = sub_GetDllOffset_102f10f0(6,DAT_104eb05c);
  }
  ExceptionList = local_10;
  return &sub_6fc59b40;
}


// 0x1027e400  (ghidra: FUN_1027e400)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffa60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309be1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcffa60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea58c) {
      FUN_103023e9(&DAT_104ea58c);
      if (DAT_104ea58c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96a4 = *(int *)(&DAT_103d3694 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea58c);
      }
    }
    UNIT_SUnitDmg_6fcffa60 = sub_GetDllOffset_102f10f0(6,DAT_104e96a4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcffa60;
}


// 0x1027e4b0  (ghidra: FUN_1027e4b0)  [gap]
uint32_t * GetPtr_sub_6fd012d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309c11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd012d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea770) {
      FUN_103023e9(&DAT_104ea770);
      if (DAT_104ea770 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9c4 = *(int *)(&DAT_103d3e64 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea770);
      }
    }
    sub_6fd012d0 = sub_GetDllOffset_102f10f0(6,DAT_104ea9c4);
  }
  ExceptionList = local_10;
  return &sub_6fd012d0;
}


// 0x1027e560  [gap]
int * __fastcall
sub_6fd01d90(int param_1,uint param_2,byte param_3,uint param_4,int param_5,uint32_t param_s4,
            uint32_t param_s5,uint32_t param_s6,uint32_t param_s7)

{
  int iVar1;
  int *piVar2;
  
  if (p_sub_6fd01d90 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd01d90 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6708 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027e586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_sub_6fd01d90)();
  return piVar2;
}


// 0x1027e590  (ghidra: FUN_1027e590)  [gap]
uint32_t * GetPtr_sub_6fc67cf0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309c41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc67cf0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea644) {
      FUN_103023e9(&DAT_104ea644);
      if (DAT_104ea644 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4ac = *(int *)(&DAT_103d414c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea644);
      }
    }
    sub_6fc67cf0 = sub_GetDllOffset_102f10f0(6,DAT_104ea4ac);
  }
  ExceptionList = local_10;
  return &sub_6fc67cf0;
}


// 0x1027e640  (ghidra: FUN_1027e640)  [gap]
uint32_t * GetPtr_sub_6fcb5d50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309c71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb5d50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e95bc) {
      FUN_103023e9(&DAT_104e95bc);
      if (DAT_104e95bc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf58 = *(int *)(&DAT_103d374c + iVar2 * 4);
        FUN_1030239f(&DAT_104e95bc);
      }
    }
    sub_6fcb5d50 = sub_GetDllOffset_102f10f0(6,DAT_104eaf58);
  }
  ExceptionList = local_10;
  return &sub_6fcb5d50;
}


// 0x1027e6f0  (ghidra: FUN_1027e6f0)  [gap]
uint32_t * GetPtr_PLAYER_PlrMsg_6fcebf50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309ca1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrMsg_6fcebf50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8fac) {
      FUN_103023e9(&DAT_104e8fac);
      if (DAT_104e8fac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9af0 = *(int *)(&DAT_103d41ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e8fac);
      }
    }
    PLAYER_PlrMsg_6fcebf50 = sub_GetDllOffset_102f10f0(6,DAT_104e9af0);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrMsg_6fcebf50;
}


// 0x1027e7a0  (ghidra: FUN_1027e7a0)  [gap]
uint32_t * GetPtr_Ai_AiGeneral_6fc409b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309cd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiGeneral_6fc409b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9854) {
      FUN_103023e9(&DAT_104e9854);
      if (DAT_104e9854 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9fa0 = *(int *)(&DAT_103d4034 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9854);
      }
    }
    Ai_AiGeneral_6fc409b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9fa0);
  }
  ExceptionList = local_10;
  return &Ai_AiGeneral_6fc409b0;
}


// 0x1027e850  (ghidra: FUN_1027e850)  [gap]
uint32_t * GetPtr_sub_6fd00f40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309d01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd00f40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9270) {
      FUN_103023e9(&DAT_104e9270);
      if (DAT_104e9270 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9334 = *(int *)(&DAT_103d365c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9270);
      }
    }
    sub_6fd00f40 = sub_GetDllOffset_102f10f0(6,DAT_104e9334);
  }
  ExceptionList = local_10;
  return &sub_6fd00f40;
}


// 0x1027e900  [gap]
void sub_6fc9b0a0(int param_1,int *param_2,uint32_t param_s3)

{
  int iVar1;
  
  if (p_sub_6fc9b0a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc9b0a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c73a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027e926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc9b0a0)();
  return;
}


// 0x1027e930  (ghidra: FUN_1027e930)  [gap]
uint32_t * GetPtr_sub_6fc4e830(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309d31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc4e830 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea5cc) {
      FUN_103023e9(&DAT_104ea5cc);
      if (DAT_104ea5cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8ec = *(int *)(&DAT_103d34cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea5cc);
      }
    }
    sub_6fc4e830 = sub_GetDllOffset_102f10f0(6,DAT_104ea8ec);
  }
  ExceptionList = local_10;
  return &sub_6fc4e830;
}


// 0x1027e9e0  (ghidra: FUN_1027e9e0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fd00310(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309d61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fd00310 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eacc0) {
      FUN_103023e9(&DAT_104eacc0);
      if (DAT_104eacc0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96d4 = *(int *)(&DAT_103d5124 + iVar2 * 4);
        FUN_1030239f(&DAT_104eacc0);
      }
    }
    UNIT_SUnitDmg_6fd00310 = sub_GetDllOffset_102f10f0(6,DAT_104e96d4);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fd00310;
}


// 0x1027ea90  [gap]
int * __fastcall sub_6fd0ef10(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (p_sub_6fd0ef10 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd0ef10 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ab0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027eab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar2 = (int *)(*p_sub_6fd0ef10)();
  return piVar2;
}


// 0x1027eac0  [gap]
int __fastcall
sub_6fd0f650(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,ushort param_8)

{
  int iVar1;
  
  if (p_sub_6fd0f650 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd0f650 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6528 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027eae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fd0f650)();
  return iVar1;
}


// 0x1027eaf0  [gap]
void sub_6fc67a20(void *param_1,void *param_2)

{
  int iVar1;
  
  if (p_sub_6fc67a20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc67a20 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7dd0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027eb16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc67a20)();
  return;
}


// 0x1027eb20  [gap]
void sub_6fc43ca0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc43ca0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc43ca0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2c4c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027eb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc43ca0)();
  return;
}


// 0x1027eb50  [gap]
void __fastcall sub_6fc468e0(uint param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (p_sub_6fc468e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc468e0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7660 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027eb76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc468e0)();
  return;
}


// 0x1027eb80  (ghidra: FUN_1027eb80)  [gap]
uint32_t * GetPtr_Quests_a2q8_6fd0e7b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309d91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Quests_a2q8_6fd0e7b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea21c) {
      FUN_103023e9(&DAT_104ea21c);
      if (DAT_104ea21c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a58 = *(int *)(&DAT_103d3b6c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea21c);
      }
    }
    Quests_a2q8_6fd0e7b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9a58);
  }
  ExceptionList = local_10;
  return &Quests_a2q8_6fd0e7b0;
}


// 0x1027ec30  (ghidra: FUN_1027ec30)  [gap]
uint32_t * GetPtr_sub_6fc432b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309dc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc432b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0f0) {
      FUN_103023e9(&DAT_104ea0f0);
      if (DAT_104ea0f0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a08 = *(int *)(&DAT_103d3aa4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0f0);
      }
    }
    sub_6fc432b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9a08);
  }
  ExceptionList = local_10;
  return &sub_6fc432b0;
}


// 0x1027ece0  (ghidra: FUN_1027ece0)  [gap]
uint32_t * GetPtr_sub_6fd013b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309df1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd013b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d34) {
      FUN_103023e9(&DAT_104e9d34);
      if (DAT_104e9d34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e924c = *(int *)(&DAT_103d4d64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d34);
      }
    }
    sub_6fd013b0 = sub_GetDllOffset_102f10f0(6,DAT_104e924c);
  }
  ExceptionList = local_10;
  return &sub_6fd013b0;
}


// 0x1027ed90  (ghidra: FUN_1027ed90)  [gap]
uint32_t * GetPtr_sub_6fc66b20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309e21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc66b20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9360) {
      FUN_103023e9(&DAT_104e9360);
      if (DAT_104e9360 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9620 = *(int *)(&DAT_103d39ec + iVar2 * 4);
        FUN_1030239f(&DAT_104e9360);
      }
    }
    sub_6fc66b20 = sub_GetDllOffset_102f10f0(6,DAT_104e9620);
  }
  ExceptionList = local_10;
  return &sub_6fc66b20;
}


// 0x1027ee40  (ghidra: FUN_1027ee40)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff080(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309e51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcff080 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa00) {
      FUN_103023e9(&DAT_104eaa00);
      if (DAT_104eaa00 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e910c = *(int *)(&DAT_103d4534 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa00);
      }
    }
    UNIT_SUnitDmg_6fcff080 = sub_GetDllOffset_102f10f0(6,DAT_104e910c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcff080;
}


// 0x1027eef0  (ghidra: FUN_1027eef0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcff4a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309e81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcff4a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea534) {
      FUN_103023e9(&DAT_104ea534);
      if (DAT_104ea534 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab9c = *(int *)(&DAT_103d3e9c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea534);
      }
    }
    UNIT_SUnitDmg_6fcff4a0 = sub_GetDllOffset_102f10f0(6,DAT_104eab9c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcff4a0;
}


// 0x1027efa0  (ghidra: FUN_1027efa0)  [gap]
uint32_t * GetPtr_sub_6fc67700(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309eb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc67700 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa80) {
      FUN_103023e9(&DAT_104eaa80);
      if (DAT_104eaa80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e58 = *(int *)(&DAT_103d3684 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa80);
      }
    }
    sub_6fc67700 = sub_GetDllOffset_102f10f0(6,DAT_104e9e58);
  }
  ExceptionList = local_10;
  return &sub_6fc67700;
}


// 0x1027f050  (ghidra: FUN_1027f050)  [gap]
uint32_t * GetPtr_sub_6fc679b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309ee1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc679b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8c8) {
      FUN_103023e9(&DAT_104ea8c8);
      if (DAT_104ea8c8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea3e8 = *(int *)(&DAT_103d4544 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8c8);
      }
    }
    sub_6fc679b0 = sub_GetDllOffset_102f10f0(6,DAT_104ea3e8);
  }
  ExceptionList = local_10;
  return &sub_6fc679b0;
}


// 0x1027f100  (ghidra: FUN_1027f100)  [gap]
uint32_t * GetPtr_sub_6fc67880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309f11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc67880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea20c) {
      FUN_103023e9(&DAT_104ea20c);
      if (DAT_104ea20c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eafbc = *(int *)(&DAT_103d353c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea20c);
      }
    }
    sub_6fc67880 = sub_GetDllOffset_102f10f0(6,DAT_104eafbc);
  }
  ExceptionList = local_10;
  return &sub_6fc67880;
}


// 0x1027f1b0  (ghidra: FUN_1027f1b0)  [gap]
uint32_t * GetPtr_sub_6fc44950(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309f41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc44950 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e923c) {
      FUN_103023e9(&DAT_104e923c);
      if (DAT_104e923c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacd8 = *(int *)(&DAT_103d3384 + iVar2 * 4);
        FUN_1030239f(&DAT_104e923c);
      }
    }
    sub_6fc44950 = sub_GetDllOffset_102f10f0(6,DAT_104eacd8);
  }
  ExceptionList = local_10;
  return &sub_6fc44950;
}


// 0x1027f260  (ghidra: FUN_1027f260)  [gap]
uint32_t * GetPtr_sub_6fc43ae0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309f71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc43ae0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98cc) {
      FUN_103023e9(&DAT_104e98cc);
      if (DAT_104e98cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaa18 = *(int *)(&DAT_103d4954 + iVar2 * 4);
        FUN_1030239f(&DAT_104e98cc);
      }
    }
    sub_6fc43ae0 = sub_GetDllOffset_102f10f0(6,DAT_104eaa18);
  }
  ExceptionList = local_10;
  return &sub_6fc43ae0;
}


// 0x1027f310  (ghidra: FUN_1027f310)  [gap]
uint32_t * GetPtr_sub_6fc42920(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309fa1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc42920 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0a0) {
      FUN_103023e9(&DAT_104eb0a0);
      if (DAT_104eb0a0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea558 = *(int *)(&DAT_103d3da4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0a0);
      }
    }
    sub_6fc42920 = sub_GetDllOffset_102f10f0(6,DAT_104ea558);
  }
  ExceptionList = local_10;
  return &sub_6fc42920;
}


// 0x1027f3c0  (ghidra: FUN_1027f3c0)  [gap]
uint32_t * GetPtr_sub_6fc448a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10309fd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc448a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaadc) {
      FUN_103023e9(&DAT_104eaadc);
      if (DAT_104eaadc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91e0 = *(int *)(&DAT_103d3c44 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaadc);
      }
    }
    sub_6fc448a0 = sub_GetDllOffset_102f10f0(6,DAT_104e91e0);
  }
  ExceptionList = local_10;
  return &sub_6fc448a0;
}


// 0x1027f470  (ghidra: FUN_1027f470)  [gap]
uint32_t * GetPtr_sub_6fc43260(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a001;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc43260 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea878) {
      FUN_103023e9(&DAT_104ea878);
      if (DAT_104ea878 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea67c = *(int *)(&DAT_103d336c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea878);
      }
    }
    sub_6fc43260 = sub_GetDllOffset_102f10f0(6,DAT_104ea67c);
  }
  ExceptionList = local_10;
  return &sub_6fc43260;
}


// 0x1027f520  (ghidra: FUN_1027f520)  [gap]
uint32_t * GetPtr_sub_6fc56140(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a031;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc56140 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9550) {
      FUN_103023e9(&DAT_104e9550);
      if (DAT_104e9550 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadac = *(int *)(&DAT_103d43fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9550);
      }
    }
    sub_6fc56140 = sub_GetDllOffset_102f10f0(6,DAT_104eadac);
  }
  ExceptionList = local_10;
  return &sub_6fc56140;
}


// 0x1027f5d0  (ghidra: FUN_1027f5d0)  [gap]
uint32_t * GetPtr_sub_6fc21320(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a061;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21320 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea850) {
      FUN_103023e9(&DAT_104ea850);
      if (DAT_104ea850 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9788 = *(int *)(&DAT_103d4594 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea850);
      }
    }
    sub_6fc21320 = sub_GetDllOffset_102f10f0(6,DAT_104e9788);
  }
  ExceptionList = local_10;
  return &sub_6fc21320;
}


// 0x1027f680  (ghidra: FUN_1027f680)  [gap]
uint32_t * GetPtr_sub_6fc56470(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a091;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc56470 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6f8) {
      FUN_103023e9(&DAT_104ea6f8);
      if (DAT_104ea6f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea740 = *(int *)(&DAT_103d3f14 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6f8);
      }
    }
    sub_6fc56470 = sub_GetDllOffset_102f10f0(6,DAT_104ea740);
  }
  ExceptionList = local_10;
  return &sub_6fc56470;
}


// 0x1027f730  (ghidra: FUN_1027f730)  [gap]
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3f600(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a0c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitInactive_6fc3f600 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea32c) {
      FUN_103023e9(&DAT_104ea32c);
      if (DAT_104ea32c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea408 = *(int *)(&DAT_103d3d8c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea32c);
      }
    }
    UNIT_SUnitInactive_6fc3f600 = sub_GetDllOffset_102f10f0(6,DAT_104ea408);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitInactive_6fc3f600;
}


// 0x1027f7e0  (ghidra: FUN_1027f7e0)  [gap]
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3ef50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a0f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitInactive_6fc3ef50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea08c) {
      FUN_103023e9(&DAT_104ea08c);
      if (DAT_104ea08c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91dc = *(int *)(&DAT_103d35cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea08c);
      }
    }
    UNIT_SUnitInactive_6fc3ef50 = sub_GetDllOffset_102f10f0(6,DAT_104e91dc);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitInactive_6fc3ef50;
}


// 0x1027f890  (ghidra: FUN_1027f890)  [gap]
uint32_t * GetPtr_UNIT_SUnitInactive_6fc3f2d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a121;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitInactive_6fc3f2d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eade0) {
      FUN_103023e9(&DAT_104eade0);
      if (DAT_104eade0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9464 = *(int *)(&DAT_103d328c + iVar2 * 4);
        FUN_1030239f(&DAT_104eade0);
      }
    }
    UNIT_SUnitInactive_6fc3f2d0 = sub_GetDllOffset_102f10f0(6,DAT_104e9464);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitInactive_6fc3f2d0;
}


// 0x1027f940  (ghidra: FUN_1027f940)  [gap]
uint32_t * GetPtr_sub_6fd01610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a151;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd01610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e96e0) {
      FUN_103023e9(&DAT_104e96e0);
      if (DAT_104e96e0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ba8 = *(int *)(&DAT_103d48c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e96e0);
      }
    }
    sub_6fd01610 = sub_GetDllOffset_102f10f0(6,DAT_104e9ba8);
  }
  ExceptionList = local_10;
  return &sub_6fd01610;
}


// 0x1027f9f0  (ghidra: FUN_1027f9f0)  [gap]
uint32_t * GetPtr_sub_6fcdee30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a181;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdee30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab10) {
      FUN_103023e9(&DAT_104eab10);
      if (DAT_104eab10 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9218 = *(int *)(&DAT_103d4314 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab10);
      }
    }
    sub_6fcdee30 = sub_GetDllOffset_102f10f0(6,DAT_104e9218);
  }
  ExceptionList = local_10;
  return &sub_6fcdee30;
}


// 0x1027faa0  [gap]
void sub_6fcdf2e0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (p_sub_6fcdf2e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcdf2e0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c73b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027fac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fcdf2e0)();
  return;
}


// 0x1027fad0  (ghidra: FUN_1027fad0)  [gap]
uint32_t * GetPtr_sub_6fcde2a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a1b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcde2a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9290) {
      FUN_103023e9(&DAT_104e9290);
      if (DAT_104e9290 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea924 = *(int *)(&DAT_103d3e04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9290);
      }
    }
    sub_6fcde2a0 = sub_GetDllOffset_102f10f0(6,DAT_104ea924);
  }
  ExceptionList = local_10;
  return &sub_6fcde2a0;
}


// 0x1027fb80  (ghidra: FUN_1027fb80)  [gap]
uint32_t * GetPtr_sub_6fc31980(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a1e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc31980 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9490) {
      FUN_103023e9(&DAT_104e9490);
      if (DAT_104e9490 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea45c = *(int *)(&DAT_103d357c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9490);
      }
    }
    sub_6fc31980 = sub_GetDllOffset_102f10f0(6,DAT_104ea45c);
  }
  ExceptionList = local_10;
  return &sub_6fc31980;
}


// 0x1027fc30  (ghidra: FUN_1027fc30)  [gap]
uint32_t * GetPtr_sub_6fcdce60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a211;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdce60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea048) {
      FUN_103023e9(&DAT_104ea048);
      if (DAT_104ea048 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9284 = *(int *)(&DAT_103d4864 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea048);
      }
    }
    sub_6fcdce60 = sub_GetDllOffset_102f10f0(6,DAT_104e9284);
  }
  ExceptionList = local_10;
  return &sub_6fcdce60;
}


// 0x1027fce0  [gap]
uint ITEMS_ItemMode_6fcf76a0
               (int param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               int param_7,uint32_t param_s8)

{
  int iVar1;
  uint uVar2;
  
  if (p_ITEMS_ItemMode_6fcf76a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_ITEMS_ItemMode_6fcf76a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6c90 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1027fd06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_ITEMS_ItemMode_6fcf76a0)();
  return uVar2;
}


// 0x1027fd10  (ghidra: FUN_1027fd10)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4a70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a241;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf4a70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea94c) {
      FUN_103023e9(&DAT_104ea94c);
      if (DAT_104ea94c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4c8 = *(int *)(&DAT_103d39fc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea94c);
      }
    }
    ITEMS_ItemMode_6fcf4a70 = sub_GetDllOffset_102f10f0(6,DAT_104ea4c8);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf4a70;
}


// 0x1027fdc0  (ghidra: FUN_1027fdc0)  [gap]
uint32_t * GetPtr_INVENTORY_InvMode_6fcbb630(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a271;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (INVENTORY_InvMode_6fcbb630 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea104) {
      FUN_103023e9(&DAT_104ea104);
      if (DAT_104ea104 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e901c = *(int *)(&DAT_103d34a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea104);
      }
    }
    INVENTORY_InvMode_6fcbb630 = sub_GetDllOffset_102f10f0(6,DAT_104e901c);
  }
  ExceptionList = local_10;
  return &INVENTORY_InvMode_6fcbb630;
}


// 0x1027fe70  (ghidra: FUN_1027fe70)  [gap]
uint32_t * GetPtr_UNIT_sunitproxy_6fcaf6c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a2a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_sunitproxy_6fcaf6c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9458) {
      FUN_103023e9(&DAT_104e9458);
      if (DAT_104e9458 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea570 = *(int *)(&DAT_103d467c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9458);
      }
    }
    UNIT_sunitproxy_6fcaf6c0 = sub_GetDllOffset_102f10f0(6,DAT_104ea570);
  }
  ExceptionList = local_10;
  return &UNIT_sunitproxy_6fcaf6c0;
}


// 0x1027ff20  (ghidra: FUN_1027ff20)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcdd490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a2d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcdd490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8b0) {
      FUN_103023e9(&DAT_104ea8b0);
      if (DAT_104ea8b0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead70 = *(int *)(&DAT_103d38b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8b0);
      }
    }
    D2Game_loc_6fcdd490 = sub_GetDllOffset_102f10f0(6,DAT_104ead70);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcdd490;
}


// 0x1027ffd0  (ghidra: FUN_1027ffd0)  [gap]
uint32_t * GetPtr_sub_6fcdd920(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a301;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdd920 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bc4) {
      FUN_103023e9(&DAT_104e9bc4);
      if (DAT_104e9bc4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9640 = *(int *)(&DAT_103d485c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bc4);
      }
    }
    sub_6fcdd920 = sub_GetDllOffset_102f10f0(6,DAT_104e9640);
  }
  ExceptionList = local_10;
  return &sub_6fcdd920;
}


// 0x10280080  (ghidra: FUN_10280080)  [gap]
uint32_t * GetPtr_sub_6fcdd880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a331;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdd880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea648) {
      FUN_103023e9(&DAT_104ea648);
      if (DAT_104ea648 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea83c = *(int *)(&DAT_103d4734 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea648);
      }
    }
    sub_6fcdd880 = sub_GetDllOffset_102f10f0(6,DAT_104ea83c);
  }
  ExceptionList = local_10;
  return &sub_6fcdd880;
}


// 0x10280130  (ghidra: FUN_10280130)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fd000c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a361;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fd000c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab50) {
      FUN_103023e9(&DAT_104eab50);
      if (DAT_104eab50 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea220 = *(int *)(&DAT_103d35e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab50);
      }
    }
    UNIT_SUnitDmg_6fd000c0 = sub_GetDllOffset_102f10f0(6,DAT_104ea220);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fd000c0;
}


// 0x102801e0  (ghidra: FUN_102801e0)  [gap]
uint32_t * GetPtr_sub_6fc73470(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a391;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc73470 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9960) {
      FUN_103023e9(&DAT_104e9960);
      if (DAT_104e9960 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea7b4 = *(int *)(&DAT_103d3dac + iVar2 * 4);
        FUN_1030239f(&DAT_104e9960);
      }
    }
    sub_6fc73470 = sub_GetDllOffset_102f10f0(6,DAT_104ea7b4);
  }
  ExceptionList = local_10;
  return &sub_6fc73470;
}


// 0x10280290  (ghidra: FUN_10280290)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf60d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a3c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf60d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea300) {
      FUN_103023e9(&DAT_104ea300);
      if (DAT_104ea300 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab40 = *(int *)(&DAT_103d446c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea300);
      }
    }
    ITEMS_ItemMode_6fcf60d0 = sub_GetDllOffset_102f10f0(6,DAT_104eab40);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf60d0;
}


// 0x10280340  (ghidra: FUN_10280340)  [gap]
uint32_t * GetPtr_sub_6fcd17b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a3f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcd17b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e90a8) {
      FUN_103023e9(&DAT_104e90a8);
      if (DAT_104e90a8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9b74 = *(int *)(&DAT_103d3dc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e90a8);
      }
    }
    sub_6fcd17b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9b74);
  }
  ExceptionList = local_10;
  return &sub_6fcd17b0;
}


// 0x102803f0  (ghidra: FUN_102803f0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfaa40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a421;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfaa40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa54) {
      FUN_103023e9(&DAT_104eaa54);
      if (DAT_104eaa54 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e94bc = *(int *)(&DAT_103d3fcc + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa54);
      }
    }
    UNIT_SUnitDmg_6fcfaa40 = sub_GetDllOffset_102f10f0(6,DAT_104e94bc);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfaa40;
}


// 0x102804a0  (ghidra: FUN_102804a0)  [gap]
uint32_t * GetPtr_UNIT_Item_6fb34080(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a451;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Item_6fb34080 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9588) {
      FUN_103023e9(&DAT_104e9588);
      if (DAT_104e9588 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea28c = *(int *)(&DAT_103d3124 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9588);
      }
    }
    UNIT_Item_6fb34080 = sub_GetDllOffset_102f10f0(0,DAT_104ea28c);
  }
  ExceptionList = local_10;
  return &UNIT_Item_6fb34080;
}


// 0x10280550  (ghidra: FUN_10280550)  [gap]
uint32_t * GetPtr_UNIT_Item_6fb32660(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a481;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_Item_6fb32660 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9b08) {
      FUN_103023e9(&DAT_104e9b08);
      if (DAT_104e9b08 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e91fc = *(int *)(&DAT_103d3d3c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9b08);
      }
    }
    UNIT_Item_6fb32660 = sub_GetDllOffset_102f10f0(0,DAT_104e91fc);
  }
  ExceptionList = local_10;
  return &UNIT_Item_6fb32660;
}


// 0x10280600  (ghidra: FUN_10280600)  [gap]
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c470(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a4b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrSave2_6fd0c470 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bf4) {
      FUN_103023e9(&DAT_104e9bf4);
      if (DAT_104e9bf4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9944 = *(int *)(&DAT_103d3c64 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bf4);
      }
    }
    PLAYER_PlrSave2_6fd0c470 = sub_GetDllOffset_102f10f0(6,DAT_104e9944);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrSave2_6fd0c470;
}


// 0x102806b0  (ghidra: FUN_102806b0)  [gap]
uint32_t * GetPtr_sub_6fd0b7b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a4e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b7b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf80) {
      FUN_103023e9(&DAT_104eaf80);
      if (DAT_104eaf80 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95c8 = *(int *)(&DAT_103d3764 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf80);
      }
    }
    sub_6fd0b7b0 = sub_GetDllOffset_102f10f0(6,DAT_104e95c8);
  }
  ExceptionList = local_10;
  return &sub_6fd0b7b0;
}


// 0x10280760  (ghidra: FUN_10280760)  [gap]
uint32_t * GetPtr_sub_6fd0b700(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a511;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b700 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8ff8) {
      FUN_103023e9(&DAT_104e8ff8);
      if (DAT_104e8ff8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaea8 = *(int *)(&DAT_103d3db4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e8ff8);
      }
    }
    sub_6fd0b700 = sub_GetDllOffset_102f10f0(6,DAT_104eaea8);
  }
  ExceptionList = local_10;
  return &sub_6fd0b700;
}


// 0x10280810  (ghidra: FUN_10280810)  [gap]
uint32_t * GetPtr_sub_6fd0b610(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a541;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b610 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaa68) {
      FUN_103023e9(&DAT_104eaa68);
      if (DAT_104eaa68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ba0 = *(int *)(&DAT_103d4e14 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaa68);
      }
    }
    sub_6fd0b610 = sub_GetDllOffset_102f10f0(6,DAT_104e9ba0);
  }
  ExceptionList = local_10;
  return &sub_6fd0b610;
}


// 0x102808c0  [gap]
uint PLAYER_PlrSave2_6fd0be70(uint param_1,uint *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_PLAYER_PlrSave2_6fd0be70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrSave2_6fd0be70 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c72d0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102808e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_PLAYER_PlrSave2_6fd0be70)();
  return uVar2;
}


// 0x102808f0  (ghidra: FUN_102808f0)  [gap]
uint32_t * GetPtr_sub_6fd0bc40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a571;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0bc40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea7ec) {
      FUN_103023e9(&DAT_104ea7ec);
      if (DAT_104ea7ec == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead0c = *(int *)(&DAT_103d3a6c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea7ec);
      }
    }
    sub_6fd0bc40 = sub_GetDllOffset_102f10f0(6,DAT_104ead0c);
  }
  ExceptionList = local_10;
  return &sub_6fd0bc40;
}


// 0x102809a0  (ghidra: FUN_102809a0)  [gap]
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c0e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a5a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrSave2_6fd0c0e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e970c) {
      FUN_103023e9(&DAT_104e970c);
      if (DAT_104e970c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead48 = *(int *)(&DAT_103d3d54 + iVar2 * 4);
        FUN_1030239f(&DAT_104e970c);
      }
    }
    PLAYER_PlrSave2_6fd0c0e0 = sub_GetDllOffset_102f10f0(6,DAT_104ead48);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrSave2_6fd0c0e0;
}


// 0x10280a50  [gap]
uint PLAYER_PlrSave2_6fd0c260
               (uint param_1,uint *param_2,uint *param_3,uint32_t param_s4,uint32_t param_s5,
               uint32_t param_s6)

{
  int iVar1;
  uint uVar2;
  
  if (p_PLAYER_PlrSave2_6fd0c260 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlrSave2_6fd0c260 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6be8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10280a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_PLAYER_PlrSave2_6fd0c260)();
  return uVar2;
}


// 0x10280a80  (ghidra: FUN_10280a80)  [gap]
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c1e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a5d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrSave2_6fd0c1e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea304) {
      FUN_103023e9(&DAT_104ea304);
      if (DAT_104ea304 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9838 = *(int *)(&DAT_103d38fc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea304);
      }
    }
    PLAYER_PlrSave2_6fd0c1e0 = sub_GetDllOffset_102f10f0(6,DAT_104e9838);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrSave2_6fd0c1e0;
}


// 0x10280b30  (ghidra: FUN_10280b30)  [gap]
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0c020(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a601;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrSave2_6fd0c020 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9144) {
      FUN_103023e9(&DAT_104e9144);
      if (DAT_104e9144 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea944 = *(int *)(&DAT_103d433c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9144);
      }
    }
    PLAYER_PlrSave2_6fd0c020 = sub_GetDllOffset_102f10f0(6,DAT_104ea944);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrSave2_6fd0c020;
}


// 0x10280be0  (ghidra: FUN_10280be0)  [gap]
uint32_t * GetPtr_sub_6fc307e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a631;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc307e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0a4) {
      FUN_103023e9(&DAT_104eb0a4);
      if (DAT_104eb0a4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea214 = *(int *)(&DAT_103d301c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0a4);
      }
    }
    sub_6fc307e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea214);
  }
  ExceptionList = local_10;
  return &sub_6fc307e0;
}


// 0x10280c90  (ghidra: FUN_10280c90)  [gap]
uint32_t * GetPtr_sub_6fd0ba40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a661;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0ba40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead04) {
      FUN_103023e9(&DAT_104ead04);
      if (DAT_104ead04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d4c = *(int *)(&DAT_103d39a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead04);
      }
    }
    sub_6fd0ba40 = sub_GetDllOffset_102f10f0(6,DAT_104e9d4c);
  }
  ExceptionList = local_10;
  return &sub_6fd0ba40;
}


// 0x10280d40  (ghidra: FUN_10280d40)  [gap]
uint32_t * GetPtr_sub_6fd0baf0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a691;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0baf0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6d4) {
      FUN_103023e9(&DAT_104ea6d4);
      if (DAT_104ea6d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae60 = *(int *)(&DAT_103d473c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6d4);
      }
    }
    sub_6fd0baf0 = sub_GetDllOffset_102f10f0(6,DAT_104eae60);
  }
  ExceptionList = local_10;
  return &sub_6fd0baf0;
}


// 0x10280df0  (ghidra: FUN_10280df0)  [gap]
uint32_t * GetPtr_sub_6fd0b560(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a6c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b560 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8ac) {
      FUN_103023e9(&DAT_104ea8ac);
      if (DAT_104ea8ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea78c = *(int *)(&DAT_103d4804 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8ac);
      }
    }
    sub_6fd0b560 = sub_GetDllOffset_102f10f0(6,DAT_104ea78c);
  }
  ExceptionList = local_10;
  return &sub_6fd0b560;
}


// 0x10280ea0  (ghidra: FUN_10280ea0)  [gap]
uint32_t * GetPtr_sub_6fd0b4e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a6f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b4e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea224) {
      FUN_103023e9(&DAT_104ea224);
      if (DAT_104ea224 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea108 = *(int *)(&DAT_103d394c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea224);
      }
    }
    sub_6fd0b4e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea108);
  }
  ExceptionList = local_10;
  return &sub_6fd0b4e0;
}


// 0x10280f50  (ghidra: FUN_10280f50)  [gap]
uint32_t * GetPtr_sub_6fd0b440(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a721;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0b440 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a38) {
      FUN_103023e9(&DAT_104e9a38);
      if (DAT_104e9a38 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea870 = *(int *)(&DAT_103d4b34 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a38);
      }
    }
    sub_6fd0b440 = sub_GetDllOffset_102f10f0(6,DAT_104ea870);
  }
  ExceptionList = local_10;
  return &sub_6fd0b440;
}


// 0x10281000  (ghidra: FUN_10281000)  [gap]
uint32_t * GetPtr_PLAYER_PlrSave2_6fd0bda0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a751;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrSave2_6fd0bda0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eab70) {
      FUN_103023e9(&DAT_104eab70);
      if (DAT_104eab70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c1c = *(int *)(&DAT_103d4d54 + iVar2 * 4);
        FUN_1030239f(&DAT_104eab70);
      }
    }
    PLAYER_PlrSave2_6fd0bda0 = sub_GetDllOffset_102f10f0(6,DAT_104e9c1c);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrSave2_6fd0bda0;
}


// 0x102810b0  (ghidra: FUN_102810b0)  [gap]
uint32_t * GetPtr_sub_6fd0ca60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a781;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0ca60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c48) {
      FUN_103023e9(&DAT_104e9c48);
      if (DAT_104e9c48 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea47c = *(int *)(&DAT_103d4944 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c48);
      }
    }
    sub_6fd0ca60 = sub_GetDllOffset_102f10f0(6,DAT_104ea47c);
  }
  ExceptionList = local_10;
  return &sub_6fd0ca60;
}


// 0x10281160  (ghidra: FUN_10281160)  [gap]
uint32_t * GetPtr_sub_6fd0cb50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a7b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0cb50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2c8) {
      FUN_103023e9(&DAT_104ea2c8);
      if (DAT_104ea2c8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9190 = *(int *)(&DAT_103d3e94 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2c8);
      }
    }
    sub_6fd0cb50 = sub_GetDllOffset_102f10f0(6,DAT_104e9190);
  }
  ExceptionList = local_10;
  return &sub_6fd0cb50;
}


// 0x10281210  [gap]
uint sub_6fd0cf30(void *param_1,int *param_2,uint *param_3,short *param_4,uint param_5,uint *param_6
                 )

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fd0cf30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd0cf30 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6d08 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fd0cf30)();
  return uVar2;
}


// 0x10281240  (ghidra: FUN_10281240)  [gap]
uint32_t * GetPtr_sub_6fd0d960(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a7e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0d960 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f84) {
      FUN_103023e9(&DAT_104e9f84);
      if (DAT_104e9f84 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bdc = *(int *)(&DAT_103d33d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f84);
      }
    }
    sub_6fd0d960 = sub_GetDllOffset_102f10f0(6,DAT_104e9bdc);
  }
  ExceptionList = local_10;
  return &sub_6fd0d960;
}


// 0x102812f0  (ghidra: FUN_102812f0)  [gap]
uint32_t * GetPtr_sub_6fd0cbd0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a811;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0cbd0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9124) {
      FUN_103023e9(&DAT_104e9124);
      if (DAT_104e9124 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f0c = *(int *)(&DAT_103d31d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9124);
      }
    }
    sub_6fd0cbd0 = sub_GetDllOffset_102f10f0(6,DAT_104e9f0c);
  }
  ExceptionList = local_10;
  return &sub_6fd0cbd0;
}


// 0x102813a0  (ghidra: FUN_102813a0)  [gap]
uint32_t * GetPtr_sub_6fc68950(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a841;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc68950 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c34) {
      FUN_103023e9(&DAT_104e9c34);
      if (DAT_104e9c34 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9260 = *(int *)(&DAT_103d37a4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c34);
      }
    }
    sub_6fc68950 = sub_GetDllOffset_102f10f0(6,DAT_104e9260);
  }
  ExceptionList = local_10;
  return &sub_6fc68950;
}


// 0x10281450  (ghidra: FUN_10281450)  [gap]
uint32_t * GetPtr_sub_6fd0d880(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a871;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0d880 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9bc8) {
      FUN_103023e9(&DAT_104e9bc8);
      if (DAT_104e9bc8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab78 = *(int *)(&DAT_103d308c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9bc8);
      }
    }
    sub_6fd0d880 = sub_GetDllOffset_102f10f0(6,DAT_104eab78);
  }
  ExceptionList = local_10;
  return &sub_6fd0d880;
}


// 0x10281500  (ghidra: FUN_10281500)  [gap]
uint32_t * GetPtr_sub_6fd0cc90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a8a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0cc90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea6fc) {
      FUN_103023e9(&DAT_104ea6fc);
      if (DAT_104ea6fc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacc4 = *(int *)(&DAT_103d32dc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea6fc);
      }
    }
    sub_6fd0cc90 = sub_GetDllOffset_102f10f0(6,DAT_104eacc4);
  }
  ExceptionList = local_10;
  return &sub_6fd0cc90;
}


// 0x102815b0  (ghidra: FUN_102815b0)  [gap]
uint32_t * GetPtr_sub_6fd0d540(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a8d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd0d540 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea318) {
      FUN_103023e9(&DAT_104ea318);
      if (DAT_104ea318 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8f8 = *(int *)(&DAT_103d3bbc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea318);
      }
    }
    sub_6fd0d540 = sub_GetDllOffset_102f10f0(6,DAT_104ea8f8);
  }
  ExceptionList = local_10;
  return &sub_6fd0d540;
}


// 0x10281660  (ghidra: FUN_10281660)  [gap]
uint32_t * GetPtr_sub_6fce1510(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a901;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fce1510 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea808) {
      FUN_103023e9(&DAT_104ea808);
      if (DAT_104ea808 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90e4 = *(int *)(&DAT_103d399c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea808);
      }
    }
    sub_6fce1510 = sub_GetDllOffset_102f10f0(6,DAT_104e90e4);
  }
  ExceptionList = local_10;
  return &sub_6fce1510;
}


// 0x10281710  (ghidra: FUN_10281710)  [gap]
uint32_t * GetPtr_sub_6fcdcc60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a931;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcdcc60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea4c0) {
      FUN_103023e9(&DAT_104ea4c0);
      if (DAT_104ea4c0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea090 = *(int *)(&DAT_103d5044 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea4c0);
      }
    }
    sub_6fcdcc60 = sub_GetDllOffset_102f10f0(6,DAT_104ea090);
  }
  ExceptionList = local_10;
  return &sub_6fcdcc60;
}


// 0x102817c0  [gap]
uint __fastcall SKILLS_SkillNec_6fc70250(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_SkillNec_6fc70250 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_SkillNec_6fc70250 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7190 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102817e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_SkillNec_6fc70250)();
  return uVar2;
}


// 0x10281820  [gap]
uint __fastcall SKILLS_SkillBar_6fc47130(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_SkillBar_6fc47130 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_SkillBar_6fc47130 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2ee4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_SkillBar_6fc47130)();
  return uVar2;
}


// 0x10281850  (ghidra: FUN_10281850)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc1000(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a961;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc1000 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea248) {
      FUN_103023e9(&DAT_104ea248);
      if (DAT_104ea248 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bc0 = *(int *)(&DAT_103d3634 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea248);
      }
    }
    SKILLS_Skills_6fcc1000 = sub_GetDllOffset_102f10f0(6,DAT_104e9bc0);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc1000;
}


// 0x10281900  [gap]
int sub_6fc99b10(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fc99b10 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc99b10 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ed8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc99b10)();
  return iVar1;
}


// 0x10281930  [gap]
void __fastcall sub_6fcc37d0(void *param_1,int *param_2,void *param_3,int param_4)

{
  int iVar1;
  
  if (p_sub_6fcc37d0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcc37d0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7cd0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fcc37d0)();
  return;
}


// 0x10281960  [gap]
void __fastcall sub_6fc99a60(int param_1,int *param_2,uint32_t param_s1,uint32_t param_s2)

{
  int iVar1;
  
  if (p_sub_6fc99a60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc99a60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6b98 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc99a60)();
  return;
}


// 0x10281990  (ghidra: FUN_10281990)  [gap]
uint32_t * GetPtr_sub_6fc2ea10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a991;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2ea10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea35c) {
      FUN_103023e9(&DAT_104ea35c);
      if (DAT_104ea35c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eab24 = *(int *)(&DAT_103d3464 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea35c);
      }
    }
    sub_6fc2ea10 = sub_GetDllOffset_102f10f0(6,DAT_104eab24);
  }
  ExceptionList = local_10;
  return &sub_6fc2ea10;
}


// 0x10281a40  (ghidra: FUN_10281a40)  [gap]
uint32_t * GetPtr_sub_6fcc3120(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a9c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcc3120 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9454) {
      FUN_103023e9(&DAT_104e9454);
      if (DAT_104e9454 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e60 = *(int *)(&DAT_103d3e5c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9454);
      }
    }
    sub_6fcc3120 = sub_GetDllOffset_102f10f0(6,DAT_104e9e60);
  }
  ExceptionList = local_10;
  return &sub_6fcc3120;
}


// 0x10281af0  (ghidra: FUN_10281af0)  [gap]
uint32_t * GetPtr_sub_6fcae810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030a9f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcae810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb084) {
      FUN_103023e9(&DAT_104eb084);
      if (DAT_104eb084 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e98f8 = *(int *)(&DAT_103d4bc4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb084);
      }
    }
    sub_6fcae810 = sub_GetDllOffset_102f10f0(6,DAT_104e98f8);
  }
  ExceptionList = local_10;
  return &sub_6fcae810;
}


// 0x10281ba0  [gap]
int __fastcall
sub_6fcaea80(int param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  
  if (p_sub_6fcaea80 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcaea80 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6f10 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcaea80)();
  return iVar1;
}


// 0x10281bd0  (ghidra: FUN_10281bd0)  [gap]
uint32_t * GetPtr_sub_6fcae680(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aa21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcae680 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaca0) {
      FUN_103023e9(&DAT_104eaca0);
      if (DAT_104eaca0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf38 = *(int *)(&DAT_103d3a94 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaca0);
      }
    }
    sub_6fcae680 = sub_GetDllOffset_102f10f0(6,DAT_104eaf38);
  }
  ExceptionList = local_10;
  return &sub_6fcae680;
}


// 0x10281c80  (ghidra: FUN_10281c80)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcfa350(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aa51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcfa350 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea30c) {
      FUN_103023e9(&DAT_104ea30c);
      if (DAT_104ea30c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9a68 = *(int *)(&DAT_103d46cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea30c);
      }
    }
    D2Game_loc_6fcfa350 = sub_GetDllOffset_102f10f0(6,DAT_104e9a68);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcfa350;
}


// 0x10281d30  (ghidra: FUN_10281d30)  [gap]
uint32_t * GetPtr_SKILLS_Skills_6fcc16a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aa81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (SKILLS_Skills_6fcc16a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9820) {
      FUN_103023e9(&DAT_104e9820);
      if (DAT_104e9820 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0cc = *(int *)(&DAT_103d486c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9820);
      }
    }
    SKILLS_Skills_6fcc16a0 = sub_GetDllOffset_102f10f0(6,DAT_104eb0cc);
  }
  ExceptionList = local_10;
  return &SKILLS_Skills_6fcc16a0;
}


// 0x10281de0  (ghidra: FUN_10281de0)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcab010(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aab1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcab010 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9868) {
      FUN_103023e9(&DAT_104e9868);
      if (DAT_104e9868 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea4c4 = *(int *)(&DAT_103d373c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9868);
      }
    }
    GAME_SCmd_6fcab010 = sub_GetDllOffset_102f10f0(6,DAT_104ea4c4);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcab010;
}


// 0x10281e90  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fcf1790(void)

{
  int iVar1;
  
  if (p_sub_6fcf1790 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1790 = sub_GetDllOffset_102f10f0(6,*(int *)(iVar1 * 4 + 0x103c7848));
  }
                    /* WARNING: Could not recover jumptable at 0x10281eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1790)();
  return iVar1;
}


// 0x10281ec0  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_6fcf1780(void)

{
  int iVar1;
  
  if (p_sub_6fcf1780 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcf1780 = sub_GetDllOffset_102f10f0(6,*(int *)(iVar1 * 4 + 0x103c78f0));
  }
                    /* WARNING: Could not recover jumptable at 0x10281ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcf1780)();
  return iVar1;
}


// 0x10281ef0  [gap]
uint SKILLS_SkillItem_6fccce60
               (int param_1,int *param_2,int param_3,uint param_4,uint32_t param_s5)

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_SkillItem_6fccce60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_SkillItem_6fccce60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2f14 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_SkillItem_6fccce60)();
  return uVar2;
}


// 0x10281f20  [gap]
int sub_6fccd2a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5)

{
  int iVar1;
  
  if (p_sub_6fccd2a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fccd2a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7b50 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fccd2a0)();
  return iVar1;
}


// 0x10281f50  [gap]
int sub_6fc6dfe0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5)

{
  int iVar1;
  
  if (p_sub_6fc6dfe0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc6dfe0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7a18 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc6dfe0)();
  return iVar1;
}


// 0x10281f80  [gap]
int sub_6fc64600(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5)

{
  int iVar1;
  
  if (p_sub_6fc64600 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc64600 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7c38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc64600)();
  return iVar1;
}


// 0x10281fb0  [gap]
uint SKILLS_SkillNec_6fc6ef70
               (int param_1,int *param_2,uint32_t param_s3,uint32_t param_s4,uint32_t param_s5
               )

{
  int iVar1;
  uint uVar2;
  
  if (p_SKILLS_SkillNec_6fc6ef70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_SKILLS_SkillNec_6fc6ef70 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ee8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10281fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_SKILLS_SkillNec_6fc6ef70)();
  return uVar2;
}


// 0x10281fe0  (ghidra: FUN_10281fe0)  [gap]
uint32_t * GetPtr_sub_6fc42a80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aae1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc42a80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb090) {
      FUN_103023e9(&DAT_104eb090);
      if (DAT_104eb090 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9874 = *(int *)(&DAT_103d3e8c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb090);
      }
    }
    sub_6fc42a80 = sub_GetDllOffset_102f10f0(6,DAT_104e9874);
  }
  ExceptionList = local_10;
  return &sub_6fc42a80;
}


// 0x10282090  (ghidra: FUN_10282090)  [gap]
uint32_t * GetPtr_sub_6fccf5f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ab11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fccf5f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f70) {
      FUN_103023e9(&DAT_104e9f70);
      if (DAT_104e9f70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e991c = *(int *)(&DAT_103d4ec4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f70);
      }
    }
    sub_6fccf5f0 = sub_GetDllOffset_102f10f0(6,DAT_104e991c);
  }
  ExceptionList = local_10;
  return &sub_6fccf5f0;
}


// 0x10282140  (ghidra: FUN_10282140)  [gap]
uint32_t * GetPtr_sub_6fccf840(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ab41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fccf840 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cb0) {
      FUN_103023e9(&DAT_104e9cb0);
      if (DAT_104e9cb0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea1ec = *(int *)(&DAT_103d32e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cb0);
      }
    }
    sub_6fccf840 = sub_GetDllOffset_102f10f0(6,DAT_104ea1ec);
  }
  ExceptionList = local_10;
  return &sub_6fccf840;
}


// 0x102821f0  (ghidra: FUN_102821f0)  [gap]
uint32_t * GetPtr_sub_6fc977f0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ab71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc977f0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea074) {
      FUN_103023e9(&DAT_104ea074);
      if (DAT_104ea074 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eae64 = *(int *)(&DAT_103d4b8c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea074);
      }
    }
    sub_6fc977f0 = sub_GetDllOffset_102f10f0(6,DAT_104eae64);
  }
  ExceptionList = local_10;
  return &sub_6fc977f0;
}


// 0x102822a0  (ghidra: FUN_102822a0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfe6d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aba1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfe6d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9f40) {
      FUN_103023e9(&DAT_104e9f40);
      if (DAT_104e9f40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9934 = *(int *)(&DAT_103d37e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9f40);
      }
    }
    UNIT_SUnitDmg_6fcfe6d0 = sub_GetDllOffset_102f10f0(6,DAT_104e9934);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfe6d0;
}


// 0x10282350  (ghidra: FUN_10282350)  [gap]
uint32_t * GetPtr_sub_6fc58180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030abd1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc58180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2c4) {
      FUN_103023e9(&DAT_104ea2c4);
      if (DAT_104ea2c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf50 = *(int *)(&DAT_103d4684 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2c4);
      }
    }
    sub_6fc58180 = sub_GetDllOffset_102f10f0(6,DAT_104eaf50);
  }
  ExceptionList = local_10;
  return &sub_6fc58180;
}


// 0x10282400  (ghidra: FUN_10282400)  [gap]
uint32_t * GetPtr_sub_6fc54b80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ac01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc54b80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9438) {
      FUN_103023e9(&DAT_104e9438);
      if (DAT_104e9438 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9890 = *(int *)(&DAT_103d332c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9438);
      }
    }
    sub_6fc54b80 = sub_GetDllOffset_102f10f0(6,DAT_104e9890);
  }
  ExceptionList = local_10;
  return &sub_6fc54b80;
}


// 0x102824b0  (ghidra: FUN_102824b0)  [gap]
uint32_t * GetPtr_sub_6fcb2360(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ac31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb2360 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c70) {
      FUN_103023e9(&DAT_104e9c70);
      if (DAT_104e9c70 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e95e8 = *(int *)(&DAT_103d4da4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c70);
      }
    }
    sub_6fcb2360 = sub_GetDllOffset_102f10f0(6,DAT_104e95e8);
  }
  ExceptionList = local_10;
  return &sub_6fcb2360;
}


// 0x10282560  (ghidra: FUN_10282560)  [gap]
uint32_t * GetPtr_sub_6fcb2a60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ac61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcb2a60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d38) {
      FUN_103023e9(&DAT_104e9d38);
      if (DAT_104e9d38 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaccc = *(int *)(&DAT_103d3254 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d38);
      }
    }
    sub_6fcb2a60 = sub_GetDllOffset_102f10f0(6,DAT_104eaccc);
  }
  ExceptionList = local_10;
  return &sub_6fcb2a60;
}


// 0x10282610  (ghidra: FUN_10282610)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90240(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ac91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc90240 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea9ac) {
      FUN_103023e9(&DAT_104ea9ac);
      if (DAT_104ea9ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea708 = *(int *)(&DAT_103d4f1c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea9ac);
      }
    }
    PLAYER_PlrTrade_6fc90240 = sub_GetDllOffset_102f10f0(6,DAT_104ea708);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc90240;
}


// 0x102826c0  [gap]
int sub_6fc92220(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (p_sub_6fc92220 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc92220 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c73c8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102826e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc92220)();
  return iVar1;
}


// 0x102826f0  (ghidra: FUN_102826f0)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf39b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030acc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf39b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ab4) {
      FUN_103023e9(&DAT_104e9ab4);
      if (DAT_104e9ab4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f64 = *(int *)(&DAT_103d3d74 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ab4);
      }
    }
    ITEMS_ItemMode_6fcf39b0 = sub_GetDllOffset_102f10f0(6,DAT_104e9f64);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf39b0;
}


// 0x102827a0  (ghidra: FUN_102827a0)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf2c70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030acf1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf2c70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaff0) {
      FUN_103023e9(&DAT_104eaff0);
      if (DAT_104eaff0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e00 = *(int *)(&DAT_103d3074 + iVar2 * 4);
        FUN_1030239f(&DAT_104eaff0);
      }
    }
    ITEMS_ItemMode_6fcf2c70 = sub_GetDllOffset_102f10f0(6,DAT_104e9e00);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf2c70;
}


// 0x10282850  (ghidra: FUN_10282850)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf8310(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ad21;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf8310 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ca0) {
      FUN_103023e9(&DAT_104e9ca0);
      if (DAT_104e9ca0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e92d8 = *(int *)(&DAT_103d3a24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ca0);
      }
    }
    ITEMS_ItemMode_6fcf8310 = sub_GetDllOffset_102f10f0(6,DAT_104e92d8);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf8310;
}


// 0x10282900  [gap]
void ITEMS_ItemMode_6fcf78c0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if (p_ITEMS_ItemMode_6fcf78c0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_ITEMS_ItemMode_6fcf78c0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2c54 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10282926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_ITEMS_ItemMode_6fcf78c0)();
  return;
}


// 0x10282930  (ghidra: FUN_10282930)  [gap]
uint32_t * GetPtr_PLAYER_PlrMsg_6fcece20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ad51;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrMsg_6fcece20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaec0) {
      FUN_103023e9(&DAT_104eaec0);
      if (DAT_104eaec0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9138 = *(int *)(&DAT_103d3f3c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaec0);
      }
    }
    PLAYER_PlrMsg_6fcece20 = sub_GetDllOffset_102f10f0(6,DAT_104e9138);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrMsg_6fcece20;
}


// 0x102829e0  (ghidra: FUN_102829e0)  [gap]
uint32_t * GetPtr_D2Game_loc_6fcecf70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ad81;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (D2Game_loc_6fcecf70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb06c) {
      FUN_103023e9(&DAT_104eb06c);
      if (DAT_104eb06c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaf2c = *(int *)(&DAT_103d4654 + iVar2 * 4);
        FUN_1030239f(&DAT_104eb06c);
      }
    }
    D2Game_loc_6fcecf70 = sub_GetDllOffset_102f10f0(6,DAT_104eaf2c);
  }
  ExceptionList = local_10;
  return &D2Game_loc_6fcecf70;
}


// 0x10282a90  (ghidra: FUN_10282a90)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90d60(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030adb1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc90d60 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9790) {
      FUN_103023e9(&DAT_104e9790);
      if (DAT_104e9790 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea500 = *(int *)(&DAT_103d305c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9790);
      }
    }
    PLAYER_PlrTrade_6fc90d60 = sub_GetDllOffset_102f10f0(6,DAT_104ea500);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc90d60;
}


// 0x10282b40  (ghidra: FUN_10282b40)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcac810(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ade1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcac810 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea8c4) {
      FUN_103023e9(&DAT_104ea8c4);
      if (DAT_104ea8c4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e8c = *(int *)(&DAT_103d3d14 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea8c4);
      }
    }
    GAME_SCmd_6fcac810 = sub_GetDllOffset_102f10f0(6,DAT_104e9e8c);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcac810;
}


// 0x10282bf0  (ghidra: FUN_10282bf0)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf4550(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ae11;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf4550 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9ab0) {
      FUN_103023e9(&DAT_104e9ab0);
      if (DAT_104e9ab0 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9eb0 = *(int *)(&DAT_103d416c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9ab0);
      }
    }
    ITEMS_ItemMode_6fcf4550 = sub_GetDllOffset_102f10f0(6,DAT_104e9eb0);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf4550;
}


// 0x10282ca0  (ghidra: FUN_10282ca0)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcad3d0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ae41;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcad3d0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea91c) {
      FUN_103023e9(&DAT_104ea91c);
      if (DAT_104ea91c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea274 = *(int *)(&DAT_103d499c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea91c);
      }
    }
    GAME_SCmd_6fcad3d0 = sub_GetDllOffset_102f10f0(6,DAT_104ea274);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcad3d0;
}


// 0x10282d50  (ghidra: FUN_10282d50)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcaade0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030ae71;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcaade0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaf0c) {
      FUN_103023e9(&DAT_104eaf0c);
      if (DAT_104eaf0c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9784 = *(int *)(&DAT_103d4e8c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaf0c);
      }
    }
    GAME_SCmd_6fcaade0 = sub_GetDllOffset_102f10f0(6,DAT_104e9784);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcaade0;
}


// 0x10282e00  (ghidra: FUN_10282e00)  [gap]
uint32_t * GetPtr_sub_6fc2ec90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aea1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc2ec90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae18) {
      FUN_103023e9(&DAT_104eae18);
      if (DAT_104eae18 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea734 = *(int *)(&DAT_103d3d04 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae18);
      }
    }
    sub_6fc2ec90 = sub_GetDllOffset_102f10f0(6,DAT_104ea734);
  }
  ExceptionList = local_10;
  return &sub_6fc2ec90;
}


// 0x10282eb0  (ghidra: FUN_10282eb0)  [gap]
uint32_t * GetPtr_sub_6fc74320(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aed1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc74320 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea0ac) {
      FUN_103023e9(&DAT_104ea0ac);
      if (DAT_104ea0ac == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea57c = *(int *)(&DAT_103d4c5c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea0ac);
      }
    }
    sub_6fc74320 = sub_GetDllOffset_102f10f0(6,DAT_104ea57c);
  }
  ExceptionList = local_10;
  return &sub_6fc74320;
}


// 0x10282f60  (ghidra: FUN_10282f60)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc6a190(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030af01;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc6a190 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e929c) {
      FUN_103023e9(&DAT_104e929c);
      if (DAT_104e929c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9000 = *(int *)(&DAT_103d3ea4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e929c);
      }
    }
    GAME_Clients_6fc6a190 = sub_GetDllOffset_102f10f0(6,DAT_104e9000);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc6a190;
}


// 0x10283010  (ghidra: FUN_10283010)  [gap]
uint32_t * GetPtr_GAME_Game_6fc4ab70(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030af31;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc4ab70 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac38) {
      FUN_103023e9(&DAT_104eac38);
      if (DAT_104eac38 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea310 = *(int *)(&DAT_103d43f4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eac38);
      }
    }
    GAME_Game_6fc4ab70 = sub_GetDllOffset_102f10f0(6,DAT_104ea310);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc4ab70;
}


// 0x102830c0  (ghidra: FUN_102830c0)  [gap]
uint32_t * GetPtr_GAME_Clients_6fc69fe0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030af61;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Clients_6fc69fe0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97b8) {
      FUN_103023e9(&DAT_104e97b8);
      if (DAT_104e97b8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea5d0 = *(int *)(&DAT_103d314c + iVar2 * 4);
        FUN_1030239f(&DAT_104e97b8);
      }
    }
    GAME_Clients_6fc69fe0 = sub_GetDllOffset_102f10f0(6,DAT_104ea5d0);
  }
  ExceptionList = local_10;
  return &GAME_Clients_6fc69fe0;
}


// 0x10283170  (ghidra: FUN_10283170)  [gap]
uint32_t * GetPtr_GAME_Game_6fc49ba0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030af91;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Game_6fc49ba0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae68) {
      FUN_103023e9(&DAT_104eae68);
      if (DAT_104eae68 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eac78 = *(int *)(&DAT_103d46ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eae68);
      }
    }
    GAME_Game_6fc49ba0 = sub_GetDllOffset_102f10f0(6,DAT_104eac78);
  }
  ExceptionList = local_10;
  return &GAME_Game_6fc49ba0;
}


// 0x10283220  (ghidra: FUN_10283220)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcac490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030afc1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcac490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9cb4) {
      FUN_103023e9(&DAT_104e9cb4);
      if (DAT_104e9cb4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9170 = *(int *)(&DAT_103d340c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9cb4);
      }
    }
    GAME_SCmd_6fcac490 = sub_GetDllOffset_102f10f0(6,DAT_104e9170);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcac490;
}


// 0x102832d0  (ghidra: FUN_102832d0)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc90fb0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030aff1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc90fb0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9120) {
      FUN_103023e9(&DAT_104e9120);
      if (DAT_104e9120 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8e4 = *(int *)(&DAT_103d40e4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9120);
      }
    }
    PLAYER_PlrTrade_6fc90fb0 = sub_GetDllOffset_102f10f0(6,DAT_104ea8e4);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc90fb0;
}


// 0x10283380  (ghidra: FUN_10283380)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc900c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b021;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc900c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eae48) {
      FUN_103023e9(&DAT_104eae48);
      if (DAT_104eae48 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9e44 = *(int *)(&DAT_103d3264 + iVar2 * 4);
        FUN_1030239f(&DAT_104eae48);
      }
    }
    PLAYER_PlrTrade_6fc900c0 = sub_GetDllOffset_102f10f0(6,DAT_104e9e44);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc900c0;
}


// 0x10283430  (ghidra: FUN_10283430)  [gap]
uint32_t * GetPtr_ITEMS_ItemMode_6fcf2f00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b051;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (ITEMS_ItemMode_6fcf2f00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d50) {
      FUN_103023e9(&DAT_104e9d50);
      if (DAT_104e9d50 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bfc = *(int *)(&DAT_103d4f5c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d50);
      }
    }
    ITEMS_ItemMode_6fcf2f00 = sub_GetDllOffset_102f10f0(6,DAT_104e9bfc);
  }
  ExceptionList = local_10;
  return &ITEMS_ItemMode_6fcf2f00;
}


// 0x102834e0  (ghidra: FUN_102834e0)  [gap]
uint32_t * GetPtr_PLAYER_PlrTrade_6fc91e10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b081;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrTrade_6fc91e10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9250) {
      FUN_103023e9(&DAT_104e9250);
      if (DAT_104e9250 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eabc8 = *(int *)(&DAT_103d4ba4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9250);
      }
    }
    PLAYER_PlrTrade_6fc91e10 = sub_GetDllOffset_102f10f0(6,DAT_104eabc8);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrTrade_6fc91e10;
}


// 0x10283590  (ghidra: FUN_10283590)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcaa3e0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b0b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcaa3e0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabe4) {
      FUN_103023e9(&DAT_104eabe4);
      if (DAT_104eabe4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea97c = *(int *)(&DAT_103d32d4 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabe4);
      }
    }
    GAME_SCmd_6fcaa3e0 = sub_GetDllOffset_102f10f0(6,DAT_104ea97c);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcaa3e0;
}


// 0x10283640  (ghidra: FUN_10283640)  [gap]
uint32_t * GetPtr_GAME_SCmd_6fcac280(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b0e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_SCmd_6fcac280 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e921c) {
      FUN_103023e9(&DAT_104e921c);
      if (DAT_104e921c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eacdc = *(int *)(&DAT_103d461c + iVar2 * 4);
        FUN_1030239f(&DAT_104e921c);
      }
    }
    GAME_SCmd_6fcac280 = sub_GetDllOffset_102f10f0(6,DAT_104eacdc);
  }
  ExceptionList = local_10;
  return &GAME_SCmd_6fcac280;
}


// 0x102836f0  (ghidra: FUN_102836f0)  [gap]
uint32_t * GetPtr_sub_6fc9ac50(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b111;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc9ac50 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea87c) {
      FUN_103023e9(&DAT_104ea87c);
      if (DAT_104ea87c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e979c = *(int *)(&DAT_103d37bc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea87c);
      }
    }
    sub_6fc9ac50 = sub_GetDllOffset_102f10f0(6,DAT_104e979c);
  }
  ExceptionList = local_10;
  return &sub_6fc9ac50;
}


// 0x102837a0  (ghidra: FUN_102837a0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcffa90(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b141;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcffa90 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac40) {
      FUN_103023e9(&DAT_104eac40);
      if (DAT_104eac40 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9bb8 = *(int *)(&DAT_103d4acc + iVar2 * 4);
        FUN_1030239f(&DAT_104eac40);
      }
    }
    UNIT_SUnitDmg_6fcffa90 = sub_GetDllOffset_102f10f0(6,DAT_104e9bb8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcffa90;
}


// 0x10283850  (ghidra: FUN_10283850)  [gap]
uint32_t * GetPtr_sub_6fc6df20(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b171;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc6df20 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead74) {
      FUN_103023e9(&DAT_104ead74);
      if (DAT_104ead74 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb014 = *(int *)(&DAT_103d489c + iVar2 * 4);
        FUN_1030239f(&DAT_104ead74);
      }
    }
    sub_6fc6df20 = sub_GetDllOffset_102f10f0(6,DAT_104eb014);
  }
  ExceptionList = local_10;
  return &sub_6fc6df20;
}


// 0x10283900  (ghidra: FUN_10283900)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc97e00(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b1a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc97e00 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d24) {
      FUN_103023e9(&DAT_104e9d24);
      if (DAT_104e9d24 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d6c = *(int *)(&DAT_103d33c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d24);
      }
    }
    PLAYER_PlrModes_6fc97e00 = sub_GetDllOffset_102f10f0(6,DAT_104e9d6c);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc97e00;
}


// 0x102839b0  (ghidra: FUN_102839b0)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc98100(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b1d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc98100 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e98dc) {
      FUN_103023e9(&DAT_104e98dc);
      if (DAT_104e98dc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9238 = *(int *)(&DAT_103d46fc + iVar2 * 4);
        FUN_1030239f(&DAT_104e98dc);
      }
    }
    PLAYER_PlrModes_6fc98100 = sub_GetDllOffset_102f10f0(6,DAT_104e9238);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc98100;
}


// 0x10283a60  (ghidra: FUN_10283a60)  [gap]
uint32_t * GetPtr_GAME_Event_6fcae490(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b201;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (GAME_Event_6fcae490 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea984) {
      FUN_103023e9(&DAT_104ea984);
      if (DAT_104ea984 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96d0 = *(int *)(&DAT_103d4f24 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea984);
      }
    }
    GAME_Event_6fcae490 = sub_GetDllOffset_102f10f0(6,DAT_104e96d0);
  }
  ExceptionList = local_10;
  return &GAME_Event_6fcae490;
}


// 0x10283b10  (ghidra: FUN_10283b10)  [gap]
uint32_t * GetPtr_PLAYER_PlrModes_6fc98340(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b231;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlrModes_6fc98340 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eabf8) {
      FUN_103023e9(&DAT_104eabf8);
      if (DAT_104eabf8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d54 = *(int *)(&DAT_103d4084 + iVar2 * 4);
        FUN_1030239f(&DAT_104eabf8);
      }
    }
    PLAYER_PlrModes_6fc98340 = sub_GetDllOffset_102f10f0(6,DAT_104e9d54);
  }
  ExceptionList = local_10;
  return &PLAYER_PlrModes_6fc98340;
}


// 0x10283bc0  (ghidra: FUN_10283bc0)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfcd80(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b261;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfcd80 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ead9c) {
      FUN_103023e9(&DAT_104ead9c);
      if (DAT_104ead9c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eada8 = *(int *)(&DAT_103d5094 + iVar2 * 4);
        FUN_1030239f(&DAT_104ead9c);
      }
    }
    UNIT_SUnitDmg_6fcfcd80 = sub_GetDllOffset_102f10f0(6,DAT_104eada8);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfcd80;
}


// 0x10283c70  (ghidra: FUN_10283c70)  [gap]
uint32_t * GetPtr_UNIT_SUnitDmg_6fcfbed0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b291;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (UNIT_SUnitDmg_6fcfbed0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a94) {
      FUN_103023e9(&DAT_104e9a94);
      if (DAT_104e9a94 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea40c = *(int *)(&DAT_103d4c1c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a94);
      }
    }
    UNIT_SUnitDmg_6fcfbed0 = sub_GetDllOffset_102f10f0(6,DAT_104ea40c);
  }
  ExceptionList = local_10;
  return &UNIT_SUnitDmg_6fcfbed0;
}


// 0x10283d20  [gap]
int sub_6fc95e10(uint param_1,int *param_2,uint32_t param_s3)

{
  int iVar1;
  
  if (p_sub_6fc95e10 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc95e10 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7458 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc95e10)();
  return iVar1;
}


// 0x10283d50  [gap]
int __fastcall
sub_6fd12540(uint param_1,int *param_2,uint param_3,int param_4,uint param_5,byte param_6,
            uint param_7,uint32_t param_s6)

{
  int iVar1;
  
  if (p_sub_6fd12540 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fd12540 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c69d0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fd12540)();
  return iVar1;
}


// 0x10283d80  [gap]
void __fastcall sub_6fca8380(void *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fca8380 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca8380 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2bac + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca8380)();
  return;
}


// 0x10283db0  [gap]
int sub_6fca0f20(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fca0f20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca0f20 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7060 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fca0f20)();
  return iVar1;
}


// 0x10283de0  [gap]
void __fastcall sub_6fc38ce0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc38ce0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc38ce0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6750 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc38ce0)();
  return;
}


// 0x10283e10  [gap]
void __fastcall sub_6fca7e60(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fca7e60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca7e60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6f78 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca7e60)();
  return;
}


// 0x10283e40  [gap]
void __fastcall sub_6fca3ce0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fca3ce0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca3ce0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6ab8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca3ce0)();
  return;
}


// 0x10283e70  [gap]
void __fastcall sub_6fc9bf50(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc9bf50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc9bf50 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7eb8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc9bf50)();
  return;
}


// 0x10283ea0  [gap]
void __fastcall Ai_AiThink4_6fcc5580(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (p_Ai_AiThink4_6fcc5580 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Ai_AiThink4_6fcc5580 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7cb8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Ai_AiThink4_6fcc5580)();
  return;
}


// 0x10283ed0  [gap]
void __fastcall Ai_AiThink4_6fcc5d70(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_Ai_AiThink4_6fcc5d70 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Ai_AiThink4_6fcc5d70 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c75e0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Ai_AiThink4_6fcc5d70)();
  return;
}


// 0x10283f00  [gap]
void __fastcall sub_6fc9f370(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc9f370 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc9f370 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7dc0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc9f370)();
  return;
}


// 0x10283f30  [gap]
void __fastcall sub_6fca64a0(void *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fca64a0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca64a0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6e88 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca64a0)();
  return;
}


// 0x10283f60  [gap]
void __fastcall sub_6fca5780(void *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fca5780 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca5780 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2ecc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca5780)();
  return;
}


// 0x10283f90  [gap]
int sub_6fc3dd40(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fc3dd40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc3dd40 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2ca4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc3dd40)();
  return iVar1;
}


// 0x10283fc0  [gap]
int sub_6fca3130(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fca3130 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca3130 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7b88 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10283fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fca3130)();
  return iVar1;
}


// 0x10283ff0  [gap]
void __fastcall sub_6fc3db40(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fc3db40 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc3db40 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6e78 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc3db40)();
  return;
}


// 0x10284020  [gap]
void __fastcall sub_6fc9cfd0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fc9cfd0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc9cfd0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2f7c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc9cfd0)();
  return;
}


// 0x10284050  [gap]
void __fastcall sub_6fc36270(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fc36270 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc36270 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6b38 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc36270)();
  return;
}


// 0x10284080  [gap]
int sub_6fcc7530(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fcc7530 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcc7530 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6c50 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102840a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcc7530)();
  return iVar1;
}


// 0x102840b0  [gap]
int sub_6fc38a90(uint32_t param_1)

{
  int iVar1;
  
  if (p_sub_6fc38a90 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc38a90 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ad8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102840d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fc38a90)();
  return iVar1;
}


// 0x102840e0  [gap]
void __fastcall sub_6fc38730(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc38730 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc38730 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6dd8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc38730)();
  return;
}


// 0x10284110  [gap]
void __fastcall sub_6fc37cb0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fc37cb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc37cb0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c65f0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc37cb0)();
  return;
}


// 0x10284140  [gap]
void __fastcall sub_6fc9df00(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fc9df00 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fc9df00 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7af0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fc9df00)();
  return;
}


// 0x10284170  [gap]
void __fastcall sub_6fca3fe0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fca3fe0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca3fe0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c67a0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca3fe0)();
  return;
}


// 0x102841a0  [gap]
void __fastcall sub_6fca5b60(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (p_sub_6fca5b60 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fca5b60 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6678 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102841c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fca5b60)();
  return;
}


// 0x102841d0  [gap]
void __fastcall Ai_AiThink4_6fcc9610(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_Ai_AiThink4_6fcc9610 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_Ai_AiThink4_6fcc9610 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2edc + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102841f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_Ai_AiThink4_6fcc9610)();
  return;
}


// 0x10284200  [gap]
void __fastcall sub_6fcd8610(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (p_sub_6fcd8610 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd8610 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c71c0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6fcd8610)();
  return;
}


// 0x10284230  [gap]
int sub_6fcd14b0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd14b0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd14b0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6540 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd14b0)();
  return iVar1;
}


// 0x10284260  [gap]
int sub_6fcd0e30(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd0e30 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd0e30 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2bb4 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd0e30)();
  return iVar1;
}


// 0x10284290  [gap]
uint __fastcall sub_6fcd1660(uint param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (p_sub_6fcd1660 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd1660 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6640 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102842b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_sub_6fcd1660)();
  return uVar2;
}


// 0x102842c0  [gap]
int sub_6fcd15e0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd15e0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd15e0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103d2f2c + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102842e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd15e0)();
  return iVar1;
}


// 0x102842f0  [gap]
int sub_6fcd1580(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd1580 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd1580 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7368 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd1580)();
  return iVar1;
}


// 0x10284320  [gap]
int sub_6fcd0df0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd0df0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd0df0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c6d50 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd0df0)();
  return iVar1;
}


// 0x10284350  [gap]
int sub_6fcd1520(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd1520 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd1520 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ef0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10284376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd1520)();
  return iVar1;
}


// 0x10284380  [gap]
int sub_6fcd0db0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  if (p_sub_6fcd0db0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6fcd0db0 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c7ce8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x102843a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*p_sub_6fcd0db0)();
  return iVar1;
}


// 0x102843b0  (ghidra: FUN_102843b0)  [gap]
uint32_t * GetPtr_sub_6fcbd160(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b2c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcbd160 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9924) {
      FUN_103023e9(&DAT_104e9924);
      if (DAT_104e9924 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9d98 = *(int *)(&DAT_103d438c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9924);
      }
    }
    sub_6fcbd160 = sub_GetDllOffset_102f10f0(6,DAT_104e9d98);
  }
  ExceptionList = local_10;
  return &sub_6fcbd160;
}


// 0x10284460  (ghidra: FUN_10284460)  [gap]
uint32_t * GetPtr_sub_6fd12380(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b2f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd12380 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e97d8) {
      FUN_103023e9(&DAT_104e97d8);
      if (DAT_104e97d8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9178 = *(int *)(&DAT_103d46b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e97d8);
      }
    }
    sub_6fd12380 = sub_GetDllOffset_102f10f0(6,DAT_104e9178);
  }
  ExceptionList = local_10;
  return &sub_6fd12380;
}


// 0x10284510  (ghidra: FUN_10284510)  [gap]
uint32_t * GetPtr_sub_6fc21180(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b321;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21180 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eb0d4) {
      FUN_103023e9(&DAT_104eb0d4);
      if (DAT_104eb0d4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96ec = *(int *)(&DAT_103d4a2c + iVar2 * 4);
        FUN_1030239f(&DAT_104eb0d4);
      }
    }
    sub_6fc21180 = sub_GetDllOffset_102f10f0(6,DAT_104e96ec);
  }
  ExceptionList = local_10;
  return &sub_6fc21180;
}


// 0x102845c0  (ghidra: FUN_102845c0)  [gap]
uint32_t * GetPtr_sub_6fc21480(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b351;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21480 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea578) {
      FUN_103023e9(&DAT_104ea578);
      if (DAT_104ea578 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9ba4 = *(int *)(&DAT_103d3a2c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea578);
      }
    }
    sub_6fc21480 = sub_GetDllOffset_102f10f0(6,DAT_104e9ba4);
  }
  ExceptionList = local_10;
  return &sub_6fc21480;
}


// 0x10284670  (ghidra: FUN_10284670)  [gap]
uint32_t * GetPtr_sub_6fd120c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b381;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd120c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9af8) {
      FUN_103023e9(&DAT_104e9af8);
      if (DAT_104e9af8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9f74 = *(int *)(&DAT_103d4b24 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9af8);
      }
    }
    sub_6fd120c0 = sub_GetDllOffset_102f10f0(6,DAT_104e9f74);
  }
  ExceptionList = local_10;
  return &sub_6fd120c0;
}


// 0x10284720  (ghidra: FUN_10284720)  [gap]
uint32_t * GetPtr_sub_6fd122c0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b3b1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd122c0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2cc) {
      FUN_103023e9(&DAT_104ea2cc);
      if (DAT_104ea2cc == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8dc = *(int *)(&DAT_103d43b4 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2cc);
      }
    }
    sub_6fd122c0 = sub_GetDllOffset_102f10f0(6,DAT_104ea8dc);
  }
  ExceptionList = local_10;
  return &sub_6fd122c0;
}


// 0x102847d0  (ghidra: FUN_102847d0)  [gap]
uint32_t * GetPtr_sub_6fd129b0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b3e1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd129b0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea154) {
      FUN_103023e9(&DAT_104ea154);
      if (DAT_104ea154 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eaae8 = *(int *)(&DAT_103d4a24 + iVar2 * 4);
        FUN_1030239f(&DAT_104ea154);
      }
    }
    sub_6fd129b0 = sub_GetDllOffset_102f10f0(6,DAT_104eaae8);
  }
  ExceptionList = local_10;
  return &sub_6fd129b0;
}


// 0x10284880  (ghidra: FUN_10284880)  [gap]
uint32_t * GetPtr_sub_6fd11b10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b411;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd11b10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e78) {
      FUN_103023e9(&DAT_104e9e78);
      if (DAT_104e9e78 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea614 = *(int *)(&DAT_103d38dc + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e78);
      }
    }
    sub_6fd11b10 = sub_GetDllOffset_102f10f0(6,DAT_104ea614);
  }
  ExceptionList = local_10;
  return &sub_6fd11b10;
}


// 0x10284930  (ghidra: FUN_10284930)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb6570(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b441;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb6570 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9c3c) {
      FUN_103023e9(&DAT_104e9c3c);
      if (DAT_104e9c3c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea8d8 = *(int *)(&DAT_103d4f04 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9c3c);
      }
    }
    PLAYER_PlayerPets_6fcb6570 = sub_GetDllOffset_102f10f0(6,DAT_104ea8d8);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb6570;
}


// 0x102849e0  (ghidra: FUN_102849e0)  [gap]
uint32_t * GetPtr_sub_6fc3cae0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b471;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc3cae0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2f4) {
      FUN_103023e9(&DAT_104ea2f4);
      if (DAT_104ea2f4 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c84 = *(int *)(&DAT_103d48cc + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2f4);
      }
    }
    sub_6fc3cae0 = sub_GetDllOffset_102f10f0(6,DAT_104e9c84);
  }
  ExceptionList = local_10;
  return &sub_6fc3cae0;
}


// 0x10284a90  (ghidra: FUN_10284a90)  [gap]
uint32_t * GetPtr_sub_6fcbcb30(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b4a1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcbcb30 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eac04) {
      FUN_103023e9(&DAT_104eac04);
      if (DAT_104eac04 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e90fc = *(int *)(&DAT_103d30ac + iVar2 * 4);
        FUN_1030239f(&DAT_104eac04);
      }
    }
    sub_6fcbcb30 = sub_GetDllOffset_102f10f0(6,DAT_104e90fc);
  }
  ExceptionList = local_10;
  return &sub_6fcbcb30;
}


// 0x10284b40  (ghidra: FUN_10284b40)  [gap]
uint32_t * GetPtr_sub_6fcbd160_10284b40(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b4d1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcbd160_10284b40 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9d90) {
      FUN_103023e9(&DAT_104e9d90);
      if (DAT_104e9d90 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96a0 = *(int *)(&DAT_103d3484 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9d90);
      }
    }
    sub_6fcbd160_10284b40 = sub_GetDllOffset_102f10f0(6,DAT_104e96a0);
  }
  ExceptionList = local_10;
  return &sub_6fcbd160_10284b40;
}


// 0x10284bf0  (ghidra: FUN_10284bf0)  [gap]
uint32_t * GetPtr_Ai_AiGeneral_6fc41290(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b501;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (Ai_AiGeneral_6fc41290 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104eaca8) {
      FUN_103023e9(&DAT_104eaca8);
      if (DAT_104eaca8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e9c74 = *(int *)(&DAT_103d371c + iVar2 * 4);
        FUN_1030239f(&DAT_104eaca8);
      }
    }
    Ai_AiGeneral_6fc41290 = sub_GetDllOffset_102f10f0(6,DAT_104e9c74);
  }
  ExceptionList = local_10;
  return &Ai_AiGeneral_6fc41290;
}


// 0x10284ca0  (ghidra: FUN_10284ca0)  [gap]
uint32_t * GetPtr_sub_6fd12120(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b531;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fd12120 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9a88) {
      FUN_103023e9(&DAT_104e9a88);
      if (DAT_104e9a88 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eadc0 = *(int *)(&DAT_103d3984 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9a88);
      }
    }
    sub_6fd12120 = sub_GetDllOffset_102f10f0(6,DAT_104eadc0);
  }
  ExceptionList = local_10;
  return &sub_6fd12120;
}


// 0x10284d50  (ghidra: FUN_10284d50)  [gap]
uint32_t * GetPtr_sub_6fc3c8a0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b561;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc3c8a0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e947c) {
      FUN_103023e9(&DAT_104e947c);
      if (DAT_104e947c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea880 = *(int *)(&DAT_103d3414 + iVar2 * 4);
        FUN_1030239f(&DAT_104e947c);
      }
    }
    sub_6fc3c8a0 = sub_GetDllOffset_102f10f0(6,DAT_104ea880);
  }
  ExceptionList = local_10;
  return &sub_6fc3c8a0;
}


// 0x10284e00  (ghidra: FUN_10284e00)  [gap]
uint32_t * GetPtr_sub_6fca9730(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b591;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fca9730 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea2f8) {
      FUN_103023e9(&DAT_104ea2f8);
      if (DAT_104ea2f8 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea0b4 = *(int *)(&DAT_103d4b2c + iVar2 * 4);
        FUN_1030239f(&DAT_104ea2f8);
      }
    }
    sub_6fca9730 = sub_GetDllOffset_102f10f0(6,DAT_104ea0b4);
  }
  ExceptionList = local_10;
  return &sub_6fca9730;
}


// 0x10284eb0  (ghidra: FUN_10284eb0)  [gap]
uint32_t * GetPtr_sub_6fc9be10(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b5c1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc9be10 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9920) {
      FUN_103023e9(&DAT_104e9920);
      if (DAT_104e9920 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104e96c8 = *(int *)(&DAT_103d41c4 + iVar2 * 4);
        FUN_1030239f(&DAT_104e9920);
      }
    }
    sub_6fc9be10 = sub_GetDllOffset_102f10f0(6,DAT_104e96c8);
  }
  ExceptionList = local_10;
  return &sub_6fc9be10;
}


// 0x10284f60  (ghidra: FUN_10284f60)  [gap]
uint32_t * GetPtr_sub_6fc21900(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b5f1;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fc21900 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104ea144) {
      FUN_103023e9(&DAT_104ea144);
      if (DAT_104ea144 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104eb0dc = *(int *)(&DAT_103d42ec + iVar2 * 4);
        FUN_1030239f(&DAT_104ea144);
      }
    }
    sub_6fc21900 = sub_GetDllOffset_102f10f0(6,DAT_104eb0dc);
  }
  ExceptionList = local_10;
  return &sub_6fc21900;
}


// 0x10285010  (ghidra: FUN_10285010)  [gap]
uint32_t * GetPtr_sub_6fcd1bc0(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b621;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (sub_6fcd1bc0 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9e1c) {
      FUN_103023e9(&DAT_104e9e1c);
      if (DAT_104e9e1c == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ead28 = *(int *)(&DAT_103d307c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9e1c);
      }
    }
    sub_6fcd1bc0 = sub_GetDllOffset_102f10f0(6,DAT_104ead28);
  }
  ExceptionList = local_10;
  return &sub_6fcd1bc0;
}


// 0x102850c0  (ghidra: FUN_102850c0)  [gap]
uint32_t * GetPtr_PLAYER_PlayerPets_6fcb7420(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030b651;
  local_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (PLAYER_PlayerPets_6fcb7420 == (FARPROC)0x0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e9298) {
      FUN_103023e9(&DAT_104e9298);
      if (DAT_104e9298 == -1) {
        local_8 = 0;
        iVar2 = sub_GameVersionIndex_10253fc0(uVar1);
        DAT_104ea9dc = *(int *)(&DAT_103d3d7c + iVar2 * 4);
        FUN_1030239f(&DAT_104e9298);
      }
    }
    PLAYER_PlayerPets_6fcb7420 = sub_GetDllOffset_102f10f0(6,DAT_104ea9dc);
  }
  ExceptionList = local_10;
  return &PLAYER_PlayerPets_6fcb7420;
}


// 0x10285170  [gap]
void __fastcall PLAYER_PlayerPets_6fcb7b50(int param_1,uint param_2,int param_3,uint32_t param_s2)

{
  int iVar1;
  
  if (p_PLAYER_PlayerPets_6fcb7b50 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_PLAYER_PlayerPets_6fcb7b50 = sub_GetDllOffset_102f10f0(6,*(int *)(&DAT_103c66d8 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x10285196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_PLAYER_PlayerPets_6fcb7b50)();
  return;
}

