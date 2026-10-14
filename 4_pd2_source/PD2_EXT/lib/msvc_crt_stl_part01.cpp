/*
 * lib/msvc_crt_stl_part01.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x10001242 - 0x1000ce30
 * Functions     : 450
 * Attribution   : lib=450
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x10001242  [lib]
/* WARNING: This is an inlined function */

void __fastcall
__security_check_cookie
          (uintptr_t _StackCookie,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  if (_StackCookie == DAT_10015000) {
    return;
  }
  FUN_100015db(reg_EBX,reg_ESI,reg_EDI);
  return;
}


// 0x10001250  [lib]
/* Library Function - Single Match
    int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  uint32_t extraout_var;
  
  if (param_2 == 0) {
    bVar1 = FUN_100013aa(param_3 != (void *)0x0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  else if (param_2 == 1) {
    uVar2 = FUN_100012a3(param_1,param_3);
  }
  else {
    if (param_2 == 2) {
      bVar1 = ___scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = ___scrt_dllmain_crt_thread_detach();
    }
    uVar2 = (uint)bVar1;
  }
  return uVar2;
}


// 0x100012a3  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl FUN_100012a3(uint32_t param_1,uint32_t param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  int iVar5;
  int *piVar6;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(0);
  if ((char)uVar4 != '\0') {
    uVar4 = ___scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_10015c48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10001a8c();
    }
    DAT_10015c48 = 1;
    bVar3 = FUN_1000184f(uVar4);
    if (bVar3) {
      FUN_10001ba9();
      FUN_1000176d();
      FUN_10001791();
      iVar5 = __initterm_e((uint32_t *)&DAT_1000e140,(uint32_t *)&DAT_1000e150);
      if ((iVar5 == 0) && (uVar4 = ___scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        FUN_100042f0((uint32_t *)&DAT_1000e138,(uint32_t *)&DAT_1000e13c);
        DAT_10015c48 = 2;
        bVar2 = false;
      }
    }
    FUN_10001386();
    if (!bVar2) {
      piVar6 = (int *)FUN_10001a86();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        uVar4 = 2;
        pcVar1 = (code *)*piVar6;
        guard_check_icall();
        (*pcVar1)(param_1,uVar4,param_2);
      }
      DAT_10015908 = DAT_10015908 + 1;
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// 0x10001386  [lib]
void FUN_10001386(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(uint32_t *)(unaff_EBP + -0x1d));
  return;
}


// 0x100013aa  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

byte __cdecl FUN_100013aa(char param_1)

{
  uint32_t reg_EAX;
  uint uVar1;
  byte bVar2;
  uint32_t local_14;
  
  if (DAT_10015908 < 1) {
    bVar2 = 0;
  }
  else {
    DAT_10015908 = DAT_10015908 + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_10015c48 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_10001a8c();
    }
    FUN_100018bd();
    __scrt_uninitialize_type_info();
    FUN_10001bd5();
    DAT_10015c48 = 0;
    reg_EAX = FUN_1000143f();
    uVar1 = ___scrt_uninitialize_crt(param_1,'\0',reg_EAX);
    bVar2 = -((uVar1 & 0xff) != 0) & 1;
    FUN_1000144c();
  }
  ExceptionList = local_14;
  return bVar2;
}


// 0x1000143f  [lib]
void FUN_1000143f(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(uint32_t *)(unaff_EBP + -0x20));
  return;
}


// 0x1000144c  [lib]
void FUN_1000144c(void)

{
  FUN_100018e0();
  return;
}


// 0x1000145a  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *local_14;
  
  if ((param_2 == 0) && (DAT_10015908 < 1)) {
    ExceptionList = local_14;
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = dllmain_raw(param_1,param_2,param_3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
  }
  iVar1 = dllmain_DllMain_100011c0(param_1,param_2);
  if ((param_2 == 1) && (iVar1 == 0)) {
    dllmain_DllMain_100011c0(param_1,0);
    FUN_100013aa(param_3 != (void *)0x0);
    dllmain_raw(param_1,0,param_3);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = dllmain_raw(param_1,param_2,param_3);
    }
  }
  ExceptionList = local_14;
  return iVar1;
}


// 0x10001565  [lib]
/* WARNING: Removing unreachable block (ram,0x10001578) */
/* Library Function - Single Match
    int __stdcall dllmain_raw(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int dllmain_raw(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  return 1;
}


// 0x10001590  [lib]
void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}


// 0x100015b3  [lib]
void __cdecl FUN_100015b3(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// 0x100015db  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015db(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  code *pcVar1;
  uint uVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t uVar3;
  uint extraout_EDX;
  uint32_t unaff_EBP;
  uint16_t in_ES;
  uint16_t in_CS;
  uint16_t in_SS;
  uint16_t in_DS;
  uint16_t in_FS;
  uint16_t in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  DAT_10015a08 = (uint32_t)((ulonglong)lVar9 >> 0x20);
  DAT_10015a10 = (uint32_t)lVar9;
  DAT_10015a20 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  DAT_10015a24 = &stack0x00000004;
  DAT_10015960 = 0x10001;
  DAT_10015910 = 0xc0000409;
  DAT_10015914 = 1;
  DAT_10015920 = 1;
  DAT_10015924 = 2;
  DAT_1001591c = (uint32_t)_ReturnAddress();
  DAT_100159ec = in_GS;
  DAT_100159f0 = in_FS;
  DAT_100159f4 = in_ES;
  DAT_100159f8 = in_DS;
  DAT_100159fc = reg_EDI;
  DAT_10015a00 = reg_ESI;
  DAT_10015a04 = reg_EBX;
  DAT_10015a0c = uVar3;
  DAT_10015a14 = unaff_EBP;
  DAT_10015a18 = (uint32_t)_ReturnAddress();
  DAT_10015a1c = in_CS;
  DAT_10015a28 = in_SS;
  FUN_100015b3((_EXCEPTION_POINTERS *)&PTR_DAT_1000e174);
  return;
}


// 0x100016d5  [lib]
/* Library Function - Single Match
    ___get_entropy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint ___get_entropy(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}


// 0x10001722  [lib]
/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_10015000 == 0xbb40e64e) || ((DAT_10015000 & 0xffff0000) == 0)) {
    DAT_10015000 = ___get_entropy();
    if (DAT_10015000 == 0xbb40e64e) {
      DAT_10015000 = 0xbb40e64f;
    }
    else if ((DAT_10015000 & 0xffff0000) == 0) {
      DAT_10015000 = DAT_10015000 | (DAT_10015000 | 0x4711) << 0x10;
    }
  }
  DAT_10015040 = ~DAT_10015000;
  return;
}


// 0x1000176d  [lib]
void FUN_1000176d(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_10015c30);
  return;
}


// 0x10001779  [lib]
/* Library Function - Single Match
    void __cdecl __scrt_uninitialize_type_info(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __scrt_uninitialize_type_info(void)

{
  ___std_type_info_destroy_list((PSLIST_HEADER)&DAT_10015c30);
  return;
}


// 0x10001785  [lib]
uint8_t * FUN_10001785(void)

{
  return &DAT_10015c38;
}


// 0x1000178b  [lib]
uint8_t * FUN_1000178b(void)

{
  return &DAT_10015c40;
}


// 0x10001791  [lib]
void FUN_10001791(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_10001785();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_1000178b();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}


// 0x100017ae  [lib]
/* Library Function - Single Match
    struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + *(ushort *)(param_1 + iVar1 + 6);
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((p_Var2->VirtualAddress <= param_2) &&
       (param_2 < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) break;
    p_Var2 = p_Var2 + 1;
  }
  return p_Var2;
}


// 0x100017f2  [lib]
/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  uint32_t extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_10015c4c != (void *)0x0) {
        pvVar3 = DAT_10015c4c;
        pvVar1 = DAT_10015c4c;
      }
      DAT_10015c4c = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}


// 0x10001824  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  uint32_t extraout_var;
  uint32_t uVar2;
  int reg_EAX;
  uint uVar3;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    reg_EAX = FUN_10001e2c();
    uVar3 = FUN_10004ae8(reg_EAX,reg_EAX);
    if (uVar3 != 0) {
      return uVar3 & 0xffffff00;
    }
    uVar2 = thunk_FUN_10004af3(0);
  }
  else {
    uVar2 = FUN_10001c58();
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// 0x1000184f  [lib]
bool FUN_1000184f(uint32_t reg_EAX)

{
  uint32_t uVar1;
  
  uVar1 = FUN_10001926(0,reg_EAX);
  return (char)uVar1 != '\0';
}


// 0x1000185d  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t ___scrt_dllmain_crt_thread_attach(void)

{
  bool bVar1;
  
  bVar1 = ___vcrt_thread_attach();
  if (bVar1) {
    bVar1 = FUN_10004f99();
    if (bVar1) {
      return 1;
    }
    FUN_100021a7();
  }
  return 0;
}


// 0x1000187c  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t ___scrt_dllmain_crt_thread_detach(void)

{
  FUN_10004fa4();
  FUN_100021a7();
  return 1;
}


// 0x10001889  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___scrt_dllmain_exception_filter
          (uint32_t param_1,int param_2,uint32_t param_3,uint8_t *param_4,int param_5,
          uint32_t param_6)

{
  bool bVar1;
  uint32_t extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) && (param_2 == 1)) {
    guard_check_icall();
    (*(code *)param_4)(param_1,iVar2,param_3);
  }
  __seh_filter_dll(param_5,param_6);
  return;
}


// 0x100018bd  [lib]
void FUN_100018bd(void)

{
  bool bVar1;
  uint32_t extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_10004e22();
    return;
  }
  iVar2 = FUN_100047e3();
  if (iVar2 != 0) {
    return;
  }
  FUN_100045ff(0,0,1);
  return;
}


// 0x100018e0  [lib]
void FUN_100018e0(void)

{
  ___acrt_uninitialize_critical();
  FUN_100021c6();
  return;
}


// 0x100018ed  [lib]
/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Library: Visual Studio 2019 Release */

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint reg_EAX;
  uint32_t reg_EAX_00;
  
  if (param_1 == 0) {
    DAT_10015c50 = 1;
  }
  FUN_10001c58();
  reg_EAX = ___vcrt_initialize();
  if ((char)reg_EAX != '\0') {
    reg_EAX_00 = ___acrt_initialize(reg_EAX);
    if ((char)reg_EAX_00 != '\0') {
      return CONCAT31((int3)((uint)reg_EAX_00 >> 8),1);
    }
    reg_EAX = ___vcrt_uninitialize('\0',reg_EAX_00);
  }
  return reg_EAX & 0xffffff00;
}


// 0x10001926  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t __cdecl FUN_10001926(int param_1,uint32_t reg_EAX)

{
  bool bVar1;
  uint32_t extraout_var;
  uint uVar3;
  int iVar2;
  
  if (DAT_10015c51 != '\0') {
    return CONCAT31((int3)((uint)reg_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_10001a8c();
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) || (param_1 != 0)) {
    DAT_10015c54 = 0xffffffff;
    DAT_10015c58 = 0xffffffff;
    DAT_10015c5c = 0xffffffff;
    DAT_10015c60 = 0xffffffff;
    DAT_10015c64 = 0xffffffff;
    DAT_10015c68 = 0xffffffff;
LAB_10001999:
    DAT_10015c51 = '\x01';
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar3 = __initialize_onexit_table((int *)&DAT_10015c54);
    if (uVar3 == 0) {
      uVar3 = __initialize_onexit_table((int *)&DAT_10015c60);
      iVar2 = 0;
      if (uVar3 == 0) goto LAB_10001999;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


// 0x100019ad  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_10000000,param_1 + 0xf0000000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || ((int)p_Var1->Characteristics < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}


// 0x10001a41  [lib]
/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  uint32_t extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_10015c4c;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_10015c4c = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}


// 0x10001a5e  [lib]
/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

uint32_t __cdecl ___scrt_uninitialize_crt(char param_1,char param_2,uint32_t reg_EAX)

{
  uint8_t uVar1;
  uint32_t extraout_var;
  
  if ((DAT_10015c50 == '\0') || (param_2 == '\0')) {
    uVar1 = ___acrt_uninitialize(param_1);
    reg_EAX = ___vcrt_uninitialize(param_1,CONCAT31(extraout_var,uVar1));
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x10001a86  [lib]
uint8_t * FUN_10001a86(void)

{
  return &DAT_100162c8;
}


// 0x10001a8c  [lib]
void FUN_10001a8c(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  uint32_t local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_10001ba1();
  _memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  _memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_10001ba1();
  }
  return;
}


// 0x10001ba1  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ba1(void)

{
  DAT_10015c6c = 0;
  return;
}


// 0x10001ba9  [lib]
/* WARNING: Removing unreachable block (ram,0x10001bb9) */
/* WARNING: Removing unreachable block (ram,0x10001bba) */
/* WARNING: Removing unreachable block (ram,0x10001bc0) */
/* WARNING: Removing unreachable block (ram,0x10001bca) */
/* WARNING: Removing unreachable block (ram,0x10001bd1) */

void FUN_10001ba9(void)

{
  return;
}


// 0x10001bd5  [lib]
/* WARNING: Removing unreachable block (ram,0x10001be5) */
/* WARNING: Removing unreachable block (ram,0x10001be6) */
/* WARNING: Removing unreachable block (ram,0x10001bec) */
/* WARNING: Removing unreachable block (ram,0x10001bf6) */
/* WARNING: Removing unreachable block (ram,0x10001bfd) */

void FUN_10001bd5(void)

{
  return;
}


// 0x10001c10  [lib]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl
__SEH_prolog4(uint32_t param_1,int param_2,uint32_t reg_EBX,uint32_t reg_ESI,
             uint32_t reg_EDI)

{
  int iVar1;
  uint auStack_1c [5];
  uint8_t local_8 [8];
  
  iVar1 = -param_2;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0x10) = reg_EBX;
  *(uint32_t *)((int)auStack_1c + iVar1 + 0xc) = reg_ESI;
  *(uint32_t *)((int)auStack_1c + iVar1 + 8) = reg_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015000 ^ (uint)&param_2;
  *(uint32_t *)((int)auStack_1c + iVar1) = (uint32_t)_ReturnAddress();
  ExceptionList = local_8;
  return;
}


// 0x10001c55  [lib]
/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}


// 0x10001c58  [lib]
/* WARNING: Removing unreachable block (ram,0x10001cc7) */
/* WARNING: Removing unreachable block (ram,0x10001c8b) */
/* WARNING: Removing unreachable block (ram,0x10001d3f) */

uint32_t FUN_10001c58(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint64_t uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  uint local_18;
  uint local_14;
  
  DAT_10015c70 = 0;
  DAT_10015050 = DAT_10015050 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar6 = DAT_10015050;
  if (BVar5 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_10015c74 = DAT_10015c74 | 1;
    }
    if (*piVar1 < 7) {
      local_14 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_14 = *(uint *)(iVar3 + 4);
      if ((local_14 & 0x200) != 0) {
        DAT_10015c74 = DAT_10015c74 | 2;
      }
    }
    DAT_10015c70 = 1;
    uVar6 = DAT_10015050 | 2;
    if ((uVar7 & 0x100000) != 0) {
      uVar6 = DAT_10015050 | 6;
      DAT_10015c70 = 2;
      if (((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_18 = in_XCR0 & (uint)uVar4;
        if ((local_18 & 6) == 6) {
          DAT_10015c70 = 3;
          uVar6 = DAT_10015050 | 0xe;
          if ((local_14 & 0x20) != 0) {
            DAT_10015c70 = 5;
            uVar6 = DAT_10015050 | 0x2e;
            if (((local_14 & 0xd0030000) == 0xd0030000) && ((local_18 & 0xe0) == 0xe0)) {
              DAT_10015050 = DAT_10015050 | 0x6e;
              DAT_10015c70 = 6;
              uVar6 = DAT_10015050;
            }
          }
        }
      }
    }
  }
  DAT_10015050 = uVar6;
  return 0;
}


// 0x10001e2c  [lib]
uint32_t FUN_10001e2c(void)

{
  return 1;
}


// 0x10001e30  [lib]
/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_100162c4 != 0;
}


// 0x10001e40  (ghidra: FUN_10001e40)  [lib]
uint8_t (*) [16] __cdecl strrchr(uint8_t (*param_1) [16],byte param_2)

{
  byte bVar1;
  uint8_t *puVar2;
  uint uVar3;
  uint8_t (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  uint8_t (*pauVar7) [16];
  char *pcVar8;
  byte *pbVar9;
  uint8_t auVar12 [15];
  uint8_t auVar11 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  byte *pbVar10;
  
  if (DAT_10015c70 != 0) {
    if (DAT_10015c70 < 2) {
      auVar15 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      uVar3 = -1 << (sbyte)((uint)param_1 & 0xf);
      pcVar8 = (char *)((int)param_1 - ((uint)param_1 & 0xf));
      pauVar7 = (uint8_t (*) [16])0x0;
      while( true ) {
        auVar12 = SUB1615((uint8_t  [16])0x0,1);
        auVar14[0] = -(*pcVar8 == '\0');
        auVar14[1] = -(pcVar8[1] == '\0');
        auVar14[2] = -(pcVar8[2] == '\0');
        auVar14[3] = -(pcVar8[3] == '\0');
        auVar14[4] = -(pcVar8[4] == '\0');
        auVar14[5] = -(pcVar8[5] == '\0');
        auVar14[6] = -(pcVar8[6] == '\0');
        auVar14[7] = -(pcVar8[7] == '\0');
        auVar14[8] = -(pcVar8[8] == '\0');
        auVar14[9] = -(auVar12[8] == pcVar8[9]);
        auVar14[10] = -(auVar12[9] == pcVar8[10]);
        auVar14[0xb] = -(auVar12[10] == pcVar8[0xb]);
        auVar14[0xc] = -(auVar12[0xb] == pcVar8[0xc]);
        auVar14[0xd] = -(auVar12[0xc] == pcVar8[0xd]);
        auVar14[0xe] = -(auVar12[0xd] == pcVar8[0xe]);
        auVar14[0xf] = -(auVar12[0xe] == pcVar8[0xf]);
        auVar13[0] = -(*pcVar8 == auVar15[0]);
        auVar13[1] = -(pcVar8[1] == auVar15[1]);
        auVar13[2] = -(pcVar8[2] == auVar15[2]);
        auVar13[3] = -(pcVar8[3] == auVar15[3]);
        auVar13[4] = -(pcVar8[4] == auVar15[4]);
        auVar13[5] = -(pcVar8[5] == auVar15[5]);
        auVar13[6] = -(pcVar8[6] == auVar15[6]);
        auVar13[7] = -(pcVar8[7] == auVar15[7]);
        auVar13[8] = -(pcVar8[8] == auVar15[0]);
        auVar13[9] = -(pcVar8[9] == auVar15[1]);
        auVar13[10] = -(pcVar8[10] == auVar15[2]);
        auVar13[0xb] = -(pcVar8[0xb] == auVar15[3]);
        auVar13[0xc] = -(pcVar8[0xc] == auVar15[4]);
        auVar13[0xd] = -(pcVar8[0xd] == auVar15[5]);
        auVar13[0xe] = -(pcVar8[0xe] == auVar15[6]);
        auVar13[0xf] = -(pcVar8[0xf] == auVar15[7]);
        uVar5 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar3;
        if (uVar5 != 0) break;
        uVar3 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar13[0xf] >> 7) << 0xf) & uVar3;
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar3 != 0) {
          pauVar7 = (uint8_t (*) [16])(pcVar8 + iVar6);
        }
        uVar3 = 0xffffffff;
        pcVar8 = pcVar8 + 0x10;
      }
      uVar3 = (uVar5 * 2 & uVar5 * -2) - 1 &
              (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar13[0xf] >> 7) << 0xf) & uVar3;
      iVar6 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      pauVar4 = (uint8_t (*) [16])(pcVar8 + iVar6);
      if (uVar3 == 0) {
        pauVar4 = pauVar7;
      }
      return pauVar4;
    }
    uVar3 = (uint)param_2;
    if (uVar3 == 0) {
      pcVar8 = (char *)((uint)param_1 & 0xfffffff0);
      auVar12 = SUB1615((uint8_t  [16])0x0,1);
      auVar15[0] = -(*pcVar8 == '\0');
      auVar15[1] = -(pcVar8[1] == '\0');
      auVar15[2] = -(pcVar8[2] == '\0');
      auVar15[3] = -(pcVar8[3] == '\0');
      auVar15[4] = -(pcVar8[4] == '\0');
      auVar15[5] = -(pcVar8[5] == '\0');
      auVar15[6] = -(pcVar8[6] == '\0');
      auVar15[7] = -(pcVar8[7] == '\0');
      auVar15[8] = -(pcVar8[8] == '\0');
      auVar15[9] = -(auVar12[8] == pcVar8[9]);
      auVar15[10] = -(auVar12[9] == pcVar8[10]);
      auVar15[0xb] = -(auVar12[10] == pcVar8[0xb]);
      auVar15[0xc] = -(auVar12[0xb] == pcVar8[0xc]);
      auVar15[0xd] = -(auVar12[0xc] == pcVar8[0xd]);
      auVar15[0xe] = -(auVar12[0xd] == pcVar8[0xe]);
      auVar15[0xf] = -(auVar12[0xe] == pcVar8[0xf]);
      uVar3 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar15[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
      while (uVar3 == 0) {
        auVar12 = SUB1615((uint8_t  [16])0x0,1);
        auVar11[0] = -(pcVar8[0x10] == '\0');
        auVar11[1] = -(pcVar8[0x11] == '\0');
        auVar11[2] = -(pcVar8[0x12] == '\0');
        auVar11[3] = -(pcVar8[0x13] == '\0');
        auVar11[4] = -(pcVar8[0x14] == '\0');
        auVar11[5] = -(pcVar8[0x15] == '\0');
        auVar11[6] = -(pcVar8[0x16] == '\0');
        auVar11[7] = -(pcVar8[0x17] == '\0');
        auVar11[8] = -(pcVar8[0x18] == '\0');
        auVar11[9] = -(auVar12[8] == pcVar8[0x19]);
        auVar11[10] = -(auVar12[9] == pcVar8[0x1a]);
        auVar11[0xb] = -(auVar12[10] == pcVar8[0x1b]);
        auVar11[0xc] = -(auVar12[0xb] == pcVar8[0x1c]);
        auVar11[0xd] = -(auVar12[0xc] == pcVar8[0x1d]);
        auVar11[0xe] = -(auVar12[0xd] == pcVar8[0x1e]);
        auVar11[0xf] = -(auVar12[0xe] == pcVar8[0x1f]);
        pcVar8 = pcVar8 + 0x10;
        uVar3 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar11[0xf] >> 7) << 0xf);
      }
      iVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      pauVar7 = (uint8_t (*) [16])(pcVar8 + iVar6);
    }
    else {
      pauVar7 = (uint8_t (*) [16])0x0;
      for (; ((uint)param_1 & 0xf) != 0; param_1 = (uint8_t (*) [16])(*param_1 + 1)) {
        if ((byte)(*param_1)[0] == uVar3) {
          pauVar7 = param_1;
        }
        if ((byte)(*param_1)[0] == 0) {
          return pauVar7;
        }
      }
      do {
        pauVar4 = param_1 + 1;
        iVar6 = pcmpistri(ZEXT416(uVar3),*param_1,0x40);
        if ((uint8_t (*) [16])0xffffffef < param_1) {
          pauVar7 = (uint8_t (*) [16])(pauVar4[-1] + iVar6);
        }
        param_1 = pauVar4;
      } while (pauVar4 != (uint8_t (*) [16])0x0);
    }
    return pauVar7;
  }
  iVar6 = -1;
  do {
    pauVar7 = param_1;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pauVar7 = (uint8_t (*) [16])(*param_1 + 1);
    puVar2 = *param_1;
    param_1 = pauVar7;
  } while (*puVar2 != '\0');
  iVar6 = -(iVar6 + 1);
  pbVar10 = pauVar7[-1] + 0xf;
  do {
    pbVar9 = pbVar10;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar9 = pbVar10 + -1;
    bVar1 = *pbVar10;
    pbVar10 = pbVar9;
  } while (param_2 != bVar1);
  pauVar7 = (uint8_t (*) [16])(pbVar9 + 1);
  if ((*pauVar7)[0] != param_2) {
    pauVar7 = (uint8_t (*) [16])0x0;
  }
  return pauVar7;
}


// 0x10001f80  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ValidateLocalCookies
   
   Library: Visual Studio 2019 Release */

void _ValidateLocalCookies(void)

{
  return;
}


// 0x10001fc0  [lib]
/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

uint32_t __cdecl __except_handler4(PEXCEPTION_RECORD param_1,PVOID param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  uint32_t uVar6;
  int iVar7;
  uint uVar8;
  PEXCEPTION_RECORD pEVar9;
  PEXCEPTION_RECORD local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint32_t local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 1;
  DVar3 = __filter_x86_sse2_floating_point_exception_default(param_1->ExceptionCode);
  param_1->ExceptionCode = DVar3;
  iVar7 = (int)param_2 + 0x10;
  local_c = *(uint *)((int)param_2 + 8) ^ DAT_10015000;
  local_14 = iVar7;
  _ValidateLocalCookies();
  ___except_validate_context_record(param_3);
  uVar8 = *(uint *)((int)param_2 + 0xc);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(PEXCEPTION_RECORD **)((int)param_2 + -4) = &local_20;
    if (uVar8 == 0xfffffffe) {
      return local_10;
    }
    do {
      iVar4 = uVar8 * 3 + 4;
      uVar1 = *(uint *)(local_c + iVar4 * 4);
      local_18 = local_c + iVar4 * 4;
      if (*(uint8_t **)(local_18 + 4) != (uint8_t *)0x0) {
        iVar4 = _EH4_CallFilterFunc(*(uint8_t **)(local_18 + 4));
        local_5 = '\x01';
        if (iVar4 < 0) {
          local_10 = 0;
          goto LAB_10002084;
        }
        if (0 < iVar4) {
          if ((param_1->ExceptionCode == 0xe06d7363) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1000e17c)
             , BVar5 != 0)) {
            pEVar9 = param_1;
            guard_check_icall();
            ___DestructExceptionObject((int *)pEVar9);
            iVar7 = local_14;
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(uint *)((int)param_2 + 0xc) != uVar8) {
            _EH4_LocalUnwind((int)param_2,uVar8,iVar7,&DAT_10015000);
          }
          *(uint *)((int)param_2 + 0xc) = uVar1;
          _ValidateLocalCookies();
          _EH4_TransferToHandler(*(uint8_t **)(local_18 + 8));
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
      }
      uVar8 = uVar1;
    } while (uVar1 != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (uVar8 == 0xfffffffe) {
      return local_10;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar7,&DAT_10015000);
  }
LAB_10002084:
  _ValidateLocalCookies();
  return local_10;
}


// 0x1000211e  [lib]
/* Library Function - Single Match
    ___std_type_info_compare
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___std_type_info_compare(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != param_2) {
    pbVar3 = (byte *)(param_2 + 5);
    pbVar2 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_10002153:
        return -(uint)bVar4 | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_10002153;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}


// 0x1000215a  [lib]
/* Library Function - Single Match
    ___std_type_info_destroy_list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_type_info_destroy_list(PSLIST_HEADER param_1)

{
  _SINGLE_LIST_ENTRY *p_Var1;
  PSINGLE_LIST_ENTRY p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSINGLE_LIST_ENTRY)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_10005e70(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}


// 0x1000217d  [lib]
/* Library Function - Single Match
    ___vcrt_initialize
   
   Library: Visual Studio 2019 Release */

uint ___vcrt_initialize(void)

{
  uint uVar1;
  uint32_t reg_EAX;
  
  uVar1 = ___vcrt_initialize_locks();
  if ((char)uVar1 != '\0') {
    reg_EAX = ___vcrt_initialize_ptd();
    if ((char)reg_EAX != '\0') {
      return CONCAT31((int3)((uint)reg_EAX >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_locks(reg_EAX);
  }
  return uVar1 & 0xffffff00;
}


// 0x1000219c  [lib]
/* Library Function - Single Match
    ___vcrt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___vcrt_thread_attach(void)

{
  LPVOID pvVar1;
  
  pvVar1 = ___vcrt_getptd_noexit();
  return pvVar1 != (LPVOID)0x0;
}


// 0x100021a7  [lib]
uint8_t FUN_100021a7(void)

{
  FUN_10002693();
  return 1;
}


// 0x100021af  [lib]
/* Library Function - Single Match
    ___vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

uint32_t __cdecl ___vcrt_uninitialize(char param_1,uint32_t reg_EAX)

{
  uint32_t reg_EAX_00;
  
  if (param_1 == '\0') {
    reg_EAX_00 = ___vcrt_uninitialize_ptd();
    reg_EAX = ___vcrt_uninitialize_locks(reg_EAX_00);
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x100021c6  [lib]
uint32_t FUN_100021c6(void)

{
  uint32_t uVar1;
  
  uVar1 = ___vcrt_uninitialize_ptd();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x100021ce  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int *piVar3;
  void *local_14;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) || (param_1[5] == 0x19930522)) &&
      (pbVar1 = (byte *)param_1[7], pbVar1 != (byte *)0x0)))) {
    if (*(void **)(pbVar1 + 4) == (void *)0x0) {
      if (((*pbVar1 & 0x10) != 0) && (piVar3 = *(int **)param_1[6], piVar3 != (int *)0x0)) {
        pcVar2 = *(code **)(*piVar3 + 8);
        guard_check_icall();
        (*pcVar2)(piVar3);
      }
    }
    else {
      _CallMemberFunction0((void *)param_1[6],*(void **)(pbVar1 + 4));
    }
  }
  ExceptionList = local_14;
  return;
}


// 0x1000226f  [lib]
/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void * const,void * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  (*param_2)();
  return;
}


// 0x1000227c  [lib]
uint32_t __cdecl FUN_1000227c(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_2 != '\0') && (piVar1 = (int *)*param_1, *piVar1 == -0x1f928c9d)) && (piVar1[4] == 3)
      ) && (((piVar1[5] == 0x19930520 || (piVar1[5] == 0x19930521)) || (piVar1[5] == 0x19930522))))
  {
    iVar2 = ___vcrt_getptd();
    *(int **)(iVar2 + 0x10) = piVar1;
    iVar2 = param_1[1];
    iVar3 = ___vcrt_getptd();
    *(int *)(iVar3 + 0x14) = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_10004fee();
  }
  return 0;
}


// 0x100022d4  [lib]
/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  piVar1 = *(int **)(iVar2 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}


// 0x100022fa  [lib]
/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2019 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


// 0x1000231f  [lib]
uint32_t __cdecl FUN_1000231f(uint32_t *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    iVar3 = ___vcrt_getptd();
    if (0 < *(int *)(iVar3 + 0x18)) {
      iVar3 = ___vcrt_getptd();
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    iVar3 = ___vcrt_getptd();
    *(int **)(iVar3 + 0x10) = piVar1;
    uVar2 = param_1[1];
    iVar3 = ___vcrt_getptd();
    *(uint32_t *)(iVar3 + 0x14) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_10004fee();
  }
  return 0;
}


// 0x10002380  [lib]
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  int iVar1;
  uint8_t *puVar2;
  int *piVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  iVar1 = (_Val & 0xffU) * 0x1010101;
  piVar3 = _Dst;
  if (0x20 < _Size) {
    if (0x7f < _Size) {
      puVar2 = _Dst;
      if ((DAT_10015c74 >> 1 & 1) != 0) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar2 = (char)iVar1;
          puVar2 = puVar2 + 1;
        }
        return _Dst;
      }
      if ((DAT_10015050 >> 1 & 1) == 0) goto joined_r0x1000248b;
      *(int *)_Dst = iVar1;
      *(int *)((int)_Dst + 4) = iVar1;
      *(int *)((int)_Dst + 8) = iVar1;
      *(int *)((int)_Dst + 0xc) = iVar1;
      piVar3 = (int *)((int)_Dst + 0x10U & 0xfffffff0);
      _Size = (int)_Dst + (_Size - (int)piVar3);
      if (0x80 < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3[8] = iVar1;
          piVar3[9] = iVar1;
          piVar3[10] = iVar1;
          piVar3[0xb] = iVar1;
          piVar3[0xc] = iVar1;
          piVar3[0xd] = iVar1;
          piVar3[0xe] = iVar1;
          piVar3[0xf] = iVar1;
          piVar3[0x10] = iVar1;
          piVar3[0x11] = iVar1;
          piVar3[0x12] = iVar1;
          piVar3[0x13] = iVar1;
          piVar3[0x14] = iVar1;
          piVar3[0x15] = iVar1;
          piVar3[0x16] = iVar1;
          piVar3[0x17] = iVar1;
          piVar3[0x18] = iVar1;
          piVar3[0x19] = iVar1;
          piVar3[0x1a] = iVar1;
          piVar3[0x1b] = iVar1;
          piVar3[0x1c] = iVar1;
          piVar3[0x1d] = iVar1;
          piVar3[0x1e] = iVar1;
          piVar3[0x1f] = iVar1;
          piVar3 = piVar3 + 0x20;
          _Size = _Size - 0x80;
        } while ((_Size & 0xffffff00) != 0);
        goto LAB_10002450;
      }
    }
    if ((DAT_10015050 >> 1 & 1) != 0) {
LAB_10002450:
      if (0x1f < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3 = piVar3 + 8;
          _Size = _Size - 0x20;
        } while (0x1f < _Size);
        if ((_Size & 0x1f) == 0) {
          return _Dst;
        }
      }
      piVar3 = (int *)((int)piVar3 + (_Size - 0x20));
      *piVar3 = iVar1;
      piVar3[1] = iVar1;
      piVar3[2] = iVar1;
      piVar3[3] = iVar1;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
      return _Dst;
    }
  }
joined_r0x1000248b:
  for (; (_Size & 3) != 0; _Size = _Size - 1) {
    *(char *)piVar3 = (char)iVar1;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  if ((_Size & 4) != 0) {
    *piVar3 = iVar1;
    piVar3 = piVar3 + 1;
    _Size = _Size - 4;
  }
  for (; (_Size & 0xfffffff8) != 0; _Size = _Size - 8) {
    *piVar3 = iVar1;
    piVar3[1] = iVar1;
    piVar3 = piVar3 + 2;
  }
  return _Dst;
}


// 0x100024e0  [lib]
void __cdecl FUN_100024e0(uint *param_1,int param_2,uint param_3)

{
  uint32_t *puVar1;
  uint uVar2;
  void *pvStack_28;
  uint8_t *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_10002580;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10015000 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (uint32_t *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(uint32_t *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101,puVar1[2]);
      FUN_10002850(puVar1[2]);
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// 0x10002580  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t FUN_10002580(int param_1,int param_2,int *param_3)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    FUN_100024e0(*(uint **)(param_2 + 0x14),*(int *)(param_2 + 0x10),*(uint *)(param_2 + 0xc));
    *param_3 = param_1;
    uVar1 = 3;
  }
  return uVar1;
}


// 0x100025d0  [lib]
/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(uint8_t *param_1)

{
  (*(code *)param_1)();
  return;
}


// 0x100025f0  [lib]
/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(uint8_t *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1,UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x10002607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// 0x10002610  [lib]
/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x10002625,param_2,(PVOID)0x0);
  return;
}


// 0x10002630  [lib]
/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,uint32_t param_3,uint *param_4)

{
  FUN_100024e0(param_4,param_1,param_2);
  return;
}


// 0x10002647  [lib]
/* WARNING: Removing unreachable block (ram,0x10002656) */
/* WARNING: Removing unreachable block (ram,0x1000266b) */
/* WARNING: Removing unreachable block (ram,0x10002670) */
/* Library Function - Single Match
    ___except_validate_context_record
   
   Library: Visual Studio 2019 Release */

void __cdecl ___except_validate_context_record(int param_1)

{
  return;
}


// 0x10002677  [lib]
void FUN_10002677(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) && (param_1 != &DAT_10015cb8)) {
    thunk_FUN_10005e70(param_1);
  }
  return;
}


// 0x10002693  [lib]
void FUN_10002693(void)

{
  uint8_t *puVar1;
  
  if (DAT_10015060 != 0xffffffff) {
    puVar1 = (uint8_t *)___vcrt_FlsGetValue(DAT_10015060);
    ___vcrt_FlsSetValue(DAT_10015060,(LPVOID)0x0);
    FUN_10002677(puVar1);
  }
  return;
}


// 0x100026be  [lib]
/* Library Function - Single Match
    ___vcrt_getptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_getptd(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  BOOL BVar4;
  
  pvVar2 = ___vcrt_getptd_noexit();
  if (pvVar2 != (LPVOID)0x0) {
    return;
  }
  iVar3 = ___acrt_get_sigabrt_handler();
  if (iVar3 != 0) {
    FUN_10007dd3(0x16);
  }
  if ((DAT_10015080 & 2) != 0) {
    BVar4 = IsProcessorFeaturePresent(0x17);
    if (BVar4 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// 0x100026cc  [lib]
/* Library Function - Single Match
    ___vcrt_getptd_noexit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID ___vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  int iVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_10015060 == 0xffffffff) {
    return (LPVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = (LPVOID)___vcrt_FlsGetValue(DAT_10015060);
  if (pvVar1 == (LPVOID)0xffffffff) {
LAB_1000270c:
    pvVar1 = (LPVOID)0x0;
    goto LAB_10002752;
  }
  if (pvVar1 != (LPVOID)0x0) goto LAB_10002752;
  iVar2 = ___vcrt_FlsSetValue(DAT_10015060,(LPVOID)0xffffffff);
  if (iVar2 == 0) goto LAB_1000270c;
  pvVar3 = (LPVOID)FUN_10005360(1,0x28);
  if (pvVar3 == (LPVOID)0x0) {
LAB_10002734:
    ___vcrt_FlsSetValue(DAT_10015060,(LPVOID)0x0);
    pvVar1 = (LPVOID)0x0;
    pvVar4 = pvVar3;
  }
  else {
    iVar2 = ___vcrt_FlsSetValue(DAT_10015060,pvVar3);
    if (iVar2 == 0) goto LAB_10002734;
    pvVar4 = (LPVOID)0x0;
    pvVar1 = pvVar3;
  }
  thunk_FUN_10005e70(pvVar4);
LAB_10002752:
  SetLastError(dwErrCode);
  return pvVar1;
}


// 0x1000275e  [lib]
/* Library Function - Single Match
    ___vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint ___vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ___vcrt_FlsAlloc(FUN_10002677);
  DAT_10015060 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = ___vcrt_FlsSetValue(uVar1,&DAT_10015cb8);
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_ptd();
  }
  return uVar1 & 0xffffff00;
}


// 0x10002791  [lib]
/* Library Function - Single Match
    ___vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

uint32_t ___vcrt_uninitialize_ptd(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_10015060;
  if (DAT_10015060 != 0xffffffff) {
    DVar1 = ___vcrt_FlsFree(DAT_10015060);
    DAT_10015060 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}


// 0x100027ac  [lib]
/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2019 Release */

uint32_t ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)&DAT_10015ce0;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(p_Var3,4000,0);
    if (iVar1 == 0) {
      uVar2 = ___vcrt_uninitialize_locks(0);
      return uVar2 & 0xffffff00;
    }
    DAT_10015cf8 = DAT_10015cf8 + 1;
    uVar2 = uVar2 + 0x18;
    p_Var3 = p_Var3 + 1;
  } while (uVar2 < 0x18);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x100027e8  [lib]
/* Library Function - Single Match
    ___vcrt_uninitialize_locks
   
   Library: Visual Studio 2019 Release */

uint32_t ___vcrt_uninitialize_locks(uint32_t reg_EAX)

{
  uint32_t extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_10015cf8 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_10015cc8 + DAT_10015cf8 * 0x18);
    iVar1 = DAT_10015cf8;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_10015cf8 = DAT_10015cf8 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      reg_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x10002820  [lib]
uint32_t __fastcall FUN_10002820(uint32_t param_1,uint32_t reg_EAX)

{
  uint32_t unaff_EBP;
  
  DAT_10015078 = param_1;
  DAT_10015074 = reg_EAX;
  DAT_1001507c = unaff_EBP;
  return reg_EAX;
}


// 0x10002830  [lib]
/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1,uint32_t reg_EAX)

{
  uint32_t unaff_EBP;
  
  DAT_10015078 = param_1;
  DAT_10015074 = reg_EAX;
  DAT_1001507c = unaff_EBP;
  return;
}


// 0x10002850  [lib]
void FUN_10002850(code *reg_EAX)

{
  (*reg_EAX)();
  return;
}


// 0x10002853  [lib]
void __cdecl
FUN_10002853(uint32_t *param_1,uint32_t param_2,int param_3,uint32_t param_4,int param_5,
            int param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar2 = *(uint *)(param_5 + 0xc);
  uVar3 = uVar2;
  if (-1 < param_6) {
    piVar1 = (int *)(uVar2 * 0x14 + *(int *)(param_5 + 0x10) + 8);
    local_8 = uVar2;
    do {
      if (uVar2 == 0xffffffff) goto LAB_100028bc;
      uVar2 = uVar2 - 1;
      if (((piVar1[-6] < param_3) && (param_3 <= piVar1[-5])) || (uVar2 == 0xffffffff)) {
        param_6 = param_6 + -1;
        uVar3 = local_8;
        local_8 = uVar2;
      }
      piVar1 = piVar1 + -5;
    } while (-1 < param_6);
  }
  if ((uVar3 <= *(uint *)(param_5 + 0xc)) && (uVar2 + 1 <= uVar3)) {
    param_1[3] = uVar3;
    *param_1 = param_2;
    param_1[1] = uVar2 + 1;
    param_1[2] = param_2;
    return;
  }
LAB_100028bc:
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x100028c2  [lib]
uint32_t __cdecl
FUN_100028c2(uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4,int param_5)

{
  uint32_t uVar1;
  void *local_1c;
  code *local_18;
  uint local_14;
  uint32_t local_10;
  uint32_t local_c;
  int local_8;
  
  local_14 = (uint)&local_1c ^ DAT_10015000;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = FUN_10002a92;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return uVar1;
}


// 0x1000291f  [lib]
uint32_t __cdecl
FUN_1000291f(int *param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  int iVar1;
  uint32_t *local_40;
  code *local_3c;
  uint local_38;
  uint32_t local_34;
  uint32_t *local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint8_t *local_24;
  uint8_t *local_20;
  int local_1c;
  int *local_18;
  uint32_t local_14;
  code *local_10;
  uint32_t local_c;
  code *local_8;
  uint8_t  stack0xffffffbc;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_20 = &stack0xfffffffc;
  local_24 = &stack0xffffffbc;
  if (param_1 == (int *)0x123) {
    *param_2 = 0x100029e3;
    local_c = 1;
  }
  else {
    local_3c = FID_conflict_TranslatorGuardHandler;
    local_38 = DAT_10015000 ^ (uint)&local_40;
    local_34 = param_5;
    local_30 = param_2;
    local_2c = param_6;
    local_28 = param_7;
    local_1c = 0;
    local_40 = ExceptionList;
    ExceptionList = &local_40;
    iVar1 = __filter_x86_sse2_floating_point_exception_default(*param_1);
    *param_1 = iVar1;
    local_c = 1;
    local_18 = param_1;
    local_14 = param_3;
    iVar1 = ___vcrt_getptd();
    local_8 = *(code **)(iVar1 + 8);
    guard_check_icall();
    local_10 = local_8;
    (*local_8)(*param_1,&local_18);
    local_c = 0;
    if (local_1c != 0) {
      *local_40 = *(uint32_t *)ExceptionList;
    }
    ExceptionList = local_40;
  }
  return local_c;
}


// 0x10002a0f  [lib]
/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10002a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// 0x10002a3f  [lib]
/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10002a69,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// 0x10002a92  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_10002a92(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  FUN_10003c67(param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
               *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),param_2,'\0');
  return;
}


// 0x10002ac3  [lib]
/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t * __cdecl __CreateFrameInfo(uint32_t *param_1,uint32_t param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = ___vcrt_getptd();
  param_1[1] = *(uint32_t *)(iVar1 + 0x24);
  iVar1 = ___vcrt_getptd();
  *(uint32_t **)(iVar1 + 0x24) = param_1;
  return param_1;
}


// 0x10002ae7  [lib]
void __cdecl FUN_10002ae7(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = ___vcrt_getptd();
  if (param_1 == *(int *)(iVar2 + 0x24)) {
    uVar1 = *(uint32_t *)(param_1 + 4);
    iVar2 = ___vcrt_getptd();
    *(uint32_t *)(iVar2 + 0x24) = uVar1;
  }
  else {
    iVar2 = ___vcrt_getptd();
    iVar2 = *(int *)(iVar2 + 0x24);
    do {
      piVar3 = (int *)(iVar2 + 4);
      iVar2 = *piVar3;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
    } while (param_1 != iVar2);
    *piVar3 = *(int *)(param_1 + 4);
  }
  return;
}


// 0x10002b2f  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
    __TranslatorGuardHandler
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl
FID_conflict_TranslatorGuardHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  uint32_t uVar1;
  code *local_8;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(uint32_t *)(param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10003c67(param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
               *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
               *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames(param_2,param_1);
  }
  FUN_1000291f((int *)0x123,&local_8,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x10002bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*local_8)();
  return uVar1;
}


// 0x10002bcc  [lib]
/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Library: Visual Studio */

uint32_t __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *reg_EAX)

{
  uint32_t uVar1;
  
  uVar1 = FUN_10003c67(param_1,param_2,param_3,param_4,reg_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// 0x10002c10  [lib]
ulonglong __cdecl FUN_10002c10(uint *param_1,uint *param_2,uint param_3)

{
  uint64_t uVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  uint32_t *puVar50;
  uint32_t *puVar51;
  uint32_t *puVar52;
  uint32_t *puVar53;
  uint *puVar54;
  uint uVar55;
  ulonglong uVar56;
  
  if ((param_2 < param_1) && (param_1 < (uint *)(param_3 + (int)param_2))) {
    puVar50 = (uint32_t *)((int)param_2 + param_3);
    puVar52 = (uint32_t *)((int)param_1 + param_3);
    uVar47 = param_3;
    uVar48 = param_3;
    if (0x1f < param_3) {
      if ((DAT_10015050 >> 1 & 1) == 0) {
        if (((uint)puVar52 & 3) != 0) {
          uVar47 = (uint)puVar52 & 3;
          param_3 = param_3 - uVar47;
          do {
            *(uint8_t *)((int)puVar52 - 1) = *(uint8_t *)((int)puVar50 + -1);
            puVar50 = (uint32_t *)((int)puVar50 + -1);
            puVar52 = (uint32_t *)((int)puVar52 - 1);
            uVar47 = uVar47 - 1;
            uVar48 = 0;
          } while (uVar47 != 0);
        }
        uVar47 = param_3;
        if (0x1f < param_3) {
          uVar47 = param_3 >> 2;
          while( true ) {
            if (uVar47 == 0) break;
            uVar47 = uVar47 - 1;
            puVar52[-1] = puVar50[-1];
            puVar50 = puVar50 + -1;
            puVar52 = puVar52 + -1;
          }
          switch(param_3 & 3) {
          case 0:
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 1:
            *(uint8_t *)((int)puVar52 - 1) = *(uint8_t *)((int)puVar50 + -1);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 2:
            *(uint8_t *)((int)puVar52 - 1) = *(uint8_t *)((int)puVar50 + -1);
            *(uint8_t *)((int)puVar52 - 2) = *(uint8_t *)((int)puVar50 + -2);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 3:
            *(uint8_t *)((int)puVar52 - 1) = *(uint8_t *)((int)puVar50 + -1);
            *(uint8_t *)((int)puVar52 - 2) = *(uint8_t *)((int)puVar50 + -2);
            *(uint8_t *)((int)puVar52 - 3) = *(uint8_t *)((int)puVar50 + -3);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          }
        }
      }
      else {
        while (puVar51 = puVar50, puVar53 = puVar52, ((uint)puVar52 & 0xf) != 0) {
          puVar50 = (uint32_t *)((int)puVar50 + -1);
          puVar52 = (uint32_t *)((int)puVar52 + -1);
          *(uint8_t *)puVar52 = *(uint8_t *)puVar50;
          uVar47 = uVar47 - 1;
        }
        do {
          puVar50 = puVar51;
          puVar52 = puVar53;
          if (uVar47 < 0x80) break;
          puVar50 = puVar51 + -0x20;
          puVar52 = puVar53 + -0x20;
          uVar3 = puVar51[-0x1f];
          uVar4 = puVar51[-0x1e];
          uVar5 = puVar51[-0x1d];
          uVar6 = puVar51[-0x1c];
          uVar7 = puVar51[-0x1b];
          uVar8 = puVar51[-0x1a];
          uVar9 = puVar51[-0x19];
          uVar10 = puVar51[-0x18];
          uVar11 = puVar51[-0x17];
          uVar12 = puVar51[-0x16];
          uVar13 = puVar51[-0x15];
          uVar14 = puVar51[-0x14];
          uVar15 = puVar51[-0x13];
          uVar16 = puVar51[-0x12];
          uVar17 = puVar51[-0x11];
          uVar18 = puVar51[-0x10];
          uVar19 = puVar51[-0xf];
          uVar20 = puVar51[-0xe];
          uVar21 = puVar51[-0xd];
          uVar22 = puVar51[-0xc];
          uVar23 = puVar51[-0xb];
          uVar24 = puVar51[-10];
          uVar25 = puVar51[-9];
          uVar26 = puVar51[-8];
          uVar27 = puVar51[-7];
          uVar28 = puVar51[-6];
          uVar29 = puVar51[-5];
          uVar30 = puVar51[-4];
          uVar31 = puVar51[-3];
          uVar32 = puVar51[-2];
          uVar33 = puVar51[-1];
          *puVar52 = *puVar50;
          puVar53[-0x1f] = uVar3;
          puVar53[-0x1e] = uVar4;
          puVar53[-0x1d] = uVar5;
          puVar53[-0x1c] = uVar6;
          puVar53[-0x1b] = uVar7;
          puVar53[-0x1a] = uVar8;
          puVar53[-0x19] = uVar9;
          puVar53[-0x18] = uVar10;
          puVar53[-0x17] = uVar11;
          puVar53[-0x16] = uVar12;
          puVar53[-0x15] = uVar13;
          puVar53[-0x14] = uVar14;
          puVar53[-0x13] = uVar15;
          puVar53[-0x12] = uVar16;
          puVar53[-0x11] = uVar17;
          puVar53[-0x10] = uVar18;
          puVar53[-0xf] = uVar19;
          puVar53[-0xe] = uVar20;
          puVar53[-0xd] = uVar21;
          puVar53[-0xc] = uVar22;
          puVar53[-0xb] = uVar23;
          puVar53[-10] = uVar24;
          puVar53[-9] = uVar25;
          puVar53[-8] = uVar26;
          puVar53[-7] = uVar27;
          puVar53[-6] = uVar28;
          puVar53[-5] = uVar29;
          puVar53[-4] = uVar30;
          puVar53[-3] = uVar31;
          puVar53[-2] = uVar32;
          puVar53[-1] = uVar33;
          uVar47 = uVar47 - 0x80;
          puVar51 = puVar50;
          puVar53 = puVar52;
        } while ((uVar47 & 0xffffff80) != 0);
        puVar51 = puVar50;
        puVar53 = puVar52;
        if (0x1f < uVar47) {
          do {
            puVar50 = puVar51 + -8;
            puVar52 = puVar53 + -8;
            uVar3 = puVar51[-7];
            uVar4 = puVar51[-6];
            uVar5 = puVar51[-5];
            uVar6 = puVar51[-4];
            uVar7 = puVar51[-3];
            uVar8 = puVar51[-2];
            uVar9 = puVar51[-1];
            *puVar52 = *puVar50;
            puVar53[-7] = uVar3;
            puVar53[-6] = uVar4;
            puVar53[-5] = uVar5;
            puVar53[-4] = uVar6;
            puVar53[-3] = uVar7;
            puVar53[-2] = uVar8;
            puVar53[-1] = uVar9;
            uVar47 = uVar47 - 0x20;
            puVar51 = puVar50;
            puVar53 = puVar52;
          } while ((uVar47 & 0xffffffe0) != 0);
        }
      }
    }
    for (; (uVar47 & 0xfffffffc) != 0; uVar47 = uVar47 - 4) {
      puVar52 = puVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar52 = *puVar50;
    }
    for (; uVar47 != 0; uVar47 = uVar47 - 1) {
      puVar52 = (uint32_t *)((int)puVar52 - 1);
      puVar50 = (uint32_t *)((int)puVar50 + -1);
      *(uint8_t *)puVar52 = *(uint8_t *)puVar50;
    }
    return CONCAT44(uVar48,param_1);
  }
  uVar47 = param_3;
  puVar54 = param_1;
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if ((DAT_10015050 >> 1 & 1) != 0) {
LAB_100030dd:
        if (uVar47 == 0) goto LAB_10003140;
        for (uVar48 = uVar47 >> 5; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          param_2 = param_2 + 8;
          puVar54 = puVar54 + 8;
        }
        goto LAB_1000310b;
      }
joined_r0x10002e3d:
      for (; ((uint)puVar54 & 3) != 0; puVar54 = (uint *)((int)puVar54 + 1)) {
        *(char *)puVar54 = (char)*param_2;
        param_3 = param_3 - 1;
        param_2 = (uint *)((int)param_2 + 1);
      }
    }
    else {
      if ((DAT_10015c74 >> 1 & 1) != 0) {
        for (; uVar47 != 0; uVar47 = uVar47 - 1) {
          *(char *)puVar54 = (char)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          puVar54 = (uint *)((int)puVar54 + 1);
        }
        return CONCAT44(param_3,param_1);
      }
      if (((((uint)param_1 ^ (uint)param_2) & 0xf) == 0) && ((DAT_10015050 >> 1 & 1) != 0)) {
        if (((uint)param_2 & 0xf) != 0) {
          uVar48 = 0x10 - ((uint)param_2 & 0xf);
          param_3 = param_3 - uVar48;
          for (uVar47 = uVar48 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
            *(char *)puVar54 = (char)*param_2;
            param_2 = (uint *)((int)param_2 + 1);
            puVar54 = (uint *)((int)puVar54 + 1);
          }
          for (uVar48 = uVar48 >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
            *puVar54 = *param_2;
            param_2 = param_2 + 1;
            puVar54 = puVar54 + 1;
          }
        }
        uVar47 = param_3 & 0x7f;
        for (uVar48 = param_3 >> 7; param_3 = 0, uVar48 != 0; uVar48 = uVar48 - 1) {
          uVar55 = param_2[1];
          uVar2 = param_2[2];
          uVar34 = param_2[3];
          uVar35 = param_2[4];
          uVar36 = param_2[5];
          uVar37 = param_2[6];
          uVar38 = param_2[7];
          uVar39 = param_2[8];
          uVar40 = param_2[9];
          uVar41 = param_2[10];
          uVar42 = param_2[0xb];
          uVar43 = param_2[0xc];
          uVar44 = param_2[0xd];
          uVar45 = param_2[0xe];
          uVar46 = param_2[0xf];
          *puVar54 = *param_2;
          puVar54[1] = uVar55;
          puVar54[2] = uVar2;
          puVar54[3] = uVar34;
          puVar54[4] = uVar35;
          puVar54[5] = uVar36;
          puVar54[6] = uVar37;
          puVar54[7] = uVar38;
          puVar54[8] = uVar39;
          puVar54[9] = uVar40;
          puVar54[10] = uVar41;
          puVar54[0xb] = uVar42;
          puVar54[0xc] = uVar43;
          puVar54[0xd] = uVar44;
          puVar54[0xe] = uVar45;
          puVar54[0xf] = uVar46;
          uVar55 = param_2[0x11];
          uVar2 = param_2[0x12];
          uVar34 = param_2[0x13];
          uVar35 = param_2[0x14];
          uVar36 = param_2[0x15];
          uVar37 = param_2[0x16];
          uVar38 = param_2[0x17];
          uVar39 = param_2[0x18];
          uVar40 = param_2[0x19];
          uVar41 = param_2[0x1a];
          uVar42 = param_2[0x1b];
          uVar43 = param_2[0x1c];
          uVar44 = param_2[0x1d];
          uVar45 = param_2[0x1e];
          uVar46 = param_2[0x1f];
          puVar54[0x10] = param_2[0x10];
          puVar54[0x11] = uVar55;
          puVar54[0x12] = uVar2;
          puVar54[0x13] = uVar34;
          puVar54[0x14] = uVar35;
          puVar54[0x15] = uVar36;
          puVar54[0x16] = uVar37;
          puVar54[0x17] = uVar38;
          puVar54[0x18] = uVar39;
          puVar54[0x19] = uVar40;
          puVar54[0x1a] = uVar41;
          puVar54[0x1b] = uVar42;
          puVar54[0x1c] = uVar43;
          puVar54[0x1d] = uVar44;
          puVar54[0x1e] = uVar45;
          puVar54[0x1f] = uVar46;
          param_2 = param_2 + 0x20;
          puVar54 = puVar54 + 0x20;
        }
        goto LAB_100030dd;
      }
      if (((DAT_10015c74 & 1) == 0) || (((uint)param_1 & 3) != 0)) goto joined_r0x10002e3d;
      if (((uint)param_2 & 3) == 0) {
        if (((uint)param_1 >> 2 & 1) != 0) {
          uVar47 = *param_2;
          param_3 = param_3 - 4;
          param_2 = param_2 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          uVar1 = *(uint64_t *)param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 2;
          *(uint64_t *)param_1 = uVar1;
          param_1 = param_1 + 2;
        }
        if (((uint)param_2 & 7) == 0) {
          puVar54 = param_2 + -2;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          do {
            puVar49 = puVar54;
            uVar34 = puVar49[4];
            uVar35 = puVar49[5];
            param_3 = param_3 - 0x30;
            uVar36 = puVar49[6];
            uVar37 = puVar49[7];
            uVar38 = puVar49[8];
            uVar39 = puVar49[9];
            uVar55 = puVar49[0xe];
            uVar2 = puVar49[0xf];
            uVar40 = puVar49[10];
            uVar41 = puVar49[0xb];
            uVar42 = puVar49[0xc];
            uVar43 = puVar49[0xd];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar34;
            param_1[3] = uVar35;
            param_1[4] = uVar36;
            param_1[5] = uVar37;
            param_1[6] = uVar38;
            param_1[7] = uVar39;
            param_1[8] = uVar40;
            param_1[9] = uVar41;
            param_1[10] = uVar42;
            param_1[0xb] = uVar43;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar55;
            uVar48 = uVar2;
          } while (0x2f < param_3);
          puVar49 = puVar49 + 0xe;
        }
        else if (((uint)param_2 >> 3 & 1) == 0) {
          puVar54 = param_2 + -1;
          uVar47 = *param_2;
          uVar48 = param_2[1];
          uVar55 = param_2[2];
          do {
            puVar49 = puVar54;
            uVar36 = puVar49[4];
            param_3 = param_3 - 0x30;
            uVar37 = puVar49[5];
            uVar38 = puVar49[6];
            uVar39 = puVar49[7];
            uVar40 = puVar49[8];
            uVar2 = puVar49[0xd];
            uVar34 = puVar49[0xe];
            uVar35 = puVar49[0xf];
            uVar41 = puVar49[9];
            uVar42 = puVar49[10];
            uVar43 = puVar49[0xb];
            uVar44 = puVar49[0xc];
            *param_1 = uVar47;
            param_1[1] = uVar48;
            param_1[2] = uVar55;
            param_1[3] = uVar36;
            param_1[4] = uVar37;
            param_1[5] = uVar38;
            param_1[6] = uVar39;
            param_1[7] = uVar40;
            param_1[8] = uVar41;
            param_1[9] = uVar42;
            param_1[10] = uVar43;
            param_1[0xb] = uVar44;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar2;
            uVar48 = uVar34;
            uVar55 = uVar35;
          } while (0x2f < param_3);
          puVar49 = puVar49 + 0xd;
        }
        else {
          puVar54 = param_2 + -3;
          uVar47 = *param_2;
          do {
            puVar49 = puVar54;
            uVar55 = puVar49[4];
            uVar2 = puVar49[5];
            uVar34 = puVar49[6];
            param_3 = param_3 - 0x30;
            uVar35 = puVar49[7];
            uVar36 = puVar49[8];
            uVar37 = puVar49[9];
            uVar38 = puVar49[10];
            uVar48 = puVar49[0xf];
            uVar39 = puVar49[0xb];
            uVar40 = puVar49[0xc];
            uVar41 = puVar49[0xd];
            uVar42 = puVar49[0xe];
            *param_1 = uVar47;
            param_1[1] = uVar55;
            param_1[2] = uVar2;
            param_1[3] = uVar34;
            param_1[4] = uVar35;
            param_1[5] = uVar36;
            param_1[6] = uVar37;
            param_1[7] = uVar38;
            param_1[8] = uVar39;
            param_1[9] = uVar40;
            param_1[10] = uVar41;
            param_1[0xb] = uVar42;
            param_1 = param_1 + 0xc;
            puVar54 = puVar49 + 0xc;
            uVar47 = uVar48;
          } while (0x2f < param_3);
          puVar49 = puVar49 + 0xf;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          uVar47 = *puVar49;
          uVar48 = puVar49[1];
          uVar55 = puVar49[2];
          uVar2 = puVar49[3];
          puVar49 = puVar49 + 4;
          *param_1 = uVar47;
          param_1[1] = uVar48;
          param_1[2] = uVar55;
          param_1[3] = uVar2;
          param_1 = param_1 + 4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar47 = *puVar49;
          param_3 = param_3 - 4;
          puVar49 = puVar49 + 1;
          *param_1 = uVar47;
          param_1 = param_1 + 1;
        }
        if ((param_3 >> 3 & 1) != 0) {
          param_3 = param_3 - 8;
          *(uint64_t *)param_1 = *(uint64_t *)puVar49;
        }
                    /* WARNING: Could not recover jumptable at 0x10002e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar56 = (*(code *)(&switchD_10002e65::switchdataD_10002e74)[param_3])();
        return uVar56;
      }
    }
    uVar47 = param_3;
    if (0x1f < param_3) {
      for (uVar47 = param_3 >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
        *puVar54 = *param_2;
        param_2 = param_2 + 1;
        puVar54 = puVar54 + 1;
      }
      switch(param_3 & 3) {
      case 0:
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 1:
        *(char *)puVar54 = (char)*param_2;
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 2:
        *(char *)puVar54 = (char)*param_2;
        *(uint8_t *)((int)puVar54 + 1) = *(uint8_t *)((int)param_2 + 1);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 3:
        *(char *)puVar54 = (char)*param_2;
        *(uint8_t *)((int)puVar54 + 1) = *(uint8_t *)((int)param_2 + 1);
        *(uint8_t *)((int)puVar54 + 2) = *(uint8_t *)((int)param_2 + 2);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      }
    }
  }
LAB_1000310b:
  if ((uVar47 & 0x1f) != 0) {
    for (uVar48 = (uVar47 & 0x1f) >> 2; uVar48 != 0; uVar48 = uVar48 - 1) {
      param_3 = *param_2;
      *puVar54 = param_3;
      puVar54 = puVar54 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar47 = uVar47 & 3; uVar47 != 0; uVar47 = uVar47 - 1) {
      *(char *)puVar54 = (char)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar54 = (uint *)((int)puVar54 + 1);
    }
  }
LAB_10003140:
  return CONCAT44(param_3,param_1);
}


// 0x10003184  [lib]
FARPROC __cdecl FUN_10003184(int param_1,LPCSTR param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FARPROC pFVar4;
  HMODULE hLibModule;
  
  piVar1 = (int *)(&DAT_10015d08 + param_1 * 4);
  pFVar4 = (FARPROC)*piVar1;
  if (pFVar4 == (FARPROC)0xffffffff) {
    pFVar4 = (FARPROC)0x0;
  }
  else if (pFVar4 == (FARPROC)0x0) {
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      iVar3 = *param_3;
      hLibModule = *(HMODULE *)(&DAT_10015cfc + iVar3 * 4);
      if (hLibModule == (HMODULE)0x0) {
        hLibModule = try_load_library_from_system_directory
                               ((wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_1000eb34)[iVar3]);
        piVar2 = (int *)(&DAT_10015cfc + iVar3 * 4);
        if (hLibModule != (HINSTANCE__ *)0x0) {
          LOCK();
          iVar3 = *piVar2;
          *piVar2 = (int)hLibModule;
          UNLOCK();
          if (iVar3 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_1000320d;
        }
        LOCK();
        *piVar2 = -1;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffff) {
LAB_1000320d:
        pFVar4 = GetProcAddress(hLibModule,param_2);
        if (pFVar4 != (FARPROC)0x0) {
          LOCK();
          *piVar1 = (int)pFVar4;
          UNLOCK();
          return pFVar4;
        }
        break;
      }
    }
    LOCK();
    *piVar1 = -1;
    UNLOCK();
    pFVar4 = (FARPROC)0x0;
  }
  return pFVar4;
}


// 0x10003224  [lib]
/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t *param_1)

{
  HINSTANCE__ *pHVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE pHVar4;
  
  pHVar1 = LoadLibraryExW(param_1,(HANDLE)0x0,0x800);
  if (pHVar1 == (HMODULE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x57) {
      iVar3 = FUN_10005380((ushort *)param_1,(ushort *)L"api-ms-",7);
      if (iVar3 != 0) {
        pHVar4 = LoadLibraryExW(param_1,(HANDLE)0x0,0);
        return pHVar4;
      }
    }
    pHVar1 = (HINSTANCE__ *)0x0;
  }
  return pHVar1;
}


// 0x1000326f  [lib]
/* Library Function - Single Match
    ___vcrt_FlsAlloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsAlloc(uint32_t param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10003184(0,"FlsAlloc",(int *)&DAT_1000ebdc,(int *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    guard_check_icall();
    (*pFVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100032a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}


// 0x100032aa  [lib]
/* Library Function - Single Match
    ___vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsFree(DWORD param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10003184(1,"FlsFree",(int *)&DAT_1000ebf0,(int *)"FlsFree");
  if (pFVar1 == (FARPROC)0x0) {
    TlsFree(param_1);
  }
  else {
    guard_check_icall();
    (*pFVar1)();
  }
  return;
}


// 0x100032e5  [lib]
/* Library Function - Single Match
    ___vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsGetValue(DWORD param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10003184(2,"FlsGetValue",(int *)&DAT_1000ec00,(int *)"FlsGetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsGetValue(param_1);
  }
  else {
    guard_check_icall();
    (*pFVar1)();
  }
  return;
}


// 0x10003320  [lib]
/* Library Function - Single Match
    ___vcrt_FlsSetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10003184(3,"FlsSetValue",(int *)&DAT_1000ec14,(int *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pFVar1)();
  }
  return;
}


// 0x1000335e  [lib]
/* Library Function - Single Match
    ___vcrt_InitializeCriticalSectionEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,uint32_t param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10003184(4,"InitializeCriticalSectionEx",(int *)&DAT_1000ec28,
                        (int *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pFVar1)(param_1,param_2,param_3);
  }
  return;
}


// 0x100033a5  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

char __cdecl FUN_100033a5(int param_1,uint *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  void *local_14;
  
  pcVar2 = DAT_10015c78;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    ExceptionList = local_14;
    return '\0';
  }
  uVar3 = *param_3;
  if (-1 < (int)uVar3) {
    param_2 = (uint *)((int)param_2 + param_3[2] + 0xc);
  }
  if ((((char)uVar3 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_10015c78 != (code *)0x0)) {
    guard_check_icall();
    uVar3 = (*pcVar2)();
  }
  else {
    if ((uVar3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_4 + 0x18) == 0) {
          if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
            uVar3 = *(uint *)(param_4 + 0x14);
            puVar4 = (uint *)___AdjustPointer(iVar1,(int *)(param_4 + 8));
            FUN_10002c10(param_2,puVar4,uVar3);
            ExceptionList = local_14;
            return '\0';
          }
        }
        else if ((iVar1 != 0) && (param_2 != (uint *)0x0)) {
          ExceptionList = local_14;
          return ((*param_4 & 4) != 0) + '\x01';
        }
        goto LAB_100034dd;
      }
      if ((*(int *)(param_1 + 0x18) == 0) || (param_2 == (uint *)0x0)) goto LAB_100034dd;
      FUN_10002c10(param_2,*(uint **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
      if (*(int *)(param_4 + 0x14) != 4) {
        ExceptionList = local_14;
        return '\0';
      }
      if (*param_2 == 0) {
        ExceptionList = local_14;
        return '\0';
      }
      uVar3 = *param_2;
      goto LAB_1000346c;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar3 == 0) || (param_2 == (uint *)0x0)) {
LAB_100034dd:
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  *param_2 = uVar3;
LAB_1000346c:
  uVar3 = ___AdjustPointer(uVar3,(int *)(param_4 + 8));
  *param_2 = uVar3;
  ExceptionList = local_14;
  return '\0';
}


// 0x100034e3  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler3>(struct EHExceptionRecord *,void
   *,struct _s_HandlerType const *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<__FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  char cVar1;
  uint32_t extraout_var;
  void *pvVar2;
  void *pvVar3;
  void *local_14;
  
  pvVar3 = param_2;
  if (-1 < (int)param_3->adjectives) {
    pvVar3 = (void *)((int)param_2 + param_3->dispCatchObj + 0xc);
  }
  cVar1 = FUN_100033a5((int)param_1,param_2,&param_3->adjectives,(byte *)param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction1(pvVar3,*(void **)(param_4 + 0x18),pvVar2);
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction2(pvVar3,*(void **)(param_4 + 0x18),pvVar2,1);
  }
  ExceptionList = local_14;
  return;
}


// 0x1000357c  [lib]
/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode
   *,unsigned char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<__FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
          _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11,
          uchar param_12)

{
  void *pvVar1;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<__FrameHandler3>(param_1,param_2,param_6,param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    param_10 = param_2;
  }
  _UnwindNestedFrames(param_10,param_1);
  FUN_10003f9c(param_2,param_4,param_5,param_8->tryLow);
  __FrameHandler3::SetState(param_2,param_5,param_8->tryHigh + 1);
  pvVar1 = (void *)FUN_10003d2c((int)param_1,(int)param_2,param_3,param_5,param_6->addressOfHandler,
                                param_9,0x100);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,param_2);
  }
  return;
}


// 0x100035fc  [lib]
void __cdecl
FUN_100035fc(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint reg_EAX;
  byte *pbVar5;
  _s_FuncInfo *p_Var6;
  EHRegistrationNode *pEVar7;
  __ehstate_t *p_Var8;
  _s_TryBlockMapEntry *p_Var9;
  int *piVar10;
  _s_TryBlockMapEntry local_68;
  _s_HandlerType local_54;
  int *local_44;
  _s_FuncInfo *local_40 [2];
  _s_FuncInfo *local_38;
  _s_FuncInfo *local_34;
  uint32_t local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  HandlerType *local_18;
  int local_14;
  _s_FuncInfo *local_10;
  int local_c;
  _CONTEXT *local_8;
  
  local_14 = 0;
  local_1c = local_1c & 0xffffff00;
  local_c = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((local_c < -1) || (param_5->maxState <= local_c)) goto LAB_1000399b;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) ||
       (*(int *)(param_1 + 0x14) == 0x19930522)) &&
      (pEVar7 = (EHRegistrationNode *)0x0, *(int *)(param_1 + 0x1c) == 0)))) {
    iVar2 = ___vcrt_getptd();
    if (*(int *)(iVar2 + 0x10) == 0) {
      return;
    }
    iVar2 = ___vcrt_getptd();
    param_1 = *(EHExceptionRecord **)(iVar2 + 0x10);
    iVar2 = ___vcrt_getptd();
    local_1c = CONCAT31(local_1c._1_3_,1);
    local_8 = *(_CONTEXT **)(iVar2 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((*(int *)(param_1 + 0x14) == 0x19930520 ||
          ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522))))))
        && (*(int *)(param_1 + 0x1c) == 0)))) goto LAB_1000399b;
    iVar2 = ___vcrt_getptd();
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = ___vcrt_getptd();
      local_10 = *(_s_FuncInfo **)(iVar2 + 0x1c);
      iVar2 = ___vcrt_getptd();
      *(uint32_t *)(iVar2 + 0x1c) = 0;
      uVar3 = FUN_10004084((int)param_1,(int *)local_10,iVar2);
      p_Var6 = local_10;
      if ((char)uVar3 == '\0') {
        if (0 < (int)local_10->magicNumber_and_bbtFlags) {
          do {
            bVar1 = type_info::operator==
                              (*(type_info **)(pEVar7 + p_Var6->maxState + 4),
                               (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
            if (bVar1) {
              ___DestructExceptionObject((int *)param_1);
              FUN_10003c8b(local_40);
              __CxxThrowException_8((int *)local_40,&DAT_1001381c);
              param_8 = pEVar7;
              param_5 = p_Var6;
              goto LAB_1000395f;
            }
            pEVar7 = pEVar7 + 0x10;
            local_14 = local_14 + 1;
          } while (local_14 < (int)p_Var6->magicNumber_and_bbtFlags);
        }
        goto LAB_1000393a;
      }
    }
  }
  else {
    local_8 = param_3;
  }
  local_34 = param_5;
  local_30 = 0;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((*(int *)(param_1 + 0x14) == 0x19930520 ||
      ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522)))))) {
    if (param_5->nTryBlocks != 0) {
      FUN_10002853(&local_44,&local_34,local_c,param_4,(int)param_5,param_7);
      local_2c = local_44;
      local_10 = local_40[0];
      if (local_40[0] < local_38) {
        local_20 = (int)local_40[0] * 0x14;
        p_Var6 = local_40[0];
        do {
          iVar4 = local_c;
          p_Var8 = (__ehstate_t *)(*(int *)(*local_2c + 0x10) + local_20);
          p_Var9 = &local_68;
          local_10 = p_Var6;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            p_Var9->tryLow = *p_Var8;
            p_Var8 = p_Var8 + 1;
            p_Var9 = (_s_TryBlockMapEntry *)&p_Var9->tryHigh;
          }
          if (((local_68.tryLow <= iVar4) && (iVar4 <= local_68.tryHigh)) &&
             (local_14 = 0, local_68.nCatches != 0)) {
            pbVar5 = *(byte **)(param_1 + 0x1c);
            local_28 = **(int **)(pbVar5 + 0xc);
            local_24 = *(int **)(pbVar5 + 0xc) + 1;
            local_18 = local_68.pHandlerArray;
            do {
              local_54.adjectives = local_18->adjectives;
              local_54.pType = local_18->pType;
              local_54.dispCatchObj = local_18->dispCatchObj;
              local_54.addressOfHandler = local_18->addressOfHandler;
              piVar10 = local_24;
              p_Var6 = local_10;
              for (iVar2 = local_28; local_10 = p_Var6, 0 < iVar2; iVar2 = iVar2 + -1) {
                iVar4 = FID_conflict____TypeMatch((byte *)&local_54,(byte *)*piVar10,pbVar5);
                if (iVar4 != 0) {
                  CatchIt<__FrameHandler3>
                            (param_1,param_2,local_8,param_4,param_5,&local_54,
                             (_s_CatchableType *)*piVar10,&local_68,param_7,param_8,(uchar)local_1c,
                             param_6);
                  p_Var6 = local_10;
                  goto LAB_10003885;
                }
                pbVar5 = *(byte **)(param_1 + 0x1c);
                piVar10 = piVar10 + 1;
                p_Var6 = local_10;
              }
              local_14 = local_14 + 1;
              local_18 = local_18 + 1;
            } while (local_14 != local_68.nCatches);
          }
LAB_10003885:
          p_Var6 = (_s_FuncInfo *)((int)&p_Var6->magicNumber_and_bbtFlags + 1);
          local_20 = local_20 + 0x14;
          local_10 = p_Var6;
        } while (p_Var6 < local_38);
      }
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int *)param_1);
    }
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      reg_EAX = (uint)param_5->EHFlags >> 2;
      if (param_5->pESTypeList == (ESTypeList *)0x0) {
        if (((reg_EAX & 1) != 0) && (param_7 == 0)) {
LAB_100038de:
          iVar2 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar2 + 0x14) = local_8;
LAB_1000393a:
                    /* WARNING: Subroutine does not return */
          FUN_10004fee();
        }
      }
      else {
        if ((reg_EAX & 1) != 0) goto LAB_100038de;
        uVar3 = FUN_10004084((int)param_1,&param_5->pESTypeList->nCount,reg_EAX);
        if ((char)uVar3 == '\0') {
LAB_1000395f:
          iVar2 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar2 + 0x14) = local_8;
          if (param_8 == (EHRegistrationNode *)0x0) {
            param_8 = param_2;
          }
          _UnwindNestedFrames(param_8,param_1);
          __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
          uVar3 = FUN_10004141((int)param_5);
          FUN_10003efb(uVar3);
          goto LAB_1000399b;
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') goto LAB_1000399b;
    FUN_100039a1(param_1,param_2,local_8,param_4,param_5,local_c,param_7,param_8);
  }
  iVar2 = ___vcrt_getptd();
  if (*(int *)(iVar2 + 0x1c) == 0) {
    return;
  }
LAB_1000399b:
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x100039a1  [lib]
void __cdecl
FUN_100039a1(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  int iVar1;
  PVOID pvVar2;
  _s_HandlerType *p_Var3;
  uint uVar4;
  __ehstate_t *p_Var5;
  _s_TryBlockMapEntry *p_Var6;
  _s_TryBlockMapEntry local_3c;
  int *local_28;
  uint local_24;
  uint local_1c;
  _s_FuncInfo *local_18;
  uint32_t local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    iVar1 = ___vcrt_getptd();
    if (*(int *)(iVar1 + 8) != 0) {
      pvVar2 = EncodePointer((PVOID)0x0);
      iVar1 = ___vcrt_getptd();
      if ((((*(PVOID *)(iVar1 + 8) != pvVar2) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = FUN_1000291f((int *)param_1,(uint32_t *)param_2,param_3,param_4,param_5,param_7,
                               param_8), iVar1 != 0)) {
        return;
      }
    }
    local_18 = param_5;
    local_14 = 0;
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    FUN_10002853(&local_28,&local_18,param_6,param_4,(int)param_5,param_7);
    local_10 = local_28;
    if (local_24 < local_1c) {
      local_c = local_24 * 0x14;
      uVar4 = local_24;
      do {
        p_Var5 = (__ehstate_t *)(*(int *)(*local_10 + 0x10) + local_c);
        p_Var6 = &local_3c;
        local_8 = uVar4;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          p_Var6->tryLow = *p_Var5;
          p_Var5 = p_Var5 + 1;
          p_Var6 = (_s_TryBlockMapEntry *)&p_Var6->tryHigh;
        }
        if ((local_3c.tryLow <= param_6) && (param_6 <= local_3c.tryHigh)) {
          p_Var3 = local_3c.pHandlerArray + local_3c.nCatches + -1;
          if (((p_Var3->pType == (TypeDescriptor *)0x0) ||
              (*(char *)&p_Var3->pType[1].pVFTable == '\0')) && ((p_Var3->adjectives & 0x40) == 0))
          {
            CatchIt<__FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var3,(_s_CatchableType *)0x0,
                       &local_3c,param_7,param_8,'\x01','\0');
            uVar4 = local_8;
          }
        }
        uVar4 = uVar4 + 1;
        local_c = local_c + 0x14;
      } while (uVar4 < local_1c);
    }
  }
  return;
}


// 0x10003ad7  [lib]
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl TypeMatchHelper<struct _s_HandlerType const >(struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_ThrowInfo const *)
    int __cdecl TypeMatchHelper<class __FrameHandler3>(struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_ThrowInfo const *)
    ___TypeMatch
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl FID_conflict____TypeMatch(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint32_t uVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (pbVar5 = (byte *)(iVar2 + 8), *pbVar5 == 0)) ||
     (((*param_1 & 0x80) != 0 && ((*param_2 & 0x10) != 0)))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if (iVar2 != *(int *)(param_2 + 4)) {
      pbVar3 = (byte *)(*(int *)(param_2 + 4) + 8);
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_10003b28:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_10003b2d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_10003b28;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10003b2d:
      if (uVar4 != 0) {
        return 0;
      }
    }
    if ((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)) &&
        (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))))) {
      uVar6 = 1;
    }
  }
  return uVar6;
}


// 0x10003b65  [lib]
/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl __InternalCxxFrameHandler<class __FrameHandler3>(struct
   EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const
   *,int,struct EHRegistrationNode *,unsigned char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_EXCEPTION_DISPOSITION __cdecl
__InternalCxxFrameHandler<__FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  _EXCEPTION_DISPOSITION _Var4;
  
  ___except_validate_context_record((int)param_3);
  iVar2 = ___vcrt_getptd();
  if ((((*(int *)(iVar2 + 0x20) != 0) || (*(int *)param_1 == -0x1f928c9d)) ||
      (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if (((param_5->nTryBlocks != 0) ||
          ((uVar3 = param_5->magicNumber_and_bbtFlags & 0x1fffffff, 0x19930520 < uVar3 &&
           (param_5->pESTypeList != (ESTypeList *)0x0)))) ||
         ((0x19930521 < uVar3 && (((uint)param_5->EHFlags >> 2 & 1) != 0)))) {
        if ((((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x10))) &&
            (0x19930522 < *(uint *)(param_1 + 0x14))) &&
           (pcVar1 = *(code **)(*(int *)(param_1 + 0x1c) + 8), pcVar1 != (code *)0x0)) {
          uVar3 = (uint)param_8;
          guard_check_icall();
          _Var4 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3);
          return _Var4;
        }
        FUN_100035fc(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
    }
  }
  return 1;
}


// 0x10003c67  [lib]
void __cdecl
FUN_10003c67(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  __InternalCxxFrameHandler<__FrameHandler3>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// 0x10003c70  [lib]
exception * __thiscall FUN_10003c70(void *this,exception *param_1)

{
  std::exception::exception(this,param_1);
  *(uint8_t ***)this = std::bad_exception::vftable;
  return this;
}


// 0x10003c8b  [lib]
uint32_t * __fastcall FUN_10003c8b(uint32_t *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


// 0x10003ca3  [lib]
/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(uint8_t ***)this = vftable;
  *(int *)(this + 4) = 0;
  *(uint32_t *)(this + 8) = 0;
  ___std_exception_copy((int *)(param_1 + 4),(int *)(this + 4));
  return this;
}


// 0x10003ce0  [lib]
/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  uint uVar1;
  
  uVar1 = ___std_type_info_compare((int)(this + 4),(int)(param_1 + 4));
  return (bool)('\x01' - (uVar1 != 0));
}


// 0x10003cff  [lib]
uint32_t * __thiscall FUN_10003cff(void *this,byte param_1)

{
  *(uint8_t ***)this = std::exception::vftable;
  ___std_exception_destroy((uint32_t *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_1000d700(this);
  }
  return this;
}


// 0x10003d2c  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl
FUN_10003d2c(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
            int param_6,int param_7)

{
  int iVar1;
  uint32_t reg_EBX;
  uint32_t local_50 [2];
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t *local_38;
  uint32_t local_34;
  uint32_t local_20;
  void *local_14;
  uint32_t uStack_c;
  uint8_t *local_8;
  
  local_8 = &DAT_10013760;
  uStack_c = 0x10003d38;
  local_20 = param_5;
  local_44 = 0;
  local_34 = *(uint32_t *)(param_2 + -4);
  local_38 = __CreateFrameInfo(local_50,*(uint32_t *)(param_1 + 0x18));
  iVar1 = ___vcrt_getptd();
  local_3c = *(uint32_t *)(iVar1 + 0x10);
  iVar1 = ___vcrt_getptd();
  local_40 = *(uint32_t *)(iVar1 + 0x14);
  iVar1 = ___vcrt_getptd();
  *(int *)(iVar1 + 0x10) = param_1;
  iVar1 = ___vcrt_getptd();
  *(uint32_t *)(iVar1 + 0x14) = param_3;
  local_48 = 1;
  local_8 = (uint8_t *)0x1;
  reg_EBX = FUN_100028c2(param_2,param_4,param_5,param_6,param_7);
  local_8 = (uint8_t *)0xfffffffe;
  local_48 = 0;
  local_20 = reg_EBX;
  FUN_10003e7f(reg_EBX,param_1);
  ExceptionList = local_14;
  return reg_EBX;
}


// 0x10003e7f  [lib]
void FUN_10003e7f(int reg_EBX,int *reg_ESI)

{
  int iVar1;
  int unaff_EBP;
  
  *(uint32_t *)(*(int *)(unaff_EBP + 0xc) + -4) = *(uint32_t *)(unaff_EBP + -0x30);
  FUN_10002ae7(*(int *)(unaff_EBP + -0x34));
  iVar1 = ___vcrt_getptd();
  *(uint32_t *)(iVar1 + 0x10) = *(uint32_t *)(unaff_EBP + -0x38);
  iVar1 = ___vcrt_getptd();
  *(uint32_t *)(iVar1 + 0x14) = *(uint32_t *)(unaff_EBP + -0x3c);
  if ((((*reg_ESI == -0x1f928c9d) && (reg_ESI[4] == 3)) &&
      ((reg_ESI[5] == 0x19930520 || ((reg_ESI[5] == 0x19930521 || (reg_ESI[5] == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x40) == 0 && (reg_EBX != 0)))) {
    iVar1 = __IsExceptionObjectToBeDestroyed(reg_ESI[6]);
    if (iVar1 != 0) {
      ___DestructExceptionObject(reg_ESI);
    }
  }
  return;
}


// 0x10003efb  [lib]
/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_10003efb(uint32_t param_1)

{
  int iVar1;
  
  iVar1 = ___vcrt_getptd();
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_100041ac();
    iVar1 = ___vcrt_getptd();
    *(uint32_t *)(iVar1 + 0x1c) = param_1;
    __CxxThrowException_8((int *)0x0,(byte *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10003f1b  [lib]
void Catch_All_10003f1b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = ___vcrt_getptd();
  *(uint32_t *)(iVar1 + 0x1c) = *(uint32_t *)(unaff_EBP + 8);
  __CxxThrowException_8((int *)0x0,(byte *)0x0);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10003f3a  [lib]
/* Library Function - Single Match
    int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if ((((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
      ((pEVar1->ExceptionInformation[0] == 0x19930520 ||
       ((pEVar1->ExceptionInformation[0] == 0x19930521 ||
        (pEVar1->ExceptionInformation[0] == 0x19930522)))))) &&
     (pEVar1->ExceptionInformation[2] == 0)) {
    iVar2 = ___vcrt_getptd();
    *(uint32_t *)(iVar2 + 0x20) = 1;
    return 1;
  }
  return 0;
}


// 0x10003f84  [lib]
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(struct EHRegistrationNode
   *,void *,struct _s_FuncInfo const *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3)

{
  FUN_10003f9c(param_1,param_2,param_3,-1);
  return;
}


// 0x10003f9c  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __cdecl
FUN_10003f9c(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  
  iVar1 = __FrameHandler3::GetCurrentState(param_1,param_2,param_3);
  iVar2 = ___vcrt_getptd();
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  while (iVar2 = iVar1, iVar2 != param_4) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) goto LAB_1000407e;
    iVar1 = param_3->pUnwindMap[iVar2].toState;
    if (param_3->pUnwindMap[iVar2].action != (action *)0x0) {
      __FrameHandler3::SetState(param_1,param_3,iVar1);
      __CallSettingFrame_12(param_3->pUnwindMap[iVar2].action,param_1,0x103);
    }
  }
  FUN_1000406a();
  if (iVar2 == param_4) {
    __FrameHandler3::SetState(param_1,param_3,iVar2);
    ExceptionList = local_14;
    return;
  }
LAB_1000407e:
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x1000406a  [lib]
void FUN_1000406a(void)

{
  int iVar1;
  
  iVar1 = ___vcrt_getptd();
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = ___vcrt_getptd();
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
  }
  return;
}


// 0x10004084  [lib]
uint32_t __cdecl FUN_10004084(int param_1,int *param_2,int *reg_EAX)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint8_t uVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  iVar7 = *param_2;
  uVar6 = 0;
  if (0 < iVar7) {
    local_8 = 0;
    pbVar1 = *(byte **)(param_1 + 0x1c);
    piVar5 = *(int **)(pbVar1 + 0xc);
    iVar2 = *piVar5;
    reg_EAX = piVar5 + 1;
    uVar6 = 0;
    do {
      if (0 < iVar2) {
        iVar3 = param_2[1];
        piVar5 = reg_EAX;
        local_c = iVar2;
        do {
          iVar4 = FID_conflict____TypeMatch((byte *)(iVar3 + local_8),(byte *)*piVar5,pbVar1);
          if (iVar4 != 0) {
            uVar6 = 1;
            break;
          }
          local_c = local_c + -1;
          piVar5 = piVar5 + 1;
        } while (0 < local_c);
      }
      local_8 = local_8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),uVar6);
}


// 0x1000411e  [lib]
/* Library Function - Single Match
    void __stdcall _CallMemberFunction1(void * const,void * const,void * const)
   
   Library: Visual Studio 2019 Release */

void _CallMemberFunction1(void *param_1,void *param_2,void *param_3)

{
  (*param_2)(param_3);
  return;
}


// 0x1000412e  [lib]
/* Library Function - Single Match
    void __stdcall _CallMemberFunction2(void * const,void * const,void * const,int)
   
   Library: Visual Studio 2019 Release */

void _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
  (*param_2)(param_3,param_4);
  return;
}


// 0x10004141  [lib]
uint32_t __cdecl FUN_10004141(int param_1)

{
  return *(uint32_t *)(param_1 + 0x1c);
}


// 0x1000414c  [lib]
char * __fastcall FUN_1000414c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// 0x10004160  [lib]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio */

void __CallSettingFrame_12(uint32_t param_1,uint32_t param_2,int param_3)

{
  code *pcVar1;
  uint32_t reg_EAX;
  
  pcVar1 = (code *)FUN_10002820(param_3,param_1);
  reg_EAX = (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  FUN_10002820(param_3,reg_EAX);
  return;
}


// 0x100041ac  [lib]
void FUN_100041ac(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  pcVar1 = *(code **)(iVar2 + 4);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10004fee();
}


// 0x100041c9  [lib]
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(struct EHRegistrationNode *,void
   *,struct _s_FuncInfo const *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetCurrentState(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3)

{
  if (param_3->maxState < 0x81) {
    return (int)(char)param_1[8];
  }
  return *(int *)(param_1 + 8);
}


// 0x100041e6  [lib]
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(struct EHRegistrationNode *,struct
   _s_FuncInfo const *,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(EHRegistrationNode *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)(param_1 + 8) = param_3;
  return;
}


// 0x100041f4  [lib]
/* Library Function - Single Match
    ___std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_exception_copy(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((char)param_1[1] == '\0') || (pcVar4 = (char *)*param_1, pcVar4 == (char *)0x0)) {
    *param_2 = *param_1;
    *(uint8_t *)(param_2 + 1) = 0;
  }
  else {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcVar3 = (char *)FUN_10005040((SIZE_T)(pcVar4 + (1 - (int)pcVar1)));
    if (pcVar3 != (char *)0x0) {
      FUN_10005050(pcVar3,(int)(pcVar4 + (1 - (int)pcVar1)),*param_1);
      *param_2 = (int)pcVar3;
      *(uint8_t *)(param_2 + 1) = 1;
    }
    thunk_FUN_10005e70((LPVOID)0x0);
  }
  return;
}


// 0x10004257  [lib]
/* Library Function - Single Match
    ___std_exception_destroy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_exception_destroy(uint32_t *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_10005e70((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(uint8_t *)(param_1 + 1) = 0;
  return;
}


// 0x10004276  [lib]
/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2019 Release */

void __CxxThrowException_8(int *param_1,byte *param_2)

{
  code *pcVar1;
  int *piVar2;
  ULONG_PTR UVar3;
  ULONG_PTR local_10;
  int *local_c;
  byte *local_8;
  
  UVar3 = 0x19930520;
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0x10) != 0) {
      piVar2 = (int *)(*param_1 + -4);
      pcVar1 = *(code **)(*piVar2 + 0x20);
      param_2 = *(byte **)(*piVar2 + 0x18);
      guard_check_icall();
      (*pcVar1)(piVar2);
      if (param_2 == (byte *)0x0) goto LAB_100042bd;
    }
    if ((*param_2 & 8) != 0) {
      UVar3 = 0x1994000;
    }
  }
LAB_100042bd:
  local_c = param_1;
  local_10 = UVar3;
  local_8 = param_2;
  RaiseException(0xe06d7363,1,3,&local_10);
  return;
}


// 0x100042f0  [lib]
void __cdecl FUN_100042f0(uint32_t *param_1,uint32_t *param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}


// 0x1000431b  [lib]
/* Library Function - Single Match
    __initterm_e
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __initterm_e(uint32_t *param_1,uint32_t *param_2)

{
  code *pcVar1;
  int iVar2;
  
  do {
    if (param_1 == param_2) {
      return 0;
    }
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}


// 0x10004349  [lib]
/* Library Function - Single Match
    __seh_filter_dll
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl __seh_filter_dll(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10004369(0xe06d7363,param_2);
  return uVar1;
}


// 0x10004369  [lib]
uint32_t __cdecl FUN_10004369(uint param_1,uint32_t param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  __acrt_ptd *p_Var5;
  uint32_t uVar6;
  uint *puVar7;
  uint *puVar8;
  uint32_t uVar9;
  uint uVar10;
  
  p_Var5 = FUN_1000583e();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    puVar1 = *(uint **)p_Var5;
    for (puVar7 = puVar1; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
      if (*puVar7 == param_1) {
        if (puVar7 == (uint *)0x0) {
          return 0;
        }
        pcVar2 = (code *)puVar7[2];
        if (pcVar2 == (code *)0x0) {
          return 0;
        }
        if (pcVar2 == (code *)0x5) {
          puVar7[2] = 0;
          return 1;
        }
        if (pcVar2 != (code *)0x1) {
          uVar3 = *(uint32_t *)(p_Var5 + 4);
          *(uint32_t *)(p_Var5 + 4) = param_2;
          if (puVar7[1] == 8) {
            for (puVar8 = puVar1 + 9; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
              puVar8[2] = 0;
            }
            uVar4 = *(uint32_t *)(p_Var5 + 8);
            uVar6 = uVar4;
            if (*puVar7 < 0xc0000092) {
              if (*puVar7 == 0xc0000091) {
                uVar6 = 0x84;
              }
              else if (*puVar7 == 0xc000008d) {
                uVar6 = 0x82;
              }
              else if (*puVar7 == 0xc000008e) {
                uVar6 = 0x83;
              }
              else if (*puVar7 == 0xc000008f) {
                uVar6 = 0x86;
              }
              else {
                if (*puVar7 != 0xc0000090) goto LAB_1000447d;
                uVar6 = 0x81;
              }
LAB_1000447a:
              *(uint32_t *)(p_Var5 + 8) = uVar6;
            }
            else {
              if (*puVar7 == 0xc0000092) {
                uVar6 = 0x8a;
                goto LAB_1000447a;
              }
              if (*puVar7 == 0xc0000093) {
                uVar6 = 0x85;
                goto LAB_1000447a;
              }
              if (*puVar7 == 0xc00002b4) {
                uVar6 = 0x8e;
                goto LAB_1000447a;
              }
              if (*puVar7 == 0xc00002b5) {
                uVar6 = 0x8d;
                goto LAB_1000447a;
              }
            }
LAB_1000447d:
            uVar9 = 8;
            guard_check_icall();
            (*pcVar2)(uVar9,uVar6);
            *(uint32_t *)(p_Var5 + 8) = uVar4;
          }
          else {
            puVar7[2] = 0;
            uVar10 = puVar7[1];
            guard_check_icall();
            (*pcVar2)(uVar10);
          }
          *(uint32_t *)(p_Var5 + 4) = uVar3;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}


// 0x100044af  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_03b1d95aef87969028cfba75ccab2455>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> >(class <lambda_03b1d95aef87969028cfba75ccab2455>
   &&,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_4fdada1b837b2abbf20876fac97688ad>,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> >(class <lambda_4fdada1b837b2abbf20876fac97688ad>
   &&,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>
   &&,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> &&)
   
   Library: Visual Studio 2019 Release */

void operator()<>(int *param_1,uint32_t *param_2)

{
  uint32_t local_14;
  
  ___acrt_lock(*param_1);
  FUN_10004517(param_2);
  FUN_100044f0();
  ExceptionList = local_14;
  return;
}


// 0x100044f0  [lib]
void FUN_100044f0(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x100044fc  [lib]
uint __cdecl FUN_100044fc(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_10015000 & 0x1f;
  return (param_1 ^ DAT_10015000) >> bVar1 | (param_1 ^ DAT_10015000) << 0x20 - bVar1;
}


// 0x10004517  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_10004517(uint32_t *param_1)

{
  code *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *local_14;
  
  if (DAT_10015d28 != '\0') {
    ExceptionList = local_14;
    return;
  }
  LOCK();
  DAT_10015d20 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_10015d24 != DAT_10015000) {
      pcVar1 = (code *)FUN_100044fc(DAT_10015d24);
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      guard_check_icall();
      (*pcVar1)(uVar2,uVar3,uVar4);
    }
  }
  else if (*(int *)*param_1 != 1) goto LAB_10004588;
  FUN_10004e22();
LAB_10004588:
  if (*(int *)*param_1 == 0) {
    FUN_100042f0((uint32_t *)&DAT_1000e154,(uint32_t *)&DAT_1000e164);
  }
  FUN_100042f0((uint32_t *)&DAT_1000e168,(uint32_t *)&DAT_1000e16c);
  if (*(int *)param_1[1] == 0) {
    DAT_10015d28 = '\x01';
    *(uint8_t *)param_1[2] = 1;
  }
  ExceptionList = local_14;
  return;
}


// 0x100045ff  [lib]
void __cdecl FUN_100045ff(UINT param_1,uint32_t param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint32_t extraout_var;
  uint32_t *local_28;
  int *local_24;
  uint8_t *local_20;
  int local_1c;
  uint local_18;
  uint8_t local_11;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000d835;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    uVar3 = FUN_100046eb();
    if ((char)uVar3 != '\0') {
      FUN_1000472d(param_1);
    }
  }
  local_28 = &param_2;
  local_11 = 0;
  local_24 = &param_3;
  local_20 = &local_11;
  local_8 = 0;
  local_18 = 2;
  local_1c = 2;
  operator()<>(&local_1c,&local_28);
  if (param_3 == 0) {
    bVar2 = FUN_10005a28();
    if (CONCAT31(extraout_var,bVar2) == 1) {
      local_18 = local_18 & 0xffffff00;
    }
    else {
      uVar3 = FUN_10005a03();
      local_18 = CONCAT31(local_18._1_3_,'\x01' - ((char)uVar3 != '\0'));
    }
    if (param_3 == 0) {
      FUN_100046bd(param_1,(char)local_18);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// 0x100046bd  [lib]
void FUN_100046bd(UINT param_1,char param_2)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  if (param_2 != '\0') {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  FUN_1000472d(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// 0x100046eb  [lib]
uint FUN_100046eb(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     ((pHVar1 = (HMODULE)0x10b, (short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return CONCAT31(1,piVar2[0x3a] != 0);
  }
  return (uint)pHVar1 & 0xffffff00;
}


// 0x1000472d  [lib]
void __cdecl FUN_1000472d(uint32_t param_1)

{
  uint uVar1;
  BOOL BVar2;
  FARPROC pFVar3;
  HMODULE local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000d852;
  local_10 = ExceptionList;
  uVar1 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (HMODULE)0x0;
  BVar2 = GetModuleHandleExW(0,L"mscoree.dll",&local_14);
  if (BVar2 != 0) {
    pFVar3 = GetProcAddress(local_14,"CorExitProcess");
    if (pFVar3 != (FARPROC)0x0) {
      guard_check_icall();
      (*pFVar3)(param_1,uVar1);
    }
  }
  if (local_14 != (HMODULE)0x0) {
    FreeLibrary(local_14);
  }
  ExceptionList = local_10;
  return;
}


// 0x100047af  [lib]
void __cdecl FUN_100047af(uint32_t param_1)

{
  DAT_10015d24 = param_1;
  return;
}


// 0x100047cd  [lib]
/* Library Function - Single Match
    __exit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __exit(int _Code)

{
  FUN_100045ff(_Code,2,0);
  return;
}


// 0x100047e3  [lib]
uint32_t FUN_100047e3(void)

{
  return DAT_10015d20;
}


// 0x100047ea  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100047ea(int param_1,uint32_t reg_EAX)

{
  int *piVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  int *piVar4;
  byte *pbVar5;
  uint local_10;
  int *local_c;
  uint local_8;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if ((param_1 == 2) || (param_1 == 1)) {
    ___acrt_initialize_multibyte(reg_EAX);
    ___acrt_GetModuleFileNameA((HMODULE)0x0,&DAT_10015d30,0x104);
    DAT_10015fec = &DAT_10015d30;
    if ((DAT_10015ffc == (byte *)0x0) || (pbVar5 = DAT_10015ffc, *DAT_10015ffc == 0)) {
      pbVar5 = &DAT_10015d30;
    }
    local_8 = 0;
    local_10 = 0;
    FUN_10004927(pbVar5,(uint32_t *)0x0,(byte *)0x0,(int *)&local_8,(int *)&local_10);
    piVar4 = ___acrt_allocate_buffer_for_argv(local_8,local_10,1);
    if (piVar4 == (int *)0x0) {
      p_Var3 = FUN_10005df2();
      iVar2 = 0xc;
      *(uint32_t *)p_Var3 = 0xc;
    }
    else {
      FUN_10004927(pbVar5,piVar4,(byte *)(piVar4 + local_8),(int *)&local_8,(int *)&local_10);
      if (param_1 != 1) {
        local_c = (int *)0x0;
        iVar2 = FUN_10006764(piVar4,&local_c);
        piVar1 = local_c;
        if (iVar2 == 0) {
          DAT_10015ff0 = 0;
          iVar2 = *local_c;
          while (iVar2 != 0) {
            local_c = local_c + 1;
            DAT_10015ff0 = DAT_10015ff0 + 1;
            iVar2 = *local_c;
          }
          local_c = (int *)0x0;
          DAT_10015ff4 = piVar1;
          FUN_10005e70((LPVOID)0x0);
          iVar2 = 0;
        }
        else {
          FUN_10005e70(local_c);
        }
        local_c = (int *)0x0;
        FUN_10005e70(piVar4);
        return iVar2;
      }
      DAT_10015ff0 = local_8 - 1;
      iVar2 = 0;
      DAT_10015ff4 = piVar4;
    }
    FUN_10005e70((LPVOID)0x0);
  }
  else {
    p_Var3 = FUN_10005df2();
    iVar2 = 0x16;
    *(uint32_t *)p_Var3 = 0x16;
    FUN_10005c74();
  }
  return iVar2;
}


// 0x10004927  [lib]
void __cdecl FUN_10004927(byte *param_1,uint32_t *param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar5 = false;
  do {
    if (*param_1 == 0x22) {
      bVar5 = !bVar5;
      bVar2 = 0x22;
      pbVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar6 = param_1 + 1;
      iVar4 = FUN_100071ba(bVar2);
      if (iVar4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        pbVar6 = param_1 + 2;
      }
      if (bVar2 == 0) {
        pbVar6 = pbVar6 + -1;
        goto LAB_100049b7;
      }
    }
    param_1 = pbVar6;
  } while ((bVar5) || ((bVar2 != 0x20 && (bVar2 != 9))));
  if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
LAB_100049b7:
  bVar5 = false;
  while (bVar2 = *pbVar6, bVar2 != 0) {
    while ((bVar2 == 0x20 || (bVar2 == 9))) {
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar6;
    }
    if (bVar2 == 0) break;
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar3 = 0;
      for (; *pbVar6 == 0x5c; pbVar6 = pbVar6 + 1) {
        uVar3 = uVar3 + 1;
      }
      if (*pbVar6 == 0x22) {
        if ((uVar3 & 1) == 0) {
          if ((bVar5) && (pbVar6[1] == 0x22)) {
            pbVar6 = pbVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar5 = !bVar5;
          }
        }
        uVar3 = uVar3 >> 1;
      }
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar2 = *pbVar6;
      if ((bVar2 == 0) || ((!bVar5 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
        }
        iVar4 = FUN_100071ba(*pbVar6);
        if (iVar4 != 0) {
          pbVar6 = pbVar6 + 1;
          *param_5 = *param_5 + 1;
          if (param_3 != (byte *)0x0) {
            *param_3 = *pbVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pbVar6 = pbVar6 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// 0x10004a99  [lib]
/* Library Function - Single Match
    ___acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < ~(param_1 * 4)) {
      pvVar1 = FUN_10005e10(param_1 * 4 + param_2 * param_3,1);
      FUN_10005e70((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}


// 0x10004ae8  [lib]
void __cdecl FUN_10004ae8(int param_1,uint32_t reg_EAX)

{
  FUN_100047ea(param_1,reg_EAX);
  return;
}


// 0x10004af3  [lib]
uint32_t FUN_10004af3(uint32_t reg_EAX)

{
  LPSTR pCVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  if (DAT_10015e38 != (uint32_t *)0x0) {
    return 0;
  }
  ___acrt_initialize_multibyte(reg_EAX);
  pCVar1 = FUN_100073de();
  if (pCVar1 == (LPSTR)0x0) {
    FUN_10005e70((LPVOID)0x0);
    return 0xffffffff;
  }
  puVar2 = FUN_10004b4d(pCVar1);
  if (puVar2 == (uint32_t *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_10015e38 = puVar2;
    DAT_10015e44 = puVar2;
  }
  FUN_10005e70((LPVOID)0x0);
  FUN_10005e70(pCVar1);
  return uVar3;
}


// 0x10004b4d  [lib]
uint32_t * __cdecl FUN_10004b4d(char *param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  uint32_t *local_8;
  
  uVar5 = 0;
  cVar7 = *param_1;
  pcVar6 = param_1;
  while (cVar7 != '\0') {
    uVar1 = uVar5 + 1;
    if (cVar7 == '=') {
      uVar1 = uVar5;
    }
    do {
      uVar5 = uVar1;
      cVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar1 = uVar5;
    } while (cVar7 != '\0');
    cVar7 = *pcVar6;
  }
  puVar2 = FUN_10005e10(uVar5 + 1,4);
  local_8 = puVar2;
  if (puVar2 == (uint32_t *)0x0) {
    FUN_10005e70((LPVOID)0x0);
    puVar2 = (uint32_t *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + (int)pcVar6) {
      pcVar6 = param_1;
      do {
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      pcVar6 = pcVar6 + (1 - (int)(param_1 + 1));
      if (*param_1 != '=') {
        pcVar3 = FUN_10005e10((uint)pcVar6,1);
        if (pcVar3 == (char *)0x0) {
          free_environment<>(puVar2);
          FUN_10005e70((LPVOID)0x0);
          FUN_10005e70((LPVOID)0x0);
          return (uint32_t *)0x0;
        }
        iVar4 = FUN_10005050(pcVar3,(int)pcVar6,(int)param_1);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = pcVar3;
        local_8 = local_8 + 1;
        FUN_10005e70((LPVOID)0x0);
      }
    }
    FUN_10005e70((LPVOID)0x0);
  }
  return puVar2;
}


// 0x10004c32  [lib]
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * * const)
    void __cdecl free_environment<wchar_t>(wchar_t * * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl free_environment<>(uint32_t *param_1)

{
  LPVOID pvVar1;
  uint32_t *puVar2;
  
  if (param_1 != (uint32_t *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_10005e70(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_10005e70(param_1);
  }
  return;
}


// 0x10004c61  [lib]
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(uint32_t *param_1)

{
  if ((uint32_t *)*param_1 != DAT_10015e44) {
    free_environment<>((uint32_t *)*param_1);
  }
  return;
}


// 0x10004c7c  [lib]
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(uint32_t *param_1)

{
  if ((uint32_t *)*param_1 != DAT_10015e40) {
    free_environment<>((uint32_t *)*param_1);
  }
  return;
}


// 0x10004c97  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10004c97(void)

{
  uninitialize_environment_internal<>(&DAT_10015e38);
  uninitialize_environment_internal<>((uint32_t *)&DAT_10015e3c);
  free_environment<>(DAT_10015e44);
  free_environment<>(DAT_10015e40);
  return;
}


// 0x10004ce8  [lib]
uint32_t thunk_FUN_10004af3(void)

{
  LPSTR pCVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  if (DAT_10015e38 != (uint32_t *)0x0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  pCVar1 = FUN_100073de();
  if (pCVar1 == (LPSTR)0x0) {
    FUN_10005e70((LPVOID)0x0);
    return 0xffffffff;
  }
  puVar2 = FUN_10004b4d(pCVar1);
  if (puVar2 == (uint32_t *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_10015e38 = puVar2;
    DAT_10015e44 = puVar2;
  }
  FUN_10005e70((LPVOID)0x0);
  FUN_10005e70(pCVar1);
  return uVar3;
}


// 0x10004ced  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_69a2805e680e0e292e8ba93315fe43a8>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &,class
   <lambda_03fcd07e894ec930e3f35da366ca99d6> >(class <lambda_69a2805e680e0e292e8ba93315fe43a8>
   &&,class <lambda_f03950bc5685219e0bcd2087efbe011e> &,class
   <lambda_03fcd07e894ec930e3f35da366ca99d6> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>
          (__crt_seh_guarded_call<int> *this,<lambda_69a2805e680e0e292e8ba93315fe43a8> *param_1,
          <lambda_f03950bc5685219e0bcd2087efbe011e> *param_2,
          <lambda_03fcd07e894ec930e3f35da366ca99d6> *param_3)

{
  int iVar1;
  uint32_t local_14;
  
  ___acrt_lock(*(int *)param_1);
  iVar1 = <lambda_f03950bc5685219e0bcd2087efbe011e>::operator()(param_2);
  FUN_10004d3c();
  ExceptionList = local_14;
  return iVar1;
}


// 0x10004d3c  [lib]
void FUN_10004d3c(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10004d48  [lib]
/* Library Function - Single Match
    public: int __thiscall <lambda_f03950bc5685219e0bcd2087efbe011e>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
<lambda_f03950bc5685219e0bcd2087efbe011e>::operator()
          (<lambda_f03950bc5685219e0bcd2087efbe011e> *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar1 = DAT_10015000;
  puVar9 = (uint *)**(int **)this;
  if (puVar9 == (uint *)0x0) {
    iVar2 = -1;
  }
  else {
    uVar6 = DAT_10015000 & 0x1f;
    sVar5 = (sbyte)uVar6;
    puVar8 = (uint *)((*puVar9 ^ DAT_10015000) >> sVar5 | (*puVar9 ^ DAT_10015000) << 0x20 - sVar5);
    puVar9 = (uint *)((puVar9[1] ^ DAT_10015000) >> sVar5 |
                     (puVar9[1] ^ DAT_10015000) << 0x20 - sVar5);
    if ((puVar8 != (uint *)0x0) &&
       (uVar3 = DAT_10015000, puVar10 = puVar9, puVar8 != (uint *)0xffffffff)) {
      while (puVar9 = puVar9 + -1, puVar8 <= puVar9) {
        if (*puVar9 != uVar1) {
          uVar3 = *puVar9 ^ uVar3;
          *puVar9 = uVar1;
          guard_check_icall();
          (*(code *)(uVar3 >> (sbyte)uVar6 | uVar3 << 0x20 - (sbyte)uVar6))();
          uVar6 = DAT_10015000 & 0x1f;
          uVar3 = *(uint *)**(int **)this ^ DAT_10015000;
          sVar5 = (sbyte)uVar6;
          puVar7 = (uint *)(uVar3 >> sVar5 | uVar3 << 0x20 - sVar5);
          uVar3 = ((uint *)**(int **)this)[1] ^ DAT_10015000;
          puVar4 = (uint *)(uVar3 >> sVar5 | uVar3 << 0x20 - sVar5);
          uVar3 = DAT_10015000;
          if ((puVar7 != puVar8) || (puVar4 != puVar10)) {
            puVar9 = puVar4;
            puVar10 = puVar4;
            puVar8 = puVar7;
          }
        }
      }
      if (puVar8 != (uint *)0xffffffff) {
        FUN_10005e70(puVar8);
        uVar3 = DAT_10015000;
      }
      *(uint *)**(uint32_t **)this = uVar3;
      *(uint *)(**(int **)this + 4) = uVar3;
      *(uint *)(**(int **)this + 8) = uVar3;
    }
    iVar2 = 0;
  }
  return iVar2;
}


// 0x10004e22  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10004e22(void)

{
  uint32_t local_20;
  uint8_t *local_1c;
  uint32_t local_18;
  __crt_seh_guarded_call<int> local_11 [9];
  uint32_t local_8;
  uint32_t uStack_4;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_4 = 0x10;
  local_1c = &stack0x00000004;
  local_8 = 0;
  local_18 = 2;
  local_20 = 2;
  __crt_seh_guarded_call<int>::
  operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>
            (local_11,(<lambda_69a2805e680e0e292e8ba93315fe43a8> *)&local_20,
             (<lambda_f03950bc5685219e0bcd2087efbe011e> *)&local_1c,
             (<lambda_03fcd07e894ec930e3f35da366ca99d6> *)&local_18);
  return;
}


// 0x10004e60  [lib]
/* Library Function - Single Match
    __initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl __initialize_onexit_table(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_10015000;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_10015000;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
  }
  return 0;
}


// 0x10004e96  [lib]
uint32_t FUN_10004e96(void)

{
  __initialize_onexit_table((int *)&DAT_10015e48);
  __initialize_onexit_table((int *)&DAT_10015e54);
  return 1;
}


// 0x10004eb0  [lib]
uint8_t FUN_10004eb0(void)

{
  return 1;
}


// 0x10004eb3  [lib]
uint8_t FUN_10004eb3(void)

{
  FUN_10004c97();
  return 1;
}


// 0x10004ee9  [lib]
void FUN_10004ee9(void)

{
  uint32_t in_EAX;
  
  ___vcrt_uninitialize('\0',in_EAX);
  return;
}


// 0x10004ef2  [lib]
/* Library Function - Single Match
    _uninitialize_allocated_memory
   
   Library: Visual Studio 2019 Release */

uint8_t __cdecl uninitialize_allocated_memory(void)

{
  <lambda_af42a3ee9806e9a7305d451646e05244> local_5;
  
  <lambda_af42a3ee9806e9a7305d451646e05244>::operator()
            (&local_5,(__crt_multibyte_data **)&DAT_10015fe0);
  return 1;
}


// 0x10004f59  [lib]
/* Library Function - Single Match
    public: void __thiscall <lambda_af42a3ee9806e9a7305d451646e05244>::operator()(struct
   __crt_multibyte_data * &)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_af42a3ee9806e9a7305d451646e05244>::operator()
          (<lambda_af42a3ee9806e9a7305d451646e05244> *this,__crt_multibyte_data **param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)*param_1 + -1;
  *(int *)*param_1 = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && (*param_1 != (__crt_multibyte_data *)&DAT_100150a0)) {
    FUN_10005e70(*param_1);
    *param_1 = (__crt_multibyte_data *)&DAT_100150a0;
  }
  return;
}


// 0x10004f87  [lib]
/* Library Function - Single Match
    ___acrt_initialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_initialize(uint32_t reg_EAX)

{
  ___acrt_execute_initializers(&PTR_LAB_1000ed50,(uint32_t *)&DAT_1000edd0,reg_EAX);
  return;
}


// 0x10004f99  [lib]
bool FUN_10004f99(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1000583e();
  return p_Var1 != (__acrt_ptd *)0x0;
}


// 0x10004fa4  [lib]
uint8_t FUN_10004fa4(void)

{
  FUN_100057a9();
  return 1;
}


// 0x10004fac  [lib]
/* Library Function - Single Match
    ___acrt_uninitialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t __cdecl ___acrt_uninitialize(char param_1)

{
  uint8_t uVar1;
  
  if (param_1 != '\0') {
    if (DAT_1001628c != 0) {
      __flushall();
    }
    return 1;
  }
  uVar1 = ___acrt_execute_uninitializers(0x1000ed50,0x1000edd0);
  return uVar1;
}


// 0x10004fdc  [lib]
/* Library Function - Single Match
    ___acrt_uninitialize_critical
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___acrt_uninitialize_critical(void)

{
  uint32_t uVar1;
  
  uVar1 = ___acrt_uninitialize_ptd();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x10004fee  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_10004fee(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_100057ed();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10005030  [lib]
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


// 0x10005040  [lib]
void FUN_10005040(SIZE_T param_1)

{
  FUN_10008430(param_1);
  return;
}


// 0x10005050  [lib]
uint32_t __cdecl FUN_10005050(char *param_1,int param_2,int param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == 0) {
      *param_1 = '\0';
      p_Var2 = FUN_10005df2();
      *(uint32_t *)p_Var2 = 0x16;
      FUN_10005c74();
      return 0x16;
    }
    pcVar3 = param_1;
    do {
      cVar1 = pcVar3[param_3 - (int)param_1];
      *pcVar3 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = param_2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (param_2 != 0);
    *param_1 = '\0';
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x22;
    FUN_10005c74();
    return 0x22;
  }
  p_Var2 = FUN_10005df2();
  *(uint32_t *)p_Var2 = 0x16;
  FUN_10005c74();
  return 0x16;
}


// 0x100050df  [lib]
/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2019 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_10007dd3(0x16);
  }
  if ((DAT_10015080 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// 0x10005130  [lib]
uint32_t * __thiscall FUN_10005130(void *this,uint32_t *param_1)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  
  *(uint8_t *)((int)this + 0x14) = 0;
  *(uint32_t *)this = 0;
  *(uint8_t *)((int)this + 8) = 0;
  *(uint8_t *)((int)this + 0x1c) = 0;
  *(uint8_t *)((int)this + 0x24) = 0;
  puVar3 = PTR_DAT_1001567c;
  puVar2 = PTR_PTR_10015678;
  if (param_1 != (uint32_t *)0x0) {
    uVar1 = param_1[1];
    *(uint32_t *)((int)this + 0xc) = *param_1;
    *(uint8_t *)((int)this + 0x14) = 1;
    *(uint32_t *)((int)this + 0x10) = uVar1;
    return this;
  }
  if (DAT_100162a8 == 0) {
    *(uint8_t *)((int)this + 0x14) = 1;
    *(uint8_t **)((int)this + 0x10) = puVar3;
    *(uint8_t **)((int)this + 0xc) = puVar2;
  }
  return this;
}


// 0x10005190  [lib]
void __fastcall FUN_10005190(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\x02') {
    *(uint *)(*param_1 + 0x350) = *(uint *)(*param_1 + 0x350) & 0xfffffffd;
  }
  if ((char)param_1[7] != '\0') {
    iVar1 = param_1[6];
    iVar2 = FUN_10005220(param_1);
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  if ((char)param_1[9] != '\0') {
    iVar1 = param_1[8];
    iVar2 = FUN_10005220(param_1);
    *(int *)(iVar2 + 0x14) = iVar1;
  }
  return;
}


// 0x100051d0  [lib]
__acrt_ptd * __fastcall FUN_100051d0(uint32_t *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  uint32_t *local_8;
  
  local_8 = param_1;
  local_8 = (uint32_t *)GetLastError();
  if (*(char *)(param_1 + 2) == '\0') {
    param_1[1] = 0;
    iVar1 = 0;
    *(uint8_t *)(param_1 + 2) = 1;
  }
  else {
    iVar1 = param_1[1];
  }
  p_Var2 = FUN_100058ca(&local_8,iVar1);
  *param_1 = p_Var2;
  SetLastError((DWORD)local_8);
  return p_Var2;
}


// 0x10005220  [lib]
int __fastcall FUN_10005220(int *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int *local_8;
  
  if (*param_1 == 0) {
    local_8 = param_1;
    local_8 = (int *)GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      iVar1 = 0;
      *(uint8_t *)(param_1 + 2) = 1;
    }
    else {
      iVar1 = param_1[1];
    }
    p_Var2 = FUN_100058ca(&local_8,iVar1);
    *param_1 = (int)p_Var2;
    SetLastError((DWORD)local_8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return *param_1;
}


// 0x10005280  [lib]
void __fastcall FUN_10005280(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005220(param_1);
  param_1[3] = *(int *)(iVar1 + 0x4c);
  param_1[4] = *(int *)(iVar1 + 0x48);
  FUN_100084ae(iVar1,param_1 + 3,param_1[1]);
  FUN_1000850c(iVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(iVar1 + 0x350) & 2) == 0) {
    *(uint *)(iVar1 + 0x350) = *(uint *)(iVar1 + 0x350) | 2;
    *(uint8_t *)(param_1 + 5) = 2;
  }
  return;
}


// 0x10005360  [lib]
void FUN_10005360(uint param_1,uint param_2)

{
  FUN_10005e10(param_1,param_2);
  return;
}


// 0x1000536c  [lib]
void __cdecl guard_check_icall(void)

{
  return;
}


// 0x10005380  [lib]
int __cdecl FUN_10005380(ushort *param_1,ushort *param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
      param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}


// 0x100053c3  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>
          (__crt_seh_guarded_call<void> *this,<lambda_15ade71b0218206bbe3333a0c9b79046> *param_1,
          <lambda_da44e0f8b0f19ba52fefafb335991732> *param_2,
          <lambda_207f2d024fc103971653565357d6cd41> *param_3)

{
  uint32_t local_14;
  
  ___acrt_lock(*(int *)param_1);
  LOCK();
  **(int **)(**(int **)param_2 + 0x48) = **(int **)(**(int **)param_2 + 0x48) + 1;
  UNLOCK();
  FUN_10005409();
  ExceptionList = local_14;
  return;
}


// 0x10005409  [lib]
void FUN_10005409(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10005415  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>
          (__crt_seh_guarded_call<void> *this,<lambda_38edbb1296d33220d7e4dd0ed76b244a> *param_1,
          <lambda_5ce1d447e08cb34b2473517608e21441> *param_2,
          <lambda_fb385d3da700c9147fc39e65dd577a8c> *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*(int *)param_1);
  piVar2 = *(int **)(**(int **)param_2 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_100150a0)) {
      FUN_10005e70(piVar2);
    }
  }
  FUN_10005474();
  ExceptionList = local_14;
  return;
}


// 0x10005474  [lib]
void FUN_10005474(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10005480  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_6affb1475c98b40b75cdec977db92e3c>,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> >(class <lambda_6affb1475c98b40b75cdec977db92e3c>
   &&,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_6affb1475c98b40b75cdec977db92e3c>,<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>&,<lambda_608742c3c92a14382c1684fc64f96c88>_>
          (__crt_seh_guarded_call<void> *this,<lambda_6affb1475c98b40b75cdec977db92e3c> *param_1,
          <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> *param_2,
          <lambda_608742c3c92a14382c1684fc64f96c88> *param_3)

{
  uint32_t local_14;
  
  ___acrt_lock(*(int *)param_1);
  replace_current_thread_locale_nolock
            ((__acrt_ptd *)**(uint32_t **)param_2,(__crt_locale_data *)0x0);
  FUN_100054c9();
  ExceptionList = local_14;
  return;
}


// 0x100054c9  [lib]
void FUN_100054c9(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x100054d5  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>
          (__crt_seh_guarded_call<void> *this,<lambda_a7e850c220f1c8d1e6efeecdedd162c6> *param_1,
          <lambda_46720907175c18b6c9d2717bc0d2d362> *param_2,
          <lambda_9048902d66e8d99359bc9897bbb930a8> *param_3)

{
  void *local_14;
  
  ___acrt_lock(*(int *)param_1);
  replace_current_thread_locale_nolock
            ((__acrt_ptd *)**(uint32_t **)param_2,
             *(__crt_locale_data **)**(uint32_t **)(param_2 + 4));
  FUN_10005523();
  ExceptionList = local_14;
  return;
}


// 0x10005523  [lib]
void FUN_10005523(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x1000552f  [lib]
/* Library Function - Single Match
    void __cdecl construct_ptd(struct __acrt_ptd * const,struct __crt_locale_data * * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2)

{
  uint32_t local_18;
  __acrt_ptd **local_14;
  __acrt_ptd **local_10;
  __crt_locale_data ***local_c;
  __crt_seh_guarded_call<void> local_5;
  
  *(uint32_t *)(param_1 + 0x18) = 1;
  *(uint8_t **)param_1 = &DAT_1000ec88;
  *(uint32_t *)(param_1 + 0x350) = 1;
  *(uint8_t **)(param_1 + 0x48) = &DAT_100150a0;
  *(uint16_t *)(param_1 + 0x6c) = 0x43;
  *(uint16_t *)(param_1 + 0x172) = 0x43;
  *(uint32_t *)(param_1 + 0x34c) = 0;
  local_14 = &param_1;
  local_c = (__crt_locale_data ***)0x5;
  local_18 = 5;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>
            (&local_5,(<lambda_15ade71b0218206bbe3333a0c9b79046> *)&local_18,
             (<lambda_da44e0f8b0f19ba52fefafb335991732> *)&local_14,
             (<lambda_207f2d024fc103971653565357d6cd41> *)&local_c);
  local_10 = &param_1;
  local_c = &param_2;
  local_18 = 4;
  local_14 = (__acrt_ptd **)0x4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>
            (&local_5,(<lambda_a7e850c220f1c8d1e6efeecdedd162c6> *)&local_14,
             (<lambda_46720907175c18b6c9d2717bc0d2d362> *)&local_10,
             (<lambda_9048902d66e8d99359bc9897bbb930a8> *)&local_18);
  return;
}


// 0x100055c8  [lib]
/* Library Function - Single Match
    void __stdcall destroy_fls(void *)
   
   Library: Visual Studio 2019 Release */

void destroy_fls(void *param_1)

{
  if (param_1 != (void *)0x0) {
    destroy_ptd(param_1);
    FUN_10005e70(param_1);
  }
  return;
}


// 0x100055e9  [lib]
/* Library Function - Single Match
    void __cdecl destroy_ptd(struct __acrt_ptd * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl destroy_ptd(__acrt_ptd *param_1)

{
  uint32_t local_14;
  __acrt_ptd **local_10;
  uint32_t local_c;
  __crt_seh_guarded_call<void> local_5;
  
  if (*(uint8_t **)param_1 != &DAT_1000ec88) {
    FUN_10005e70(*(uint8_t **)param_1);
  }
  FUN_10005e70(*(LPVOID *)(param_1 + 0x3c));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x30));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x34));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x38));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x28));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x2c));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x40));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x44));
  FUN_10005e70(*(LPVOID *)(param_1 + 0x360));
  local_10 = &param_1;
  local_c = 5;
  local_14 = 5;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>
            (&local_5,(<lambda_38edbb1296d33220d7e4dd0ed76b244a> *)&local_14,
             (<lambda_5ce1d447e08cb34b2473517608e21441> *)&local_10,
             (<lambda_fb385d3da700c9147fc39e65dd577a8c> *)&local_c);
  local_10 = &param_1;
  local_14 = 4;
  local_c = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_6affb1475c98b40b75cdec977db92e3c>,<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>&,<lambda_608742c3c92a14382c1684fc64f96c88>_>
            (&local_5,(<lambda_6affb1475c98b40b75cdec977db92e3c> *)&local_c,
             (<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> *)&local_10,
             (<lambda_608742c3c92a14382c1684fc64f96c88> *)&local_14);
  return;
}


// 0x100056b6  [lib]
__acrt_ptd * FUN_100056b6(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_1000775a();
  if (iVar1 == 0) {
    SetLastError(dwErrCode);
    return (__acrt_ptd *)0x0;
  }
  p_Var2 = FUN_10005e10(1,0x364);
  if (p_Var2 == (__acrt_ptd *)0x0) {
    FUN_1000775a();
    FUN_10005e70((LPVOID)0x0);
    SetLastError(dwErrCode);
    p_Var2 = (__acrt_ptd *)0x0;
  }
  else {
    iVar1 = FUN_1000775a();
    if (iVar1 == 0) {
      FUN_1000775a();
      FUN_10005e70(p_Var2);
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      construct_ptd(p_Var2,(__crt_locale_data **)&DAT_10016284);
      FUN_10005e70((LPVOID)0x0);
    }
    SetLastError(dwErrCode);
  }
  return p_Var2;
}


// 0x1000575e  [lib]
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  uint8_t **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_10008cf8(*(int *)(param_1 + 0x4c));
    ppuVar1 = *(uint8_t ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_10016284) && (ppuVar1 != &PTR_DAT_100155c0)) &&
       (ppuVar1[3] == (uint8_t *)0x0)) {
      FUN_10008b2d(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    FUN_10008ab0((int)param_2);
  }
  return;
}


// 0x100057a9  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_100057a9(void)

{
  void *pvVar1;
  int *piVar2;
  int aiStack_2c [3];
  uint8_t auStack_20 [24];
  uint32_t local_8;
  uint32_t uStack_4;
  
  uStack_4 = 0;
  piVar2 = (int *)auStack_20;
  local_8 = 0;
  if (DAT_10015090 != -1) {
    piVar2 = aiStack_2c + 2;
    aiStack_2c[2] = DAT_10015090;
    aiStack_2c[1] = 0x100057c9;
    pvVar1 = (void *)FUN_1000774e();
    if (pvVar1 != (void *)0x0) {
      aiStack_2c[1] = 0;
      piVar2 = aiStack_2c;
      aiStack_2c[0] = DAT_10015090;
      FUN_1000775a();
      destroy_fls(pvVar1);
    }
  }
  piVar2[-1] = 0x100057e7;
  return;
}


// 0x100057ed  [lib]
void FUN_100057ed(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  __acrt_ptd *p_Var4;
  
  p_Var4 = FUN_1000583e();
  if (p_Var4 != (__acrt_ptd *)0x0) {
    return;
  }
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_10007dd3(0x16);
  }
  if ((DAT_10015080 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// 0x100057fb  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_100057fb(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int *piVar3;
  int iStack_24;
  uint8_t auStack_20 [24];
  uint32_t local_8;
  uint32_t uStack_4;
  
  uStack_4 = 0;
  piVar3 = (int *)auStack_20;
  local_8 = 0;
  if (DAT_10015090 != -1) {
    piVar3 = &iStack_24;
    iStack_24 = DAT_10015090;
    iVar1 = FUN_1000774e();
    if (iVar1 != 0) {
      if (iVar1 == -1) goto LAB_10005833;
      goto LAB_10005824;
    }
  }
  piVar3[-1] = 0x1000582f;
  p_Var2 = FUN_100056b6();
  if (p_Var2 == (__acrt_ptd *)0x0) {
LAB_10005833:
                    /* WARNING: Subroutine does not return */
    piVar3[-1] = (int)&UNK_10005838;
    _abort();
  }
LAB_10005824:
  piVar3[-1] = 0x10005829;
  return;
}


// 0x1000583e  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

__acrt_ptd * FUN_1000583e(void)

{
  __acrt_ptd *p_Var1;
  DWORD DVar2;
  int *piVar3;
  int *piVar4;
  int iStack_24;
  uint8_t auStack_20 [24];
  uint32_t local_8;
  uint32_t uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x1000584a;
  piVar3 = (int *)auStack_20;
  if (DAT_10015e60 != '\0') {
    local_8 = 0;
    if (DAT_10015090 != -1) {
      piVar3 = &iStack_24;
      iStack_24 = DAT_10015090;
      p_Var1 = (__acrt_ptd *)FUN_10007741();
      if (p_Var1 != (__acrt_ptd *)0x0) {
        if (p_Var1 == (__acrt_ptd *)0xffffffff) {
          p_Var1 = (__acrt_ptd *)0x0;
        }
        goto LAB_100058bd;
      }
    }
    piVar3[-1] = 0x1000587c;
    p_Var1 = FUN_100056b6();
    goto LAB_100058bd;
  }
  piVar3 = &iStack_24;
  iStack_24 = 0x10005886;
  DVar2 = GetLastError();
  local_8 = 1;
  piVar4 = piVar3;
  if (DAT_10015090 == -1) {
LAB_100058af:
    *(uint32_t *)((int)piVar4 + -4) = 0x100058b4;
    p_Var1 = FUN_100056b6();
  }
  else {
    piVar4 = piVar3 + -1;
    piVar3[-1] = DAT_10015090;
    piVar3[-2] = 0x1000589f;
    p_Var1 = (__acrt_ptd *)FUN_1000774e();
    if (p_Var1 == (__acrt_ptd *)0x0) goto LAB_100058af;
    piVar4 = piVar3 + -1;
    if (p_Var1 == (__acrt_ptd *)0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
      piVar4 = piVar3 + -1;
    }
  }
  *(DWORD *)((int)piVar4 + -4) = DVar2;
  piVar3 = (int *)((int)piVar4 + -8);
  *(uint32_t *)((int)piVar4 + -8) = 0x100058bd;
  SetLastError(*(DWORD *)((int)piVar4 + -4));
LAB_100058bd:
  piVar3[-1] = 0x100058c4;
  return p_Var1;
}


// 0x100058ca  [lib]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

__acrt_ptd * __cdecl FUN_100058ca(uint32_t param_1,int param_2)

{
  __acrt_ptd *p_Var1;
  int *piVar2;
  __acrt_ptd *p_Var3;
  bool bVar4;
  int iStack_24;
  uint8_t auStack_20 [24];
  uint32_t local_8;
  uint32_t uStack_4;
  
  uStack_4 = 0;
  piVar2 = (int *)auStack_20;
  p_Var3 = (__acrt_ptd *)0x0;
  local_8 = 0;
  if (DAT_10015090 != -1) {
    piVar2 = &iStack_24;
    iStack_24 = DAT_10015090;
    p_Var1 = (__acrt_ptd *)FUN_1000774e();
    if (p_Var1 != (__acrt_ptd *)0x0) {
      bVar4 = p_Var1 == (__acrt_ptd *)0xffffffff;
      goto LAB_100058fb;
    }
  }
  piVar2[-1] = 0x100058f9;
  p_Var1 = FUN_100056b6();
  bVar4 = p_Var1 == (__acrt_ptd *)0x0;
LAB_100058fb:
  if (!bVar4) {
    p_Var3 = p_Var1 + param_2 * 0x364;
  }
  piVar2[-1] = 0x1000590d;
  return p_Var3;
}


// 0x10005913  [lib]
uint32_t __fastcall FUN_10005913(void *param_1)

{
  __acrt_ptd *p_Var1;
  
  DAT_10015e60 = FUN_10007823(param_1);
  DAT_10015090 = FUN_10007729();
  if (DAT_10015090 != -1) {
    p_Var1 = FUN_1000583e();
    if (p_Var1 != (__acrt_ptd *)0x0) {
      return 1;
    }
    ___acrt_uninitialize_ptd();
  }
  return 0;
}


// 0x10005949  [lib]
/* Library Function - Single Match
    ___acrt_uninitialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___acrt_uninitialize_ptd(void)

{
  int iVar1;
  
  iVar1 = DAT_10015090;
  if (DAT_10015090 != -1) {
    iVar1 = FUN_10007735();
    DAT_10015090 = -1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10005963  [lib]
uint32_t FUN_10005963(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_10007766();
    if (iVar1 == 0) {
      FUN_100059bb(0);
      return 0;
    }
    DAT_10015fd0 = DAT_10015fd0 + 1;
    uVar2 = uVar2 + 0x18;
  } while (uVar2 < 0x168);
  return 1;
}


// 0x100059a4  [lib]
/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10015e68 + param_1 * 0x18));
  return;
}


// 0x100059bb  [lib]
uint32_t FUN_100059bb(uint32_t reg_EAX)

{
  uint32_t extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_10015fd0 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_10015e50 + DAT_10015fd0 * 0x18);
    iVar1 = DAT_10015fd0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_10015fd0 = DAT_10015fd0 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      reg_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x100059ec  [lib]
/* Library Function - Single Match
    ___acrt_unlock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10015e68 + param_1 * 0x18));
  return;
}


// 0x10005a03  [lib]
uint FUN_10005a03(void)

{
  return *(uint *)((int)ProcessEnvironmentBlock + 0x68) >> 8 & 0xffffff01;
}


// 0x10005a15  [lib]
uint FUN_10005a15(void)

{
  return *(uint *)(*(int *)((int)ProcessEnvironmentBlock + 0x10) + 8) >> 0x1f;
}


// 0x10005a28  [lib]
bool FUN_10005a28(void)

{
  uint uVar1;
  void *this;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_10005a15();
  if ((char)uVar1 == '\0') {
    FUN_100076bb(this,&local_8);
  }
  return local_8 != 1;
}


// 0x10005a4f  [lib]
uint32_t __fastcall FUN_10005a4f(int param_1)

{
  DWORD dwErrCode;
  
  if (*(char *)(param_1 + 8) == '\0') {
    dwErrCode = GetLastError();
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint8_t *)(param_1 + 8) = 1;
    SetLastError(dwErrCode);
    return 0;
  }
  return *(uint32_t *)(param_1 + 4);
}


// 0x10005a78  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___acrt_call_reportfault
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  uint32_t local_2d4 [39];
  
  if (param_1 != -1) {
    FUN_10001ba1();
  }
  _memset(&local_324,0,0x50);
  _memset(local_2d4,0,0x2cc);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_32c);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_10001ba1();
  }
  return;
}


// 0x10005bb1  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10005bb1(uint32_t param_1)

{
  DAT_10015fd4 = param_1;
  return;
}


// 0x10005bc0  [lib]
void __cdecl
FUN_10005bc0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int local_2c [10];
  
  FUN_10005130(local_2c,(uint32_t *)0x0);
  FUN_10005bf7(param_1,param_2,param_3,param_4,param_5,local_2c);
  FUN_10005190(local_2c);
  return;
}


// 0x10005bf7  [lib]
void __cdecl
FUN_10005bf7(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5,
            int *param_6)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  
  p_Var1 = (__acrt_ptd *)*param_6;
  if (((p_Var1 == (__acrt_ptd *)0x0) &&
      (p_Var1 = FUN_100051d0(param_6), p_Var1 == (__acrt_ptd *)0x0)) ||
     (pcVar4 = *(code **)(p_Var1 + 0x35c), pcVar4 == (code *)0x0)) {
    iVar2 = FUN_10005a4f((int)param_6);
    bVar3 = (byte)DAT_10015000 & 0x1f;
    pcVar4 = (code *)((*(uint *)(&DAT_10015fd4 + iVar2 * 4) ^ DAT_10015000) >> bVar3 |
                     (*(uint *)(&DAT_10015fd4 + iVar2 * 4) ^ DAT_10015000) << 0x20 - bVar3);
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  guard_check_icall();
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// 0x10005c74  [lib]
void FUN_10005c74(void)

{
  FUN_10005bc0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}


// 0x10005c84  [lib]
/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2019 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  UINT uExitCode;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  ___acrt_call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// 0x10005cb8  [lib]
uint * __cdecl FUN_10005cb8(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_10;
  
  uVar4 = 0;
  local_10 = param_3 - 1;
  do {
    uVar3 = param_3 >> 1;
    if (uVar3 == 0) {
      if (param_3 == 0) {
        return (uint *)0x0;
      }
      puVar2 = (uint *)(param_2 + uVar4 * 8);
      if (param_1 != *puVar2) {
        return (uint *)0x0;
      }
      return puVar2;
    }
    uVar5 = param_3 & 1;
    param_3 = uVar3 - 1;
    if (uVar5 != 0) {
      param_3 = uVar3;
    }
    iVar1 = param_3 + uVar4;
    puVar2 = (uint *)(param_2 + iVar1 * 8);
    if (param_1 == *puVar2) {
      return puVar2;
    }
    uVar5 = iVar1 - 1;
    if (*puVar2 <= param_1) {
      uVar5 = local_10;
      uVar4 = iVar1 + 1;
      param_3 = uVar3;
    }
    local_10 = uVar5;
  } while (uVar4 <= uVar5);
  return (uint *)0x0;
}


// 0x10005d37  [lib]
uint8_t * __cdecl FUN_10005d37(uint param_1)

{
  uint *puVar1;
  uint8_t *puVar2;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return (&PTR_LAB_1000edcc)[param_1 * 2];
    }
    if ((param_1 < 0x719) && (puVar1 = FUN_10005cb8(param_1,0x1000edd0,0x2d), puVar1 != (uint *)0x0)
       ) {
      return (uint8_t *)puVar1[1];
    }
  }
  if (param_1 - 0x13 < 0x12) {
    puVar2 = (uint8_t *)0xd;
  }
  else {
    puVar2 = (uint8_t *)((-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8);
  }
  return puVar2;
}


// 0x10005d96  [lib]
/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_errno_map_os_error(uint param_1)

{
  __acrt_ptd *p_Var1;
  uint8_t *puVar2;
  
  p_Var1 = FUN_10005ddd();
  *(uint *)p_Var1 = param_1;
  puVar2 = FUN_10005d37(param_1);
  p_Var1 = FUN_10005df2();
  *(uint8_t **)p_Var1 = puVar2;
  return;
}


// 0x10005db9  [lib]
void __cdecl FUN_10005db9(uint param_1,int param_2)

{
  uint8_t *puVar1;
  
  *(uint8_t *)(param_2 + 0x24) = 1;
  *(uint *)(param_2 + 0x20) = param_1;
  puVar1 = FUN_10005d37(param_1);
  *(uint8_t *)(param_2 + 0x1c) = 1;
  *(uint8_t **)(param_2 + 0x18) = puVar1;
  return;
}


// 0x10005ddd  [lib]
__acrt_ptd * FUN_10005ddd(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_1000583e();
  p_Var2 = (__acrt_ptd *)&DAT_10015098;
  if (p_Var1 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var1 + 0x14;
  }
  return p_Var2;
}


// 0x10005df2  [lib]
__acrt_ptd * FUN_10005df2(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_1000583e();
  p_Var2 = (__acrt_ptd *)&DAT_10015094;
  if (p_Var1 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var1 + 0x10;
  }
  return p_Var2;
}


// 0x10005e10  [lib]
LPVOID __cdecl FUN_10005e10(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint32_t extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (param_1 * param_2 == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_10016064,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_10008e50();
    } while ((iVar2 != 0) && (bVar1 = FUN_10007b60(dwBytes), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_10005df2();
  *(uint32_t *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


// 0x10005e70  [lib]
void __cdecl FUN_10005e70(LPVOID param_1)

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


// 0x10005eb6  [lib]
uint __cdecl FUN_10005eb6(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_2 < param_1);
}


// 0x10005ece  [lib]
/* Library Function - Single Match
    int __cdecl __acrt_convert_wcs_mbs_cp<char,wchar_t,class
   <lambda_62f6974d9771e494a5ea317cc32e971c>,struct
   __crt_win32_buffer_internal_dynamic_resizing>(char const * const,class
   __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing> &,class
   <lambda_62f6974d9771e494a5ea317cc32e971c> const &,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__acrt_convert_wcs_mbs_cp<char,wchar_t,<lambda_62f6974d9771e494a5ea317cc32e971c>,__crt_win32_buffer_internal_dynamic_resizing>
          (char *param_1,
          __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
          <lambda_62f6974d9771e494a5ea317cc32e971c> *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 == (char *)0x0) {
    __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(param_2);
    *(uint32_t *)(param_2 + 8) = 0;
    *(uint32_t *)(param_2 + 0xc) = 0;
  }
  else {
    if (*param_1 != '\0') {
      uVar2 = FUN_10007283(param_4,9,param_1,-1,(LPWSTR)0x0,0);
      if (uVar2 != 0) {
        if ((*(uint *)(param_2 + 0xc) < uVar2) &&
           (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::
                    allocate(param_2,uVar2), iVar1 != 0)) {
          return iVar1;
        }
        iVar1 = FUN_10007283(param_4,9,param_1,-1,*(LPWSTR *)(param_2 + 8),*(int *)(param_2 + 0xc));
        if (iVar1 != 0) {
          *(int *)(param_2 + 0x10) = iVar1 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
      p_Var4 = FUN_10005df2();
      return *(int *)p_Var4;
    }
    if ((*(int *)(param_2 + 0xc) == 0) &&
       (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::allocate
                          (param_2,1), iVar1 != 0)) {
      return iVar1;
    }
    **(uint16_t **)(param_2 + 8) = 0;
  }
  *(uint32_t *)(param_2 + 0x10) = 0;
  return 0;
}


// 0x10005f80  [lib]
int __cdecl
FUN_10005f80(LPCWSTR param_1,
            __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
            uint32_t param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 == (LPCWSTR)0x0) {
    __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(param_2);
    *(uint32_t *)(param_2 + 8) = 0;
    *(uint32_t *)(param_2 + 0xc) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      uVar2 = FUN_1000733d(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar2 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        p_Var4 = FUN_10005df2();
        return *(int *)p_Var4;
      }
      if ((*(uint *)(param_2 + 0xc) < uVar2) && (iVar1 = allocate(param_2,uVar2), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = FUN_100065c4(param_4,param_1,*(LPSTR *)(param_2 + 8),*(int *)(param_2 + 0xc));
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        p_Var4 = FUN_10005df2();
        return *(int *)p_Var4;
      }
      *(int *)(param_2 + 0x10) = iVar1 + -1;
      return 0;
    }
    if ((*(int *)(param_2 + 0xc) == 0) && (iVar1 = allocate(param_2,1), iVar1 != 0)) {
      return iVar1;
    }
    **(uint8_t **)(param_2 + 8) = 0;
  }
  *(uint32_t *)(param_2 + 0x10) = 0;
  return 0;
}


// 0x10006046  [lib]
/* Library Function - Single Match
    int __cdecl __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(char const
   * const,class __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>
   &,unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

int __cdecl
__acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
          (char *param_1,
          __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
          uint param_3)

{
  int iVar1;
  <lambda_62f6974d9771e494a5ea317cc32e971c> local_5;
  
  iVar1 = __acrt_convert_wcs_mbs_cp<char,wchar_t,<lambda_62f6974d9771e494a5ea317cc32e971c>,__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,param_2,&local_5,param_3);
  return iVar1;
}


// 0x10006063  [lib]
int __cdecl FUN_10006063(uint32_t *param_1,uint32_t *param_2)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  uchar *puVar3;
  int iVar4;
  LPVOID pvVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *local_24;
  int *local_20;
  uint32_t local_1c;
  int local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  uint32_t local_8;
  
  if (param_2 == (uint32_t *)0x0) {
    p_Var2 = FUN_10005df2();
    iVar4 = 0x16;
    *(uint32_t *)p_Var2 = 0x16;
    FUN_10005c74();
  }
  else {
    *param_2 = 0;
    local_1c = 0;
    local_20 = (int *)0x0;
    local_24 = (int *)0x0;
    pcVar6 = (char *)*param_1;
    piVar9 = local_24;
    while (local_24 = piVar9, pcVar6 != (char *)0x0) {
      uVar7 = (uint)local_8 >> 0x18;
      local_8 = (char *)CONCAT13((char)uVar7,0x3f2a);
      puVar3 = (uchar *)_strpbrk(pcVar6,(char *)&local_8);
      if (puVar3 == (uchar *)0x0) {
        iVar4 = FUN_100061e0((char *)*param_1,0,0,(int *)&local_24);
      }
      else {
        iVar4 = FUN_10006291((uchar *)*param_1,puVar3,(int *)&local_24);
      }
      if (iVar4 != 0) goto LAB_1000614a;
      param_1 = param_1 + 1;
      piVar9 = local_24;
      pcVar6 = (char *)*param_1;
    }
    uVar7 = ((int)local_20 - (int)piVar9 >> 2) + 1;
    local_c = (char *)0x0;
    for (piVar8 = piVar9; piVar8 != local_20; piVar8 = piVar8 + 1) {
      pcVar6 = (char *)*piVar8;
      local_10 = pcVar6 + 1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_c = pcVar6 + (int)(local_c + (1 - (int)local_10));
    }
    pvVar5 = ___acrt_allocate_buffer_for_argv(uVar7,(uint)local_c,1);
    piVar8 = local_20;
    if (pvVar5 == (LPVOID)0x0) {
      FUN_10005e70((LPVOID)0x0);
      iVar4 = -1;
LAB_1000614a:
      ~argument_list<>(&local_24);
    }
    else {
      local_8 = (char *)((int)pvVar5 + uVar7 * 4);
      local_14 = local_8;
      if (piVar9 != local_20) {
        local_18 = (int)pvVar5 - (int)piVar9;
        do {
          local_10 = (char *)*piVar9;
          pcVar6 = local_10 + 1;
          do {
            cVar1 = *local_10;
            local_10 = local_10 + 1;
          } while (cVar1 != '\0');
          local_10 = local_10 + (1 - (int)pcVar6);
          iVar4 = FUN_100092d0(local_8,(int)(local_14 + ((int)local_c - (int)local_8)),*piVar9,
                               (int)local_10);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_18 + (int)piVar9) = local_8;
          piVar9 = piVar9 + 1;
          local_8 = local_8 + (int)local_10;
        } while (piVar9 != piVar8);
      }
      *param_2 = pvVar5;
      FUN_10005e70((LPVOID)0x0);
      ~argument_list<>(&local_24);
      iVar4 = 0;
    }
  }
  return iVar4;
}


// 0x100061e0  [lib]
int __cdecl FUN_100061e0(char *param_1,int param_2,uint param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  if ((char *)~param_3 < pcVar4) {
    iVar3 = 0xc;
  }
  else {
    pcVar5 = pcVar4 + param_3 + 1;
    pcVar2 = FUN_10005e10((uint)pcVar5,1);
    if (param_3 != 0) {
      iVar3 = FUN_100092d0(pcVar2,(int)pcVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_10006284;
    }
    iVar3 = FUN_100092d0(pcVar2 + param_3,(int)pcVar5 - param_3,(int)param_1,(int)pcVar4);
    if (iVar3 != 0) {
LAB_10006284:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = expand_if_necessary(param_4);
    if (iVar3 == 0) {
      *(char **)param_4[1] = pcVar2;
      iVar3 = 0;
      param_4[1] = param_4[1] + 4;
    }
    else {
      FUN_10005e70(pcVar2);
    }
    FUN_10005e70((LPVOID)0x0);
  }
  return iVar3;
}


// 0x10006291  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FUN_10006291(uchar *param_1,uchar *param_2,int *param_3)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  HANDLE hFindFile;
  int iVar5;
  BOOL BVar6;
  LPCWSTR lpFileName;
  char *pcVar7;
  uchar *puVar8;
  uint32_t local_290;
  uint32_t local_28c;
  LPCWSTR local_288;
  uint32_t local_284;
  uint32_t local_280;
  char local_27c;
  uint32_t local_278;
  uint32_t local_274;
  char *local_270;
  uint32_t local_26c;
  uint32_t local_268;
  char local_264;
  int *local_260;
  uchar local_259;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  local_260 = param_3;
  for (; (((param_2 != param_1 && (uVar1 = *param_2, uVar1 != '/')) && (uVar1 != '\\')) &&
         (uVar1 != ':')); param_2 = __mbsdec(param_1,param_2)) {
  }
  local_259 = *param_2;
  if ((local_259 == ':') && (param_2 != param_1 + 1)) {
    iVar3 = FUN_100061e0((char *)param_1,0,0,local_260);
  }
  else {
    if ((local_259 == '/') || ((local_259 == '\\' || (bVar2 = false, local_259 == ':')))) {
      bVar2 = true;
    }
    local_290 = 0;
    local_28c = 0;
    local_288 = (LPCWSTR)0x0;
    local_284 = 0;
    puVar8 = (uchar *)0x0;
    if (bVar2) {
      puVar8 = param_2 + (1 - (int)param_1);
    }
    local_280 = 0;
    local_27c = '\0';
    uVar4 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar3 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      ((char *)param_1,
                       (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                       &local_290,uVar4);
    lpFileName = local_288;
    if (iVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      iVar3 = FUN_100061e0((char *)param_1,0,0,local_260);
      if (local_27c != '\0') {
        FUN_10005e70(local_288);
      }
    }
    else {
      iVar3 = local_260[1] - *local_260 >> 2;
      do {
        local_278 = 0;
        local_274 = 0;
        local_270 = (char *)0x0;
        local_26c = 0;
        local_268 = 0;
        local_264 = '\0';
        uVar4 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar5 = FUN_10005f80(local_258.cFileName,
                             (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_278,&local_259,uVar4);
        pcVar7 = local_270;
        if (iVar5 != 0) {
          pcVar7 = (char *)0x0;
        }
        if (((*pcVar7 != '.') ||
            ((pcVar7[1] != '\0' && ((pcVar7[1] != '.' || (pcVar7[2] != '\0')))))) &&
           (iVar5 = FUN_100061e0(pcVar7,(int)param_1,(uint)puVar8,local_260), iVar5 != 0)) {
          if (local_264 != '\0') {
            FUN_10005e70(local_270);
          }
          FindClose(hFindFile);
          if (local_27c == '\0') {
            return iVar5;
          }
          FUN_10005e70(local_288);
          return iVar5;
        }
        if (local_264 != '\0') {
          FUN_10005e70(local_270);
        }
        BVar6 = FindNextFileW(hFindFile,&local_258);
      } while (BVar6 != 0);
      iVar5 = local_260[1] - *local_260 >> 2;
      if (iVar3 != iVar5) {
        FUN_10008e90((uint8_t *)(*local_260 + iVar3 * 4),iVar5 - iVar3,4,FUN_10005eb6);
      }
      FindClose(hFindFile);
      if (local_27c != '\0') {
        FUN_10005e70(local_288);
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}


// 0x1000651d  [lib]
int * __thiscall FUN_1000651d(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint8_t *puVar3;
  int iVar4;
  uint8_t *puVar5;
  
  *(uint8_t *)((int)this + 0xc) = 0;
  piVar1 = (int *)((int)this + 4);
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_PTR_10015678;
    puVar5 = PTR_DAT_1001567c;
    if (DAT_100162a8 != 0) {
      iVar4 = FUN_100057ed();
      *(int *)this = iVar4;
      *piVar1 = *(int *)(iVar4 + 0x4c);
      *(int *)((int)this + 8) = *(int *)(iVar4 + 0x48);
      FUN_10008481(iVar4,piVar1);
      FUN_100084df(*(int *)this,(int *)((int)this + 8));
      uVar2 = *(uint *)(*(int *)this + 0x350);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar2 | 2;
      *(uint8_t *)((int)this + 0xc) = 1;
      return this;
    }
  }
  else {
    puVar3 = (uint8_t *)*param_1;
    puVar5 = (uint8_t *)param_1[1];
  }
  *piVar1 = (int)puVar3;
  *(uint8_t **)((int)this + 8) = puVar5;
  return this;
}


// 0x1000659f  [lib]
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

void __fastcall ~argument_list<>(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  for (puVar1 = (uint32_t *)*param_1; puVar1 != (uint32_t *)param_1[1]; puVar1 = puVar1 + 1) {
    FUN_10005e70((LPVOID)*puVar1);
  }
  FUN_10005e70((LPVOID)*param_1);
  return;
}


// 0x100065c4  [lib]
void FUN_100065c4(uint param_1,LPCWSTR param_2,LPSTR param_3,int param_4)

{
  FUN_1000733d(param_1,0,param_2,-1,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}


// 0x100065e8  [lib]
/* Library Function - Single Match
    unsigned int __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)
   
   Library: Visual Studio 2019 Release */

uint __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)

{
  int iVar1;
  void *extraout_ECX;
  uint uVar2;
  int local_14;
  int local_10;
  char local_8;
  
  FUN_1000651d(&local_14,(int *)0x0);
  uVar2 = 0xfde9;
  if (*(int *)(local_10 + 8) != 0xfde9) {
    iVar1 = ___acrt_AreFileApisANSI_0(extraout_ECX);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar2;
}


// 0x10006627  [lib]
/* Library Function - Single Match
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this)

{
  if (this[0x14] != (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0) {
    FUN_10005e70(*(LPVOID *)(this + 8));
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return;
}


// 0x10006641  [lib]
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_public_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall allocate(void *this,SIZE_T param_1)

{
  int iVar1;
  
  __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(this);
  iVar1 = FUN_100066bc((uint32_t *)((int)this + 8),param_1);
  if (iVar1 == 0) {
    *(uint8_t *)((int)this + 0x14) = 1;
    iVar1 = 0;
    *(SIZE_T *)((int)this + 0xc) = param_1;
  }
  else {
    *(uint32_t *)((int)this + 0xc) = 0;
    *(uint8_t *)((int)this + 0x14) = 0;
  }
  return iVar1;
}


// 0x1000667d  [lib]
/* Library Function - Single Match
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::allocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this,
          uint param_1)

{
  int iVar1;
  
  _deallocate(this);
  iVar1 = FUN_100066bc((uint32_t *)(this + 8),param_1 * 2);
  if (iVar1 == 0) {
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x1;
    iVar1 = 0;
    *(uint *)(this + 0xc) = param_1;
  }
  else {
    *(uint32_t *)(this + 0xc) = 0;
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return iVar1;
}


// 0x100066bc  [lib]
uint32_t __cdecl FUN_100066bc(uint32_t *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  uint32_t uVar2;
  
  pvVar1 = FUN_10008430(param_2);
  *param_1 = pvVar1;
  uVar2 = 0;
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0xc;
  }
  return uVar2;
}


// 0x100066dd  [lib]
/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __fastcall expand_if_necessary(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (param_1[1] == param_1[2]) {
    if (*param_1 == 0) {
      pvVar3 = FUN_10005e10(4,4);
      *param_1 = (int)pvVar3;
      FUN_10005e70((LPVOID)0x0);
      iVar1 = *param_1;
      if (iVar1 != 0) {
        param_1[1] = iVar1;
        param_1[2] = iVar1 + 0x10;
        goto LAB_100066eb;
      }
    }
    else {
      uVar4 = param_1[2] - *param_1 >> 2;
      if (uVar4 < 0x80000000) {
        pvVar3 = __recalloc_base((LPCVOID)*param_1,uVar4 * 2,4);
        if (pvVar3 == (LPVOID)0x0) {
          uVar2 = 0xc;
        }
        else {
          *param_1 = (int)pvVar3;
          param_1[1] = (int)((int)pvVar3 + uVar4 * 4);
          param_1[2] = (int)((int)pvVar3 + uVar4 * 8);
          uVar2 = 0;
        }
        FUN_10005e70((LPVOID)0x0);
        return uVar2;
      }
    }
    uVar2 = 0xc;
  }
  else {
LAB_100066eb:
    uVar2 = 0;
  }
  return uVar2;
}


// 0x10006764  [lib]
void __cdecl FUN_10006764(uint32_t *param_1,uint32_t *param_2)

{
  FUN_10006063(param_1,param_2);
  return;
}


// 0x1000676f  [lib]
int __cdecl FUN_1000676f(LPCWSTR param_1,int param_2,uint32_t param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 == (LPCWSTR)0x0) {
    FUN_10006858(param_2);
    iVar1 = 0;
  }
  else if (*param_1 == L'\0') {
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = allocate(param_2), iVar1 == 0)) {
      **(uint8_t **)(param_2 + 8) = 0;
      iVar1 = 0;
      *(uint32_t *)(param_2 + 0x10) = 0;
    }
  }
  else {
    uVar2 = FUN_1000733d(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
      p_Var4 = FUN_10005df2();
      iVar1 = *(int *)p_Var4;
    }
    else if ((uVar2 <= *(uint *)(param_2 + 0xc)) || (iVar1 = allocate(param_2), iVar1 == 0)) {
      iVar1 = FUN_100065c4(param_4,param_1,*(LPSTR *)(param_2 + 8),*(int *)(param_2 + 0xc));
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        p_Var4 = FUN_10005df2();
        iVar1 = *(int *)p_Var4;
      }
      else {
        *(int *)(param_2 + 0x10) = iVar1 + -1;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


// 0x10006831  [lib]
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_no_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_no_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint32_t __fastcall allocate(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(uint8_t *)(param_1 + 0x14) = 0;
  }
  p_Var1 = FUN_10005df2();
  *(uint32_t *)p_Var1 = 0x22;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint8_t *)(param_1 + 0x14) = 0;
  return 0x22;
}


// 0x10006858  [lib]
void __fastcall FUN_10006858(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(uint8_t *)(param_1 + 0x14) = 0;
  }
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  return;
}


// 0x1000686c  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___acrt_GetModuleFileNameA
   
   Library: Visual Studio 2019 Release */

uint32_t __cdecl ___acrt_GetModuleFileNameA(HMODULE param_1,uint32_t param_2,uint32_t param_3)

{
  DWORD DVar1;
  uint uVar2;
  uint32_t local_230;
  uint32_t local_22c;
  uint32_t local_228;
  uint32_t local_224;
  uint32_t local_220;
  uint8_t local_21c;
  uint8_t local_215;
  WCHAR local_214 [262];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW(param_1,local_214,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    local_220 = 0;
  }
  else {
    local_220 = 0;
    local_230 = param_2;
    local_22c = param_3;
    local_228 = param_2;
    local_224 = param_3;
    local_21c = 0;
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    FUN_1000676f(local_214,(int)&local_230,&local_215,uVar2);
  }
  return local_220;
}


// 0x1000690d  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>
   &&,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
          (__crt_seh_guarded_call<void> *this,<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *param_1,
          <lambda_ae742caa10f662c28703da3d2ea5e57e> *param_2,
          <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *param_3)

{
  uint32_t local_14;
  
  ___acrt_lock(*(int *)param_1);
  <lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()(param_2);
  FUN_1000694e();
  ExceptionList = local_14;
  return;
}


// 0x1000694e  [lib]
void FUN_1000694e(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x1000695a  [lib]
/* Library Function - Single Match
    public: void __thiscall <lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()
          (<lambda_ae742caa10f662c28703da3d2ea5e57e> *this)

{
  int iVar1;
  
  _memcpy_s(DAT_10015fd8,0x101,(void *)(*(int *)(**(int **)this + 0x48) + 0x18),0x101);
  _memcpy_s(DAT_10015fdc,0x100,(void *)(*(int *)(**(int **)this + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = **(int **)**(uint32_t **)(this + 4) + -1;
  **(int **)**(uint32_t **)(this + 4) = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && (*(uint8_t **)**(uint32_t **)(this + 4) != &DAT_100150a0)) {
    FUN_10005e70(*(LPVOID *)**(uint32_t **)(this + 4));
  }
  *(uint32_t *)**(uint32_t **)(this + 4) = *(uint32_t *)(**(int **)this + 0x48);
  LOCK();
  **(int **)(**(int **)this + 0x48) = **(int **)(**(int **)this + 0x48) + 1;
  UNLOCK();
  return;
}


// 0x100069dd  [lib]
/* Library Function - Single Match
    wchar_t const * __cdecl CPtoLocaleName(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return L"ja-JP";
  }
  if (param_1 == 0x3a8) {
    return L"zh-CN";
  }
  if (param_1 == 0x3b5) {
    return L"ko-KR";
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return L"zh-TW";
}


// 0x10006a1b  [lib]
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  int local_14;
  int local_10;
  char local_8;
  
  FUN_1000651d(&local_14,(int *)0x0);
  DAT_10015fe4 = 0;
  if (param_1 == -2) {
    DAT_10015fe4 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_10015fe4 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_10015fe4 = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}


// 0x10006a8c  [lib]
void __cdecl FUN_10006a8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  _memset((void *)(param_1 + 0x18),0,0x101);
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0x21c) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  iVar1 = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  do {
    *(uint8_t *)(param_1 + 0x18 + iVar1) = (&DAT_100150b8)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x101);
  do {
    *(uint8_t *)(param_1 + 0x119 + iVar2) = (&DAT_100151b9)[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


// 0x10006aef  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_10006aef(int param_1)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  BYTE *pBVar6;
  int iVar7;
  int iVar8;
  _cpinfo local_71c;
  WORD local_708 [512];
  WCHAR local_308 [128];
  WCHAR local_208 [128];
  CHAR local_108 [256];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c), BVar3 == 0)) {
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (pbVar5 + (-0x5a - param_1) < (byte *)0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        cVar1 = (char)pbVar5 + ' ';
LAB_10006c6b:
        bVar2 = cVar1 + (char)(-0x19 - param_1);
      }
      else {
        if (pbVar5 + (-0x7a - param_1) < (byte *)0x1a) {
          *pbVar5 = *pbVar5 | 0x20;
          cVar1 = (char)pbVar5 + -0x20;
          goto LAB_10006c6b;
        }
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 + (-0x19 - param_1) < (byte *)0x100);
  }
  else {
    iVar8 = 0x100;
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar6 = local_71c.LeadByte;
    local_108[0] = ' ';
    while (local_71c.LeadByte[0] != 0) {
      bVar2 = pBVar6[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar2 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = ' ';
      }
      pBVar6 = pBVar6 + 2;
      local_71c.LeadByte[0] = *pBVar6;
    }
    FUN_100094b4((int *)0x0,1,local_108,0x100,local_708,*(uint *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((int *)0x0,*(ushort **)(param_1 + 0x21c),0x100,local_108,0x100,local_208,0x100,
               *(uint *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((int *)0x0,*(ushort **)(param_1 + 0x21c),0x200,local_108,0x100,local_308,0x100,
               *(uint *)(param_1 + 4),0);
    pbVar5 = (byte *)(param_1 + 0x19);
    iVar7 = 0;
    do {
      if ((local_708[iVar7] & 1) == 0) {
        if ((local_708[iVar7] & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = *(byte *)((int)local_308 + iVar7);
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = *(byte *)((int)local_208 + iVar7);
      }
      iVar7 = iVar7 + 1;
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


// 0x10006c94  [lib]
int __cdecl FUN_10006c94(int param_1,char param_2,int param_3,uint32_t *param_4)

{
  int *piVar1;
  int iVar2;
  uint32_t *puVar3;
  __acrt_ptd *p_Var4;
  int iVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  uint32_t local_248 [137];
  int *local_24;
  uint32_t **local_20;
  int local_1c;
  __crt_seh_guarded_call<void> local_15;
  uint32_t *local_14;
  
  FUN_10006de9(param_3,param_4);
  local_1c = getSystemCP(param_1);
  if (local_1c == *(int *)(*(int *)(param_3 + 0x48) + 4)) {
    iVar2 = 0;
  }
  else {
    puVar3 = FUN_10008430(0x220);
    iVar2 = local_1c;
    local_14 = puVar3;
    if (puVar3 == (uint32_t *)0x0) {
      FUN_10005e70((LPVOID)0x0);
      iVar2 = -1;
    }
    else {
      puVar6 = *(uint32_t **)(param_3 + 0x48);
      puVar7 = local_248;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = local_248;
      puVar7 = puVar3;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *puVar3 = 0;
      iVar2 = FUN_10006ee4(iVar2,(int)puVar3);
      if (iVar2 == -1) {
        p_Var4 = FUN_10005df2();
        *(uint32_t *)p_Var4 = 0x16;
        FUN_10005e70(local_14);
        iVar2 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_10008a7e();
        }
        piVar1 = *(int **)(param_3 + 0x48);
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(uint8_t **)(param_3 + 0x48) != &DAT_100150a0)) {
          FUN_10005e70(*(LPVOID *)(param_3 + 0x48));
        }
        *local_14 = 1;
        *(uint32_t **)(param_3 + 0x48) = local_14;
        if ((*(uint *)(param_3 + 0x350) & DAT_10015730) == 0) {
          local_24 = &param_3;
          local_20 = &param_4;
          local_1c = 5;
          local_14 = (uint32_t *)0x5;
          __crt_seh_guarded_call<void>::
          operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
                    (&local_15,(<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *)&local_14,
                     (<lambda_ae742caa10f662c28703da3d2ea5e57e> *)&local_24,
                     (<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *)&local_1c);
          if (param_2 != '\0') {
            PTR_DAT_1001567c = (uint8_t *)*param_4;
          }
        }
        FUN_10005e70((LPVOID)0x0);
      }
    }
  }
  return iVar2;
}


// 0x10006de9  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_10006de9(int param_1,uint32_t *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    ___acrt_lock(5);
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_100150a0)) {
          FUN_10005e70(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x48) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_10006e68();
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
  }
  if (piVar2 != (int *)0x0) {
    FUN_10006e71();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10006e68  [lib]
void FUN_10006e68(void)

{
  ___acrt_unlock(5);
  return;
}


// 0x10006e71  [lib]
void FUN_10006e71(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


// 0x10006e89  [lib]
/* Library Function - Single Match
    ___acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___acrt_initialize_multibyte(int reg_EAX)

{
  int iVar1;
  
  if (DAT_10015fe8 == '\0') {
    DAT_10015fe0 = &DAT_100150a0;
    DAT_10015fdc = &DAT_100153c8;
    DAT_10015fd8 = &DAT_100152c0;
    iVar1 = FUN_100057fb();
    reg_EAX = FUN_10006c94(-3,'\x01',iVar1,&DAT_10015fe0);
    DAT_10015fe8 = '\x01';
  }
  return CONCAT31((int3)((uint)reg_EAX >> 8),1);
}


// 0x10006ed1  [lib]
void FUN_10006ed1(void)

{
  int iVar1;
  
  iVar1 = FUN_100057ed();
  FUN_10006de9(iVar1,&DAT_10015fe0);
  return;
}


// 0x10006ee4  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __cdecl FUN_10006ee4(int param_1,int param_2)

{
  byte bVar1;
  uint16_t uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  wchar_t *pwVar7;
  int iVar8;
  byte *pbVar9;
  uint16_t *puVar10;
  byte *pbVar11;
  uint16_t *puVar12;
  byte *pbVar13;
  uint uVar14;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_10015000 ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 == 0) {
LAB_100070d1:
    FUN_10006a8c(param_2);
    return 0;
  }
  uVar14 = 0;
  uVar4 = 0;
  local_20 = 0;
  do {
    if (*(uint *)((int)&DAT_100154d0 + uVar4) == uVar3) {
      _memset((void *)(param_2 + 0x18),0,0x101);
      pbVar11 = (byte *)(local_20 * 0x30 + 0x100154e0);
      do {
        bVar1 = *pbVar11;
        pbVar9 = pbVar11;
        while ((bVar1 != 0 && (pbVar9[1] != 0))) {
          uVar4 = (uint)*pbVar9;
          if (uVar4 <= pbVar9[1]) {
            pbVar13 = (byte *)(param_2 + 0x19 + uVar4);
            do {
              if (0xff < uVar4) break;
              *pbVar13 = *pbVar13 | (&DAT_100154c8)[uVar14];
              uVar4 = uVar4 + 1;
              pbVar13 = pbVar13 + 1;
            } while (uVar4 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar1 = *pbVar9;
        }
        uVar14 = uVar14 + 1;
        pbVar11 = pbVar11 + 8;
      } while (uVar14 < 4);
      *(uint *)(param_2 + 4) = uVar3;
      *(uint32_t *)(param_2 + 8) = 1;
      pwVar7 = CPtoLocaleName(uVar3);
      *(wchar_t **)(param_2 + 0x21c) = pwVar7;
      puVar10 = (uint16_t *)(param_2 + 0xc);
      puVar12 = (uint16_t *)(local_20 * 0x30 + 0x100154d4);
      iVar8 = 6;
      do {
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      goto LAB_100070c9;
    }
    local_20 = local_20 + 1;
    uVar4 = uVar4 + 0x30;
  } while (uVar4 < 0xf0);
  if ((uVar3 == 65000) || (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar3 == 0xfde9) {
    *(uint32_t *)(param_2 + 4) = 0xfde9;
    *(uint32_t *)(param_2 + 0x21c) = 0;
    *(uint32_t *)(param_2 + 0x18) = 0;
    *(uint16_t *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_10015fe4 == 0) {
        return 0xffffffff;
      }
      goto LAB_100070d1;
    }
    _memset((void *)(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(uint32_t *)(param_2 + 0x21c) = 0;
    if (local_1c.MaxCharSize == 2) {
      pBVar6 = local_1c.LeadByte;
      while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
        uVar3 = (uint)*pBVar6;
        if (uVar3 <= bVar1) {
          pbVar11 = (byte *)(param_2 + 0x19 + uVar3);
          iVar8 = (bVar1 - uVar3) + 1;
          do {
            *pbVar11 = *pbVar11 | 4;
            pbVar11 = pbVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        pBVar6 = pBVar6 + 2;
        local_1c.LeadByte[0] = *pBVar6;
      }
      pbVar11 = (byte *)(param_2 + 0x1a);
      iVar8 = 0xfe;
      do {
        *pbVar11 = *pbVar11 | 8;
        pbVar11 = pbVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pwVar7 = CPtoLocaleName(*(int *)(param_2 + 4));
      *(wchar_t **)(param_2 + 0x21c) = pwVar7;
      uVar14 = 1;
    }
  }
  *(uint *)(param_2 + 8) = uVar14;
  *(uint32_t *)(param_2 + 0xc) = 0;
  *(uint32_t *)(param_2 + 0x10) = 0;
  *(uint32_t *)(param_2 + 0x14) = 0;
LAB_100070c9:
  FUN_10006aef(param_2);
  return 0;
}


// 0x100070e9  [lib]
/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  __acrt_ptd *p_Var2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    p_Var2 = FUN_10005df2();
    eVar1 = 0x16;
    *(uint32_t *)p_Var2 = 0x16;
    FUN_10005c74();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      p_Var2 = FUN_10005df2();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var2 = FUN_10005df2();
      eVar1 = 0x22;
    }
    *(errno_t *)p_Var2 = eVar1;
    FUN_10005c74();
  }
  else {
    FUN_10002c10(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}


// 0x1000716a  [lib]
uint32_t __cdecl FUN_1000716a(int *param_1,byte param_2,uint param_3,byte param_4)

{
  uint32_t uVar1;
  int local_14;
  int *local_10;
  int local_c;
  char local_8;
  
  FUN_1000651d(&local_14,param_1);
  if (((*(byte *)(local_c + 0x19 + (uint)param_2) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_10 + (uint)param_2 * 2)) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar1;
}


// 0x100071ba  [lib]
void __cdecl FUN_100071ba(byte param_1)

{
  FUN_1000716a((int *)0x0,param_1,0,4);
  return;
}


// 0x100071d2  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_100071d2(void)

{
  DAT_10015ffc = GetCommandLineA();
  DAT_10016000 = GetCommandLineW();
  return 1;
}


// 0x100071eb  [lib]
uint __cdecl FUN_100071eb(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) {
      return 0;
    }
    if (param_1 < 0xc434) {
      if (param_1 == 0xc433) {
        return 0;
      }
      if (param_1 == 0x2a) {
        return 0;
      }
      if (param_1 == 0xc42c) {
        return 0;
      }
      if (param_1 == 0xc42d) {
        return 0;
      }
      if (param_1 == 0xc42e) {
        return 0;
      }
      iVar1 = param_1 - 0xc431;
      goto LAB_10007222;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) goto LAB_1000727b;
    iVar1 = param_1 - 0xdeaa;
  }
  else {
    if (0xdeb1 < param_1) {
      if (param_1 == 0xdeb2) {
        return 0;
      }
      if (param_1 == 0xdeb3) {
        return 0;
      }
      if (param_1 == 65000) {
        return 0;
      }
      if (param_1 != 0xfde9) {
        return param_2;
      }
LAB_1000727b:
      return param_2 & 8;
    }
    if (param_1 == 0xdeb1) {
      return 0;
    }
    if (param_1 == 0xdead) {
      return 0;
    }
    if (param_1 == 0xdeae) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaf;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 + -1;
LAB_10007222:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2;
}


// 0x10007283  [lib]
void __cdecl
FUN_10007283(uint param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  uint dwFlags;
  
  dwFlags = FUN_100071eb(param_1,param_2);
  MultiByteToWideChar(param_1,dwFlags,param_3,param_4,param_5,param_6);
  return;
}


// 0x100072ad  [lib]
uint __cdecl FUN_100072ad(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) {
      return 0;
    }
    if (param_1 < 0xc434) {
      if (param_1 == 0xc433) {
        return 0;
      }
      if (param_1 == 0x2a) {
        return 0;
      }
      if (param_1 == 0xc42c) {
        return 0;
      }
      if (param_1 == 0xc42d) {
        return 0;
      }
      if (param_1 == 0xc42e) {
        return 0;
      }
      iVar1 = param_1 - 0xc431;
      goto LAB_1000732d;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaa;
    bVar2 = iVar1 == 0;
  }
  else if (param_1 < 0xdeb2) {
    if (param_1 == 0xdeb1) {
      return 0;
    }
    if (param_1 == 0xdead) {
      return 0;
    }
    if (param_1 == 0xdeae) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaf;
    bVar2 = iVar1 == 0;
  }
  else {
    if (param_1 == 0xdeb2) {
      return 0;
    }
    if (param_1 == 0xdeb3) {
      return 0;
    }
    iVar1 = param_1 - 65000;
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return 0;
  }
  iVar1 = iVar1 + -1;
LAB_1000732d:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2 & 0xffffff7f;
}


// 0x1000733d  [lib]
void __cdecl
FUN_1000733d(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
            LPCSTR param_7,LPBOOL param_8)

{
  bool bVar1;
  uint dwFlags;
  UINT CodePage;
  LPBOOL lpUsedDefaultChar;
  
  if ((param_1 == 65000) || (param_1 == 0xfde9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  dwFlags = FUN_100072ad(param_1,param_2);
  lpUsedDefaultChar = param_8;
  if (bVar1) {
    lpUsedDefaultChar = (LPBOOL)0x0;
  }
  if ((bVar1) && (param_7 = (LPCSTR)0x0, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
  WideCharToMultiByte(CodePage,dwFlags,param_3,param_4,param_5,param_6,param_7,lpUsedDefaultChar);
  return;
}


// 0x100073a7  [lib]
/* Library Function - Single Match
    wchar_t const * __cdecl find_end_of_double_null_terminated_sequence(wchar_t const * const)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

wchar_t * __cdecl find_end_of_double_null_terminated_sequence(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
    wVar1 = *param_1;
  }
  return param_1 + 1;
}


// 0x100073de  [lib]
LPSTR FUN_100073de(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  SIZE_T SVar4;
  LPSTR pCVar5;
  
  pWVar1 = GetEnvironmentStringsW();
  pCVar5 = (LPSTR)0x0;
  if (pWVar1 != (LPWCH)0x0) {
    pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
    iVar3 = (int)pwVar2 - (int)pWVar1 >> 1;
    SVar4 = FUN_1000733d(0,0,pWVar1,iVar3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (SVar4 == 0) {
      FreeEnvironmentStringsW(pWVar1);
      pCVar5 = (LPSTR)0x0;
    }
    else {
      pCVar5 = FUN_10008430(SVar4);
      if (pCVar5 == (LPSTR)0x0) {
        FUN_10005e70((LPVOID)0x0);
        FreeEnvironmentStringsW(pWVar1);
        pCVar5 = (LPSTR)0x0;
      }
      else {
        iVar3 = FUN_1000733d(0,0,pWVar1,iVar3,pCVar5,SVar4,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar3 == 0) {
          FUN_10005e70(pCVar5);
          pCVar5 = (LPSTR)0x0;
        }
        else {
          FUN_10005e70((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar1);
      }
    }
  }
  return pCVar5;
}


// 0x10007480  [lib]
/* Library Function - Single Match
    __recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl __recalloc_base(LPCVOID param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  LPVOID pvVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (LPCVOID)0x0) {
      SVar3 = 0;
    }
    else {
      SVar3 = __msize_base(param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar2 = __realloc_base(param_1,uVar4);
    if ((pvVar2 != (LPVOID)0x0) && (SVar3 < uVar4)) {
      _memset((void *)((int)pvVar2 + SVar3),0,uVar4 - SVar3);
    }
  }
  else {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0xc;
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}


// 0x10007500  [lib]
void __cdecl FUN_10007500(LPCVOID param_1,uint param_2,uint param_3)

{
  __recalloc_base(param_1,param_2,param_3);
  return;
}


// 0x1000750b  [lib]
FARPROC __fastcall FUN_1000750b(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_10017000 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_10017000;
  if (DAT_10017000 == (FARPROC)0x0) {
    pFVar1 = FUN_1000758b(param_1,0,"AreFileApisANSI",(int *)&DAT_1000f4c8,(int *)"AreFileApisANSI")
    ;
  }
  return pFVar1;
}


// 0x10007535  [lib]
FARPROC __fastcall FUN_10007535(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_10017048 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_10017048;
  if (DAT_10017048 == (FARPROC)0x0) {
    pFVar1 = FUN_1000758b(param_1,0x12,"LCMapStringEx",(int *)&DAT_1000f4f4,(int *)"LCMapStringEx");
  }
  return pFVar1;
}


// 0x10007560  [lib]
FARPROC __fastcall FUN_10007560(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_10017050 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_10017050;
  if (DAT_10017050 == (FARPROC)0x0) {
    pFVar1 = FUN_1000758b(param_1,0x14,"LocaleNameToLCID",(int *)&DAT_1000f50c,
                          (int *)"LocaleNameToLCID");
  }
  return pFVar1;
}


// 0x1000758b  [lib]
FARPROC __thiscall FUN_1000758b(void *this,int param_1,LPCSTR param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  HMODULE hLibModule;
  BOOL BVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  void *local_8;
  
  local_8 = this;
  do {
    if (param_3 == param_4) {
      pFVar5 = (FARPROC)0x0;
LAB_100075da:
      ___acrt_lock(0xe);
      BVar3 = VirtualProtect(&DAT_10017000,0x80,4,(PDWORD)&local_8);
      if (BVar3 != 0) {
        pFVar4 = pFVar5;
        if (pFVar5 == (FARPROC)0x0) {
          pFVar4 = (FARPROC)0xffffffff;
        }
        LOCK();
        (&DAT_10017000)[param_1] = pFVar4;
        UNLOCK();
        BVar3 = VirtualProtect(&DAT_10017000,0x80,2,(PDWORD)&local_8);
        if (BVar3 != 0) {
          ___acrt_unlock(0xe);
          return pFVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    piVar1 = &DAT_10016008 + *param_3;
    hLibModule = (HMODULE)*piVar1;
    if (hLibModule == (HMODULE)0x0) {
      hLibModule = try_load_library_from_system_directory
                             ((wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_1000ef78)[*param_3]
                             );
      if (hLibModule != (HINSTANCE__ *)0x0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = (int)hLibModule;
        UNLOCK();
        if (iVar2 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_10007644;
      }
      LOCK();
      *piVar1 = -1;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffff) {
LAB_10007644:
      pFVar5 = GetProcAddress(hLibModule,param_2);
      goto LAB_100075da;
    }
    param_3 = param_3 + 1;
  } while( true );
}


// 0x10007658  [lib]
/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t const * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

HINSTANCE__ * __cdecl try_load_library_from_system_directory(wchar_t *param_1)

{
  HINSTANCE__ *pHVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE pHVar4;
  
  pHVar1 = LoadLibraryExW(param_1,(HANDLE)0x0,0x800);
  if (pHVar1 == (HMODULE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x57) {
      iVar3 = FUN_10005380((ushort *)param_1,(ushort *)L"api-ms-",7);
      if (iVar3 != 0) {
        iVar3 = FUN_10005380((ushort *)param_1,(ushort *)L"ext-ms-",7);
        if (iVar3 != 0) {
          pHVar4 = LoadLibraryExW(param_1,(HANDLE)0x0,0);
          return pHVar4;
        }
      }
    }
    pHVar1 = (HINSTANCE__ *)0x0;
  }
  return pHVar1;
}


// 0x100076bb  [lib]
int __thiscall FUN_100076bb(void *this,uint32_t param_1)

{
  FARPROC pFVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (DAT_10017068 == (FARPROC)0xffffffff) {
LAB_10007700:
    iVar2 = -0x3ffffddb;
  }
  else {
    pFVar1 = DAT_10017068;
    if (DAT_10017068 == (FARPROC)0x0) {
      pFVar1 = FUN_1000758b(this,0x1a,"AppPolicyGetProcessTerminationMethod",(int *)&DAT_1000f528,
                            (int *)"AppPolicyGetProcessTerminationMethod");
      if (pFVar1 == (FARPROC)0x0) goto LAB_10007700;
    }
    uVar3 = 0xfffffffa;
    guard_check_icall();
    iVar2 = (*pFVar1)(uVar3,param_1);
  }
  return iVar2;
}


// 0x1000770a  [lib]
/* Library Function - Single Match
    ___acrt_AreFileApisANSI@0
   
   Library: Visual Studio 2019 Release */

int __fastcall ___acrt_AreFileApisANSI_0(void *param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  pFVar1 = FUN_1000750b(param_1);
  if (pFVar1 != (FARPROC)0x0) {
    guard_check_icall();
    iVar2 = (*pFVar1)();
    return iVar2;
  }
  return 1;
}


// 0x10007729  [lib]
void FUN_10007729(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000772f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlsAlloc();
  return;
}


// 0x10007735  [lib]
void FUN_10007735(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000773b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlsFree();
  return;
}


// 0x10007741  [lib]
void FUN_10007741(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000774c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1001700c)();
  return;
}


// 0x1000774e  [lib]
void FUN_1000774e(void)

{
                    /* WARNING: Could not recover jumptable at 0x10007754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlsGetValue();
  return;
}


// 0x1000775a  [lib]
void FUN_1000775a(void)

{
                    /* WARNING: Could not recover jumptable at 0x10007760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlsSetValue();
  return;
}


// 0x10007766  [lib]
void FUN_10007766(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSectionEx();
  return;
}


// 0x10007772  [lib]
/* Library Function - Multiple Matches With Different Base Names
    ___acrt_CompareStringEx@36
    ___acrt_LCMapStringEx@36
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
FID_conflict____acrt_CompareStringEx_36
          (void *this,ushort *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
          int param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9)

{
  FARPROC pFVar1;
  LCID Locale;
  void *this_00;
  
  pFVar1 = FUN_10007535(this);
  if (pFVar1 == (FARPROC)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(this_00,param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall();
    (*pFVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


// 0x100077cf  [lib]
/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall ___acrt_LocaleNameToLCID_8(void *this,ushort *param_1,uint32_t param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_10007560(this);
  if (pFVar1 == (FARPROC)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    guard_check_icall();
    (*pFVar1)(param_1,param_2);
  }
  return;
}


// 0x10007800  [lib]
bool FUN_10007800(void)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = VirtualProtect(&DAT_10017000,0x80,2,&local_8);
  return BVar1 != 0;
}


// 0x10007823  [lib]
bool __fastcall FUN_10007823(void *param_1)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_1001700c == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_1001700c == 0;
    if (!bVar2) goto LAB_10007850;
    pFVar1 = FUN_1000758b(param_1,3,"FlsGetValue2",(int *)&DAT_1000f4dc,(int *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_10007850:
  return !bVar2;
}


// 0x10007854  [lib]
/* Library Function - Single Match
    ___acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t __cdecl ___acrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_10016008;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_10016064);
  }
  return 1;
}


// 0x100078a0  [lib]
bool FUN_100078a0(void)

{
  DAT_10016064 = GetProcessHeap();
  return DAT_10016064 != (HANDLE)0x0;
}


// 0x100078c0  [lib]
uint8_t FUN_100078c0(void)

{
  DAT_10016064 = 0;
  return 1;
}


// 0x100078d6  [lib]
void FUN_100078d6(void)

{
  byte bVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _STARTUPINFOW local_4c;
  uint local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar6 = *(uint *)local_4c.lpReserved2;
    piVar5 = (int *)((int)local_4c.lpReserved2 + uVar6 + 4);
    uVar3 = 0x2000;
    if ((int)uVar6 < 0x2000) {
      uVar3 = uVar6;
    }
    ___acrt_lowio_ensure_fh_exists(uVar3);
    if ((int)DAT_10016268 < (int)uVar3) {
      uVar3 = DAT_10016268;
    }
    uVar6 = 0;
    local_8 = uVar3;
    if (uVar3 != 0) {
      do {
        if ((((*piVar5 != -1) && (*piVar5 != -2)) &&
            (bVar1 = *(byte *)(uVar6 + 4 + (int)local_4c.lpReserved2), (bVar1 & 1) != 0)) &&
           (((bVar1 & 8) != 0 || (DVar2 = GetFileType((HANDLE)*piVar5), uVar3 = local_8, DVar2 != 0)
            ))) {
          iVar4 = (uVar6 & 0x3f) * 0x38 + (&DAT_10016068)[(int)uVar6 >> 6];
          *(int *)(iVar4 + 0x18) = *piVar5;
          *(uint8_t *)(iVar4 + 0x28) = *(uint8_t *)(uVar6 + 4 + (int)local_4c.lpReserved2);
          uVar3 = local_8;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar6 != uVar3);
    }
  }
  return;
}


// 0x10007986  [lib]
void FUN_10007986(void)

{
  HANDLE hFile;
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  uVar2 = 0;
  do {
    iVar1 = (uVar2 & 0x3f) * 0x38 + (&DAT_10016068)[(int)uVar2 >> 6];
    if ((*(int *)(iVar1 + 0x18) == -1) || (*(int *)(iVar1 + 0x18) == -2)) {
      *(uint8_t *)(iVar1 + 0x28) = 0x81;
      if (uVar2 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar2 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0x0)) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(iVar1 + 0x18) = hFile;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 8;
          }
          goto LAB_10007a28;
        }
      }
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
      *(uint32_t *)(iVar1 + 0x18) = 0xfffffffe;
      if (DAT_1001628c != 0) {
        *(uint32_t *)(*(int *)(DAT_1001628c + uVar2 * 4) + 0x10) = 0xfffffffe;
      }
    }
    else {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
LAB_10007a28:
    uVar2 = uVar2 + 1;
    if (uVar2 == 3) {
      return;
    }
  } while( true );
}


// 0x10007a36  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

bool FUN_10007a36(void)

{
  int iVar1;
  void *pvStack_14;
  
  ___acrt_lock(7);
  iVar1 = ___acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_100078d6();
    FUN_10007986();
  }
  FUN_10007a8d();
  ExceptionList = pvStack_14;
  return iVar1 == 0;
}


// 0x10007a8d  [lib]
void FUN_10007a8d(void)

{
  ___acrt_unlock(7);
  return;
}


// 0x10007a96  [lib]
uint32_t FUN_10007a96(void)

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


// 0x10007ac2  [lib]
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


// 0x10007b2a  [lib]
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


// 0x10007b60  [lib]
bool __cdecl FUN_10007b60(uint32_t param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)FUN_10007bc0();
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


// 0x10007ba0  [lib]
void __cdecl FUN_10007ba0(uint32_t param_1)

{
  DAT_1001626c = param_1;
  return;
}


// 0x10007bc0  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_10007bc0(void)

{
  uint uVar1;
  uint32_t local_14;
  
  ___acrt_lock(0);
  uVar1 = FUN_100044fc(DAT_1001626c);
  FUN_10007c0e();
  ExceptionList = local_14;
  return uVar1;
}


// 0x10007c0e  [lib]
void FUN_10007c0e(void)

{
  ___acrt_unlock(0);
  return;
}


// 0x10007c20  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_10007c20(uint param_1)

{
  uint uVar1;
  uint32_t local_14;
  
  ___acrt_lock(0);
  uVar1 = FUN_100044fc(DAT_1001626c);
  DAT_1001626c = FUN_10007c9d(param_1);
  FUN_10007c7c();
  ExceptionList = local_14;
  return uVar1;
}


// 0x10007c7c  [lib]
void FUN_10007c7c(void)

{
  ___acrt_unlock(0);
  return;
}


// 0x10007c9d  [lib]
uint __cdecl FUN_10007c9d(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_10015000 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_10015000;
}


// 0x10007cbc  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_10007cbc(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint32_t local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_10015000 & 0x1f;
  uVar2 = DAT_10016278 ^ DAT_10015000;
  FUN_10007d18();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}


// 0x10007d18  [lib]
void FUN_10007d18(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10007d24  [lib]
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


// 0x10007d66  [lib]
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


// 0x10007d8e  [lib]
/* Library Function - Single Match
    ___acrt_get_sigabrt_handler
   
   Library: Visual Studio 2019 Release */

void ___acrt_get_sigabrt_handler(void)

{
  int local_10 [3];
  
  local_10[1] = 3;
  local_10[0] = 3;
  FUN_10007cbc(local_10);
  return;
}


// 0x10007db5  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10007db5(uint32_t param_1)

{
  DAT_10016270 = param_1;
  DAT_10016274 = param_1;
  DAT_10016278 = param_1;
  DAT_1001627c = param_1;
  return;
}


// 0x10007dd3  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl FUN_10007dd3(int param_1)

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
    p_Var6 = FUN_1000583e();
    if (p_Var6 == (__acrt_ptd *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,*(__crt_signal_action_t **)p_Var6);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_10007e2f:
      p_Var6 = FUN_10005df2();
      *(uint32_t *)p_Var6 = 0x16;
      FUN_10005c74();
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
    pcVar3 = (code *)FUN_100044fc((uint)pcVar3);
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
      iVar4 = FUN_100057ed();
      local_38 = *(uint32_t *)(iVar4 + 8);
      iVar4 = FUN_100057ed();
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
  FUN_10007f5d();
  if (pcVar3 != (code *)0x1) {
    if (param_1 == 8) {
      iVar4 = FUN_100057ed();
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
      iVar4 = FUN_100057ed();
      *(uint32_t *)(iVar4 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// 0x10007f5d  [lib]
void FUN_10007f5d(void)

{
  char unaff_BL;
  
  if (unaff_BL != '\0') {
    ___acrt_unlock(3);
  }
  return;
}


// 0x10007fd0  [lib]
bool FUN_10007fd0(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_10015000 & 0x1f;
  return (DAT_10016280 ^ DAT_10015000) >> bVar1 != 0 ||
         (DAT_10016280 ^ DAT_10015000) << 0x20 - bVar1 != 0;
}


// 0x10007ff0  [lib]
void __cdecl FUN_10007ff0(uint32_t param_1)

{
  DAT_10016280 = param_1;
  return;
}


// 0x10008000  [lib]
uint32_t __cdecl FUN_10008000(uint32_t param_1)

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


// 0x10008039  [lib]
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
  uVar1 = FUN_100081bd(**(int **)param_2,*(int **)(param_2 + 4));
  if (((char)uVar1 != '\0') &&
     ((**(char **)(param_2 + 8) != '\0' || ((*(uint *)(**(int **)param_2 + 0xc) >> 1 & 1) != 0)))) {
    iVar2 = FUN_1000827a((FILE *)**(uint32_t **)param_2);
    if (iVar2 == -1) {
      **(uint32_t **)(param_2 + 0xc) = 0xffffffff;
    }
    else {
      **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + 1;
    }
  }
  FUN_100080b9();
  ExceptionList = local_14;
  return;
}


// 0x100080b9  [lib]
void FUN_100080b9(void)

{
  int unaff_EBP;
  
  __unlock_file((FILE *)**(uint32_t **)(unaff_EBP + 0x10));
  return;
}


// 0x100080c5  [lib]
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
    uVar2 = FUN_100081bd(local_24,*(int **)param_2);
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
  FUN_10008165();
  ExceptionList = local_14;
  return;
}


// 0x10008165  [lib]
void FUN_10008165(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10008171  [lib]
uint32_t __cdecl FUN_10008171(char param_1)

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


// 0x100081bd  [lib]
uint __cdecl FUN_100081bd(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(*(uint *)(param_1 + 0xc) >> 0xd);
    if (((uint)piVar1 & 1) != 0) {
      uVar2 = FUN_100081ee(*(uint *)(param_1 + 0xc));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      *param_2 = *param_2 + 1;
      piVar1 = param_2;
    }
  }
  return (uint)piVar1 & 0xffffff00;
}


// 0x100081ee  [lib]
uint __cdecl FUN_100081ee(uint param_1)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)((param_1 & 0xffffff03) >> 8);
  if (((char)(param_1 & 0xffffff03) == '\x02') && ((param_1 & 0xc0) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return CONCAT31(uVar1,(char)(param_1 >> 0xb)) & 0xffffff01;
}


// 0x10008211  [lib]
uint32_t __cdecl FUN_10008211(FILE *param_1,int *param_2)

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
      uVar4 = FUN_1000a4ad(pcVar3,puVar2,uVar5,param_2);
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


// 0x1000827a  [lib]
uint32_t __cdecl FUN_1000827a(FILE *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int local_2c [10];
  
  uVar2 = 0;
  FUN_10005130(local_2c,(uint32_t *)0x0);
  if (param_1 == (FILE *)0x0) {
    uVar2 = FUN_10008171('\0');
    goto LAB_100082d1;
  }
  iVar1 = FUN_10008211(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_100082d1;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_100082d1;
  }
  uVar2 = 0xffffffff;
LAB_100082d1:
  FUN_10005190(local_2c);
  return uVar2;
}


// 0x100082df  [lib]
/* Library Function - Single Match
    __flushall
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = FUN_10008171('\x01');
  return iVar1;
}


// 0x100082e8  [lib]
uint32_t FUN_100082e8(void)

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
  DAT_1001628c = FUN_10005e10(DAT_10016288,4);
  FUN_10005e70((LPVOID)0x0);
  if (DAT_1001628c == (LPVOID)0x0) {
    DAT_10016288 = 3;
    DAT_1001628c = FUN_10005e10(3,4);
    FUN_10005e70((LPVOID)0x0);
    if (DAT_1001628c == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0;
  puVar3 = (uint32_t *)&DAT_10015688;
  do {
    FUN_10007766();
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


// 0x100083b0  [lib]
void FUN_100083b0(void)

{
  int iVar1;
  
  __flushall();
  FUN_1000a7da();
  iVar1 = 0;
  do {
    ___acrt_stdio_free_buffer_nolock(*(uint32_t **)(iVar1 + (int)DAT_1001628c));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar1 + (int)DAT_1001628c) + 0x20));
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0xc);
  FUN_10005e70(DAT_1001628c);
  DAT_1001628c = (LPVOID)0x0;
  return;
}


// 0x100083fc  [lib]
/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


// 0x10008410  [lib]
/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


// 0x10008430  [lib]
LPVOID __cdecl FUN_10008430(SIZE_T param_1)

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
      iVar2 = FUN_10008e50();
    } while ((iVar2 != 0) && (bVar1 = FUN_10007b60(param_1), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_10005df2();
  *(uint32_t *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


// 0x10008481  [lib]
void __cdecl FUN_10008481(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_10016284) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0)) {
    iVar1 = FUN_10008d79();
    *param_2 = iVar1;
  }
  return;
}


// 0x100084ae  [lib]
void __cdecl FUN_100084ae(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_10016284)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0))
  {
    iVar1 = FUN_10008d79();
    *param_2 = iVar1;
  }
  return;
}


// 0x100084df  [lib]
void __cdecl FUN_100084df(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_10015fe0) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0)) {
    iVar1 = FUN_10006ed1();
    *param_2 = iVar1;
  }
  return;
}


// 0x1000850c  [lib]
void __cdecl FUN_1000850c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_10015fe0)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_10015730) == 0))
  {
    iVar1 = FUN_10006ed1();
    *param_2 = iVar1;
  }
  return;
}


// 0x1000853d  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000853d(LPWSTR param_1,byte *param_2,uint param_3,int *param_4)

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
        FUN_10005280(param_4);
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
              (iVar3 = FUN_10007283(piVar1[2],9,(LPCSTR)param_2,piVar1[1],param_1,
                                    (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             ((*(uint *)(param_4[3] + 4) <= param_3 && (param_2[1] != 0)))) {
            return *(uint *)(param_4[3] + 4);
          }
        }
        else {
          iVar3 = FUN_10007283(piVar1[2],9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0))
          ;
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(uint8_t *)(param_4 + 7) = 1;
        param_4[6] = 0x2a;
        return 0xffffffff;
      }
      uVar2 = FUN_10008893(param_1,param_2,param_3,(uint *)&DAT_10016298,(int)param_4);
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


// 0x1000866d  [lib]
uint __cdecl FUN_1000866d(byte *param_1)

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


// 0x100086ae  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FUN_100086ae(uint *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

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
      uVar3 = FUN_1000866d(local_20);
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
            uVar8 = FUN_1000a92f(uVar5,puVar9);
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
    uVar8 = FUN_1000a943(puVar9,param_5);
  }
  return uVar8;
}


// 0x10008867  [lib]
char FUN_10008867(char *param_1)

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


// 0x10008893  [lib]
uint __cdecl FUN_10008893(uint16_t *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = FUN_100086ae(&local_8,param_2,param_3,param_4,param_5);
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


// 0x100088d6  [lib]
int __thiscall
FUN_100088d6(void *this,ushort *param_1,uint32_t *param_2,uint param_3,uint *param_4,int param_5)

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
    cVar1 = FUN_10008867((char *)pbVar7);
    uVar2 = CONCAT31(extraout_var_00,cVar1);
    while (uVar2 = FUN_100086ae((uint *)0x0,pbVar7,uVar2,param_4,param_5), uVar2 != 0xffffffff) {
      if (uVar2 == 0) {
        return iVar6;
      }
      pbVar7 = pbVar7 + uVar2;
      iVar3 = iVar6 + 1;
      if (uVar2 != 4) {
        iVar3 = iVar6;
      }
      iVar6 = iVar3 + 1;
      cVar1 = FUN_10008867((char *)pbVar7);
      uVar2 = CONCAT31(extraout_var_01,cVar1);
    }
    *(uint8_t *)(param_5 + 0x1c) = 1;
    *(uint32_t *)(param_5 + 0x18) = 0x2a;
    iVar6 = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      cVar1 = FUN_10008867((char *)pbVar7);
      uVar2 = FUN_100086ae((uint *)&local_c,pbVar7,CONCAT31(extraout_var,cVar1),param_4,param_5);
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


// 0x100089e9  [lib]
/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio */

int __cdecl __fileno(FILE *_File)

{
  __acrt_ptd *p_Var1;
  
  if (_File == (FILE *)0x0) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    FUN_10005c74();
    return -1;
  }
  return _File->_file;
}


// 0x10008a10  [lib]
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
  FUN_10008a72();
  ExceptionList = local_14;
  return;
}


// 0x10008a72  [lib]
void FUN_10008a72(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}


// 0x10008a7e  [lib]
uint32_t FUN_10008a7e(void)

{
  uint32_t uVar1;
  
  uVar1 = DAT_100162a8;
  LOCK();
  DAT_100162a8 = 1;
  UNLOCK();
  return uVar1;
}


// 0x10008a89  [lib]
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


// 0x10008ab0  [lib]
void __cdecl FUN_10008ab0(int param_1)

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


// 0x10008b2d  [lib]
void __cdecl FUN_10008b2d(LPVOID param_1)

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
      FUN_10005e70(piVar1);
      FID_conflict____acrt_locale_free_monetary(*(int *)((int)param_1 + 0x88));
    }
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_10005e70(piVar1);
      FID_conflict____free_lconv_num(*(uint32_t **)((int)param_1 + 0x88));
    }
    FUN_10005e70(*(LPVOID *)((int)param_1 + 0x7c));
    FUN_10005e70(*(LPVOID *)((int)param_1 + 0x88));
  }
  if ((*(int **)((int)param_1 + 0x8c) != (int *)0x0) && (**(int **)((int)param_1 + 0x8c) == 0)) {
    FUN_10005e70((LPVOID)(*(int *)((int)param_1 + 0x90) + -0xfe));
    FUN_10005e70((LPVOID)(*(int *)((int)param_1 + 0x94) + -0x80));
    FUN_10005e70((LPVOID)(*(int *)((int)param_1 + 0x98) + -0x80));
    FUN_10005e70(*(LPVOID *)((int)param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(uint8_t ***)((int)param_1 + 0x9c));
  puVar2 = (uint32_t *)((int)param_1 + 0xa0);
  local_8 = 6;
  puVar3 = (uint32_t *)((int)param_1 + 0x28);
  do {
    if ((((uint8_t *)puVar3[-2] != &DAT_10015680) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_10005e70(piVar1);
      FUN_10005e70((LPVOID)*puVar2);
    }
    if (((puVar3[-3] != 0) && (piVar1 = (int *)puVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_10005e70(piVar1);
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_10005e70(param_1);
  return;
}


// 0x10008c75  [lib]
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


// 0x10008c9e  [lib]
/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(uint8_t **param_1)

{
  if (((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1000f558)) &&
     (param_1[0x2c] == (uint8_t *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FUN_10005e70(param_1);
  }
  return;
}


// 0x10008ccf  [lib]
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


// 0x10008cf8  [lib]
void __cdecl FUN_10008cf8(int param_1)

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


// 0x10008d79  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_10008d79(void)

{
  int iVar1;
  int iVar2;
  uint8_t **ppuVar3;
  uint32_t uStack_14;
  
  iVar2 = FUN_100057ed();
  if (((*(uint *)(iVar2 + 0x350) & DAT_10015730) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x4c), iVar1 != 0)) {
    ExceptionList = uStack_14;
    return iVar1;
  }
  ___acrt_lock(4);
  ppuVar3 = __updatetlocinfoEx_nolock((int *)(iVar2 + 0x4c),DAT_10016284);
  FUN_10008dd9();
  if (ppuVar3 != (uint8_t **)0x0) {
    iVar2 = FUN_10008de2();
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// 0x10008dd9  [lib]
void FUN_10008dd9(void)

{
  ___acrt_unlock(4);
  return;
}


// 0x10008de2  [lib]
void FUN_10008de2(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


// 0x10008dfa  [lib]
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
      FUN_10008ab0((int)param_2);
      if (((ppuVar1 != (uint8_t **)0x0) &&
          (FUN_10008cf8((int)ppuVar1), ppuVar1[3] == (uint8_t *)0x0)) &&
         (ppuVar1 != &PTR_DAT_100155c0)) {
        FUN_10008b2d(ppuVar1);
      }
    }
  }
  return param_2;
}


// 0x10008e50  [lib]
uint32_t FUN_10008e50(void)

{
  return DAT_100162ac;
}


// 0x10008e60  [lib]
/* Library Function - Single Match
    __set_new_mode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl __set_new_mode(int param_1)

{
  uint32_t uVar1;
  __acrt_ptd *p_Var2;
  
  uVar1 = DAT_100162ac;
  if ((param_1 != 0) && (param_1 != 1)) {
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x16;
    FUN_10005c74();
    return 0xffffffff;
  }
  LOCK();
  DAT_100162ac = param_1;
  UNLOCK();
  return uVar1;
}


// 0x10008e90  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_10008e90(uint8_t *param_1,uint param_2,uint param_3,uint8_t *param_4)

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
    p_Var3 = FUN_10005df2();
    *(uint32_t *)p_Var3 = 0x16;
    FUN_10005c74();
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


// 0x100092d0  [lib]
int __cdecl FUN_100092d0(char *param_1,int param_2,int param_3,int param_4)

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
        p_Var3 = FUN_10005df2();
        *(uint32_t *)p_Var3 = 0x22;
        FUN_10005c74();
        return 0x22;
      }
      param_1[param_2 + -1] = '\0';
      return 0x50;
    }
    *param_1 = '\0';
  }
LAB_10009312:
  p_Var3 = FUN_10005df2();
  *(uint32_t *)p_Var3 = 0x16;
  FUN_10005c74();
  return 0x16;
}


// 0x100093d0  [lib]
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


// 0x10009410  [lib]
/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  uchar *puVar1;
  
  puVar1 = __mbsdec_l(_Start,_Pos,(_locale_t)0x0);
  return puVar1;
}


// 0x10009427  [lib]
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
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    FUN_10005c74();
    return (uchar *)0x0;
  }
  if (_Pos == (uchar *)0x0) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    FUN_10005c74();
  }
  else if (_Start < _Pos) {
    FUN_1000651d(local_14,(int *)_Locale);
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


// 0x100094b4  [lib]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL __cdecl
FUN_100094b4(int *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,uint param_6,
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
  FUN_1000651d(&local_20,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_1c + 8);
  }
  BVar3 = 0;
  uVar1 = 1;
  if (param_7 != 0) {
    uVar1 = 9;
  }
  local_10 = FUN_10007283(param_6,uVar1,param_3,param_4,(LPWSTR)0x0,0);
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
        cchSrc = FUN_10007283(param_6,1,param_3,param_4,lpSrcStr,local_10);
        if (cchSrc != 0) {
          BVar3 = GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
        }
      }
    }
  }
  else {
    puVar2 = FUN_10008430(uVar1);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar2 != (uint32_t *)0x0) {
      *puVar2 = 0xdddd;
      goto LAB_10009549;
    }
  }
  FUN_100095b2((int)lpSrcStr);
LAB_1000958e:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  return BVar3;
}


// 0x100095b2  [lib]
void __cdecl FUN_100095b2(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    FUN_10005e70((int *)(param_1 + -8));
  }
  return;
}


// 0x100095d2  [lib]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FUN_100095d2(int *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,LPWSTR param_6,
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
    iVar1 = FUN_1000abe0(param_4,param_5);
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
  iVar1 = FUN_10007283(param_8,uVar2,param_4,iVar3,(LPWSTR)0x0,0);
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
          (iVar3 = FUN_10007283(param_8,1,param_4,iVar3,pWVar6,iVar1), iVar3 != 0)) &&
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
                iVar3 = FUN_1000733d(param_8,0,pWVar7,iVar3,(LPSTR)param_6,param_7,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
                if (iVar3 != 0) {
                  FUN_100095b2((int)pWVar7);
                  goto LAB_100097a4;
                }
              }
            }
          }
          else {
            this_00 = pvVar4;
            puVar5 = FUN_10008430((SIZE_T)pvVar4);
            pWVar7 = (LPCWSTR)0x0;
            if (puVar5 != (uint32_t *)0x0) {
              *puVar5 = 0xdddd;
              goto LAB_10009744;
            }
          }
          FUN_100095b2((int)pWVar7);
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
    puVar5 = FUN_10008430(uVar2);
    pWVar6 = (LPCWSTR)0x0;
    if (puVar5 != (uint32_t *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_10009683;
    }
  }
  iVar3 = 0;
LAB_100097a4:
  FUN_100095b2((int)pWVar6);
  return iVar3;
}


// 0x100097bf  [lib]
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
  
  FUN_1000651d(&local_14,param_1);
  FUN_100095d2(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}


// 0x10009808  [lib]
uint FUN_10009808(void)

{
  uint32_t in_EAX;
  uint uVar1;
  
  uVar1 = ___acrt_initialize_multibyte(in_EAX);
  return uVar1 & 0xff ^ 1;
}


// 0x10009820  [lib]
/* Library Function - Single Match
    __msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SIZE_T __cdecl __msize_base(LPCVOID param_1)

{
  __acrt_ptd *p_Var1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x16;
    FUN_10005c74();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_10016064,0,param_1);
  return SVar2;
}


// 0x10009860  [lib]
void __cdecl FUN_10009860(LPCVOID param_1)

{
  __msize_base(param_1);
  return;
}


// 0x10009870  [lib]
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
    pvVar2 = FUN_10008430(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_10005e70(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_10016064,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar4 = FUN_10008e50();
        } while ((iVar4 != 0) && (bVar1 = FUN_10007b60(param_2), CONCAT31(extraout_var,bVar1) != 0))
        ;
      }
      p_Var3 = FUN_10005df2();
      *(uint32_t *)p_Var3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}


// 0x100098d9  [lib]
uint32_t __cdecl FUN_100098d9(ushort *param_1)

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
    iVar2 = FUN_1000ac00(param_1,*(ushort **)(&UNK_10011140 + iVar4 * 8),0x55);
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


// 0x1000992d  [lib]
/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t __cdecl ___acrt_DownlevelLocaleNameToLCID(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = FUN_100098d9(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(uint32_t *)(&DAT_10010018 + uVar1 * 8);
    }
  }
  return 0;
}


// 0x10009959  [lib]
/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

uint32_t * ___acrt_lowio_create_handle_array(void)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  
  puVar2 = FUN_10005e10(0x40,0x38);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = (uint32_t *)0x0;
  }
  else if (puVar2 != puVar2 + 0x380) {
    puVar3 = puVar2 + 8;
    do {
      FUN_10007766();
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
  FUN_10005e70((LPVOID)0x0);
  return puVar2;
}


// 0x100099d4  [lib]
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
    FUN_10005e70(param_1);
  }
  return;
}


// 0x10009a09  [lib]
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
    FUN_10009a9e();
  }
  else {
    p_Var1 = FUN_10005df2();
    uVar4 = 9;
    *(uint32_t *)p_Var1 = 9;
    FUN_10005c74();
  }
  ExceptionList = local_14;
  return uVar4;
}


// 0x10009a9e  [lib]
void FUN_10009a9e(void)

{
  ___acrt_unlock(7);
  return;
}


// 0x10009aa7  [lib]
void __cdecl FUN_10009aa7(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_10016068)[(int)param_1 >> 6]));
  return;
}


// 0x10009aca  [lib]
/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_10016068)[(int)param_1 >> 6]));
  return;
}


// 0x10009aed  [lib]
uint32_t __cdecl FUN_10009aed(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (((*(byte *)(iVar3 + 0x28 + (&DAT_10016068)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar3 + 0x18 + (&DAT_10016068)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_1000ac67();
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
  p_Var2 = FUN_10005df2();
  *(uint32_t *)p_Var2 = 9;
  p_Var2 = FUN_10005ddd();
  *(uint32_t *)p_Var2 = 0;
  return 0xffffffff;
}


// 0x10009b7e  [lib]
uint32_t __cdecl FUN_10009b7e(uint param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_10005ddd();
    *(uint32_t *)p_Var1 = 0;
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_10016068)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(uint32_t *)((&DAT_10016068)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    p_Var1 = FUN_10005ddd();
    *(uint32_t *)p_Var1 = 0;
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
    FUN_10005c74();
  }
  return 0xffffffff;
}


// 0x10009be8  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t FUN_10009be8(uint *param_1,uint32_t *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  uint32_t uVar5;
  void *local_14;
  
  uVar5 = 0;
  FUN_10009aa7(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_10016068)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)FUN_10009b7e(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_10009c58;
    DVar3 = GetLastError();
    p_Var4 = FUN_10005ddd();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_10005df2();
  *(uint32_t *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_10009c58:
  FUN_10009c7e();
  ExceptionList = local_14;
  return uVar5;
}


// 0x10009c7e  [lib]
void FUN_10009c7e(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}


// 0x10009c8a  [lib]
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
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10016268)) &&
       ((*(byte *)((&DAT_10016068)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x38) & 1) !=
        0)) {
      local_10 = &_FileHandle;
      local_c = _FileHandle;
      local_14 = _FileHandle;
      iVar2 = FUN_10009be8(&local_14,&local_10);
      return iVar2;
    }
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
    FUN_10005c74();
  }
  return -1;
}


// 0x10009d07  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * __cdecl FUN_10009d07(DWORD *param_1,uint param_2,uint *param_3,int param_4,int *param_5)

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
    FUN_10005280(param_5);
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
        iVar10 = FUN_100088d6(local_38,(ushort *)&local_44,&local_3c,(uint)local_38,
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
          FUN_10002c10((uint *)((int)local_1c + (int)local_38),local_30,local_4c);
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
        iVar10 = FUN_100088d6(&local_80,(ushort *)&local_44,&local_70,(uint)local_38,
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
          uVar12 = FUN_1000853d((LPWSTR)&local_44,(byte *)local_30,2,local_40);
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
      uVar12 = FUN_1000853d((LPWSTR)&local_44,(byte *)puVar11,uVar12,local_40);
      if (uVar12 == 0xffffffff) {
        ExceptionList = local_10;
        return param_1;
      }
    }
LAB_10009f89:
    local_30 = (uint *)((int)local_30 + 1);
    local_3c = (uint *)FUN_1000733d(local_74,0,(LPCWSTR)&local_44,(int)local_38,local_2c,5,
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


// 0x1000a0d2  [lib]
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


// 0x1000a13a  [lib]
bool __cdecl FUN_1000a13a(uint param_1,int *param_2)

{
  byte bVar1;
  uint32_t extraout_var;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  DWORD local_8;
  
  bVar1 = FUN_1000a8c5(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar4 = (int)param_1 >> 6;
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (*(char *)((&DAT_10016068)[iVar4] + 0x28 + iVar3) < '\0') {
      if ((char)param_2[5] == '\0') {
        FUN_10005280(param_2);
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


// 0x1000a1b7  [lib]
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


// 0x1000a292  [lib]
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


// 0x1000a37b  [lib]
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
      uVar3 = FUN_1000733d(0xfde9,0,local_6b4,(int)pWVar2 - (int)local_6b4 >> 1,local_140c,0xd55,
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


// 0x1000a4ad  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl FUN_1000a4ad(char *param_1,uint *param_2,uint param_3,int *param_4)

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
        FUN_10009aa7((uint)param_1);
        iVar3 = -1;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_10016068)[(int)param_1 >> 6]) & 1) == 0) {
          *(uint8_t *)(param_4 + 7) = 1;
          param_4[6] = 9;
          *(uint8_t *)(param_4 + 9) = 1;
          param_4[8] = 0;
        }
        else {
          iVar3 = FUN_1000a5be(param_1,param_2,param_3,param_4);
        }
        FUN_1000a5b6(param_1);
        ExceptionList = local_14;
        return iVar3;
      }
    }
    *(uint8_t *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(uint8_t *)(param_4 + 7) = 1;
    param_4[6] = 9;
    FUN_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  ExceptionList = local_14;
  return -1;
}


// 0x1000a5b6  [lib]
void FUN_1000a5b6(uint reg_EDI)

{
  ___acrt_lowio_unlock_fh(reg_EDI);
  return;
}


// 0x1000a5be  [lib]
int __cdecl FUN_1000a5be(char *param_1,uint *param_2,uint param_3,int *param_4)

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
    FUN_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  local_18 = (int)param_1 >> 6;
  local_1c = ((uint)param_1 & 0x3f) * 0x38;
  local_5 = *(char *)(local_1c + 0x29 + (&DAT_10016068)[local_18]);
  if (((local_5 == '\x02') || (local_5 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_1000a5ea;
  if ((*(byte *)(local_1c + 0x28 + (&DAT_10016068)[local_18]) & 0x20) != 0) {
    FUN_1000acf0((uint)param_1,0,0,(PLARGE_INTEGER)0x2,(int)param_4,local_1c);
  }
  DVar4 = 0;
  local_34[3] = 0;
  bVar1 = FUN_1000a13a((uint)local_14,param_4);
  if (bVar1) {
    if (local_5 == '\0') {
      pDVar2 = FUN_10009d07(local_34,(uint)local_14,local_c,local_10,param_4);
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
    FUN_10005db9(DVar4,(int)param_4);
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


// 0x1000a7da  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_1000a7da(void)

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
        iVar1 = FUN_1000ae65(*(FILE **)(DAT_1001628c + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1001628c + iVar2 * 4) + 0x20));
      FUN_10005e70(*(LPVOID *)(DAT_1001628c + iVar2 * 4));
      *(uint32_t *)(DAT_1001628c + iVar2 * 4) = 0;
    }
  }
  FUN_1000a87c();
  ExceptionList = local_14;
  return local_20;
}


// 0x1000a87c  [lib]
void FUN_1000a87c(void)

{
  ___acrt_unlock(8);
  return;
}


// 0x1000a885  [lib]
/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_free_buffer_nolock(uint32_t *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    FUN_10005e70((LPVOID)param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x1000a8c5  [lib]
byte __cdecl FUN_1000a8c5(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10016268)) {
      return *(byte *)((&DAT_10016068)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 9;
    FUN_10005c74();
  }
  return 0;
}


// 0x1000a920  [lib]
void FUN_1000a920(void)

{
  uint uVar1;
  
  uVar1 = FUN_1000b2c0();
  FUN_1000b290(uVar1);
  return;
}


// 0x1000a92f  [lib]
uint32_t __cdecl FUN_1000a92f(uint32_t param_1,uint32_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}


// 0x1000a943  [lib]
uint32_t __cdecl FUN_1000a943(uint32_t *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(uint8_t *)(param_2 + 0x1c) = 1;
  *(uint32_t *)(param_2 + 0x18) = 0x2a;
  return 0xffffffff;
}


// 0x1000a965  [lib]
/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_monetary
    ___free_lconv_mon
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict____acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(uint8_t **)(param_1 + 0xc) != PTR_DAT_10015744) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0xc));
    }
    if (*(uint8_t **)(param_1 + 0x10) != PTR_DAT_10015748) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x10));
    }
    if (*(uint8_t **)(param_1 + 0x14) != PTR_DAT_1001574c) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x14));
    }
    if (*(uint8_t **)(param_1 + 0x18) != PTR_DAT_10015750) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x18));
    }
    if (*(uint8_t **)(param_1 + 0x1c) != PTR_DAT_10015754) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x1c));
    }
    if (*(uint8_t **)(param_1 + 0x20) != PTR_DAT_10015758) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x20));
    }
    if (*(uint8_t **)(param_1 + 0x24) != PTR_DAT_1001575c) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x24));
    }
    if (*(uint8_t **)(param_1 + 0x38) != PTR_DAT_10015770) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x38));
    }
    if (*(uint8_t **)(param_1 + 0x3c) != PTR_DAT_10015774) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x3c));
    }
    if (*(uint8_t **)(param_1 + 0x40) != PTR_DAT_10015778) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x40));
    }
    if (*(uint8_t **)(param_1 + 0x44) != PTR_DAT_1001577c) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x44));
    }
    if (*(uint8_t **)(param_1 + 0x48) != PTR_DAT_10015780) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x48));
    }
    if (*(uint8_t **)(param_1 + 0x4c) != PTR_DAT_10015784) {
      FUN_10005e70(*(uint8_t **)(param_1 + 0x4c));
    }
  }
  return;
}


// 0x1000aa63  [lib]
/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_numeric
    ___free_lconv_num
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict____free_lconv_num(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    if ((uint8_t *)*param_1 != PTR_DAT_10015738) {
      FUN_10005e70((uint8_t *)*param_1);
    }
    if ((uint8_t *)param_1[1] != PTR_DAT_1001573c) {
      FUN_10005e70((uint8_t *)param_1[1]);
    }
    if ((uint8_t *)param_1[2] != PTR_DAT_10015740) {
      FUN_10005e70((uint8_t *)param_1[2]);
    }
    if ((uint8_t *)param_1[0xc] != PTR_DAT_10015768) {
      FUN_10005e70((uint8_t *)param_1[0xc]);
    }
    if ((uint8_t *)param_1[0xd] != PTR_DAT_1001576c) {
      FUN_10005e70((uint8_t *)param_1[0xd]);
    }
  }
  return;
}


// 0x1000aacc  [lib]
void __cdecl FUN_1000aacc(uint32_t *param_1,int param_2)

{
  uint32_t *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_10005e70((LPVOID)*param_1);
  }
  return;
}


// 0x1000aaf1  [lib]
/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_time(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    FUN_1000aacc(param_1,7);
    FUN_1000aacc(param_1 + 7,7);
    FUN_1000aacc(param_1 + 0xe,0xc);
    FUN_1000aacc(param_1 + 0x1a,0xc);
    FUN_1000aacc(param_1 + 0x26,2);
    FUN_10005e70((LPVOID)param_1[0x28]);
    FUN_10005e70((LPVOID)param_1[0x29]);
    FUN_10005e70((LPVOID)param_1[0x2a]);
    FUN_1000aacc(param_1 + 0x2d,7);
    FUN_1000aacc(param_1 + 0x34,7);
    FUN_1000aacc(param_1 + 0x3b,0xc);
    FUN_1000aacc(param_1 + 0x47,0xc);
    FUN_1000aacc(param_1 + 0x53,2);
    FUN_10005e70((LPVOID)param_1[0x55]);
    FUN_10005e70((LPVOID)param_1[0x56]);
    FUN_10005e70((LPVOID)param_1[0x57]);
    FUN_10005e70((LPVOID)param_1[0x58]);
  }
  return;
}


// 0x1000abe0  [lib]
void __cdecl FUN_1000abe0(char *param_1,int param_2)

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


// 0x1000ac00  [lib]
int __cdecl FUN_1000ac00(ushort *param_1,ushort *param_2,int param_3)

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


// 0x1000ac67  [lib]
uint32_t FUN_1000ac67(void)

{
  return DAT_100162b8;
}


// 0x1000ac6d  [lib]
uint64_t __cdecl
FUN_1000ac6d(uint param_1,uint32_t param_2,uint32_t param_3,PLARGE_INTEGER param_4,int param_5,
            DWORD reg_EDI)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)FUN_10009b7e(param_1);
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
      FUN_10005db9(DVar3,param_5);
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


// 0x1000acf0  [lib]
uint64_t __cdecl
FUN_1000acf0(uint param_1,uint32_t param_2,uint32_t param_3,PLARGE_INTEGER param_4,int param_5,
            uint32_t reg_EDI)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1000ac6d(param_1,param_2,param_3,param_4,param_5,reg_EDI);
  return uVar1;
}


// 0x1000ad0e  [lib]
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


// 0x1000ad40  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl FUN_1000ad40(FILE *param_1,int *param_2)

{
  uint32_t uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      uVar1 = FUN_1000add7(param_1,param_2);
      FUN_1000adcf(param_1);
      ExceptionList = local_14;
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  ExceptionList = local_14;
  return 0xffffffff;
}


// 0x1000adcf  [lib]
void FUN_1000adcf(FILE *reg_ESI)

{
  __unlock_file(reg_ESI);
  return;
}


// 0x1000add7  [lib]
uint32_t __cdecl FUN_1000add7(FILE *param_1,int *param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((uint)param_1->_flag >> 0xd & 1) != 0) {
      uVar1 = FUN_10008211(param_1,param_2);
      ___acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar2 = __fileno(param_1);
      iVar3 = FUN_1000b63c(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_10005e70(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}


// 0x1000ae65  [lib]
uint32_t __cdecl FUN_1000ae65(FILE *param_1)

{
  uint32_t uVar1;
  int local_2c [10];
  
  FUN_10005130(local_2c,(uint32_t *)0x0);
  uVar1 = FUN_1000ad40(param_1,local_2c);
  FUN_10005190(local_2c);
  return uVar1;
}


// 0x1000aea0  [lib]
void __fastcall FUN_1000aea0(void *param_1)

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
    FUN_1000baaf(param_1,iVar3,in_XMM0._4_4_);
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
  FUN_1000b7c0((uint64_t *)&stack0xfffffff8,(uint64_t *)&stack0xfffffff8,&local_10,iVar3);
  return;
}


// 0x1000b290  [lib]
uint __cdecl FUN_1000b290(uint param_1)

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


// 0x1000b2c0  [lib]
uint FUN_1000b2c0(void)

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


// 0x1000b4a0  [lib]
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


// 0x1000b501  [lib]
/* Library Function - Single Match
    void __cdecl __dcrt_lowio_initialize_console_output(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __dcrt_lowio_initialize_console_output(void)

{
  DAT_10015890 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// 0x1000b520  [lib]
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


// 0x1000b53f  [lib]
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


// 0x1000b556  [lib]
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


// 0x1000b5ab  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t FUN_1000b5ab(uint *param_1,uint32_t *param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  void *local_14;
  
  FUN_10009aa7(*param_1);
  uVar1 = *(uint *)*param_2;
  iVar2 = param_2[1];
  if ((*(byte *)((&DAT_10016068)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) == 0) {
    *(uint8_t *)(iVar2 + 0x1c) = 1;
    *(uint32_t *)(iVar2 + 0x18) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1000b6df(uVar1,iVar2);
  }
  FUN_1000b630();
  ExceptionList = local_14;
  return uVar3;
}


// 0x1000b630  [lib]
void FUN_1000b630(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}


// 0x1000b63c  [lib]
uint32_t __cdecl FUN_1000b63c(uint param_1,int *param_2)

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
      uVar1 = FUN_1000b5ab(&local_10,&local_18);
      return uVar1;
    }
    *(uint8_t *)(param_2 + 9) = 1;
    param_2[8] = 0;
    *(uint8_t *)(param_2 + 7) = 1;
    param_2[6] = 9;
    FUN_10005bf7((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}


// 0x1000b6df  [lib]
uint32_t __cdecl FUN_1000b6df(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  uint32_t uVar4;
  DWORD DVar5;
  
  iVar1 = FUN_10009b7e(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_10016068 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_10016068 + 0x60) & 1) != 0)))) {
      iVar1 = FUN_10009b7e(2);
      iVar2 = FUN_10009b7e(1);
      if (iVar2 == iVar1) goto LAB_1000b6f5;
    }
    hObject = (HANDLE)FUN_10009b7e(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_1000b747;
    }
  }
LAB_1000b6f5:
  DVar5 = 0;
LAB_1000b747:
  FUN_10009aed(param_1);
  *(uint8_t *)((&DAT_10016068)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_10005db9(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// 0x1000b77f  [lib]
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


// 0x1000b7c0  [lib]
void __cdecl FUN_1000b7c0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,int param_4)

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
    pcVar1 = FUN_10008000;
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
      p_Var3 = FUN_10005df2();
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
    p_Var3 = FUN_10005df2();
    *(uint32_t *)p_Var3 = 0x21;
  }
LAB_1000b9ae:
  *param_3 = local_c;
  return;
}


// 0x1000baaf  [lib]
uint __thiscall FUN_1000baaf(void *this,int param_1,uint param_2)

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
      uVar1 = FUN_1000c47c(reg_EAX);
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


// 0x1000bb70  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_1000bb70(void)

{
  DAT_100162cc = IsProcessorFeaturePresent(10);
  return 0;
}


// 0x1000bb80  [lib]
float10 __cdecl FUN_1000bb80(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = FUN_1000bca0();
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    fVar3 = FUN_1000c640((double)CONCAT44(param_2,param_1));
    if (((double)fVar3 != (double)CONCAT44(param_2,param_1)) && ((uVar1 & 0x20) == 0)) {
      fVar3 = FUN_1000c660(0x10,0xc,CONCAT44(param_2,param_1),(double)fVar3,uVar1);
      return fVar3;
    }
    FUN_1000bca0();
    return (float10)(double)fVar3;
  }
  iVar2 = FUN_1000d080(param_1,param_2);
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    fVar3 = FUN_1000c660(8,0xc,CONCAT44(param_2,param_1),(double)CONCAT44(param_2,param_1) + 1.0,
                         uVar1);
    return fVar3;
  }
  FUN_1000bca0();
  return (float10)(double)CONCAT44(param_2,param_1);
}


// 0x1000bc80  [lib]
int FUN_1000bc80(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// 0x1000bca0  [lib]
int FUN_1000bca0(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// 0x1000bcd0  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bcd0(void)

{
  return;
}


// 0x1000bd30  [lib]
int FUN_1000bd30(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// 0x1000bd50  [lib]
void FUN_1000bd50(void)

{
  float10 in_ST0;
  
  FUN_1000bd6e((double)in_ST0);
  return;
}


// 0x1000bd6e  [lib]
float10 __cdecl FUN_1000bd6e(double param_1)

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
  FUN_1000b7c0(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}


// 0x1000c47c  [lib]
uint32_t FUN_1000c47c(uint reg_EAX)

{
  if ((reg_EAX & 0x80000) != 0) {
    return 0;
  }
  return 0;
}


// 0x1000c495  [lib]
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


// 0x1000c4fb  [lib]
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


// 0x1000c5e0  [lib]
float10 __fastcall
FUN_1000c5e0(uint32_t param_1,int param_2,uint16_t param_3,uint32_t param_4,uint32_t param_5
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
  FUN_1000d300(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}


// 0x1000c5f7  [lib]
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
  FUN_1000d300(param_2,&local_24,&param_3);
  return (float10)local_c;
}


// 0x1000c640  [lib]
float10 __cdecl FUN_1000c640(double param_1)

{
  return (float10)ROUND(param_1);
}


// 0x1000c660  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 __cdecl
FUN_1000c660(uint param_1,int param_2,uint64_t param_3,double param_4,uint param_5)

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
  bVar1 = FUN_1000c7a0(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    FUN_1000cb00(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
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
  bVar1 = FUN_10007fd0();
  if (bVar1) {
    if (iVar3 != 0) {
      fVar4 = FUN_1000ce70(iVar3,param_2,(int)param_3,(int)((ulonglong)param_3 >> 0x20),0,0,
                           SUB84(param_4,0),(int)((ulonglong)param_4 >> 0x20));
      return fVar4;
    }
  }
  else if (iVar3 == 1) {
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x21;
  }
  else if ((iVar3 == 2) || (iVar3 == 3)) {
    p_Var2 = FUN_10005df2();
    *(uint32_t *)p_Var2 = 0x22;
  }
  FUN_1000bca0();
  return (float10)param_4;
}


// 0x1000c7a0  [lib]
bool __cdecl FUN_1000c7a0(uint param_1,double *param_2,uint param_3)

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
      fVar6 = FUN_1000cf70(SUB84(dVar7,0),(uint)((ulonglong)dVar7 >> 0x20),&local_20);
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
          iVar3 = FUN_1000a920();
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
    FUN_1000bcd0();
  }
  return uVar5 == 0;
}


// 0x1000cad0  [lib]
void __cdecl
FUN_1000cad0(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  FUN_1000cb00(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


// 0x1000cb00  [lib]
void __cdecl
FUN_1000cb00(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
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
  uVar3 = FUN_1000bd30();
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
  FUN_1000bc80();
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


// 0x1000ce30  [lib]
void __cdecl FUN_1000ce30(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_10005df2();
    *(uint32_t *)p_Var1 = 0x22;
    return;
  }
  return;
}

