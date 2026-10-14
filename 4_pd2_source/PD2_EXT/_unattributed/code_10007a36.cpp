/*
 * _unattributed/code_10007a36.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x10007a36 - 0x1000d818
 * Functions     : 176
 * Attribution   : gap=176
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x10007a36  (ghidra: FUN_10007a36)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

bool sub_10007a36(void)

{
  int iVar1;
  void *pvStack_14;
  
  ___acrt_lock(7);
  iVar1 = ___acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    sub_100078d6();
    sub_10007986();
  }
  sub_10007a8d();
  ExceptionList = pvStack_14;
  return iVar1 == 0;
}


// 0x10007a8d  (ghidra: FUN_10007a8d)  [gap]
void sub_10007a8d(void)

{
  ___acrt_unlock(7);
  return;
}


// 0x10007a96  (ghidra: FUN_10007a96)  [gap]
uint32_t sub_10007a96(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((int)&DAT_10016068 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      ___acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((int)&DAT_10016068 + uVar1));
      *(uint32_t *)((int)&DAT_10016068 + uVar1) = 0;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x200);
  return 1;
}


// 0x10007ac2  [gap]
/* Library Function - Single Match
    ___acrt_execute_initializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl
___acrt_execute_initializers(uint32_t *param_1,uint32_t *param_2,uint32_t *reg_EAX)

{
  code *pcVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
        guard_check_icall();
        reg_EAX = (uint32_t *)(*pcVar1)();
        if ((char)reg_EAX == '\0') break;
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != param_2);
    if (puVar2 != param_2) {
      if (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        do {
          if ((puVar2[-1] != 0) && (pcVar1 = (code *)*puVar2, pcVar1 != (code *)0x0)) {
            uVar3 = 0;
            guard_check_icall();
            (*pcVar1)(uVar3);
          }
          reg_EAX = puVar2 + -1;
          puVar2 = puVar2 + -2;
        } while (reg_EAX != param_1);
      }
      return (uint)reg_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x10007b2a  [gap]
/* Library Function - Single Match
    ___acrt_execute_uninitializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t __cdecl ___acrt_execute_uninitializers(int param_1,int param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    pcVar1 = *(code **)(param_2 + -4);
    if (pcVar1 != (code *)0x0) {
      uVar2 = 0;
      guard_check_icall();
      (*pcVar1)(uVar2);
    }
  }
  return 1;
}


// 0x10007b60  (ghidra: FUN_10007b60)  [gap]
bool __cdecl sub_10007b60(uint32_t param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)sub_10007bc0();
  if (pcVar1 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    guard_check_icall();
    iVar2 = (*pcVar1)(param_1);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


// 0x10007ba0  (ghidra: FUN_10007ba0)  [gap]
void __cdecl sub_10007ba0(uint32_t param_1)

{
  DAT_1001626c = param_1;
  return;
}


// 0x10007bc0  (ghidra: FUN_10007bc0)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint sub_10007bc0(void)

{
  uint uVar1;
  uint32_t local_14;
  
  ___acrt_lock(0);
  uVar1 = sub_100044fc(DAT_1001626c);
  sub_10007c0e();
  ExceptionList = local_14;
  return uVar1;
}


// 0x10007c0e  (ghidra: FUN_10007c0e)  [gap]
void sub_10007c0e(void)

{
  ___acrt_unlock(0);
  return;
}


// 0x10007c20  (ghidra: FUN_10007c20)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl sub_10007c20(uint param_1)

{
  uint uVar1;
  uint32_t local_14;
  
  ___acrt_lock(0);
  uVar1 = sub_100044fc(DAT_1001626c);
  DAT_1001626c = sub_10007c9d(param_1);
  sub_10007c7c();
  ExceptionList = local_14;
  return uVar1;
}


// 0x10007c7c  (ghidra: FUN_10007c7c)  [gap]
void sub_10007c7c(void)

{
  ___acrt_unlock(0);
  return;
}


// 0x10007c9d  (ghidra: FUN_10007c9d)  [gap]
uint __cdecl sub_10007c9d(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_10015000 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_10015000;
}


// 0x10007cbc  (ghidra: FUN_10007cbc)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint sub_10007cbc(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint32_t local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_10015000 & 0x1f;
  uVar2 = DAT_10016278 ^ DAT_10015000;
  sub_10007d18();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}


// 0x10007d18  (ghidra: FUN_10007d18)  [gap]
void sub_10007d18(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10007d24  [gap]
/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_10016270;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_1001627c;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_10016274;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_10016278;
}


// 0x10007d66  [gap]
/* Library Function - Single Match
    struct __crt_signal_action_t * __cdecl siglookup(int,struct __crt_signal_action_t * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_signal_action_t * __cdecl siglookup(int param_1,__crt_signal_action_t *param_2)

{
  __crt_signal_action_t *p_Var1;
  
  p_Var1 = param_2 + 0x90;
  while( true ) {
    if (param_2 == p_Var1) {
      return (__crt_signal_action_t *)0x0;
    }
    if (*(int *)(param_2 + 4) == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return param_2;
}


// 0x10007d8e  [gap]
/* Library Function - Single Match
    ___acrt_get_sigabrt_handler
   
   Library: Visual Studio 2019 Release */

void ___acrt_get_sigabrt_handler(void)

{
  int local_10 [3];
  
  local_10[1] = 3;
  local_10[0] = 3;
  sub_10007cbc(local_10);
  return;
}


// 0x10007db5  (ghidra: FUN_10007db5)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sub_10007db5(uint32_t param_1)

{
  DAT_10016270 = param_1;
  DAT_10016274 = param_1;
  DAT_10016278 = param_1;
  DAT_1001627c = param_1;
  return;
}


// 0x10007dd3  (ghidra: FUN_10007dd3)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl sub_10007dd3(int param_1)

{
  bool bVar1;
  __crt_signal_action_t *p_Var2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  __acrt_ptd *p_Var6;
  uint32_t uVar7;
  uint32_t local_38;
  int local_34;
  void *local_14;
  
  p_Var6 = (__acrt_ptd *)0x0;
  local_38 = 0;
  bVar1 = true;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) goto LAB_10007e5c;
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_10007e5c;
        if (param_1 != 8) goto LAB_10007e2f;
      }
    }
    p_Var6 = sub_1000583e();
    if (p_Var6 == (__acrt_ptd *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,*(__crt_signal_action_t **)p_Var6);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_10007e2f:
      p_Var6 = sub_10005df2();
      *(uint32_t *)p_Var6 = 0x16;
      sub_10005c74();
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = p_Var2 + 8;
    bVar1 = false;
  }
  else {
    if (((param_1 != 0xf) && (param_1 != 0x15)) && (param_1 != 0x16)) goto LAB_10007e2f;
LAB_10007e5c:
    p_Var2 = (__crt_signal_action_t *)get_global_action_nolock(param_1);
  }
  local_34 = 0;
  if (bVar1) {
    ___acrt_lock(3);
  }
  pcVar3 = *(code **)p_Var2;
  if (bVar1) {
    pcVar3 = (code *)sub_100044fc((uint)pcVar3);
  }
  if (pcVar3 == (code *)0x1) goto LAB_10007f1d;
  if (pcVar3 == (code *)0x0) {
    if (bVar1) {
      ___acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_34 = *(int *)(p_Var6 + 4);
    *(int *)(p_Var6 + 4) = 0;
    if (param_1 == 8) {
      iVar4 = sub_100057ed();
      local_38 = *(uint32_t *)(iVar4 + 8);
      iVar4 = sub_100057ed();
      *(uint32_t *)(iVar4 + 8) = 0x8c;
      goto LAB_10007eec;
    }
  }
  else {
LAB_10007eec:
    if (param_1 == 8) {
      iVar4 = *(int *)p_Var6;
      for (iVar5 = iVar4 + 0x24; iVar5 != iVar4 + 0x90; iVar5 = iVar5 + 0xc) {
        *(uint32_t *)(iVar5 + 8) = 0;
      }
      goto LAB_10007f1d;
    }
  }
  *(uint *)p_Var2 = DAT_10015000;
LAB_10007f1d:
  sub_10007f5d();
  if (pcVar3 != (code *)0x1) {
    if (param_1 == 8) {
      iVar4 = sub_100057ed();
      uVar7 = *(uint32_t *)(iVar4 + 8);
      iVar4 = param_1;
      guard_check_icall();
      (*pcVar3)(iVar4,uVar7);
    }
    else {
      iVar4 = param_1;
      guard_check_icall();
      (*pcVar3)(iVar4);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        ExceptionList = local_14;
        return 0;
      }
    }
    *(int *)(p_Var6 + 4) = local_34;
    if (param_1 == 8) {
      iVar4 = sub_100057ed();
      *(uint32_t *)(iVar4 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// 0x10007f5d  (ghidra: FUN_10007f5d)  [gap]
void sub_10007f5d(void)

{
  char unaff_BL;
  
  if (unaff_BL != '\0') {
    ___acrt_unlock(3);
  }
  return;
}


// 0x10007fd0  (ghidra: FUN_10007fd0)  [gap]
bool sub_10007fd0(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_10015000 & 0x1f;
  return (DAT_10016280 ^ DAT_10015000) >> bVar1 != 0 ||
         (DAT_10016280 ^ DAT_10015000) << 0x20 - bVar1 != 0;
}


// 0x10007ff0  (ghidra: FUN_10007ff0)  [gap]
void __cdecl sub_10007ff0(uint32_t param_1)

{
  DAT_10016280 = param_1;
  return;
}


// 0x10008000  (ghidra: FUN_10008000)  [gap]
uint32_t __cdecl sub_10008000(uint32_t param_1)

{
  uint32_t uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_10015000 & 0x1f;
  pcVar3 = (code *)((DAT_10016280 ^ DAT_10015000) >> bVar2 |
                   (DAT_10016280 ^ DAT_10015000) << 0x20 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  guard_check_icall();
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}


// 0x10008039  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2866be3712abc81a800a822484c830d8>,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> >(class <lambda_2866be3712abc81a800a822484c830d8>
   &&,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2866be3712abc81a800a822484c830d8> *param_1,
          <lambda_39ca0ed439415581b5b15c265174cece> *param_2,
          <lambda_2b24c74d71094a6cd0cb82e44167d71b> *param_3)

{
  uint32_t uVar1;
  int iVar2;
  void *local_14;
  
  __lock_file(*(FILE **)param_1);
  uVar1 = sub_100081bd(**(int **)param_2,*(int **)(param_2 + 4));
  if (((char)uVar1 != '\0') &&
     ((**(char **)(param_2 + 8) != '\0' || ((*(uint *)(**(int **)param_2 + 0xc) >> 1 & 1) != 0)))) {
    iVar2 = sub_1000827a((FILE *)**(uint32_t **)param_2);
    if (iVar2 == -1) {
      **(uint32_t **)(param_2 + 0xc) = 0xffffffff;
    }
    else {
      **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + 1;
    }
  }
  sub_100080b9();
  ExceptionList = local_14;
  return;
}


// 0x100080b9  (ghidra: FUN_100080b9)  [gap]
void sub_100080b9(void)

{
  int unaff_EBP;
  
  __unlock_file((FILE *)**(uint32_t **)(unaff_EBP + 0x10));
  return;
}


// 0x100080c5  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2cc53f568c5a2bb6f192f930a45d44ea>,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> >(class <lambda_2cc53f568c5a2bb6f192f930a45d44ea>
   &&,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *param_1,
          <lambda_ab61a845afdef5b7c387490eaf3616ee> *param_2,
          <lambda_c2ffc0b7726aa6be21d5f0026187e748> *param_3)

{
  int *piVar1;
  uint32_t uVar2;
  int *piVar3;
  int *local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  __crt_seh_guarded_call<void> local_1d [9];
  void *local_14;
  uint32_t uStack_c;
  uint8_t *local_8;
  
  local_8 = &DAT_10013b20;
  uStack_c = 0x100080d1;
  ___acrt_lock(*(int *)param_1);
  local_8 = (uint8_t *)0x0;
  piVar1 = DAT_1001628c + DAT_10016288;
  for (piVar3 = DAT_1001628c; local_30 = piVar3, piVar3 != piVar1; piVar3 = piVar3 + 1) {
    local_24 = *piVar3;
    uVar2 = sub_100081bd(local_24,*(int **)param_2);
    if ((char)uVar2 != '\0') {
      local_34 = *(uint32_t *)(param_2 + 8);
      local_38 = *(uint32_t *)(param_2 + 4);
      local_3c = *(uint32_t *)param_2;
      local_40 = &local_24;
      local_28 = local_24;
      local_2c = local_24;
      operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
                (local_1d,(<lambda_2866be3712abc81a800a822484c830d8> *)&local_2c,
                 (<lambda_39ca0ed439415581b5b15c265174cece> *)&local_40,
                 (<lambda_2b24c74d71094a6cd0cb82e44167d71b> *)&local_28);
    }
  }
  local_8 = (uint8_t *)0xfffffffe;
  sub_10008165();
  ExceptionList = local_14;
  return;
}


// 0x10008165  (ghidra: FUN_10008165)  [gap]
void sub_10008165(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10008171  (ghidra: FUN_10008171)  [gap]
uint32_t __cdecl sub_10008171(char param_1)

{
  uint32_t *local_24;
  char *local_20;
  uint32_t *local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_10 = 0;
  local_24 = &local_10;
  local_c = 0;
  local_20 = &param_1;
  local_1c = &local_c;
  local_14 = 8;
  local_18 = 8;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
            (&local_5,(<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *)&local_18,
             (<lambda_ab61a845afdef5b7c387490eaf3616ee> *)&local_24,
             (<lambda_c2ffc0b7726aa6be21d5f0026187e748> *)&local_14);
  if (param_1 != '\0') {
    local_c = local_10;
  }
  return local_c;
}


// 0x100081bd  (ghidra: FUN_100081bd)  [gap]
uint __cdecl sub_100081bd(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(*(uint *)(param_1 + 0xc) >> 0xd);
    if (((uint)piVar1 & 1) != 0) {
      uVar2 = sub_100081ee(*(uint *)(param_1 + 0xc));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      *param_2 = *param_2 + 1;
      piVar1 = param_2;
    }
  }
  return (uint)piVar1 & 0xffffff00;
}


// 0x100081ee  (ghidra: FUN_100081ee)  [gap]
uint __cdecl sub_100081ee(uint param_1)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)((param_1 & 0xffffff03) >> 8);
  if (((char)(param_1 & 0xffffff03) == '\x02') && ((param_1 & 0xc0) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return CONCAT31(uVar1,(char)(param_1 >> 0xb)) & 0xffffff01;
}


// 0x10008211  (ghidra: FUN_10008211)  [gap]
uint32_t __cdecl sub_10008211(FILE *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    puVar2 = (uint *)param_1->_cnt;
    uVar5 = (int)param_1->_ptr - (int)puVar2;
    param_1->_ptr = (char *)puVar2;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar5) {
      pcVar3 = (char *)__fileno(param_1);
      uVar4 = sub_1000a4ad(pcVar3,puVar2,uVar5,param_2);
      if (uVar5 != uVar4) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}


// 0x1000827a  (ghidra: FUN_1000827a)  [gap]
uint32_t __cdecl sub_1000827a(FILE *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int local_2c [10];
  
  uVar2 = 0;
  sub_10005130(local_2c,(uint32_t *)0x0);
  if (param_1 == (FILE *)0x0) {
    uVar2 = sub_10008171('\0');
    goto LAB_100082d1;
  }
  iVar1 = sub_10008211(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_100082d1;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_100082d1;
  }
  uVar2 = 0xffffffff;
LAB_100082d1:
  sub_10005190(local_2c);
  return uVar2;
}


// 0x100082df  [gap]
/* Library Function - Single Match
    __flushall
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = sub_10008171('\x01');
  return iVar1;
}


// 0x100082e8  (ghidra: FUN_100082e8)  [gap]
uint32_t sub_100082e8(void)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  
  uVar2 = 3;
  if (DAT_10016288 == 0) {
    uVar2 = 0x200;
  }
  else if (2 < (int)DAT_10016288) goto LAB_10008307;
  DAT_10016288 = uVar2;
LAB_10008307:
  DAT_1001628c = sub_10005e10(DAT_10016288,4);
  sub_10005e70((LPVOID)0x0);
  if (DAT_1001628c == (LPVOID)0x0) {
    DAT_10016288 = 3;
    DAT_1001628c = sub_10005e10(3,4);
    sub_10005e70((LPVOID)0x0);
    if (DAT_1001628c == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0;
  puVar3 = (uint32_t *)&DAT_10015688;
  do {
    sub_10007766();
    *(uint32_t **)((int)DAT_1001628c + uVar2 * 4) = puVar3;
    iVar1 = *(int *)((&DAT_10016068)[(int)uVar2 >> 6] + 0x18 + (uVar2 & 0x3f) * 0x38);
    if (((iVar1 == -1) || (iVar1 == -2)) || (iVar1 == 0)) {
      puVar3[4] = 0xfffffffe;
    }
    puVar3 = puVar3 + 0xe;
    uVar2 = uVar2 + 1;
  } while (puVar3 != &DAT_10015730);
  return 0;
}


// 0x100083b0  (ghidra: FUN_100083b0)  [gap]
void sub_100083b0(void)

{
  int iVar1;
  
  __flushall();
  sub_1000a7da();
  iVar1 = 0;
  do {
    ___acrt_stdio_free_buffer_nolock(*(uint32_t **)(iVar1 + (int)DAT_1001628c));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar1 + (int)DAT_1001628c) + 0x20));
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0xc);
  sub_10005e70(DAT_1001628c);
  DAT_1001628c = (LPVOID)0x0;
  return;
}


// 0x100083fc  [gap]
/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


// 0x10008410  [gap]
/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


// 0x10008430  (ghidra: FUN_10008430)  [gap]
LPVOID __cdecl sub_10008430(SIZE_T param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_10016064,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = sub_10008e50();
    } while ((iVar2 != 0) && (bVar1 = sub_10007b60(param_1), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = sub_10005df2();
  *(uint32_t *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


// 0x10008481  (ghidra: FUN_10008481)  [gap]
void __cdecl sub_10008481(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_10016284) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0)) {
    iVar1 = sub_10008d79();
    *param_2 = iVar1;
  }
  return;
}


// 0x100084ae  (ghidra: FUN_100084ae)  [gap]
void __cdecl sub_100084ae(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_10016284)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0))
  {
    iVar1 = sub_10008d79();
    *param_2 = iVar1;
  }
  return;
}


// 0x100084df  (ghidra: FUN_100084df)  [gap]
void __cdecl sub_100084df(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_10015fe0) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0)) {
    iVar1 = sub_10006ed1();
    *param_2 = iVar1;
  }
  return;
}


// 0x1000850c  (ghidra: FUN_1000850c)  [gap]
void __cdecl sub_1000850c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_10015fe0)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0))
  {
    iVar1 = sub_10006ed1();
    *param_2 = iVar1;
  }
  return;
}


// 0x1000853d  (ghidra: FUN_1000853d)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sub_1000853d(LPWSTR param_1,byte *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    DAT_10016298 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        sub_10005280(param_4);
      }
      piVar1 = (int *)param_4[3];
      if (piVar1[2] != 0xfde9) {
        if (piVar1[0x2a] == 0) {
          if (param_1 != (LPWSTR)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*piVar1 + (uint)*param_2 * 2) < 0) {
          if ((((1 < piVar1[1]) && (piVar1[1] <= (int)param_3)) &&
              (iVar3 = sub_10007283(piVar1[2],9,(LPCSTR)param_2,piVar1[1],param_1,
                                    (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             ((*(uint *)(param_4[3] + 4) <= param_3 && (param_2[1] != 0)))) {
            return *(uint *)(param_4[3] + 4);
          }
        }
        else {
          iVar3 = sub_10007283(piVar1[2],9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0))
          ;
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(uint8_t *)(param_4 + 7) = 1;
        param_4[6] = 0x2a;
        return 0xffffffff;
      }
      uVar2 = sub_10008893(param_1,param_2,param_3,(uint *)&DAT_10016298,(int)param_4);
      if ((int)uVar2 < 0) {
        return 0xffffffff;
      }
      return uVar2;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


// 0x1000866d  (ghidra: FUN_1000866d)  [gap]
uint __cdecl sub_1000866d(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint32_t uStack_8;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (uint)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    uStack_8 = 2;
  }
  else {
    if ((bVar1 & 0xf0) != 0xe0) {
      uVar2 = 0xffffffff;
      if ((bVar1 & 0xf8) == 0xf0) {
        uVar2 = 4;
      }
      return uVar2;
    }
    uStack_8 = 3;
  }
  return uStack_8;
}


// 0x100086ae  (ghidra: FUN_100086ae)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl sub_100086ae(uint *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char local_24;
  byte *local_20;
  uint local_1c;
  byte local_15;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  puVar9 = (uint *)&DAT_100162a0;
  if (param_4 != (uint *)0x0) {
    puVar9 = param_4;
  }
  local_1c = 1;
  if (param_2 != (byte *)0x0) {
    local_1c = param_3;
  }
  local_20 = (byte *)0x1000e5be;
  if (param_2 != (byte *)0x0) {
    local_20 = param_2;
  }
  puVar6 = (uint *)0x0;
  if (param_2 != (byte *)0x0) {
    puVar6 = param_1;
  }
  if (local_1c == 0) {
LAB_1000870c:
    uVar8 = 0xfffffffe;
  }
  else {
    if (*(short *)((int)puVar9 + 6) == 0) {
      uVar3 = sub_1000866d(local_20);
      local_15 = *local_20;
      local_20 = local_20 + 1;
      if ((uVar3 == 0) || (uVar3 == 1)) {
        if (puVar6 == (uint *)0x0) {
          return uVar3;
        }
        *puVar6 = (uint)local_15;
        return uVar3;
      }
      if ((1 < (int)uVar3) && ((int)uVar3 < 5)) {
        uVar5 = uVar3 & 0xff;
        uVar8 = (1 << (7U - (char)uVar3 & 0x1f)) - 1U & (uint)local_15;
LAB_10008794:
        uVar4 = uVar5;
        if (local_1c <= uVar5) {
          uVar4 = local_1c;
        }
        local_1c = (int)local_20 - (int)param_2;
        uVar7 = uVar5;
        while (local_1c < uVar4) {
          bVar2 = *local_20;
          uVar7 = (uint)CONCAT11(bVar2,(char)uVar7);
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          if ((bVar2 & 0xc0) != 0x80) goto LAB_10008850;
          uVar8 = uVar8 << 6 | bVar2 & 0x3f;
        }
        if (uVar4 < uVar5) {
          local_24 = (char)uVar4;
          *(ushort *)(puVar9 + 1) = (ushort)uVar3 & 0xff;
          *puVar9 = uVar8;
          *(ushort *)((int)puVar9 + 6) = (ushort)(byte)((char)uVar7 - local_24);
          goto LAB_1000870c;
        }
        if (((uVar8 < 0xd800) || (0xdfff < uVar8)) && (uVar8 < 0x110000)) {
          local_14 = 0x80;
          local_10 = 0x800;
          local_c = 0x10000;
          if ((&local_1c)[uVar3 & 0xff] <= uVar8) {
            if (puVar6 != (uint *)0x0) {
              *puVar6 = uVar8;
            }
            if (uVar8 == 0) {
              uVar5 = 0;
            }
            uVar8 = sub_1000a92f(uVar5,puVar9);
            return uVar8;
          }
        }
      }
    }
    else {
      bVar2 = (byte)puVar9[1];
      uVar3 = (uint)bVar2;
      uVar8 = *puVar9;
      bVar1 = *(byte *)((int)puVar9 + 6);
      uVar5 = (uint)bVar1;
      if ((((byte)(bVar2 - 2) < 3) && (bVar1 != 0)) && (bVar1 < bVar2)) goto LAB_10008794;
    }
LAB_10008850:
    uVar8 = sub_1000a943(puVar9,param_5);
  }
  return uVar8;
}


// 0x10008867  (ghidra: FUN_10008867)  [gap]
char sub_10008867(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
  }
  else if (param_1[1] == '\0') {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (param_1[2] != '\0') + '\x03';
  }
  return cVar1;
}


// 0x10008893  (ghidra: FUN_10008893)  [gap]
uint __cdecl sub_10008893(uint16_t *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = sub_100086ae(&local_8,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_8) {
      local_8 = 0xfffd;
    }
    if (param_1 != (uint16_t *)0x0) {
      *param_1 = (short)local_8;
    }
  }
  return uVar1;
}


// 0x100088d6  (ghidra: FUN_100088d6)  [gap]
int __thiscall
sub_100088d6(void *this,ushort *param_1,uint32_t *param_2,uint param_3,uint *param_4,int param_5)

{
  char cVar1;
  uint32_t extraout_var;
  uint uVar2;
  uint32_t extraout_var_00;
  int iVar3;
  uint32_t extraout_var_01;
  void *pvVar4;
  ushort *puVar5;
  int iVar6;
  byte *pbVar7;
  void *local_c;
  void *pvStack_8;
  
  pbVar7 = (byte *)*param_2;
  local_c = this;
  pvStack_8 = this;
  puVar5 = param_1;
  if (param_1 == (ushort *)0x0) {
    iVar6 = 0;
    cVar1 = sub_10008867((char *)pbVar7);
    uVar2 = CONCAT31(extraout_var_00,cVar1);
    while (uVar2 = sub_100086ae((uint *)0x0,pbVar7,uVar2,param_4,param_5), uVar2 != 0xffffffff) {
      if (uVar2 == 0) {
        return iVar6;
      }
      pbVar7 = pbVar7 + uVar2;
      iVar3 = iVar6 + 1;
      if (uVar2 != 4) {
        iVar3 = iVar6;
      }
      iVar6 = iVar3 + 1;
      cVar1 = sub_10008867((char *)pbVar7);
      uVar2 = CONCAT31(extraout_var_01,cVar1);
    }
    *(uint8_t *)(param_5 + 0x1c) = 1;
    *(uint32_t *)(param_5 + 0x18) = 0x2a;
    iVar6 = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      cVar1 = sub_10008867((char *)pbVar7);
      uVar2 = sub_100086ae((uint *)&local_c,pbVar7,CONCAT31(extraout_var,cVar1),param_4,param_5);
      if (uVar2 == 0xffffffff) {
        *param_2 = pbVar7;
        *(uint8_t *)(param_5 + 0x1c) = 1;
        *(uint32_t *)(param_5 + 0x18) = 0x2a;
        return -1;
      }
      if (uVar2 == 0) {
        pbVar7 = (byte *)0x0;
        *puVar5 = 0;
        break;
      }
      pvVar4 = local_c;
      if ((void *)0xffff < local_c) {
        if (param_3 < 2) break;
        local_c = (void *)((int)local_c + -0x10000);
        param_3 = param_3 - 1;
        *puVar5 = (ushort)((uint)local_c >> 10) | 0xd800;
        puVar5 = puVar5 + 1;
        pvVar4 = (void *)((uint)local_c & 0x3ff | 0xdc00);
      }
      *puVar5 = (ushort)pvVar4;
      pbVar7 = pbVar7 + uVar2;
      puVar5 = puVar5 + 1;
    }
    iVar6 = (int)puVar5 - (int)param_1 >> 1;
    *param_2 = pbVar7;
  }
  return iVar6;
}


// 0x100089e9  [gap]
/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio */

int __cdecl __fileno(FILE *_File)

{
  __acrt_ptd *p_Var1;
  
  if (_File == (FILE *)0x0) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    sub_10005c74();
    return -1;
  }
  return _File->_file;
}


// 0x10008a10  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_e5124f882df8998aaf41531e079ba474>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &,class
   <lambda_e25ca0880e6ef98be67edffd8c599615> >(class <lambda_e5124f882df8998aaf41531e079ba474>
   &&,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &,class
   <lambda_e25ca0880e6ef98be67edffd8c599615> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_e5124f882df8998aaf41531e079ba474>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&,<lambda_e25ca0880e6ef98be67edffd8c599615>_>
          (__crt_seh_guarded_call<void> *this,<lambda_e5124f882df8998aaf41531e079ba474> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_e25ca0880e6ef98be67edffd8c599615> *param_3)

{
  uint8_t **ppuVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*(int *)param_1);
  for (piVar2 = &DAT_10016284; piVar2 != &DAT_10016288; piVar2 = piVar2 + 1) {
    if ((uint8_t **)*piVar2 != &PTR_DAT_100155c0) {
      ppuVar1 = __updatetlocinfoEx_nolock(piVar2,&PTR_DAT_100155c0);
      *piVar2 = (int)ppuVar1;
    }
  }
  sub_10008a72();
  ExceptionList = local_14;
  return;
}


// 0x10008a72  (ghidra: FUN_10008a72)  [gap]
void sub_10008a72(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10008a7e  (ghidra: FUN_10008a7e)  [gap]
uint32_t sub_10008a7e(void)

{
  uint32_t uVar1;
  
  uVar1 = DAT_100162a8;
  LOCK();
  DAT_100162a8 = 1;
  UNLOCK();
  return uVar1;
}


// 0x10008a89  [gap]
/* Library Function - Single Match
    ___acrt_uninitialize_locale
   
   Library: Visual Studio 2019 Release */

void ___acrt_uninitialize_locale(void)

{
  uint32_t local_10;
  uint32_t local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = 4;
  local_10 = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_e5124f882df8998aaf41531e079ba474>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&,<lambda_e25ca0880e6ef98be67edffd8c599615>_>
            (&local_5,(<lambda_e5124f882df8998aaf41531e079ba474> *)&local_10,
             (<lambda_3e16ef9562a7dcce91392c22ab16ea36> *)&local_5,
             (<lambda_e25ca0880e6ef98be67edffd8c599615> *)&local_c);
  return;
}


// 0x10008ab0  (ghidra: FUN_10008ab0)  [gap]
void __cdecl sub_10008ab0(int param_1)

{
  int *piVar1;
  uint32_t *puVar2;
  int iVar3;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (uint32_t *)(param_1 + 0x28);
  iVar3 = 6;
  do {
    if (((uint8_t *)puVar2[-2] != &DAT_10015680) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ___acrt_locale_add_lc_time_reference(*(uint8_t ***)(param_1 + 0x9c));
  return;
}


// 0x10008b2d  (ghidra: FUN_10008b2d)  [gap]
void __cdecl sub_10008b2d(LPVOID param_1)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int local_8;
  
  if ((((*(uint8_t ***)((int)param_1 + 0x88) != (uint8_t **)0x0) &&
       (*(uint8_t ***)((int)param_1 + 0x88) != &PTR_DAT_10015738)) &&
      (*(int **)((int)param_1 + 0x7c) != (int *)0x0)) && (**(int **)((int)param_1 + 0x7c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x84);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      sub_10005e70(piVar1);
      FID_conflict____acrt_locale_free_monetary(*(int *)((int)param_1 + 0x88));
    }
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      sub_10005e70(piVar1);
      FID_conflict____free_lconv_num(*(uint32_t **)((int)param_1 + 0x88));
    }
    sub_10005e70(*(LPVOID *)((int)param_1 + 0x7c));
    sub_10005e70(*(LPVOID *)((int)param_1 + 0x88));
  }
  if ((*(int **)((int)param_1 + 0x8c) != (int *)0x0) && (**(int **)((int)param_1 + 0x8c) == 0)) {
    sub_10005e70((LPVOID)(*(int *)((int)param_1 + 0x90) + -0xfe));
    sub_10005e70((LPVOID)(*(int *)((int)param_1 + 0x94) + -0x80));
    sub_10005e70((LPVOID)(*(int *)((int)param_1 + 0x98) + -0x80));
    sub_10005e70(*(LPVOID *)((int)param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(uint8_t ***)((int)param_1 + 0x9c));
  puVar2 = (uint32_t *)((int)param_1 + 0xa0);
  local_8 = 6;
  puVar3 = (uint32_t *)((int)param_1 + 0x28);
  do {
    if ((((uint8_t *)puVar3[-2] != &DAT_10015680) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      sub_10005e70(piVar1);
      sub_10005e70((LPVOID)*puVar2);
    }
    if (((puVar3[-3] != 0) && (piVar1 = (int *)puVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      sub_10005e70(piVar1);
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  sub_10005e70(param_1);
  return;
}


// 0x10008c75  [gap]
/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t * __cdecl ___acrt_locale_add_lc_time_reference(uint8_t **param_1)

{
  uint8_t **ppuVar1;
  uint8_t *puVar2;
  
  if ((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1000f558)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
    return puVar2 + 1;
  }
  return (uint8_t *)0x7fffffff;
}


// 0x10008c9e  [gap]
/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(uint8_t **param_1)

{
  if (((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1000f558)) &&
     (param_1[0x2c] == (uint8_t *)0x0)) {
    ___acrt_locale_free_time(param_1);
    sub_10005e70(param_1);
  }
  return;
}


// 0x10008ccf  [gap]
/* Library Function - Single Match
    ___acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t * __cdecl ___acrt_locale_release_lc_time_reference(uint8_t **param_1)

{
  uint8_t **ppuVar1;
  uint8_t *puVar2;
  
  if ((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1000f558)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + -1;
    UNLOCK();
    return puVar2 + -1;
  }
  return (uint8_t *)0x7fffffff;
}


// 0x10008cf8  (ghidra: FUN_10008cf8)  [gap]
void __cdecl sub_10008cf8(int param_1)

{
  int *piVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (uint32_t *)(param_1 + 0x28);
    iVar3 = 6;
    do {
      if (((uint8_t *)puVar2[-2] != &DAT_10015680) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ___acrt_locale_release_lc_time_reference(*(uint8_t ***)(param_1 + 0x9c));
  }
  return;
}


// 0x10008d79  (ghidra: FUN_10008d79)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int sub_10008d79(void)

{
  int iVar1;
  int iVar2;
  uint8_t **ppuVar3;
  uint32_t uStack_14;
  
  iVar2 = sub_100057ed();
  if (((*(uint *)(iVar2 + 0x350) & DAT_10015730) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x4c), iVar1 != 0)) {
    ExceptionList = uStack_14;
    return iVar1;
  }
  ___acrt_lock(4);
  ppuVar3 = __updatetlocinfoEx_nolock((int *)(iVar2 + 0x4c),DAT_10016284);
  sub_10008dd9();
  if (ppuVar3 != (uint8_t **)0x0) {
    iVar2 = sub_10008de2();
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10008dd9  (ghidra: FUN_10008dd9)  [gap]
void sub_10008dd9(void)

{
  ___acrt_unlock(4);
  return;
}


// 0x10008de2  (ghidra: FUN_10008de2)  [gap]
void sub_10008de2(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


// 0x10008dfa  [gap]
/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2019 Release */

uint8_t ** __cdecl __updatetlocinfoEx_nolock(uint32_t *param_1,uint8_t **param_2)

{
  uint8_t **ppuVar1;
  
  if ((param_2 == (uint8_t **)0x0) || (param_1 == (uint32_t *)0x0)) {
    param_2 = (uint8_t **)0x0;
  }
  else {
    ppuVar1 = (uint8_t **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      sub_10008ab0((int)param_2);
      if (((ppuVar1 != (uint8_t **)0x0) &&
          (sub_10008cf8((int)ppuVar1), ppuVar1[3] == (uint8_t *)0x0)) &&
         (ppuVar1 != &PTR_DAT_100155c0)) {
        sub_10008b2d(ppuVar1);
      }
    }
  }
  return param_2;
}


// 0x10008e50  (ghidra: FUN_10008e50)  [gap]
uint32_t sub_10008e50(void)

{
  return DAT_100162ac;
}


// 0x10008e60  [gap]
/* Library Function - Single Match
    __set_new_mode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl __set_new_mode(int param_1)

{
  uint32_t uVar1;
  __acrt_ptd *p_Var2;
  
  uVar1 = DAT_100162ac;
  if ((param_1 != 0) && (param_1 != 1)) {
    p_Var2 = sub_10005df2();
    *(uint32_t *)p_Var2 = 0x16;
    sub_10005c74();
    return 0xffffffff;
  }
  LOCK();
  DAT_100162ac = param_1;
  UNLOCK();
  return uVar1;
}


// 0x10008e90  (ghidra: FUN_10008e90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl sub_10008e90(uint8_t *param_1,uint param_2,uint param_3,uint8_t *param_4)

{
  uint8_t *puVar1;
  uint8_t uVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  int local_118;
  uint8_t *local_110;
  uint8_t *local_108;
  uint8_t *local_104;
  uint32_t auStack_f8 [30];
  uint32_t auStack_80 [30];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  local_104 = param_1;
  if ((((param_1 == (uint8_t *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (uint8_t *)0x0)) {
    p_Var3 = sub_10005df2();
    *(uint32_t *)p_Var3 = 0x16;
    sub_10005c74();
  }
  else {
    guard_check_icall();
    local_118 = 0;
    if (1 < param_2) {
      puVar7 = param_1 + (param_2 - 1) * param_3;
LAB_10008f21:
      while (uVar4 = (uint)((int)puVar7 - (int)local_104) / param_3 + 1, 8 < uVar4) {
        iVar5 = (uVar4 >> 1) * param_3;
        puVar10 = local_104 + iVar5;
        iVar6 = (*(code *)param_4)(local_104,puVar10);
        if ((0 < iVar6) && (puVar8 = puVar10, uVar4 = param_3, local_104 != puVar10)) {
          do {
            uVar2 = puVar8[-iVar5];
            puVar8[-iVar5] = *puVar8;
            *puVar8 = uVar2;
            uVar4 = uVar4 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar4 != 0);
        }
        iVar5 = (*(code *)param_4)(local_104,puVar7);
        if ((0 < iVar5) && (puVar8 = puVar7, uVar4 = param_3, local_104 != puVar7)) {
          do {
            puVar9 = puVar8 + 1;
            uVar2 = puVar9[(int)(local_104 + (-1 - (int)puVar7))];
            puVar9[(int)(local_104 + (-1 - (int)puVar7))] = *puVar8;
            *puVar8 = uVar2;
            uVar4 = uVar4 - 1;
            puVar8 = puVar9;
          } while (uVar4 != 0);
        }
        iVar5 = (*(code *)param_4)(puVar10,puVar7);
        local_110 = local_104;
        local_108 = puVar7;
        if ((0 < iVar5) && (puVar8 = puVar7, uVar4 = param_3, puVar10 != puVar7)) {
          do {
            puVar9 = puVar8 + 1;
            uVar2 = puVar9[(int)(puVar10 + (-1 - (int)puVar7))];
            puVar9[(int)(puVar10 + (-1 - (int)puVar7))] = *puVar8;
            *puVar8 = uVar2;
            uVar4 = uVar4 - 1;
            puVar8 = puVar9;
          } while (uVar4 != 0);
        }
LAB_100090e0:
        puVar8 = puVar10;
        if (local_110 < puVar8) {
          do {
            local_110 = local_110 + param_3;
            if (puVar8 <= local_110) goto LAB_10009110;
            iVar5 = (*(code *)param_4)(local_110,puVar8);
            puVar9 = local_108;
          } while (iVar5 < 1);
        }
        else {
LAB_10009110:
          do {
            local_110 = local_110 + param_3;
            puVar9 = local_108;
            if (puVar7 < local_110) break;
            iVar5 = (*(code *)param_4)(local_110,puVar8);
          } while (iVar5 < 1);
        }
        do {
          local_108 = puVar9;
          puVar9 = local_108 + -param_3;
          if (puVar9 <= puVar8) break;
          iVar5 = (*(code *)param_4)(puVar9,puVar8);
        } while (0 < iVar5);
        if (local_110 <= puVar9) {
          puVar10 = puVar9;
          uVar4 = param_3;
          if (puVar9 != local_110) {
            do {
              puVar1 = puVar10 + 1;
              uVar2 = puVar1[(int)(local_110 + (-1 - (int)puVar9))];
              puVar1[(int)(local_110 + (-1 - (int)puVar9))] = *puVar10;
              *puVar10 = uVar2;
              uVar4 = uVar4 - 1;
              puVar10 = puVar1;
            } while (uVar4 != 0);
          }
          puVar10 = local_110;
          local_108 = puVar9;
          if (puVar8 != puVar9) {
            puVar10 = puVar8;
          }
          goto LAB_100090e0;
        }
        if (puVar8 < local_108) {
          do {
            local_108 = local_108 + -param_3;
            if (local_108 <= puVar8) goto LAB_10009200;
            iVar5 = (*(code *)param_4)(local_108,puVar8);
          } while (iVar5 == 0);
        }
        else {
LAB_10009200:
          do {
            local_108 = local_108 + -param_3;
            if (local_108 <= local_104) break;
            iVar5 = (*(code *)param_4)(local_108,puVar8);
          } while (iVar5 == 0);
        }
        if ((int)local_108 - (int)local_104 < (int)puVar7 - (int)local_110) goto LAB_1000928a;
        if (local_104 < local_108) {
          auStack_80[local_118] = local_104;
          auStack_f8[local_118] = local_108;
          local_118 = local_118 + 1;
        }
        local_104 = local_110;
        if (puVar7 <= local_110) goto LAB_10008fa9;
      }
      for (; puVar8 = local_104, puVar10 = local_104, local_104 < puVar7; puVar7 = puVar7 + -param_3
          ) {
        while (puVar9 = puVar8, puVar10 = puVar10 + param_3, puVar10 <= puVar7) {
          iVar5 = (*(code *)param_4)(puVar10,puVar9);
          puVar8 = puVar10;
          if (iVar5 < 1) {
            puVar8 = puVar9;
          }
        }
        puVar10 = puVar7;
        uVar4 = param_3;
        if (puVar9 != puVar7) {
          do {
            puVar8 = puVar10 + 1;
            uVar2 = puVar8[(int)(puVar9 + (-1 - (int)puVar7))];
            puVar8[(int)(puVar9 + (-1 - (int)puVar7))] = *puVar10;
            *puVar10 = uVar2;
            uVar4 = uVar4 - 1;
            puVar10 = puVar8;
          } while (uVar4 != 0);
        }
      }
      goto LAB_10008fa9;
    }
  }
  return;
LAB_1000928a:
  if (local_110 < puVar7) {
    auStack_80[local_118] = local_110;
    auStack_f8[local_118] = puVar7;
    local_118 = local_118 + 1;
  }
  puVar7 = local_108;
  if (local_108 <= local_104) {
LAB_10008fa9:
    local_118 = local_118 + -1;
    if (local_118 < 0) {
      return;
    }
    local_104 = (uint8_t *)auStack_80[local_118];
    puVar7 = (uint8_t *)auStack_f8[local_118];
  }
  goto LAB_10008f21;
}


// 0x100092d0  (ghidra: FUN_100092d0)  [gap]
int __cdecl sub_100092d0(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return param_4;
      }
      goto LAB_10009312;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_10009312;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return param_4;
    }
    if (param_3 != 0) {
      pcVar5 = param_1;
      iVar6 = param_2;
      iVar4 = param_4;
      if (param_4 == -1) {
        do {
          cVar2 = pcVar5[param_3 - (int)param_1];
          *pcVar5 = cVar2;
          if (cVar2 == '\0') {
            return 0;
          }
          iVar6 = iVar6 + -1;
          pcVar5 = pcVar5 + 1;
        } while (iVar6 != 0);
        iVar6 = 0;
      }
      else {
        do {
          iVar7 = iVar4;
          cVar2 = pcVar5[param_3 - (int)param_1];
          pcVar1 = pcVar5 + 1;
          *pcVar5 = cVar2;
          if (cVar2 == '\0') {
            return 0;
          }
          iVar6 = iVar6 + -1;
        } while ((iVar6 != 0) && (pcVar5 = pcVar1, iVar4 = iVar7 + -1, iVar7 + -1 != 0));
        iVar4 = iVar7 + -1;
        if (iVar6 == 0) {
          iVar4 = iVar7;
        }
        if (iVar4 == 0) {
          *pcVar1 = '\0';
        }
      }
      if (iVar6 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = '\0';
        p_Var3 = sub_10005df2();
        *(uint32_t *)p_Var3 = 0x22;
        sub_10005c74();
        return 0x22;
      }
      param_1[param_2 + -1] = '\0';
      return 0x50;
    }
    *param_1 = '\0';
  }
LAB_10009312:
  p_Var3 = sub_10005df2();
  *(uint32_t *)p_Var3 = 0x16;
  sub_10005c74();
  return 0x16;
}


// 0x100093d0  [gap]
/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


// 0x10009410  [gap]
/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  uchar *puVar1;
  
  puVar1 = __mbsdec_l(_Start,_Pos,(_locale_t)0x0);
  return puVar1;
}


// 0x10009427  [gap]
/* Library Function - Single Match
    __mbsdec_l
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  int local_14 [2];
  int local_c;
  char local_8;
  
  if (_Start == (uchar *)0x0) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    sub_10005c74();
    return (uchar *)0x0;
  }
  if (_Pos == (uchar *)0x0) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    sub_10005c74();
  }
  else if (_Start < _Pos) {
    sub_1000651d(local_14,(int *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_c + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)(*pbVar2 + 0x19 + local_c) & 4) != 0);
      pbVar2 = _Pos + (-1 - ((int)_Pos - (int)pbVar2 & 1U));
    }
    if (local_8 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_14[0] + 0x350) = *(uint *)(local_14[0] + 0x350) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}


// 0x100094b4  (ghidra: FUN_100094b4)  [gap]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL __cdecl
sub_100094b4(int *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  uint32_t *puVar2;
  int cchSrc;
  LPCWSTR lpSrcStr;
  BOOL BVar3;
  int local_20;
  int local_1c;
  char local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0x00000000;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xffffffd4;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  sub_1000651d(&local_20,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_1c + 8);
  }
  BVar3 = 0;
  uVar1 = 1;
  if (param_7 != 0) {
    uVar1 = 9;
  }
  local_10 = sub_10007283(param_6,uVar1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_10 == 0) goto LAB_1000958e;
  local_c = local_10 * 2;
  uVar1 = -(uint)(local_c < local_c + 8) & local_c + 8;
  if (uVar1 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
  }
  else if (uVar1 < 0x401) {
    puVar2 = (uint32_t *)&stack0xffffffd4;
    lpSrcStr = (LPCWSTR)&stack0xffffffd4;
    if (&stack0x00000000 != (uint8_t *)0x2c) {
LAB_10009549:
      lpSrcStr = (LPCWSTR)(puVar2 + 2);
      if (lpSrcStr != (LPCWSTR)0x0) {
        _memset(lpSrcStr,0,local_c);
        cchSrc = sub_10007283(param_6,1,param_3,param_4,lpSrcStr,local_10);
        if (cchSrc != 0) {
          BVar3 = GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
        }
      }
    }
  }
  else {
    puVar2 = sub_10008430(uVar1);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar2 != (uint32_t *)0x0) {
      *puVar2 = 0xdddd;
      goto LAB_10009549;
    }
  }
  sub_100095b2((int)lpSrcStr);
LAB_1000958e:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  return BVar3;
}


// 0x100095b2  (ghidra: FUN_100095b2)  [gap]
void __cdecl sub_100095b2(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    sub_10005e70((int *)(param_1 + -8));
  }
  return;
}


// 0x100095d2  (ghidra: FUN_100095d2)  [gap]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
sub_100095d2(int *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,LPWSTR param_6,
            int param_7,uint param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint32_t *puVar5;
  void *this;
  void *this_00;
  LPCWSTR pWVar6;
  LPCWSTR pWVar7;
  uint8_t  stack0x00000000;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xffffffe8;   /* not traced by Ghidra: address of a stack slot */
  
  iVar3 = param_5;
  if (0 < param_5) {
    iVar1 = sub_1000abe0(param_4,param_5);
    iVar3 = iVar1 + 1;
    if (param_5 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 8);
  }
  uVar2 = 1;
  if (param_9 != 0) {
    uVar2 = 9;
  }
  iVar1 = sub_10007283(param_8,uVar2,param_4,iVar3,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = iVar1 * 2 + 8;
  uVar2 = -(uint)((uint)(iVar1 * 2) < uVar2) & uVar2;
  if (uVar2 == 0) {
    pWVar6 = (LPCWSTR)0x0;
  }
  else if (uVar2 < 0x401) {
    puVar5 = (uint32_t *)&stack0xffffffe8;
    pWVar6 = (LPCWSTR)&stack0xffffffe8;
    if (&stack0x00000000 != (uint8_t *)0x18) {
LAB_10009683:
      pWVar6 = (LPCWSTR)(puVar5 + 2);
      if (((pWVar6 != (LPCWSTR)0x0) &&
          (iVar3 = sub_10007283(param_8,1,param_4,iVar3,pWVar6,iVar1), iVar3 != 0)) &&
         (iVar3 = FID_conflict____acrt_CompareStringEx_36
                            (this,param_2,param_3,pWVar6,iVar1,(LPWSTR)0x0,0,0,0,0), iVar3 != 0)) {
        if ((param_3 & 0x400) == 0) {
          this_00 = (void *)(iVar3 * 2 + 8);
          pvVar4 = (void *)(-(uint)((void *)(iVar3 * 2) < this_00) & (uint)this_00);
          if (pvVar4 == (void *)0x0) {
            pWVar7 = (LPCWSTR)0x0;
          }
          else if (pvVar4 < (void *)0x401) {
            puVar5 = (uint32_t *)&stack0xffffffe8;
            pWVar7 = (LPCWSTR)&stack0xffffffe8;
            if (&stack0x00000000 != (uint8_t *)0x18) {
LAB_10009744:
              pWVar7 = (LPCWSTR)(puVar5 + 2);
              if ((pWVar7 != (LPCWSTR)0x0) &&
                 (iVar1 = FID_conflict____acrt_CompareStringEx_36
                                    (this_00,param_2,param_3,pWVar6,iVar1,pWVar7,iVar3,0,0,0),
                 iVar1 != 0)) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = (LPWSTR)0x0;
                }
                iVar3 = sub_1000733d(param_8,0,pWVar7,iVar3,(LPSTR)param_6,param_7,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
                if (iVar3 != 0) {
                  sub_100095b2((int)pWVar7);
                  goto LAB_100097a4;
                }
              }
            }
          }
          else {
            this_00 = pvVar4;
            puVar5 = sub_10008430((SIZE_T)pvVar4);
            pWVar7 = (LPCWSTR)0x0;
            if (puVar5 != (uint32_t *)0x0) {
              *puVar5 = 0xdddd;
              goto LAB_10009744;
            }
          }
          sub_100095b2((int)pWVar7);
        }
        else if ((param_7 == 0) ||
                ((iVar3 <= param_7 &&
                 (iVar3 = FID_conflict____acrt_CompareStringEx_36
                                    ((void *)0x0,param_2,param_3,pWVar6,iVar1,param_6,param_7,0,0,0)
                 , iVar3 != 0)))) goto LAB_100097a4;
      }
    }
  }
  else {
    puVar5 = sub_10008430(uVar2);
    pWVar6 = (LPCWSTR)0x0;
    if (puVar5 != (uint32_t *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_10009683;
    }
  }
  iVar3 = 0;
LAB_100097a4:
  sub_100095b2((int)pWVar6);
  return iVar3;
}


// 0x100097bf  [gap]
/* Library Function - Single Match
    ___acrt_LCMapStringA
   
   Library: Visual Studio 2019 Release */

void __cdecl
___acrt_LCMapStringA
          (int *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,LPWSTR param_6,
          int param_7,uint param_8,int param_9)

{
  int local_14;
  int local_10 [2];
  char local_8;
  
  sub_1000651d(&local_14,param_1);
  sub_100095d2(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}


// 0x10009808  (ghidra: FUN_10009808)  [gap]
uint sub_10009808(void)

{
  uint32_t in_EAX;
  uint uVar1;
  
  uVar1 = ___acrt_initialize_multibyte(in_EAX);
  return uVar1 & 0xff ^ 1;
}


// 0x10009820  [gap]
/* Library Function - Single Match
    __msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SIZE_T __cdecl __msize_base(LPCVOID param_1)

{
  __acrt_ptd *p_Var1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    sub_10005c74();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_10016064,0,param_1);
  return SVar2;
}


// 0x10009860  (ghidra: FUN_10009860)  [gap]
void __cdecl sub_10009860(LPCVOID param_1)

{
  __msize_base(param_1);
  return;
}


// 0x10009870  [gap]
/* Library Function - Single Match
    __realloc_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl __realloc_base(LPVOID param_1,uint param_2)

{
  bool bVar1;
  LPVOID pvVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  uint32_t extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = sub_10008430(param_2);
  }
  else {
    if (param_2 == 0) {
      sub_10005e70(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_10016064,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar4 = sub_10008e50();
        } while ((iVar4 != 0) && (bVar1 = sub_10007b60(param_2), CONCAT31(extraout_var,bVar1) != 0))
        ;
      }
      p_Var3 = sub_10005df2();
      *(uint32_t *)p_Var3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}


// 0x100098d9  (ghidra: FUN_100098d9)  [gap]
uint32_t __cdecl sub_100098d9(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0xe3;
  do {
    iVar4 = (iVar3 + iVar5) / 2;
    iVar2 = sub_1000ac00(param_1,*(ushort **)(&UNK_10011140 + iVar4 * 8),0x55);
    if (iVar2 == 0) {
      return *(uint32_t *)(&UNK_10011144 + iVar4 * 8);
    }
    iVar1 = iVar4 + -1;
    if (-1 < iVar2) {
      iVar5 = iVar4 + 1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar5 <= iVar3);
  return 0xffffffff;
}


// 0x1000992d  [gap]
/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl ___acrt_DownlevelLocaleNameToLCID(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = sub_100098d9(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(uint32_t *)(&DAT_10010018 + uVar1 * 8);
    }
  }
  return 0;
}


// 0x10009959  [gap]
/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

uint32_t * ___acrt_lowio_create_handle_array(void)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  
  puVar2 = sub_10005e10(0x40,0x38);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = (uint32_t *)0x0;
  }
  else if (puVar2 != puVar2 + 0x380) {
    puVar3 = puVar2 + 8;
    do {
      sub_10007766();
      puVar3[-2] = 0xffffffff;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 6;
      puVar3[2] = 0xa0a0000;
      *(uint8_t *)(puVar3 + 3) = 10;
      *(uint32_t *)((int)puVar3 + 0xe) = 0;
      *(uint8_t *)((int)puVar3 + 0x12) = 0;
      puVar3 = puVar3 + 0xe;
    } while (puVar1 != puVar2 + 0x380);
  }
  sub_10005e70((LPVOID)0x0);
  return puVar2;
}


// 0x100099d4  [gap]
/* Library Function - Single Match
    ___acrt_lowio_destroy_handle_array
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    sub_10005e70(param_1);
  }
  return;
}


// 0x10009a09  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

uint32_t __cdecl ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  __acrt_ptd *p_Var1;
  uint32_t *puVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  void *local_14;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    ___acrt_lock(7);
    iVar5 = 0;
    iVar3 = DAT_10016268;
    while (iVar3 <= (int)param_1) {
      if ((&DAT_10016068)[iVar5] == 0) {
        puVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_10016068)[iVar5] = puVar2;
        if (puVar2 == (uint32_t *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar3 = DAT_10016268 + 0x40;
        DAT_10016268 = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    sub_10009a9e();
  }
  else {
    p_Var1 = sub_10005df2();
    uVar4 = 9;
    *(uint32_t *)p_Var1 = 9;
    sub_10005c74();
  }
  ExceptionList = local_14;
  return uVar4;
}


// 0x10009a9e  (ghidra: FUN_10009a9e)  [gap]
void sub_10009a9e(void)

{
  ___acrt_unlock(7);
  return;
}


// 0x10009aa7  (ghidra: FUN_10009aa7)  [gap]
void __cdecl sub_10009aa7(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_10016068)[(int)param_1 >> 6]));
  return;
}


// 0x10009aca  [gap]
/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_10016068)[(int)param_1 >> 6]));
  return;
}


// 0x10009aed  (ghidra: FUN_10009aed)  [gap]
uint32_t __cdecl sub_10009aed(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (((*(byte *)(iVar3 + 0x28 + (&DAT_10016068)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar3 + 0x18 + (&DAT_10016068)[param_1 >> 6]) != -1)) {
      iVar1 = sub_1000ac67();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10009b53;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10009b53:
      *(uint32_t *)((&DAT_10016068)[param_1 >> 6] + 0x18 + iVar3) = 0xffffffff;
      return 0;
    }
  }
  p_Var2 = sub_10005df2();
  *(uint32_t *)p_Var2 = 9;
  p_Var2 = sub_10005ddd();
  *(uint32_t *)p_Var2 = 0;
  return 0xffffffff;
}


// 0x10009b7e  (ghidra: FUN_10009b7e)  [gap]
uint32_t __cdecl sub_10009b7e(uint param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = sub_10005ddd();
    *(uint32_t *)p_Var1 = 0;
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_10016068)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(uint32_t *)((&DAT_10016068)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    p_Var1 = sub_10005ddd();
    *(uint32_t *)p_Var1 = 0;
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
    sub_10005c74();
  }
  return 0xffffffff;
}


// 0x10009be8  (ghidra: FUN_10009be8)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t sub_10009be8(uint *param_1,uint32_t *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  uint32_t uVar5;
  void *local_14;
  
  uVar5 = 0;
  sub_10009aa7(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_10016068)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)sub_10009b7e(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_10009c58;
    DVar3 = GetLastError();
    p_Var4 = sub_10005ddd();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = sub_10005df2();
  *(uint32_t *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_10009c58:
  sub_10009c7e();
  ExceptionList = local_14;
  return uVar5;
}


// 0x10009c7e  (ghidra: FUN_10009c7e)  [gap]
void sub_10009c7e(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}


// 0x10009c8a  [gap]
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2019 Release */

int __cdecl __commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  uint local_14;
  int *local_10;
  int local_c;
  
  if (_FileHandle == -2) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10016268)) &&
       ((*(byte *)((&DAT_10016068)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x38) & 1) !=
        0)) {
      local_10 = &_FileHandle;
      local_c = _FileHandle;
      local_14 = _FileHandle;
      iVar2 = sub_10009be8(&local_14,&local_10);
      return iVar2;
    }
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
    sub_10005c74();
  }
  return -1;
}


// 0x10009d07  (ghidra: FUN_10009d07)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * __cdecl sub_10009d07(DWORD *param_1,uint param_2,uint *param_3,int param_4,int *param_5)

{
  uint8_t *puVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *pbVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint64_t local_80;
  int local_78;
  UINT local_74;
  uint *local_70;
  HANDLE local_6c;
  uint *local_68;
  uint *local_64;
  uint16_t local_60 [2];
  uint64_t local_5c;
  uint *local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint32_t local_44;
  int *local_40;
  uint *local_3c;
  void *local_38;
  char local_31;
  uint *local_30;
  CHAR local_2c [8];
  uint8_t local_24;
  uint8_t local_23;
  uint local_1c [3];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000d8c6;
  local_10 = ExceptionList;
  local_1c[2] = DAT_10015000 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = (param_2 & 0x3f) * 0x38;
  local_48 = (int)param_2 >> 6;
  local_68 = param_3;
  local_40 = param_5;
  local_6c = *(HANDLE *)(local_50 + 0x18 + (&DAT_10016068)[local_48]);
  local_54 = (uint *)(param_4 + (int)param_3);
  local_74 = GetConsoleOutputCP();
  if ((char)param_5[5] == '\0') {
    sub_10005280(param_5);
  }
  local_78 = *(int *)(param_5[3] + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = local_68;
  if (local_54 <= local_68) {
    ExceptionList = local_10;
    return param_1;
  }
  local_5c = (ulonglong)(uint)local_5c;
  iVar9 = local_50;
  do {
    iVar10 = 0;
    local_31 = (char)*local_30;
    local_44 = 0;
    local_38 = (void *)0x1;
    if (local_78 == 0xfde9) {
      pbVar4 = (byte *)((&DAT_10016068)[local_48] + 0x2e + iVar9);
      local_5c = CONCAT44(pbVar4,(uint)local_5c);
      pbVar5 = pbVar4;
      local_38 = (void *)iVar10;
      do {
        if (*pbVar5 == 0) break;
        local_38 = (void *)((int)local_38 + 1);
        pbVar5 = pbVar5 + 1;
      } while ((int)local_38 < 5);
      iVar9 = (int)local_54 - (int)local_30;
      if ((int)local_38 < 1) {
        local_4c = (int)(char)(&DAT_10015790)[(byte)*local_30] + 1;
        if (iVar9 < (int)local_4c) {
          if (0 < iVar9) {
            do {
              *(uint8_t *)((&DAT_10016068)[local_48] + local_50 + 0x2e + iVar10) =
                   *(uint8_t *)(iVar10 + (int)local_30);
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar9);
          }
          goto LAB_1000a062;
        }
        local_5c = 0;
        local_38 = (void *)((local_4c == 4) + 1);
        local_3c = local_30;
        iVar10 = sub_100088d6(local_38,(ushort *)&local_44,&local_3c,(uint)local_38,
                              (uint *)&local_5c,(int)local_40);
        iVar9 = local_50;
      }
      else {
        local_3c = (uint *)((int)(char)(&DAT_10015790)[*pbVar4] + 1);
        local_4c = (int)local_3c - (int)local_38;
        if (iVar9 < (int)local_4c) {
          if (0 < iVar9) {
            do {
              puVar1 = (uint8_t *)(iVar10 + (int)local_30);
              iVar8 = (&DAT_10016068)[local_48] + local_50 + iVar10;
              iVar10 = iVar10 + 1;
              *(uint8_t *)(iVar8 + 0x2e + (int)local_38) = *puVar1;
            } while (iVar10 < iVar9);
          }
LAB_1000a062:
          param_1[1] = param_1[1] + iVar9;
          ExceptionList = local_10;
          return param_1;
        }
        do {
          *(byte *)((int)local_1c + iVar10) = *pbVar4;
          iVar10 = iVar10 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar10 < (int)local_38);
        if (0 < (int)local_4c) {
          sub_10002c10((uint *)((int)local_1c + (int)local_38),local_30,local_4c);
        }
        iVar9 = local_50;
        iVar10 = 0;
        do {
          *(uint8_t *)((&DAT_10016068)[local_48] + local_50 + 0x2e + iVar10) = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_38);
        local_70 = local_1c;
        local_80 = 0;
        local_38 = (void *)((local_3c == (uint *)0x4) + 1);
        iVar10 = sub_100088d6(&local_80,(ushort *)&local_44,&local_70,(uint)local_38,
                              (uint *)&local_80,(int)local_40);
      }
      if (iVar10 == -1) {
        ExceptionList = local_10;
        return param_1;
      }
      local_30 = (uint *)((int)local_30 + (local_4c - 1));
    }
    else {
      local_4c = (&DAT_10016068)[local_48];
      bVar2 = *(byte *)(local_4c + 0x2d + iVar9);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(*(int *)local_40[3] + (uint)(byte)*local_30 * 2) < 0) {
          local_3c = (uint *)((int)local_30 + 1);
          if (local_54 <= local_3c) {
            *(char *)(local_4c + 0x2e + iVar9) = (char)*local_30;
            pbVar5 = (byte *)((&DAT_10016068)[local_48] + 0x2d + iVar9);
            *pbVar5 = *pbVar5 | 4;
            param_1[1] = local_5c._4_4_ + 1;
            ExceptionList = local_10;
            return param_1;
          }
          uVar12 = sub_1000853d((LPWSTR)&local_44,(byte *)local_30,2,local_40);
          local_30 = local_3c;
          if (uVar12 == 0xffffffff) {
            ExceptionList = local_10;
            return param_1;
          }
          goto LAB_10009f89;
        }
        uVar12 = 1;
        puVar11 = local_30;
      }
      else {
        uVar3 = CONCAT11(bVar2,*(uint8_t *)(local_4c + 0x2e + iVar9)) & 0xfbff;
        local_24 = (uint8_t)uVar3;
        local_23 = (uint8_t)*local_30;
        *(char *)(local_4c + 0x2d + iVar9) = (char)(uVar3 >> 8);
        uVar12 = 2;
        puVar11 = (uint *)&local_24;
      }
      uVar12 = sub_1000853d((LPWSTR)&local_44,(byte *)puVar11,uVar12,local_40);
      if (uVar12 == 0xffffffff) {
        ExceptionList = local_10;
        return param_1;
      }
    }
LAB_10009f89:
    local_30 = (uint *)((int)local_30 + 1);
    local_3c = (uint *)sub_1000733d(local_74,0,(LPCWSTR)&local_44,(int)local_38,local_2c,5,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
    if (local_3c == (uint *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    BVar6 = WriteFile(local_6c,local_2c,(DWORD)local_3c,(LPDWORD)&local_64,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
LAB_1000a0a9:
      DVar7 = GetLastError();
      *param_1 = DVar7;
      ExceptionList = local_10;
      return param_1;
    }
    DVar7 = (param_1[2] - (int)local_68) + (int)local_30;
    local_5c = CONCAT44(DVar7,(uint)local_5c);
    param_1[1] = DVar7;
    if (local_64 < local_3c) {
      ExceptionList = local_10;
      return param_1;
    }
    if (local_31 == '\n') {
      local_60[0] = 0xd;
      BVar6 = WriteFile(local_6c,local_60,1,(LPDWORD)&local_64,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) goto LAB_1000a0a9;
      if (local_64 == (uint *)0x0) {
        ExceptionList = local_10;
        return param_1;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      local_5c = CONCAT44(param_1[1],(uint)local_5c);
    }
    if (local_54 <= local_30) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}


// 0x1000a0d2  [gap]
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_unicode_nolock(char
   const * const,unsigned int)
   
   Library: Visual Studio 2019 Release */

char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2,int param_3)

{
  wchar_t _WCh;
  wchar_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pwVar3 = (wchar_t *)(param_3 + param_2);
  while( true ) {
    if (pwVar3 <= param_2) {
      return param_1;
    }
    _WCh = *(wchar_t *)param_2;
    wVar1 = __putwch_nolock(_WCh);
    if (wVar1 != _WCh) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    if (_WCh == L'\n') {
      wVar2 = __putwch_nolock(L'\r');
      if (wVar2 != 0xd) break;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    param_2 = param_2 + 2;
  }
  DVar4 = GetLastError();
  *(DWORD *)param_1 = DVar4;
  return param_1;
}


// 0x1000a13a  (ghidra: FUN_1000a13a)  [gap]
bool __cdecl sub_1000a13a(uint param_1,int *param_2)

{
  byte bVar1;
  uint32_t extraout_var;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  DWORD local_8;
  
  bVar1 = sub_1000a8c5(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar4 = (int)param_1 >> 6;
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (*(char *)((&DAT_10016068)[iVar4] + 0x28 + iVar3) < '\0') {
      if ((char)param_2[5] == '\0') {
        sub_10005280(param_2);
      }
      if ((*(int *)(param_2[3] + 0xa8) != 0) ||
         (*(char *)((&DAT_10016068)[iVar4] + 0x29 + iVar3) != '\0')) {
        BVar2 = GetConsoleMode(*(HANDLE *)((&DAT_10016068)[iVar4] + 0x18 + iVar3),&local_8);
        return BVar2 != 0;
      }
    }
  }
  return false;
}


// 0x1000a1b7  [gap]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  hFile = *(char **)((&DAT_10016068)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  pcVar4 = (char *)(param_4 + param_3);
  *(uint32_t *)param_1 = 0;
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  local_140c = hFile;
  do {
    if (pcVar4 <= param_3) {
      return param_1;
    }
    pcVar5 = local_1408;
    do {
      if (pcVar4 <= param_3) break;
      cVar1 = *(char *)param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(DWORD)(pcVar5 + -(int)local_1408),(LPDWORD)&local_140c,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      return param_1;
    }
    *(int *)(param_1 + 4) = (int)(local_140c + *(int *)(param_1 + 4));
    if (local_140c < pcVar5 + -(int)local_1408) {
      return param_1;
    }
  } while( true );
}


// 0x1000a292  [gap]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3,int param_4)

{
  short sVar1;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  uint local_1410;
  HANDLE local_140c;
  short local_1408 [2560];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  local_140c = *(HANDLE *)
                ((&DAT_10016068)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  psVar4 = (short *)(param_4 + param_3);
  *(uint32_t *)param_1 = 0;
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  do {
    if (psVar4 <= param_3) {
      return param_1;
    }
    psVar5 = local_1408;
    do {
      if (psVar4 <= param_3) break;
      sVar1 = *(short *)param_3;
      param_3 = param_3 + 2;
      if (sVar1 == 10) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1408 + 0x9ff);
    BVar2 = WriteFile(local_140c,local_1408,(int)psVar5 - (int)local_1408,&local_1410,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      return param_1;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
    if (local_1410 < (uint)((int)psVar5 - (int)local_1408)) {
      return param_1;
    }
  } while( true );
}


// 0x1000a37b  [gap]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3,int param_4)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  WCHAR *pWVar7;
  DWORD local_1418;
  HANDLE local_1414;
  WCHAR *local_1410;
  CHAR local_140c [3416];
  WCHAR local_6b4 [854];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  local_1414 = *(HANDLE *)
                ((&DAT_10016068)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  local_1410 = (WCHAR *)(param_4 + param_3);
  *(uint32_t *)param_1 = 0;
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  pWVar7 = (WCHAR *)param_3;
  if (param_3 < local_1410) {
    do {
      pWVar2 = local_6b4;
      do {
        if (local_1410 <= pWVar7) break;
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
        if (WVar1 == L'\n') {
          *pWVar2 = L'\r';
          pWVar2 = pWVar2 + 1;
        }
        *pWVar2 = WVar1;
        pWVar2 = pWVar2 + 1;
      } while (pWVar2 < local_6b4 + 0x354);
      uVar3 = sub_1000733d(0xfde9,0,local_6b4,(int)pWVar2 - (int)local_6b4 >> 1,local_140c,0xd55,
                           (LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar3 == 0) {
LAB_1000a494:
        DVar5 = GetLastError();
        *(DWORD *)param_1 = DVar5;
        return param_1;
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          BVar4 = WriteFile(local_1414,local_140c + uVar6,uVar3 - uVar6,&local_1418,
                            (LPOVERLAPPED)0x0);
          if (BVar4 == 0) goto LAB_1000a494;
          uVar6 = uVar6 + local_1418;
        } while (uVar6 < uVar3);
      }
      *(uint *)(param_1 + 4) = (int)pWVar7 - param_3;
    } while (pWVar7 < local_1410);
  }
  return param_1;
}


// 0x1000a4ad  (ghidra: FUN_1000a4ad)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl sub_1000a4ad(char *param_1,uint *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  
  if (param_1 == (char *)0xfffffffe) {
    *(uint8_t *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(uint8_t *)(param_4 + 7) = 1;
    param_4[6] = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_10016268 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = ((uint)param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_10016068)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        sub_10009aa7((uint)param_1);
        iVar3 = -1;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_10016068)[(int)param_1 >> 6]) & 1) == 0) {
          *(uint8_t *)(param_4 + 7) = 1;
          param_4[6] = 9;
          *(uint8_t *)(param_4 + 9) = 1;
          param_4[8] = 0;
        }
        else {
          iVar3 = sub_1000a5be(param_1,param_2,param_3,param_4);
        }
        sub_1000a5b6(param_1);
        ExceptionList = local_14;
        return iVar3;
      }
    }
    *(uint8_t *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(uint8_t *)(param_4 + 7) = 1;
    param_4[6] = 9;
    sub_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  ExceptionList = local_14;
  return -1;
}


// 0x1000a5b6  (ghidra: FUN_1000a5b6)  [gap]
void sub_1000a5b6(uint reg_EDI)

{
  ___acrt_lowio_unlock_fh(reg_EDI);
  return;
}


// 0x1000a5be  (ghidra: FUN_1000a5be)  [gap]
int __cdecl sub_1000a5be(char *param_1,uint *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  DWORD *pDVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_34 [5];
  DWORD local_20;
  int local_1c;
  int local_18;
  char *local_14;
  uint local_10;
  uint *local_c;
  char local_5;
  
  local_14 = param_1;
  local_c = param_2;
  local_10 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
LAB_1000a5ea:
    *(uint8_t *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(uint8_t *)(param_4 + 7) = 1;
    param_4[6] = 0x16;
    sub_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  local_18 = (int)param_1 >> 6;
  local_1c = ((uint)param_1 & 0x3f) * 0x38;
  local_5 = *(char *)(local_1c + 0x29 + (&DAT_10016068)[local_18]);
  if (((local_5 == '\x02') || (local_5 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_1000a5ea;
  if ((*(byte *)(local_1c + 0x28 + (&DAT_10016068)[local_18]) & 0x20) != 0) {
    sub_1000acf0((uint)param_1,0,0,(PLARGE_INTEGER)0x2,(int)param_4,local_1c);
  }
  DVar4 = 0;
  local_34[3] = 0;
  bVar1 = sub_1000a13a((uint)local_14,param_4);
  if (bVar1) {
    if (local_5 == '\0') {
      pDVar2 = sub_10009d07(local_34,(uint)local_14,local_c,local_10,param_4);
    }
    else {
      if ((local_5 != '\x01') && (local_5 != '\x02')) goto LAB_1000a771;
      pDVar2 = (DWORD *)write_double_translated_unicode_nolock
                                  ((char *)local_34,(uint)local_c,local_10);
    }
  }
  else if (*(char *)((&DAT_10016068)[local_18] + 0x28 + local_1c) < '\0') {
    if (local_5 == '\0') {
      pDVar2 = (DWORD *)write_text_ansi_nolock((int)local_34,local_14,(uint)local_c,local_10);
    }
    else if (local_5 == '\x01') {
      pDVar2 = (DWORD *)write_text_utf8_nolock((int)local_34,local_14,(uint)local_c,local_10);
    }
    else {
      if (local_5 != '\x02') goto LAB_1000a771;
      pDVar2 = (DWORD *)write_text_utf16le_nolock((int)local_34,local_14,(uint)local_c,local_10);
    }
  }
  else {
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = 0;
    BVar3 = WriteFile(*(HANDLE *)((&DAT_10016068)[local_18] + 0x18 + local_1c),local_c,local_10,
                      local_34 + 1,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_34[0] = GetLastError();
    }
    pDVar2 = local_34;
  }
  DVar4 = *pDVar2;
  local_34[3] = DVar4;
  local_34[4] = pDVar2[1];
  local_20 = pDVar2[2];
  if (local_34[4] != 0) {
    return local_34[4] - local_20;
  }
LAB_1000a771:
  if (DVar4 != 0) {
    if (DVar4 == 5) {
      *(uint8_t *)(param_4 + 7) = 1;
      param_4[6] = 9;
      *(uint8_t *)(param_4 + 9) = 1;
      param_4[8] = 5;
      return -1;
    }
    sub_10005db9(DVar4,(int)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_10016068)[local_18] + 0x28 + local_1c) & 0x40) != 0) &&
     ((char)*local_c == '\x1a')) {
    return 0;
  }
  *(uint8_t *)(param_4 + 7) = 1;
  param_4[6] = 0x1c;
  *(uint8_t *)(param_4 + 9) = 1;
  param_4[8] = 0;
  return -1;
}


// 0x1000a7da  (ghidra: FUN_1000a7da)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int sub_1000a7da(void)

{
  int iVar1;
  int iVar2;
  uint32_t local_20;
  uint32_t local_14;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_10016288; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_1001628c + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = sub_1000ae65(*(FILE **)(DAT_1001628c + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1001628c + iVar2 * 4) + 0x20));
      sub_10005e70(*(LPVOID *)(DAT_1001628c + iVar2 * 4));
      *(uint32_t *)(DAT_1001628c + iVar2 * 4) = 0;
    }
  }
  sub_1000a87c();
  ExceptionList = local_14;
  return local_20;
}


// 0x1000a87c  (ghidra: FUN_1000a87c)  [gap]
void sub_1000a87c(void)

{
  ___acrt_unlock(8);
  return;
}


// 0x1000a885  [gap]
/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_free_buffer_nolock(uint32_t *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    sub_10005e70((LPVOID)param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x1000a8c5  (ghidra: FUN_1000a8c5)  [gap]
byte __cdecl sub_1000a8c5(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
      return *(byte *)((&DAT_10016068)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 9;
    sub_10005c74();
  }
  return 0;
}


// 0x1000a920  (ghidra: FUN_1000a920)  [gap]
void sub_1000a920(void)

{
  uint uVar1;
  
  uVar1 = sub_1000b2c0();
  sub_1000b290(uVar1);
  return;
}


// 0x1000a92f  (ghidra: FUN_1000a92f)  [gap]
uint32_t __cdecl sub_1000a92f(uint32_t param_1,uint32_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}


// 0x1000a943  (ghidra: FUN_1000a943)  [gap]
uint32_t __cdecl sub_1000a943(uint32_t *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(uint8_t *)(param_2 + 0x1c) = 1;
  *(uint32_t *)(param_2 + 0x18) = 0x2a;
  return 0xffffffff;
}


// 0x1000a965  [gap]
/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_monetary
    ___free_lconv_mon
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict____acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(uint8_t **)(param_1 + 0xc) != PTR_DAT_10015744) {
      sub_10005e70(*(uint8_t **)(param_1 + 0xc));
    }
    if (*(uint8_t **)(param_1 + 0x10) != PTR_DAT_10015748) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x10));
    }
    if (*(uint8_t **)(param_1 + 0x14) != PTR_DAT_1001574c) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x14));
    }
    if (*(uint8_t **)(param_1 + 0x18) != PTR_DAT_10015750) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x18));
    }
    if (*(uint8_t **)(param_1 + 0x1c) != PTR_DAT_10015754) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x1c));
    }
    if (*(uint8_t **)(param_1 + 0x20) != PTR_DAT_10015758) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x20));
    }
    if (*(uint8_t **)(param_1 + 0x24) != PTR_DAT_1001575c) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x24));
    }
    if (*(uint8_t **)(param_1 + 0x38) != PTR_DAT_10015770) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x38));
    }
    if (*(uint8_t **)(param_1 + 0x3c) != PTR_DAT_10015774) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x3c));
    }
    if (*(uint8_t **)(param_1 + 0x40) != PTR_DAT_10015778) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x40));
    }
    if (*(uint8_t **)(param_1 + 0x44) != PTR_DAT_1001577c) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x44));
    }
    if (*(uint8_t **)(param_1 + 0x48) != PTR_DAT_10015780) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x48));
    }
    if (*(uint8_t **)(param_1 + 0x4c) != PTR_DAT_10015784) {
      sub_10005e70(*(uint8_t **)(param_1 + 0x4c));
    }
  }
  return;
}


// 0x1000aa63  [gap]
/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_numeric
    ___free_lconv_num
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict____free_lconv_num(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    if ((uint8_t *)*param_1 != PTR_DAT_10015738) {
      sub_10005e70((uint8_t *)*param_1);
    }
    if ((uint8_t *)param_1[1] != PTR_DAT_1001573c) {
      sub_10005e70((uint8_t *)param_1[1]);
    }
    if ((uint8_t *)param_1[2] != PTR_DAT_10015740) {
      sub_10005e70((uint8_t *)param_1[2]);
    }
    if ((uint8_t *)param_1[0xc] != PTR_DAT_10015768) {
      sub_10005e70((uint8_t *)param_1[0xc]);
    }
    if ((uint8_t *)param_1[0xd] != PTR_DAT_1001576c) {
      sub_10005e70((uint8_t *)param_1[0xd]);
    }
  }
  return;
}


// 0x1000aacc  (ghidra: FUN_1000aacc)  [gap]
void __cdecl sub_1000aacc(uint32_t *param_1,int param_2)

{
  uint32_t *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    sub_10005e70((LPVOID)*param_1);
  }
  return;
}


// 0x1000aaf1  [gap]
/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_time(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    sub_1000aacc(param_1,7);
    sub_1000aacc(param_1 + 7,7);
    sub_1000aacc(param_1 + 0xe,0xc);
    sub_1000aacc(param_1 + 0x1a,0xc);
    sub_1000aacc(param_1 + 0x26,2);
    sub_10005e70((LPVOID)param_1[0x28]);
    sub_10005e70((LPVOID)param_1[0x29]);
    sub_10005e70((LPVOID)param_1[0x2a]);
    sub_1000aacc(param_1 + 0x2d,7);
    sub_1000aacc(param_1 + 0x34,7);
    sub_1000aacc(param_1 + 0x3b,0xc);
    sub_1000aacc(param_1 + 0x47,0xc);
    sub_1000aacc(param_1 + 0x53,2);
    sub_10005e70((LPVOID)param_1[0x55]);
    sub_10005e70((LPVOID)param_1[0x56]);
    sub_10005e70((LPVOID)param_1[0x57]);
    sub_10005e70((LPVOID)param_1[0x58]);
  }
  return;
}


// 0x1000abe0  (ghidra: FUN_1000abe0)  [gap]
void __cdecl sub_1000abe0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 != param_2))) {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}


// 0x1000ac00  (ghidra: FUN_1000ac00)  [gap]
int __cdecl sub_1000ac00(ushort *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    do {
      uVar1 = (uint)*param_1;
      uVar2 = (uint)*param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar2;
      if (uVar1 != uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = uVar1;
        }
        uVar1 = uVar3;
        uVar3 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar3 = uVar2;
        }
      }
    } while (((uVar1 - uVar3 == 0) && (uVar1 != 0)) &&
            (param_3 = param_3 + -1, param_1 = param_1 + 1, param_3 != 0));
    return uVar1 - uVar3;
  }
  return 0;
}


// 0x1000ac67  (ghidra: FUN_1000ac67)  [gap]
uint32_t sub_1000ac67(void)

{
  return DAT_100162b8;
}


// 0x1000ac6d  (ghidra: FUN_1000ac6d)  [gap]
uint64_t __cdecl
sub_1000ac6d(uint param_1,uint32_t param_2,uint32_t param_3,PLARGE_INTEGER param_4,int param_5,
            DWORD reg_EDI)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)sub_10009b7e(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    *(uint8_t *)(param_5 + 0x1c) = 1;
    *(uint32_t *)(param_5 + 0x18) = 9;
  }
  else {
    liDistanceToMove.s.HighPart = (LONG)&local_c;
    liDistanceToMove.s.LowPart = param_3;
    BVar2 = SetFilePointerEx(hFile,liDistanceToMove,param_4,reg_EDI);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      sub_10005db9(DVar3,param_5);
    }
    else if ((local_c & local_8) != 0xffffffff) {
      pbVar1 = (byte *)((&DAT_10016068)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_1000acec;
    }
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_1000acec:
  return CONCAT44(local_8,local_c);
}


// 0x1000acf0  (ghidra: FUN_1000acf0)  [gap]
uint64_t __cdecl
sub_1000acf0(uint param_1,uint32_t param_2,uint32_t param_3,PLARGE_INTEGER param_4,int param_5,
            uint32_t reg_EDI)

{
  uint64_t uVar1;
  
  uVar1 = sub_1000ac6d(param_1,param_2,param_3,param_4,param_5,reg_EDI);
  return uVar1;
}


// 0x1000ad0e  [gap]
/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  bool bVar1;
  uint32_t extraout_var;
  BOOL BVar2;
  DWORD local_8;
  
  bVar1 = ___dcrt_lowio_ensure_console_output_initialized();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    BVar2 = ___dcrt_write_console(&_WCh,1,&local_8);
    if (BVar2 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}


// 0x1000ad40  (ghidra: FUN_1000ad40)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl sub_1000ad40(FILE *param_1,int *param_2)

{
  uint32_t uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    sub_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      uVar1 = sub_1000add7(param_1,param_2);
      sub_1000adcf(param_1);
      ExceptionList = local_14;
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  ExceptionList = local_14;
  return 0xffffffff;
}


// 0x1000adcf  (ghidra: FUN_1000adcf)  [gap]
void sub_1000adcf(FILE *reg_ESI)

{
  __unlock_file(reg_ESI);
  return;
}


// 0x1000add7  (ghidra: FUN_1000add7)  [gap]
uint32_t __cdecl sub_1000add7(FILE *param_1,int *param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    sub_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((uint)param_1->_flag >> 0xd & 1) != 0) {
      uVar1 = sub_10008211(param_1,param_2);
      ___acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar2 = __fileno(param_1);
      iVar3 = sub_1000b63c(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        sub_10005e70(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}


// 0x1000ae65  (ghidra: FUN_1000ae65)  [gap]
uint32_t __cdecl sub_1000ae65(FILE *param_1)

{
  uint32_t uVar1;
  int local_2c [10];
  
  sub_10005130(local_2c,(uint32_t *)0x0);
  uVar1 = sub_1000ad40(param_1,local_2c);
  sub_10005190(local_2c);
  return uVar1;
}


// 0x1000aea0  (ghidra: FUN_1000aea0)  [gap]
void __fastcall sub_1000aea0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  double dVar4;
  ulonglong uVar5;
  uint8_t in_XMM0 [16];
  double dVar6;
  uint64_t local_10;
  uint8_t  stack0xfffffff8;   /* not traced by Ghidra: address of a stack slot */
  
  dVar4 = in_XMM0._0_8_;
  iVar3 = in_XMM0._0_4_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = CONCAT44(0x1000b137,(uint32_t)local_10);
    sub_1000baaf(param_1,iVar3,in_XMM0._4_4_);
    return;
  }
  while( true ) {
    uVar5 = in_XMM0._0_8_;
    uVar1 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar6 = (double)(uVar5 & 0xfffff80000000 | 0x3ff0000000000000);
    in_XMM0._8_8_ =
         ((double)(uVar5 & 0xfffffffffffff | 0x3ff0000000000000) - dVar6) *
         *(double *)
          (&UNK_10012648 +
          (SUB82((double)(uVar5 & 0xfffffffffffff | 0x3ff0000000000000) + 4398046511103.008,0) &
          0x7f0)) +
         (dVar6 * *(double *)
                   (&UNK_10012648 +
                   (SUB82((double)(uVar5 & 0xfffffffffffff | 0x3ff0000000000000) + 4398046511103.008
                          ,0) & 0x7f0)) - 0.43359375);
    uVar2 = uVar1 - 1;
    if (uVar2 < 0x7fe) {
      return;
    }
    local_10 = -(ulonglong)(dVar4 == 0.0);
    if ((short)local_10 != 0) break;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < 0x7ff) {
        local_10 = 0xfffffffffffff;
        if ((double)((ulonglong)dVar4 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return;
        }
        iVar3 = 0x3e9;
      }
      else if (((uVar1 & 0x7ff) < 0x7ff) ||
              (iVar3 == 0 && ((ulonglong)dVar4 & 0xfffff00000000) == 0)) {
        local_10 = -0x8000000000000;
        iVar3 = 9;
      }
      else {
        iVar3 = 0x3e9;
      }
      goto LAB_1000b0d4;
    }
    in_XMM0._0_8_ = dVar4 * 4503599627370496.0;
  }
  local_10 = -0x10000000000000;
  iVar3 = 8;
LAB_1000b0d4:
  sub_1000b7c0((uint64_t *)&stack0xfffffff8,(uint64_t *)&stack0xfffffff8,&local_10,iVar3);
  return;
}


// 0x1000b290  (ghidra: FUN_1000b290)  [gap]
uint __cdecl sub_1000b290(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0xe & 0x300;
  uVar1 = 0xffffffff;
  if (uVar2 == (param_1 >> 0x16 & 0x300)) {
    uVar1 = uVar2;
  }
  return uVar1;
}


// 0x1000b2c0  (ghidra: FUN_1000b2c0)  [gap]
uint sub_1000b2c0(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort in_FPUControlWord;
  uint32_t local_24;
  uint32_t local_8;
  
  local_24 = (uint)in_FPUControlWord;
  if ((in_FPUControlWord & 0x300) == 0) {
    local_8 = 0x2000;
  }
  else if ((local_24 & 0x300) == 0x200) {
    local_8 = 0x1000;
  }
  else {
    local_8 = 0;
  }
  uVar2 = local_24 & 0xc00;
  if (uVar2 < 0x801) {
    if (uVar2 == 0x800) {
      uVar2 = 0x200;
    }
    else {
      if (((in_FPUControlWord & 0xc00) == 0) || (uVar2 != 0x400)) goto LAB_1000b353;
      uVar2 = 0x100;
    }
  }
  else if (uVar2 == 0xc00) {
    uVar2 = 0x300;
  }
  else {
LAB_1000b353:
    uVar2 = 0;
  }
  uVar6 = (((local_24 & 7999) >> 2 & 8 | local_24 & 0x10) >> 2 | local_24 & 8) >> 1 |
          ((local_24 & 2) << 3 | local_24 & 4) * 2 | (local_24 & 1) << 4;
  if (DAT_10015c70 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = MXCSR & 0xffc0;
  }
  uVar1 = (ushort)uVar4 & 0x8040;
  if (uVar1 == 0x8000) {
    uVar5 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar5 = 0x800;
  }
  else {
    uVar5 = 0;
    if (uVar1 == 0x8040) {
      uVar5 = 0x400;
    }
  }
  uVar3 = uVar4 & 0x6000;
  if (uVar3 < 0x4001) {
    if (uVar3 == 0x4000) {
      uVar3 = 0x200;
      goto LAB_1000b423;
    }
    if ((uVar3 != 0) && (uVar3 == 0x2000)) {
      uVar3 = 0x100;
      goto LAB_1000b423;
    }
  }
  else if (uVar3 == 0x6000) {
    uVar3 = 0x300;
    goto LAB_1000b423;
  }
  uVar3 = 0;
LAB_1000b423:
  uVar4 = ((((uVar4 >> 2 & 0x400 | uVar4 & 0x800) >> 2 | uVar4 & 0x400) >> 2 | uVar4 & 0x200) >> 3 |
          uVar4 & 0x180) >> 3;
  return (((uVar3 | uVar4 << 2) << 6 | uVar6) << 2 | uVar2) << 0xe | uVar4 | uVar5 | uVar3 |
         uVar6 | (local_24 & 0x1000) << 2 | local_8 | uVar2;
}


// 0x1000b4a0  [gap]
/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_1000b4f1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000b4f1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// 0x1000b501  [gap]
/* Library Function - Single Match
    void __cdecl __dcrt_lowio_initialize_console_output(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __dcrt_lowio_initialize_console_output(void)

{
  DAT_10015890 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// 0x1000b520  [gap]
/* Library Function - Single Match
    ___dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool ___dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_10015890 == -2) {
    __dcrt_lowio_initialize_console_output();
  }
  return DAT_10015890 != -1;
}


// 0x1000b53f  [gap]
/* Library Function - Multiple Matches With Different Base Names
    ___dcrt_terminate_console_input
    ___dcrt_terminate_console_output
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict____dcrt_terminate_console_output(void)

{
  if ((DAT_10015890 != (HANDLE)0xffffffff) && (DAT_10015890 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_10015890);
  }
  return;
}


// 0x1000b556  [gap]
/* Library Function - Single Match
    ___dcrt_write_console
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

BOOL __cdecl ___dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_10015890,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      FID_conflict____dcrt_terminate_console_output();
      __dcrt_lowio_initialize_console_output();
      BVar1 = WriteConsoleW(DAT_10015890,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}


// 0x1000b5ab  (ghidra: FUN_1000b5ab)  [gap]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t sub_1000b5ab(uint *param_1,uint32_t *param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  void *local_14;
  
  sub_10009aa7(*param_1);
  uVar1 = *(uint *)*param_2;
  iVar2 = param_2[1];
  if ((*(byte *)((&DAT_10016068)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) == 0) {
    *(uint8_t *)(iVar2 + 0x1c) = 1;
    *(uint32_t *)(iVar2 + 0x18) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = sub_1000b6df(uVar1,iVar2);
  }
  sub_1000b630();
  ExceptionList = local_14;
  return uVar3;
}


// 0x1000b630  (ghidra: FUN_1000b630)  [gap]
void sub_1000b630(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}


// 0x1000b63c  (ghidra: FUN_1000b63c)  [gap]
uint32_t __cdecl sub_1000b63c(uint param_1,int *param_2)

{
  uint32_t uVar1;
  uint *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  
  if (param_1 == 0xfffffffe) {
    param_2[8] = 0;
    *(uint8_t *)(param_2 + 9) = 1;
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < DAT_10016268)) &&
       ((*(byte *)((&DAT_10016068)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 1) != 0))
    {
      local_18 = &param_1;
      local_c = param_1;
      local_14 = param_2;
      local_10 = param_1;
      uVar1 = sub_1000b5ab(&local_10,&local_18);
      return uVar1;
    }
    *(uint8_t *)(param_2 + 9) = 1;
    param_2[8] = 0;
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 9;
    sub_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}


// 0x1000b6df  (ghidra: FUN_1000b6df)  [gap]
uint32_t __cdecl sub_1000b6df(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  uint32_t uVar4;
  DWORD DVar5;
  
  iVar1 = sub_10009b7e(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_10016068 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_10016068 + 0x60) & 1) != 0)))) {
      iVar1 = sub_10009b7e(2);
      iVar2 = sub_10009b7e(1);
      if (iVar2 == iVar1) goto LAB_1000b6f5;
    }
    hObject = (HANDLE)sub_10009b7e(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_1000b747;
    }
  }
LAB_1000b6f5:
  DVar5 = 0;
LAB_1000b747:
  sub_10009aed(param_1);
  *(uint8_t *)((&DAT_10016068)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    sub_10005db9(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// 0x1000b77f  [gap]
/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  return;
}


// 0x1000b7c0  (ghidra: FUN_1000b7c0)  [gap]
void __cdecl sub_1000b7c0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  uint32_t *puVar4;
  uint32_t local_24;
  char *local_20;
  uint64_t local_1c;
  uint64_t local_14;
  uint64_t local_c;
  
  if (DAT_100162bc == 0) {
    pcVar1 = sub_10008000;
  }
  else {
    pcVar1 = DecodePointer(DAT_100162d0);
  }
  if (1000 < param_4) {
    if (param_4 != 0x3e9) {
      return;
    }
LAB_1000b9c8:
    *param_3 = *param_1;
    return;
  }
  if (param_4 == 1000) goto LAB_1000b9c8;
  switch(param_4) {
  case 2:
    local_24 = 2;
    local_20 = "log";
    goto LAB_1000b8ea;
  case 3:
    local_20 = "log";
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
    return;
  case 8:
    local_24 = 2;
    local_20 = "log10";
    goto LAB_1000b8ea;
  case 9:
    local_20 = "log10";
    break;
  case 0xe:
    local_24 = 3;
    local_20 = "exp";
    goto LAB_1000b8ea;
  case 0xf:
    local_20 = "exp";
    goto LAB_1000b891;
  case 0x18:
    local_24 = 3;
    goto LAB_1000b8e3;
  case 0x19:
    local_20 = "pow";
LAB_1000b891:
    local_24 = 4;
    local_1c = *param_1;
    local_14 = *param_2;
    puVar4 = &local_24;
    local_c = *param_3;
    guard_check_icall();
    (*pcVar1)(puVar4);
    *param_3 = local_c;
    return;
  case 0x1a:
    *param_3 = 0x3ff0000000000000;
    return;
  case 0x1b:
    local_24 = 2;
LAB_1000b8e3:
    local_20 = "pow";
LAB_1000b8ea:
    local_1c = *param_1;
    local_14 = *param_2;
    puVar4 = &local_24;
    local_c = *param_3;
    guard_check_icall();
    iVar2 = (*pcVar1)(puVar4);
    if (iVar2 == 0) {
      p_Var3 = sub_10005df2();
      *(uint32_t *)p_Var3 = 0x22;
      *param_3 = local_c;
      return;
    }
    goto LAB_1000b9ae;
  case 0x1c:
    local_20 = "pow";
    break;
  case 0x31:
    local_20 = "sqrt";
    break;
  case 0x3a:
    local_20 = "acos";
    break;
  case 0x3d:
    local_20 = "asin";
    break;
  default:
    return;
  }
  local_24 = 1;
  local_1c = *param_1;
  local_14 = *param_2;
  puVar4 = &local_24;
  local_c = *param_3;
  guard_check_icall();
  iVar2 = (*pcVar1)(puVar4);
  if (iVar2 == 0) {
    p_Var3 = sub_10005df2();
    *(uint32_t *)p_Var3 = 0x21;
  }
LAB_1000b9ae:
  *param_3 = local_c;
  return;
}


// 0x1000baaf  (ghidra: FUN_1000baaf)  [gap]
uint __thiscall sub_1000baaf(void *this,int param_1,uint param_2)

{
  float10 *reg_EAX;
  uint uVar1;
  uint extraout_EAX;
  uint8_t in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 extraout_ST0;
  uint32_t unkbyte10;   /* not traced by Ghidra: value with no visible source */
  
  reg_EAX = __fload_withFB(this,&param_1,(uint32_t)_ReturnAddress());
  if ((bool)in_ZF) {
    if ((((uint)reg_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = sub_1000c47c(reg_EAX);
      goto LAB_1000bb51;
    }
    uVar1 = 0;
    if (((uint)reg_EAX & 0x80000000) == 0) goto LAB_1000bae5;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_1000bb51;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
      uVar1 = param_2;
LAB_1000bae5:
      if (DAT_100162c0 != 0) {
        return uVar1;
      }
      uVar1 = __math_exit("log10",0x1b,(uint32_t)_ReturnAddress(),param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_1000bb51:
  if (DAT_100162c0 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling("log10",0x1b,in_FPUControlWord,(uint32_t)_ReturnAddress(),param_1,param_2);
  return extraout_EAX;
}


// 0x1000bb70  (ghidra: FUN_1000bb70)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t sub_1000bb70(void)

{
  DAT_100162cc = IsProcessorFeaturePresent(10);
  return 0;
}


// 0x1000bb80  (ghidra: FUN_1000bb80)  [gap]
float10 __cdecl sub_1000bb80(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = sub_1000bca0();
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    fVar3 = sub_1000c640((double)CONCAT44(param_2,param_1));
    if (((double)fVar3 != (double)CONCAT44(param_2,param_1)) && ((uVar1 & 0x20) == 0)) {
      fVar3 = sub_1000c660(0x10,0xc,CONCAT44(param_2,param_1),(double)fVar3,uVar1);
      return fVar3;
    }
    sub_1000bca0();
    return (float10)(double)fVar3;
  }
  iVar2 = sub_1000d080(param_1,param_2);
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    fVar3 = sub_1000c660(8,0xc,CONCAT44(param_2,param_1),(double)CONCAT44(param_2,param_1) + 1.0,
                         uVar1);
    return fVar3;
  }
  sub_1000bca0();
  return (float10)(double)CONCAT44(param_2,param_1);
}


// 0x1000bc80  (ghidra: FUN_1000bc80)  [gap]
int sub_1000bc80(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// 0x1000bca0  (ghidra: FUN_1000bca0)  [gap]
int sub_1000bca0(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// 0x1000bcd0  (ghidra: FUN_1000bcd0)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1000bcd0(void)

{
  return;
}


// 0x1000bd30  (ghidra: FUN_1000bd30)  [gap]
int sub_1000bd30(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// 0x1000bd50  (ghidra: FUN_1000bd50)  [gap]
void sub_1000bd50(void)

{
  float10 in_ST0;
  
  sub_1000bd6e((double)in_ST0);
  return;
}


// 0x1000bd6e  (ghidra: FUN_1000bd6e)  [gap]
float10 __cdecl sub_1000bd6e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  uint8_t in_XMM0 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar6 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar7 = (double)(uVar6 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar7 + 4398046511103.008,0) & 0x7f0;
    dVar9 = (double)(uVar6 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = (double)(uVar6 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_10012640 + uVar1) - 0.43359375;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_10012640 + uVar1);
    dVar8 = ((double)(uVar6 & 0xfffffffffffff | 0x3ff0000000000000) - dVar11) *
            *(double *)(&UNK_10012648 + uVar1);
    dVar9 = dVar7 + dVar10;
    in_XMM0._8_8_ = dVar8 + (dVar11 * *(double *)(&UNK_10012648 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar9 * 21.535473262846583 + -10.893557852776363) * dVar9 +
                       5.667600603343536) * dVar9 * dVar9 * dVar9 * dVar9 * dVar9 +
                       dVar9 * 0.0016161024074997105 +
                       *(double *)(&UNK_10012238 + uVar1) + dVar11 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar8 & *(ulonglong *)(&UNK_10012ac8 + iVar5)) +
                      *(double *)(&DAT_10012230 + uVar1) + dVar10 + dVar11 * 0.30102999566395283 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_10012ac0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        iVar4 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        iVar4 = 9;
      }
      else {
        iVar4 = 0x3e9;
      }
      goto LAB_1000bf7a;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  iVar4 = 8;
LAB_1000bf7a:
  sub_1000b7c0(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}


// 0x1000c47c  (ghidra: FUN_1000c47c)  [gap]
uint32_t sub_1000c47c(uint reg_EAX)

{
  if ((reg_EAX & 0x80000) != 0) {
    return 0;
  }
  return 0;
}


// 0x1000c495  [gap]
/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

float10 * __fastcall __fload_withFB(float10 *__return_storage_ptr__,int param_1,int param_2)

{
  float10 *pfVar1;
  
  pfVar1 = (float10 *)(*(uint *)(param_1 + 4) & 0x7ff00000);
  if (pfVar1 != (float10 *)0x7ff00000) {
    return pfVar1;
  }
  return *(float10 **)(param_1 + 4);
}


// 0x1000c4fb  [gap]
/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  ushort in_FPUStatusWord;
  
  if ((((uint32_t)_ReturnAddress() != 0x27f) && (((uint32_t)_ReturnAddress() & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,(uint32_t)_ReturnAddress(),param_3,param_4,param_5);
    return;
  }
  return;
}


// 0x1000c5e0  (ghidra: FUN_1000c5e0)  [gap]
float10 __fastcall
sub_1000c5e0(uint32_t param_1,int param_2,uint16_t param_3,uint32_t param_4,uint32_t param_5
            ,uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  float10 in_ST0;
  int local_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t local_14;
  uint32_t local_10;
  double dStack_c;
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  sub_1000d300(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}


// 0x1000c5f7  [gap]
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (uint32_t param_1,int param_2,ushort param_3,uint32_t param_4,uint32_t param_5,
          uint32_t param_6)

{
  float10 in_ST0;
  int local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  sub_1000d300(param_2,&local_24,&param_3);
  return (float10)local_c;
}


// 0x1000c640  (ghidra: FUN_1000c640)  [gap]
float10 __cdecl sub_1000c640(double param_1)

{
  return (float10)ROUND(param_1);
}


// 0x1000c660  (ghidra: FUN_1000c660)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 __cdecl
sub_1000c660(uint param_1,int param_2,uint64_t param_3,double param_4,uint param_5)

{
  bool bVar1;
  uint32_t extraout_var;
  __acrt_ptd *p_Var2;
  int iVar3;
  float10 fVar4;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  
  local_14 = DAT_10015000 ^ (uint)&stack0xfffffff0;
  bVar1 = sub_1000c7a0(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    sub_1000cb00(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar3 = (param_1 & 2) * 2;
        }
        else {
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 5;
  }
  bVar1 = sub_10007fd0();
  if (bVar1) {
    if (iVar3 != 0) {
      fVar4 = sub_1000ce70(iVar3,param_2,(int)param_3,(int)((ulonglong)param_3 >> 0x20),0,0,
                           SUB84(param_4,0),(int)((ulonglong)param_4 >> 0x20));
      return fVar4;
    }
  }
  else if (iVar3 == 1) {
    p_Var2 = sub_10005df2();
    *(uint32_t *)p_Var2 = 0x21;
  }
  else if ((iVar3 == 2) || (iVar3 == 3)) {
    p_Var2 = sub_10005df2();
    *(uint32_t *)p_Var2 = 0x22;
  }
  sub_1000bca0();
  return (float10)param_4;
}


// 0x1000c7a0  (ghidra: FUN_1000c7a0)  [gap]
bool __cdecl sub_1000c7a0(uint param_1,double *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  double dVar7;
  uint local_2c;
  byte bStack_28;
  uint8_t uStack_27;
  ushort uStack_26;
  int local_20;
  uint64_t local_1c;
  uint local_14;
  uint32_t local_10;
  uint local_c;
  char local_5;
  
  bVar2 = 0;
  uVar5 = param_1 & 0x1f;
  local_c = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    bVar2 = 1;
    uVar5 = param_1 & 0x17;
    goto LAB_1000ca9f;
  }
  if ((param_1 & param_3 & 4) != 0) {
    bVar2 = 4;
    uVar5 = param_1 & 0x1b;
    goto LAB_1000ca9f;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_1000ca9f;
    uVar4 = param_1 >> 4 & 1;
    dVar7 = *param_2;
    if (dVar7 == 0.0) {
      uVar4 = 1;
    }
    else {
      fVar6 = sub_1000cf70(SUB84(dVar7,0),(uint)((ulonglong)dVar7 >> 0x20),&local_20);
      dVar7 = (double)fVar6;
      local_20 = local_20 + -0x600;
      local_2c = SUB84(dVar7,0);
      bStack_28 = (byte)((ulonglong)dVar7 >> 0x20);
      uStack_27 = (uint8_t)((ulonglong)dVar7 >> 0x28);
      uStack_26 = (ushort)((ulonglong)dVar7 >> 0x30);
      local_1c = (double)CONCAT44(local_20,local_2c);
      if (local_20 < -0x432) {
        uVar4 = 1;
        *param_2 = dVar7 * 0.0;
      }
      else {
        local_14 = (uint)(dVar7 < 0.0);
        local_5 = '\0';
        uStack_26 = uStack_26 & 0xf | 0x10;
        cVar1 = '\0';
        local_10 = 0;
        if (local_20 < -0x3fd) {
          local_20 = -0x3fd - local_20;
          do {
            cVar1 = (char)(local_2c & 1);
            local_1c._4_4_ = 1;
            if (((local_2c & 1) != 0) && (uVar4 == 0)) {
              uVar4 = local_1c._4_4_;
            }
            if (local_5 != '\0') {
              local_10 = 1;
            }
            local_2c = local_2c >> 1;
            if ((bStack_28 & 1) != 0) {
              local_2c = local_2c | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_26,CONCAT11(uStack_27,bStack_28)) >> 1;
            bStack_28 = (byte)uVar5;
            uStack_27 = (uint8_t)(uVar5 >> 8);
            uStack_26 = uStack_26 >> 1;
            local_20 = local_20 + -1;
            local_5 = cVar1;
          } while (local_20 != 0);
          cVar1 = (char)local_10;
        }
        local_1c = (double)CONCAT26(uStack_26,CONCAT15(uStack_27,CONCAT14(bStack_28,local_2c)));
        if (local_14 != 0) {
          local_1c = -(double)CONCAT44((int)((ulonglong)local_1c >> 0x20),local_2c);
          uStack_26 = (ushort)((ulonglong)local_1c >> 0x30);
        }
        if ((local_5 != '\0') || (dVar7 = local_1c, cVar1 != '\0')) {
          iVar3 = sub_1000a920();
          dVar7 = local_1c;
          if (iVar3 < 0x201) {
            bVar2 = (byte)local_14;
            if (iVar3 == 0x200) {
              bVar2 = bVar2 ^ 1;
LAB_1000ca66:
              if (bVar2 != 0) {
LAB_1000ca68:
                iVar3 = CONCAT22(uStack_26,CONCAT11(uStack_27,bStack_28)) +
                        (uint)(0xfffffffe < local_2c);
                bStack_28 = (byte)iVar3;
                uStack_27 = (uint8_t)((uint)iVar3 >> 8);
                uStack_26 = (ushort)((uint)iVar3 >> 0x10);
                dVar7 = (double)CONCAT26(uStack_26,
                                         CONCAT15(uStack_27,CONCAT14(bStack_28,local_2c + 1)));
              }
            }
            else if (iVar3 == 0) {
              if (local_5 != '\0') {
                if ((char)local_10 == '\0') {
                  bVar2 = (byte)local_2c & 1;
                  goto LAB_1000ca66;
                }
                goto LAB_1000ca68;
              }
            }
            else if (iVar3 == 0x100) goto LAB_1000ca66;
          }
        }
        *param_2 = dVar7;
        uVar5 = local_c;
      }
    }
    uVar5 = uVar5 & 0xfffffffd;
    bVar2 = -(uVar4 != 0) & 0x10;
    goto LAB_1000ca9f;
  }
  bVar2 = 8;
  uVar5 = param_3 & 0xc00;
  if (uVar5 < 0x801) {
    if (uVar5 == 0x800) {
      if (0.0 < *param_2) {
        *param_2 = INFINITY;
        uVar5 = param_1 & 0x1e;
        goto LAB_1000ca9f;
      }
LAB_1000c8dd:
      dVar7 = -1.79769313486232e+308;
    }
    else {
      if (uVar5 != 0) {
        if (uVar5 == 0x400) {
          if (*param_2 <= 0.0) {
            *param_2 = -INFINITY;
            uVar5 = param_1 & 0x1e;
          }
          else {
            *param_2 = 1.79769313486232e+308;
            uVar5 = param_1 & 0x1e;
          }
          goto LAB_1000ca9f;
        }
        goto LAB_1000c8f0;
      }
      dVar7 = INFINITY;
      if (*param_2 <= 0.0) {
        *param_2 = -INFINITY;
        uVar5 = param_1 & 0x1e;
        goto LAB_1000ca9f;
      }
    }
    *param_2 = dVar7;
  }
  else if (uVar5 == 0xc00) {
    if (0.0 < *param_2) {
      *param_2 = 1.79769313486232e+308;
      uVar5 = param_1 & 0x1e;
      goto LAB_1000ca9f;
    }
    goto LAB_1000c8dd;
  }
LAB_1000c8f0:
  uVar5 = param_1 & 0x1e;
LAB_1000ca9f:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    bVar2 = bVar2 | 0x20;
    uVar5 = uVar5 & 0xffffffef;
  }
  if (bVar2 != 0) {
    sub_1000bcd0();
  }
  return uVar5 == 0;
}


// 0x1000cad0  (ghidra: FUN_1000cad0)  [gap]
void __cdecl
sub_1000cad0(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  sub_1000cb00(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


// 0x1000cb00  (ghidra: FUN_1000cb00)  [gap]
void __cdecl
sub_1000cb00(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
            int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  DWORD dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  dwExceptionCode = 0xc000000d;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = sub_1000bd30();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 < 0x801) {
    if (uVar3 == 0x800) {
      *param_1 = *param_1 & 0xfffffffe | 2;
    }
    else if (uVar3 == 0) {
      *param_1 = *param_1 & 0xfffffffc;
    }
    else if (uVar3 == 0x400) {
      *param_1 = *param_1 & 0xfffffffd | 1;
    }
  }
  else if (uVar3 == 0xc00) {
    *param_1 = *param_1 | 3;
  }
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1000ccab:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1000ccab;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  sub_1000bc80();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  switch(*param_1 & 3) {
  case 0:
    *puVar1 = *puVar1 & 0xfffff3ff;
    break;
  case 1:
    *puVar1 = *puVar1 & 0xfffff7ff | 0x400;
    break;
  case 2:
    *puVar1 = *puVar1 & 0xfffffbff | 0x800;
    break;
  case 3:
    *puVar1 = *puVar1 | 0xc00;
  }
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1000cdf3;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1000cdf3:
  if (param_7 != 0) {
    *puVar2 = param_1[0x14];
    return;
  }
  *(uint64_t *)puVar2 = *(uint64_t *)(param_1 + 0x14);
  return;
}


// 0x1000ce30  (ghidra: FUN_1000ce30)  [gap]
void __cdecl sub_1000ce30(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = sub_10005df2();
    *(uint32_t *)p_Var1 = 0x22;
    return;
  }
  return;
}


// 0x1000ce70  (ghidra: FUN_1000ce70)  [gap]
float10 __cdecl
sub_1000ce70(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int local_24;
  int local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint32_t uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_10012c58)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(&UNK_10012c5c + iVar1 * 8);
      if (local_20 != 0) {
        local_1c = param_3;
        local_18 = param_4;
        local_14 = param_5;
        local_10 = param_6;
        local_c = param_7;
        local_24 = param_1;
        uStack_8 = param_8;
        sub_1000bca0();
        iVar1 = sub_10008000(&local_24);
        if (iVar1 == 0) {
          if (param_1 == 1) {
            p_Var2 = sub_10005df2();
            *(uint32_t *)p_Var2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            p_Var2 = sub_10005df2();
            *(uint32_t *)p_Var2 = 0x22;
            return (float10)(double)CONCAT44(uStack_8,local_c);
          }
        }
        return (float10)(double)CONCAT44(uStack_8,local_c);
      }
      goto LAB_1000ce96;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_1000ce96:
  sub_1000bca0();
  if (param_1 == 1) {
    p_Var2 = sub_10005df2();
    *(uint32_t *)p_Var2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var2 = sub_10005df2();
    *(uint32_t *)p_Var2 = 0x22;
    return (float10)(double)CONCAT44(param_8,param_7);
  }
  return (float10)(double)CONCAT44(param_8,param_7);
}


// 0x1000cf70  (ghidra: FUN_1000cf70)  [gap]
float10 __cdecl sub_1000cf70(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double local_14;
  double local_c;
  
  local_14 = (double)CONCAT44(param_2,param_1);
  if (local_14 != 0.0) {
    if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
      uVar2 = param_2 & 0xfffff;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (uVar2 == 0) {
        iVar1 = 0x1f;
        if (param_1 != 0) {
          for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
      }
      else {
        iVar1 = iVar1 + 0x20;
      }
      lVar3 = __allshl(0x34 - (char)iVar1,uVar2,param_1);
      param_2 = (uint)((ulonglong)lVar3 >> 0x20) & 0xffefffff;
      if (local_14 < 0.0) {
        param_2 = param_2 | 0x80000000;
      }
      iVar1 = iVar1 + -0x431;
      local_14 = (double)CONCAT44(param_2,(int)lVar3);
    }
    else {
      iVar1 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
    }
    local_c = (double)(CONCAT44(param_2,SUB84(local_14,0)) & 0xbfefffffffffffff | 0x3fe0000000000000
                      );
    *param_3 = iVar1;
    return (float10)local_c;
  }
  *param_3 = 0;
  return (float10)0.0;
}


// 0x1000d080  (ghidra: FUN_1000d080)  [gap]
uint32_t __cdecl sub_1000d080(int param_1,uint param_2)

{
  if (param_1 == 0) {
    if (param_2 == 0x7ff00000) {
      return 1;
    }
    if (param_2 == 0xfff00000) {
      return 2;
    }
  }
  if ((param_2 & 0x7ff80000) == 0x7ff80000) {
    return 3;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) &&
     ((param_1 != 0 || ((param_2 & 0x7fffffff) != 0x7ff00000)))) {
    return 4;
  }
  return 0;
}


// 0x1000d100  (ghidra: FUN_1000d100)  [gap]
uint32_t __cdecl
sub_1000d100(int param_1,int param_2,int param_3,uint param_4,uint64_t *param_5)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  uint64_t uVar5;
  
  dVar4 = ABS((double)CONCAT44(param_2,param_1));
  if (param_3 == 0) {
    if (param_4 == 0x7ff00000) {
      uVar5 = 0x3ff0000000000000;
      if (dVar4 <= 1.0) {
        if (dVar4 < 1.0) {
          *param_5 = 0;
          return 0;
        }
        goto LAB_1000d2d4;
      }
      goto LAB_1000d137;
    }
    if (param_4 == 0xfff00000) {
      uVar5 = 0x3ff0000000000000;
      if (1.0 < dVar4) {
        *param_5 = 0;
        return 0;
      }
      if (dVar4 < 1.0) {
        *param_5 = 0x7ff0000000000000;
        return 0;
      }
      goto LAB_1000d2d4;
    }
  }
  if (param_1 != 0) {
    return 0;
  }
  if (param_2 == 0x7ff00000) {
    uVar5 = 0;
    if (0.0 < (double)CONCAT44(param_4,param_3)) {
LAB_1000d137:
      *param_5 = 0x7ff0000000000000;
      return 0;
    }
    if (0.0 <= (double)CONCAT44(param_4,param_3)) {
      *param_5 = 0x3ff0000000000000;
      return 0;
    }
    goto LAB_1000d2e9;
  }
  if (param_2 != -0x100000) {
    return 0;
  }
  uVar1 = sub_1000d440(param_3,param_4);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = sub_1000c640((double)CONCAT44(param_4,param_3));
    if ((double)fVar3 != (double)CONCAT44(param_4,param_3)) goto LAB_1000d28d;
    dVar4 = (double)CONCAT44(param_4,param_3) * 0.5;
    fVar3 = sub_1000c640(dVar4);
    if ((double)fVar3 == dVar4) {
      iVar2 = 2;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
LAB_1000d28d:
    iVar2 = 0;
  }
  uVar5 = 0;
  if ((double)CONCAT44(param_4,param_3) <= 0.0) {
    if ((double)CONCAT44(param_4,param_3) < 0.0) {
      if (iVar2 == 1) {
        uVar5 = 0x8000000000000000;
      }
LAB_1000d2d4:
      *param_5 = uVar5;
      return 0;
    }
    uVar5 = 0x3ff0000000000000;
  }
  else {
    uVar5 = 0x7ff0000000000000;
    if (iVar2 == 1) {
      *param_5 = 0xfff0000000000000;
      return 0;
    }
  }
LAB_1000d2e9:
  *param_5 = uVar5;
  return 0;
}


// 0x1000d300  (ghidra: FUN_1000d300)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl sub_1000d300(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  uint32_t extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  uint64_t local_60;
  uint local_50;
  uint local_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  
  local_14 = DAT_10015000 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  switch(*param_2) {
  case 1:
  case 5:
    uVar3 = 8;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 0x11;
    break;
  case 4:
    uVar3 = 0x12;
    break;
  default:
    goto switchD_1000d345_caseD_6;
  case 8:
    uVar3 = 0x10;
  }
  bVar1 = sub_1000c7a0(uVar3,(double *)(param_2 + 6),local_94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(uint64_t *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    sub_1000cad0(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
  }
switchD_1000d345_caseD_6:
  sub_1000bca0();
  if (((*param_2 == 8) || (bVar1 = sub_10007fd0(), !bVar1)) ||
     (iVar2 = sub_10008000(param_2), iVar2 == 0)) {
    sub_1000ce30(*param_2);
  }
  return;
}


// 0x1000d440  (ghidra: FUN_1000d440)  [gap]
uint32_t __cdecl sub_1000d440(int param_1,uint param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
      uVar2 = 0x80;
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = 0x10;
      }
      return uVar2;
    }
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((uint16_t)param_2,param_1)) == 0.0) {
      uVar2 = 0x40;
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = 0x20;
      }
      return uVar2;
    }
    uVar2 = 0x100;
    if ((param_2 & 0x80000000) != 0) {
      uVar2 = 8;
    }
    return uVar2;
  }
  iVar1 = sub_1000d080(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((uint16_t)param_2,param_1))
                                     >> 0x20));
  if (iVar1 == 1) {
    return 0x200;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 1;
    }
    return 2;
  }
  return 4;
}


// 0x1000d510  [gap]
/* Library Function - Single Match
    __FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


// 0x1000d560  [gap]
/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2019 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  uint32_t extraout_var;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  uint32_t local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10015000 ^ 0x10013c40;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = sub_1000d620((short *)&IMAGE_DOS_HEADER_10000000);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// 0x1000d620  (ghidra: FUN_1000d620)  [gap]
bool __cdecl sub_1000d620(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}


// 0x1000d651  (ghidra: FUN_1000d651)  [gap]
uint32_t * __thiscall sub_1000d651(void *this,byte param_1)

{
  *(uint8_t ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    sub_1000d700(this);
  }
  return this;
}


// 0x1000d674  [gap]
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  uint32_t *unaff_EBP;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = (uint32_t)_ReturnAddress();
  return;
}


// 0x1000d688  [gap]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3(int param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  int iVar1;
  uint auStack_1c [5];
  uint8_t local_8 [8];
  
  iVar1 = -param_1;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0x10) = reg_EBX;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0xc) = reg_ESI;
  *(uint32_t *)((int)auStack_1c + iVar1 + 8) = reg_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015000 ^ (uint)&param_1;
  *(uint32_t *)((int)auStack_1c + iVar1) = (uint32_t)_ReturnAddress();
  ExceptionList = local_8;
  return;
}


// 0x1000d6bb  [gap]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl
__EH_prolog3_catch(int param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  int iVar1;
  uint auStack_1c [5];
  uint8_t local_8 [8];
  
  iVar1 = -param_1;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0x10) = reg_EBX;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0xc) = reg_ESI;
  *(uint32_t *)((int)auStack_1c + iVar1 + 8) = reg_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015000 ^ (uint)&param_1;
  *(uint32_t *)((int)auStack_1c + iVar1) = (uint32_t)_ReturnAddress();
  ExceptionList = local_8;
  return;
}


// 0x1000d700  (ghidra: FUN_1000d700)  [gap]
void __cdecl sub_1000d700(LPVOID param_1)

{
  thunk_FUN_10005e70(param_1);
  return;
}


// 0x1000d710  [gap]
/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio */

uint __alloca_probe_16(uint reg_EAX)

{
  uint uVar1;
  
  uVar1 = 4 - reg_EAX & 0xf;
  return reg_EAX + uVar1 | -(uint)CARRY4(reg_EAX,uVar1);
}


// 0x1000d726  [gap]
/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(uint reg_EAX)

{
  uint uVar1;
  
  uVar1 = 4 - reg_EAX & 7;
  return reg_EAX + uVar1 | -(uint)CARRY4(reg_EAX,uVar1);
}


// 0x1000d740  [gap]
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2019 Release */

void __alloca_probe(uint8_t *reg_EAX)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint8_t auStack_4 [4];
  uint8_t  stack0x00000000;   /* not traced by Ghidra: address of a stack slot */
  
  puVar2 = (uint32_t *)
           ((int)&stack0x00000000 - (int)reg_EAX & ~-(uint)(&stack0x00000000 < reg_EAX));
  for (puVar1 = (uint32_t *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = (uint32_t)_ReturnAddress();
  return;
}


// 0x1000d770  [gap]
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2,uint reg_EAX)

{
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | reg_EAX >> 0x20 - (param_1 & 0x1f),
                    reg_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(reg_EAX << (param_1 & 0x1f)) << 0x20;
}


// 0x1000d790  [gap]
void __cdecl thunk_FUN_10005e70(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint8_t *puVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_10016064,0,param_1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      puVar3 = sub_10005d37(DVar2);
      p_Var4 = sub_10005df2();
      *(uint8_t **)p_Var4 = puVar3;
    }
  }
  return;
}


// 0x1000d7a0  [gap]
/* Library Function - Single Match
    __filter_x86_sse2_floating_point_exception_default
   
   Library: Visual Studio 2019 Release */

int __cdecl __filter_x86_sse2_floating_point_exception_default(int param_1)

{
  uint uVar1;
  
  if ((DAT_10015c70 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
}


// 0x1000d818  (ghidra: FUN_1000d818)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1000d818(EHRegistrationNode *param_1,_CONTEXT *param_2,void *param_3)

{
  
  FID_conflict____CxxFrameHandler3((uint32_t)_ReturnAddress(),param_1,param_2,param_3,&FuncInfo_100137bc);
  return;
}

