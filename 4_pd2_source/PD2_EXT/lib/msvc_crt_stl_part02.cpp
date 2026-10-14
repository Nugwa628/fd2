/*
 * lib/msvc_crt_stl_part02.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x1000ce70 - 0x1000d818
 * Functions     : 21
 * Attribution   : lib=21
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x1000ce70  [lib]
float10 __cdecl
FUN_1000ce70(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
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
        FUN_1000bca0();
        iVar1 = FUN_10008000(&local_24);
        if (iVar1 == 0) {
          if (param_1 == 1) {
            p_Var2 = FUN_10005df2();
            *(uint32_t *)p_Var2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            p_Var2 = FUN_10005df2();
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
  FUN_1000bca0();
  if (param_1 == 1) {
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x22;
    return (float10)(double)CONCAT44(param_8,param_7);
  }
  return (float10)(double)CONCAT44(param_8,param_7);
}


// 0x1000cf70  [lib]
float10 __cdecl FUN_1000cf70(uint param_1,uint param_2,int *param_3)

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


// 0x1000d080  [lib]
uint32_t __cdecl FUN_1000d080(int param_1,uint param_2)

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


// 0x1000d100  [lib]
uint32_t __cdecl
FUN_1000d100(int param_1,int param_2,int param_3,uint param_4,uint64_t *param_5)

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
  uVar1 = FUN_1000d440(param_3,param_4);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = FUN_1000c640((double)CONCAT44(param_4,param_3));
    if ((double)fVar3 != (double)CONCAT44(param_4,param_3)) goto LAB_1000d28d;
    dVar4 = (double)CONCAT44(param_4,param_3) * 0.5;
    fVar3 = FUN_1000c640(dVar4);
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


// 0x1000d300  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_1000d300(int param_1,int *param_2,ushort *param_3)

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
  bVar1 = FUN_1000c7a0(uVar3,(double *)(param_2 + 6),local_94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(uint64_t *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    FUN_1000cad0(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
  }
switchD_1000d345_caseD_6:
  FUN_1000bca0();
  if (((*param_2 == 8) || (bVar1 = FUN_10007fd0(), !bVar1)) ||
     (iVar2 = FUN_10008000(param_2), iVar2 == 0)) {
    FUN_1000ce30(*param_2);
  }
  return;
}


// 0x1000d440  [lib]
uint32_t __cdecl FUN_1000d440(int param_1,uint param_2)

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
  iVar1 = FUN_1000d080(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((uint16_t)param_2,param_1))
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


// 0x1000d510  [lib]
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


// 0x1000d560  [lib]
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
  bVar1 = FUN_1000d620((short *)&IMAGE_DOS_HEADER_10000000);
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


// 0x1000d620  [lib]
bool __cdecl FUN_1000d620(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}


// 0x1000d651  [lib]
uint32_t * __thiscall FUN_1000d651(void *this,byte param_1)

{
  *(uint8_t ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_1000d700(this);
  }
  return this;
}


// 0x1000d674  [lib]
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


// 0x1000d688  [lib]
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


// 0x1000d6bb  [lib]
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


// 0x1000d700  [lib]
void __cdecl FUN_1000d700(LPVOID param_1)

{
  thunk_FUN_10005e70(param_1);
  return;
}


// 0x1000d710  [lib]
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


// 0x1000d726  [lib]
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


// 0x1000d740  [lib]
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


// 0x1000d770  [lib]
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


// 0x1000d790  [lib]
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
      puVar3 = FUN_10005d37(DVar2);
      p_Var4 = FUN_10005df2();
      *(uint8_t **)p_Var4 = puVar3;
    }
  }
  return;
}


// 0x1000d7a0  [lib]
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


// 0x1000d818  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1000d818(EHRegistrationNode *param_1,_CONTEXT *param_2,void *param_3)

{
  
  FID_conflict____CxxFrameHandler3((uint32_t)_ReturnAddress(),param_1,param_2,param_3,&FuncInfo_100137bc);
  return;
}

