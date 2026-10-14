/*
 * lib/msvc_crt_stl_part01.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x103017bb - 0x10322fda
 * Functions     : 232
 * Attribution   : lib=232
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x103017bb  [lib]
__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::showmanyc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x103017bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


// 0x103017c1  [lib]
__int64 __thiscall
std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::showmanyc
          (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x103017c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}


// 0x103017c7  [lib]
void __fastcall FUN_103017c7(int param_1)

{
  code *pcVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  guard_check_icall();
  puVar2 = (uint32_t *)(*pcVar1)();
  if (puVar2 != (uint32_t *)0x0) {
    uVar3 = 1;
    pcVar1 = *(code **)*puVar2;
    guard_check_icall();
    (*pcVar1)(uVar3);
  }
  return;
}


// 0x103017f8  [lib]
void FUN_103017f8(void)

{
  uint32_t *puVar1;
  
  while (puVar1 = DAT_103d5b40, DAT_103d5b40 != (uint32_t *)0x0) {
    DAT_103d5b40 = (uint32_t *)*DAT_103d5b40;
    FUN_103017c7((int)puVar1);
    FUN_1030207a(puVar1);
  }
  return;
}


// 0x1030181f  [lib]
/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (uint32_t *)0x0) {
    puVar1 = (uint32_t *)0x0;
  }
  else {
    *puVar1 = DAT_103d5b40;
    puVar1[1] = param_1;
  }
  DAT_103d5b40 = puVar1;
  return;
}


// 0x1030184b  [lib]
/* Library Function - Single Match
    ___std_get_string_size_without_trailing_whitespace@8
   
   Library: Visual Studio 2019 Release */

void ___std_get_string_size_without_trailing_whitespace_8(int param_1,int param_2)

{
  while ((param_2 != 0 && ((&DAT_103672d0)[*(byte *)(param_1 + -1 + param_2)] != '\0'))) {
    param_2 = param_2 + -1;
  }
  return;
}


// 0x1030186f  [lib]
/* Library Function - Single Match
    ___std_system_error_allocate_message@8
   
   Library: Visual Studio 2019 Release */

void ___std_system_error_allocate_message_8(DWORD param_1,int *param_2)

{
  DWORD DVar1;
  
  DVar1 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,0,(LPSTR)param_2,0,(va_list *)0x0);
  ___std_get_string_size_without_trailing_whitespace_8(*param_2,DVar1);
  return;
}


// 0x10301898  [lib]
HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10301898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


// 0x1030189e  [lib]
void FUN_1030189e(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
  }
  return;
}


// 0x103018be  [lib]
uint FUN_103018be(void)

{
  UINT UVar1;
  BOOL BVar2;
  
  UVar1 = ___lc_codepage_func();
  if (UVar1 == 0xfde9) {
    return 0xfde9;
  }
  BVar2 = AreFileApisANSI();
  return (uint)(BVar2 == 0);
}


// 0x103018dc  [lib]
/* Library Function - Single Match
    ___std_fs_convert_narrow_to_wide@20
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint64_t
___std_fs_convert_narrow_to_wide_20
          (UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return CONCAT44(DVar2,iVar1);
}


// 0x10301910  [lib]
uint64_t FUN_10301910(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0)
  ;
  if (iVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 == 0x3ec) {
    iVar1 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
  }
  return CONCAT44(DVar2,iVar1);
}


// 0x1030197f  [lib]
/* Library Function - Single Match
    ___std_fs_create_directory@4
   
   Library: Visual Studio 2019 Release */

uint64_t ___std_fs_create_directory_4(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint32_t local_2c [4];
  uint local_1c;
  uint local_c;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      DVar2 = FUN_103019de(param_1,local_2c,3,0xffffffff);
      if ((DVar2 == 0) && ((local_1c >> 4 & 1) == 0)) {
        DVar2 = 0xb7;
      }
    }
    local_c = local_c & 0xffffff00;
  }
  else {
    local_c = CONCAT31(local_c._1_3_,1);
    DVar2 = 0;
  }
  return CONCAT44(DVar2,local_c);
}


// 0x103019de  [lib]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_103019de(LPCWSTR param_1,uint32_t *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  HANDLE local_78;
  uint32_t local_74;
  DWORD local_70;
  byte local_69;
  uint8_t local_68 [16];
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_48;
  uint local_3c [3];
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint local_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  uVar1 = param_3 & 1;
  local_69 = (byte)param_3 & 1;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 >> 2 & 1) != 0)) {
    return 0x57;
  }
  if ((((param_3 >> 1 & 1) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
    param_2[4] = param_4;
    uVar4 = param_3 & 0xfffffffc;
  }
  param_3 = uVar4;
  if (param_3 == 0) {
    return 0;
  }
  if (((param_3 & 0x2a) != 0) &&
     (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || (uVar1 == 0)))) {
    BVar2 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_3c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      return DVar3;
    }
    if ((local_69 == 0) || ((local_3c[0] >> 10 & 1) == 0)) {
      param_2[4] = local_3c[0];
      param_2[2] = local_1c;
      param_3 = param_3 & 0xffffffd5;
      param_2[3] = local_20;
      *param_2 = local_28;
      param_2[1] = local_24;
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  DVar3 = ___std_fs_open_handle_16(&local_78,param_1,0x80,((local_69 ^ 1) + 0x10) * 0x200000);
  local_70 = DVar3;
  if (DVar3 != 0) goto LAB_10301bac;
  if ((param_3 == 6) || ((param_3 & 0x22) == 0)) {
LAB_10301b46:
    if ((param_3 & 6) != 0) {
      BVar2 = GetFileInformationByHandleEx(local_78,FileAttributeTagInfo,&local_74,8);
      if (BVar2 == 0) goto LAB_10301b1f;
      param_2[4] = local_74;
      param_2[5] = local_70;
      param_3 = param_3 & 0xfffffff9;
    }
    if ((param_3 & 0x18) != 0) {
      BVar2 = GetFileInformationByHandleEx(local_78,FileStandardInfo,local_30,0x18);
      if (BVar2 == 0) goto LAB_10301b1f;
      param_2[2] = local_28;
      param_2[6] = local_20;
      param_2[3] = local_24;
      param_3 = param_3 & 0xffffffe7;
    }
    if (param_3 == 0) {
      DVar3 = 0;
    }
    else {
      DVar3 = 0x32;
    }
  }
  else {
    BVar2 = GetFileInformationByHandleEx(local_78,FileBasicInfo,local_68,0x28);
    if (BVar2 != 0) {
      param_2[4] = local_48;
      *param_2 = local_58;
      param_3 = param_3 & 0xffffffdd;
      param_2[1] = local_54;
      goto LAB_10301b46;
    }
LAB_10301b1f:
    DVar3 = GetLastError();
  }
LAB_10301bac:
  FUN_1030189e(local_78);
  return DVar3;
}


// 0x10301bcd  [lib]
/* Library Function - Single Match
    ___std_fs_open_handle@16
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD ___std_fs_open_handle_16(uint32_t *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  HANDLE pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  pvVar1 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  return DVar2;
}


// 0x10301c01  [lib]
_Facet_base * __thiscall std::locale::facet::_Decref(facet *this)

{
  _Facet_base *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10301c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _Decref(this);
  return p_Var1;
}


// 0x10301c07  [lib]
void __thiscall std::locale::facet::_Incref(facet *this)

{
                    /* WARNING: Could not recover jumptable at 0x10301c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Incref(this);
  return;
}


// 0x10301c0d  [lib]
/* WARNING: This is an inlined function */

void __fastcall
__security_check_cookie
          (uintptr_t _StackCookie,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  if (_StackCookie == DAT_1039800c) {
    return;
  }
  FUN_103020d3(reg_EBX,reg_ESI,reg_EDI);
  return;
}


// 0x10301c1b  [lib]
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t auStack_14 [2];
  uint32_t uStack_c;
  
  do {
    uStack_c = 0x10301c35;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    uStack_c = 0x10301c28;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)FUN_1030283a();
    return pvVar2;
  }
  sub_1020f2f0(auStack_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_14,(ThrowInfo *)&DAT_10393b48);
}


// 0x10301c4b  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *reg_ESI;
  void *in_stack_ffffffd0;
  uint32_t local_14;
  
  reg_ESI = (void *)((int)param_1 + param_2 * param_3);
  while( true ) {
    if (param_3 == 0) break;
    reg_ESI = (void *)((int)reg_ESI - param_2);
    guard_check_icall();
    (*param_4)(in_stack_ffffffd0);
    param_3 = param_3 - 1;
  }
  FUN_10301cc0(param_2,reg_ESI,0xffffffff);
  ExceptionList = local_14;
  return;
}


// 0x10301cc0  [lib]
void FUN_10301cc0(uint reg_EBX,void *reg_ESI,uint reg_EDI)

{
  char in_AL;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(reg_ESI,reg_EBX,reg_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// 0x10301cd0  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2019 Release */

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *in_stack_ffffffc4;
  uint32_t local_14;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_3) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffc4);
    uVar1 = uVar1 + 1;
  }
  ExceptionList = local_14;
  return;
}


// 0x10301d60  [lib]
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
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}


// 0x10301da4  [lib]
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
      if (DAT_103d5b4c != (void *)0x0) {
        pvVar3 = DAT_103d5b4c;
        pvVar1 = DAT_103d5b4c;
      }
      DAT_103d5b4c = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}


// 0x10301dd6  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t ___scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  uint32_t extraout_var;
  uint32_t uVar2;
  uint uVar3;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = FUN_10302aa5();
    uVar3 = configure_narrow_argv(uVar2);
    if (uVar3 != 0) {
      return uVar3 & 0xffffff00;
    }
    uVar2 = initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_103028d4();
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// 0x10301e01  [lib]
bool FUN_10301e01(uint32_t reg_EAX)

{
  uint32_t uVar1;
  
  uVar1 = FUN_10301ed8(0,reg_EAX);
  return (char)uVar1 != '\0';
}


// 0x10301e0f  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t ___scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = functions_D2CommonFunctions_1026bd50();
  if (cVar1 != '\0') {
    cVar1 = functions_D2CommonFunctions_1026bd50();
    if (cVar1 != '\0') {
      return 1;
    }
    functions_D2CommonFunctions_1026bd50();
  }
  return 0;
}


// 0x10301e2e  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t ___scrt_dllmain_crt_thread_detach(void)

{
  functions_D2CommonFunctions_1026bd50();
  functions_D2CommonFunctions_1026bd50();
  return 1;
}


// 0x10301e3b  [lib]
/* Library Function - Single Match
    ___scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___scrt_dllmain_exception_filter
          (uint32_t param_1,int param_2,uint32_t param_3,uint8_t *param_4,uint32_t param_5,
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
  seh_filter_dll(param_5,param_6);
  return;
}


// 0x10301e6f  [lib]
void FUN_10301e6f(void)

{
  bool bVar1;
  uint32_t extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    execute_onexit_table(&DAT_103d5b54);
    return;
  }
  iVar2 = sub_102384f0();
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10302d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}


// 0x10301e92  [lib]
void FUN_10301e92(void)

{
  functions_D2CommonFunctions_1026bd50();
  functions_D2CommonFunctions_1026bd50();
  return;
}


// 0x10301e9f  [lib]
/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar2;
  uint32_t extraout_var_00;
  uint3 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_103d5b50 = 1;
  }
  FUN_103028d4();
  cVar1 = functions_D2CommonFunctions_1026bd50();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = functions_D2CommonFunctions_1026bd50();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    functions_D2CommonFunctions_1026bd50();
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}


// 0x10301ed8  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t __cdecl FUN_10301ed8(int param_1,uint32_t reg_EAX)

{
  bool bVar1;
  uint32_t extraout_var;
  uint uVar3;
  int iVar2;
  
  if (DAT_103d5b51 != '\0') {
    return CONCAT31((int3)((uint)reg_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_10302ab5();
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) || (param_1 != 0)) {
    DAT_103d5b54 = 0xffffffff;
    DAT_103d5b58 = 0xffffffff;
    DAT_103d5b5c = 0xffffffff;
    DAT_103d5b60 = 0xffffffff;
    DAT_103d5b64 = 0xffffffff;
    DAT_103d5b68 = 0xffffffff;
LAB_10301f4b:
    DAT_103d5b51 = '\x01';
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar3 = initialize_onexit_table(&DAT_103d5b54);
    if (uVar3 == 0) {
      uVar3 = initialize_onexit_table(&DAT_103d5b60);
      iVar2 = 0;
      if (uVar3 == 0) goto LAB_10301f4b;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


// 0x10301f5f  [lib]
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
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || (*(int *)(p_Var1 + 0x24) < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}


// 0x10301ff3  [lib]
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
  iVar1 = DAT_103d5b4c;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_103d5b4c = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}


// 0x10302010  [lib]
/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint8_t __cdecl ___scrt_uninitialize_crt(uint32_t param_1,char param_2)

{
  if ((DAT_103d5b50 == '\0') || (param_2 == '\0')) {
    functions_D2CommonFunctions_1026bd50();
    functions_D2CommonFunctions_1026bd50();
  }
  return 1;
}


// 0x10302038  [lib]
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  
  if (DAT_103d5b54 == -1) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_103d5b54,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}


// 0x10302065  [lib]
/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// 0x1030207a  [lib]
void __cdecl FUN_1030207a(void *param_1)

{
  free(param_1);
  return;
}


// 0x10302088  [lib]
uint32_t * __thiscall FUN_10302088(void *this,byte param_1)

{
  *(uint8_t ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x103020ab  [lib]
void __cdecl FUN_103020ab(_EXCEPTION_POINTERS *param_1)

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


// 0x103020d3  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103020d3(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

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
  DAT_103d5c68 = (uint32_t)((ulonglong)lVar9 >> 0x20);
  DAT_103d5c70 = (uint32_t)lVar9;
  DAT_103d5c80 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  DAT_103d5c84 = &stack0x00000004;
  DAT_103d5bc0 = 0x10001;
  DAT_103d5b70 = 0xc0000409;
  DAT_103d5b74 = 1;
  DAT_103d5b80 = 1;
  DAT_103d5b84 = 2;
  DAT_103d5b7c = (uint32_t)_ReturnAddress();
  DAT_103d5c4c = in_GS;
  DAT_103d5c50 = in_FS;
  DAT_103d5c54 = in_ES;
  DAT_103d5c58 = in_DS;
  DAT_103d5c5c = reg_EDI;
  DAT_103d5c60 = reg_ESI;
  DAT_103d5c64 = reg_EBX;
  DAT_103d5c6c = uVar3;
  DAT_103d5c74 = unaff_EBP;
  DAT_103d5c78 = (uint32_t)_ReturnAddress();
  DAT_103d5c7c = in_CS;
  DAT_103d5c88 = in_SS;
  FUN_103020ab((_EXCEPTION_POINTERS *)&PTR_DAT_103673d8);
  return;
}


// 0x103021cd  [lib]
void FUN_103021cd(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

{
  FUN_103021d9(8,reg_EBX,reg_ESI,reg_EDI);
  return;
}


// 0x103021d9  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_103021d9(uint32_t param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI)

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
  DAT_103d5c68 = (uint32_t)((ulonglong)lVar9 >> 0x20);
  DAT_103d5c70 = (uint32_t)lVar9;
  DAT_103d5c80 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  DAT_103d5c84 = &param_1;
  DAT_103d5b70 = 0xc0000409;
  DAT_103d5b74 = 1;
  DAT_103d5b80 = 1;
  DAT_103d5b84 = param_1;
  DAT_103d5b7c = (uint32_t)_ReturnAddress();
  DAT_103d5c4c = in_GS;
  DAT_103d5c50 = in_FS;
  DAT_103d5c54 = in_ES;
  DAT_103d5c58 = in_DS;
  DAT_103d5c5c = reg_EDI;
  DAT_103d5c60 = reg_ESI;
  DAT_103d5c64 = reg_EBX;
  DAT_103d5c6c = uVar3;
  DAT_103d5c74 = unaff_EBP;
  DAT_103d5c78 = (uint32_t)_ReturnAddress();
  DAT_103d5c7c = in_CS;
  DAT_103d5c88 = in_SS;
  FUN_103020ab((_EXCEPTION_POINTERS *)&PTR_DAT_103673d8);
  return;
}


// 0x103022a8  [lib]
void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x10302d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


// 0x103022ad  [lib]
void __cdecl FUN_103022ad(uint param_1)

{
  operator_new(param_1);
  return;
}


// 0x1030237b  [lib]
/* Library Function - Single Match
    __Init_thread_abort
   
   Library: Visual Studio 2019 Release */

void __Init_thread_abort(uint32_t *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  __Init_thread_notify();
  return;
}


// 0x1030239f  [lib]
void FUN_1030239f(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  DAT_10398004 = DAT_10398004 + 1;
  *param_1 = DAT_10398004;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_10398004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  __Init_thread_notify();
  return;
}


// 0x103023e9  [lib]
void __cdecl FUN_103023e9(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_10302430:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
      return;
    }
    if (*param_1 != -1) {
      *(uint32_t *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_10398004;
      goto LAB_10302430;
    }
    __Init_thread_wait(100);
  } while( true );
}


// 0x1030243b  [lib]
/* Library Function - Single Match
    __Init_thread_notify
   
   Library: Visual Studio 2019 Release */

void __Init_thread_notify(void)

{
  code *pcVar1;
  uint8_t *puVar2;
  
  pcVar1 = DAT_103d5eb0;
  if (DAT_103d5eb0 != (code *)0x0) {
    puVar2 = &DAT_103d5e8c;
    guard_check_icall();
    (*pcVar1)(puVar2);
    return;
  }
  SetEvent(DAT_103d5e90);
  ResetEvent(DAT_103d5e90);
  return;
}


// 0x10302471  [lib]
/* Library Function - Single Match
    __Init_thread_wait
   
   Library: Visual Studio 2019 Release */

void __cdecl __Init_thread_wait(DWORD param_1)

{
  code *pcVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  
  pcVar1 = DAT_103d5eac;
  if (DAT_103d5eac == (code *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
    WaitForSingleObjectEx(DAT_103d5e90,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_103d5e94);
  }
  else {
    puVar3 = &DAT_103d5e94;
    puVar2 = &DAT_103d5e8c;
    guard_check_icall();
    (*pcVar1)(puVar2,puVar3,param_1);
  }
  return;
}


// 0x103024bf  [lib]
/* Library Function - Single Match
    int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  uint32_t extraout_var;
  
  if (param_2 == 0) {
    bVar1 = FUN_10302619((uint)(param_3 != (void *)0x0));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  else if (param_2 == 1) {
    uVar2 = FUN_10302512(param_1,param_3);
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


// 0x10302512  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint32_t __cdecl FUN_10302512(uint32_t param_1,uint32_t param_2)

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
    if (DAT_103d5b48 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10302ab5();
    }
    DAT_103d5b48 = 1;
    bVar3 = FUN_10301e01(uVar4);
    if (bVar3) {
      FUN_10302cb6();
      FUN_10302c75();
      FUN_10302c93();
      iVar5 = initterm_e(&DAT_103672a0,&DAT_103672a8);
      if ((iVar5 == 0) && (uVar4 = ___scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        initterm(&DAT_10323568,&DAT_1036729c);
        DAT_103d5b48 = 2;
        bVar2 = false;
      }
    }
    FUN_103025f5();
    if (!bVar2) {
      piVar6 = (int *)FUN_10302cb0();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        uVar4 = 2;
        pcVar1 = (code *)*piVar6;
        guard_check_icall();
        (*pcVar1)(param_1,uVar4,param_2);
      }
      DAT_103d5eb4 = DAT_103d5eb4 + 1;
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// 0x103025f5  [lib]
void FUN_103025f5(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(uint32_t *)(unaff_EBP + -0x1d));
  return;
}


// 0x10302619  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

byte __cdecl FUN_10302619(uint32_t param_1)

{
  char cVar1;
  byte bVar2;
  uint32_t local_14;
  
  if (DAT_103d5eb4 < 1) {
    bVar2 = 0;
  }
  else {
    DAT_103d5eb4 = DAT_103d5eb4 + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_103d5b48 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_10302ab5();
    }
    FUN_10301e6f();
    FUN_10302c81();
    FUN_10302ce2();
    DAT_103d5b48 = 0;
    FUN_103026ae();
    cVar1 = ___scrt_uninitialize_crt(param_1,'\0');
    bVar2 = -(cVar1 != '\0') & 1;
    FUN_103026bb();
  }
  ExceptionList = local_14;
  return bVar2;
}


// 0x103026ae  [lib]
void FUN_103026ae(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(uint32_t *)(unaff_EBP + -0x20));
  return;
}


// 0x103026bb  [lib]
void FUN_103026bb(void)

{
  FUN_10301e92();
  return;
}


// 0x103026c9  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *local_14;
  
  if ((param_2 == 0) && (DAT_103d5eb4 < 1)) {
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
  iVar1 = DllMain(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    DllMain(param_1,0,param_3);
    FUN_10302619((uint)(param_3 != (void *)0x0));
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


// 0x103027d4  [lib]
/* WARNING: Removing unreachable block (ram,0x103027e7) */
/* Library Function - Single Match
    int __stdcall dllmain_raw(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int dllmain_raw(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  return 1;
}


// 0x103027ff  [lib]
void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}


// 0x10302822  [lib]
uint32_t * __fastcall FUN_10302822(uint32_t *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


// 0x1030283a  [lib]
void FUN_1030283a(void)

{
  uint32_t local_10 [3];
  
  FUN_10302822(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_10393ae4);
}


// 0x10302860  [lib]
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1039800c ^ (uint)&param_2;
  *(uint32_t *)((int)auStack_1c + iVar1) = (uint32_t)_ReturnAddress();
  ExceptionList = local_8;
  return;
}


// 0x103028a5  [lib]
/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = __filter_x86_sse2_floating_point_exception_default(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_1039800c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


// 0x103028d4  [lib]
/* WARNING: Removing unreachable block (ram,0x10302942) */
/* WARNING: Removing unreachable block (ram,0x10302907) */
/* WARNING: Removing unreachable block (ram,0x103029b9) */

uint32_t FUN_103028d4(void)

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
  
  DAT_103d5ebc = 0;
  DAT_10398010 = DAT_10398010 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar6 = DAT_10398010;
  if (BVar5 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_103d5ec0 = DAT_103d5ec0 | 1;
    }
    if (*piVar1 < 7) {
      local_14 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_14 = *(uint *)(iVar3 + 4);
      if ((local_14 & 0x200) != 0) {
        DAT_103d5ec0 = DAT_103d5ec0 | 2;
      }
    }
    DAT_103d5ebc = 1;
    uVar6 = DAT_10398010 | 2;
    if ((uVar7 & 0x100000) != 0) {
      uVar6 = DAT_10398010 | 6;
      DAT_103d5ebc = 2;
      if (((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_18 = in_XCR0 & (uint)uVar4;
        if ((local_18 & 6) == 6) {
          DAT_103d5ebc = 3;
          uVar6 = DAT_10398010 | 0xe;
          if ((local_14 & 0x20) != 0) {
            DAT_103d5ebc = 5;
            uVar6 = DAT_10398010 | 0x2e;
            if (((local_14 & 0xd0030000) == 0xd0030000) && ((local_18 & 0xe0) == 0xe0)) {
              DAT_10398010 = DAT_10398010 | 0x6e;
              DAT_103d5ebc = 6;
              uVar6 = DAT_10398010;
            }
          }
        }
      }
    }
  }
  DAT_10398010 = uVar6;
  return 0;
}


// 0x10302aa5  [lib]
uint32_t FUN_10302aa5(void)

{
  return 1;
}


// 0x10302aa9  [lib]
/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_10398014 != 0;
}


// 0x10302ab5  [lib]
void FUN_10302ab5(void)

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
  FUN_10302bd0();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_10302bd0();
  }
  return;
}


// 0x10302bd0  [lib]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302bd0(void)

{
  DAT_103d5ec4 = 0;
  return;
}


// 0x10302bd8  [lib]
void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x10302d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


// 0x10302bdd  [lib]
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


// 0x10302c2a  [lib]
/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_1039800c == 0xbb40e64e) || ((DAT_1039800c & 0xffff0000) == 0)) {
    DAT_1039800c = ___get_entropy();
    if (DAT_1039800c == 0xbb40e64e) {
      DAT_1039800c = 0xbb40e64f;
    }
    else if ((DAT_1039800c & 0xffff0000) == 0) {
      DAT_1039800c = DAT_1039800c | (DAT_1039800c | 0x4711) << 0x10;
    }
  }
  DAT_10398008 = ~DAT_1039800c;
  return;
}


// 0x10302c75  [lib]
void FUN_10302c75(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_103d5ed0);
  return;
}


// 0x10302c81  [lib]
void FUN_10302c81(void)

{
  __std_type_info_destroy_list(&DAT_103d5ed0);
  return;
}


// 0x10302c8d  [lib]
uint8_t * FUN_10302c8d(void)

{
  return &DAT_103d5ed8;
}


// 0x10302c93  [lib]
void FUN_10302c93(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)sub_10219540();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_10302c8d();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}


// 0x10302cb0  [lib]
uint8_t * FUN_10302cb0(void)

{
  return &DAT_104eb100;
}


// 0x10302cb6  [lib]
/* WARNING: Removing unreachable block (ram,0x10302cc6) */
/* WARNING: Removing unreachable block (ram,0x10302cc7) */
/* WARNING: Removing unreachable block (ram,0x10302ccd) */
/* WARNING: Removing unreachable block (ram,0x10302cd7) */
/* WARNING: Removing unreachable block (ram,0x10302cde) */

void FUN_10302cb6(void)

{
  return;
}


// 0x10302ce2  [lib]
/* WARNING: Removing unreachable block (ram,0x10302cf2) */
/* WARNING: Removing unreachable block (ram,0x10302cf3) */
/* WARNING: Removing unreachable block (ram,0x10302cf9) */
/* WARNING: Removing unreachable block (ram,0x10302d03) */
/* WARNING: Removing unreachable block (ram,0x10302d0a) */

void FUN_10302ce2(void)

{
  return;
}


// 0x10302d0e  [lib]
void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d0e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}


// 0x10302d14  [lib]
void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}


// 0x10302d26  [lib]
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x10302d26. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


// 0x10302d2c  [lib]
void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}


// 0x10302d32  [lib]
void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10302d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


// 0x10302d38  [lib]
void __std_type_info_destroy_list(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_type_info_destroy_list();
  return;
}


// 0x10302d3e  [lib]
void round(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  round();
  return;
}


// 0x10302d44  [lib]
void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10302d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


// 0x10302d4a  [lib]
void roundf(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  roundf();
  return;
}


// 0x10302d50  [lib]
void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x10302d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


// 0x10302d5c  [lib]
int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10302d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}


// 0x10302d62  [lib]
void __cdecl seh_filter_dll(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  seh_filter_dll();
  return;
}


// 0x10302d68  [lib]
void __cdecl configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  configure_narrow_argv();
  return;
}


// 0x10302d6e  [lib]
void __cdecl initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initialize_narrow_environment();
  return;
}


// 0x10302d74  [lib]
void __cdecl initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initialize_onexit_table();
  return;
}


// 0x10302d7a  [lib]
void __cdecl register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_onexit_function();
  return;
}


// 0x10302d80  [lib]
void __cdecl execute_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  execute_onexit_table();
  return;
}


// 0x10302d86  [lib]
void __cdecl crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  crt_atexit();
  return;
}


// 0x10302d92  [lib]
void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// 0x10302d98  [lib]
void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x10302d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}


// 0x10302d9e  [lib]
/* Library Function - Single Match
    __filter_x86_sse2_floating_point_exception_default
   
   Library: Visual Studio 2019 Release */

int __cdecl __filter_x86_sse2_floating_point_exception_default(int param_1)

{
  uint uVar1;
  
  if ((DAT_103d5ebc < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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


// 0x10302e20  [lib]
/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

uint64_t __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// 0x10302ed0  [lib]
/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

uint64_t __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// 0x10302fb0  [lib]
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// 0x10302ff0  [lib]
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


// 0x10303010  [lib]
/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

ulonglong __fastcall __aullshr(byte param_1,uint param_2,uint reg_EAX)

{
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    reg_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


// 0x10303030  [lib]
/* WARNING: This is an inlined function */

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


// 0x10303060  [lib]
uint FUN_10303060(void)

{
  uint8_t auVar1 [16];
  uint uVar2;
  bool bVar3;
  float in_XMM0_Da;
  uint8_t in_register_00001204 [12];
  
  if (5 < DAT_103d5ebc) {
    auVar1._4_12_ = in_register_00001204;
    auVar1._0_4_ = in_XMM0_Da;
    uVar2 = vcvttss2usi_avx512f(auVar1);
    return uVar2;
  }
  uVar2 = (int)in_XMM0_Da * 2;
  if ((int)in_XMM0_Da < 0) {
    bVar3 = uVar2 < 0x7f000000;
    if (!bVar3) goto LAB_1030309a;
  }
  else if (0x9dffffff < uVar2) {
    bVar3 = false;
    if (uVar2 < 0x9f000000) {
      return (int)in_XMM0_Da << 8 | 0x80000000;
    }
LAB_1030309a:
    return -(uint)!bVar3;
  }
  return (int)in_XMM0_Da;
}


// 0x103030b0  [lib]
uint FUN_103030b0(void)

{
  uint8_t auVar1 [16];
  uint uVar2;
  double in_XMM0_Qa;
  uint64_t in_XMM0_Qb;
  uint local_8;
  uint uStack_4;
  
  if (5 < DAT_103d5ebc) {
    auVar1._8_8_ = in_XMM0_Qb;
    auVar1._0_8_ = in_XMM0_Qa;
    uVar2 = vcvttsd2usi_avx512f(auVar1);
    return uVar2;
  }
  local_8 = SUB84(in_XMM0_Qa,0);
  uStack_4 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar2 = uStack_4 & 0x7fffffff;
  if ((longlong)in_XMM0_Qa < 0) {
    if (uVar2 < 0x3ff00000) {
      return 0;
    }
  }
  else {
    if (uVar2 < 0x41e00000) {
      return (int)in_XMM0_Qa;
    }
    if (uVar2 < 0x41f00000) {
      return local_8 >> 0x15 | uStack_4 << 0xb | 0x80000000;
    }
  }
  return 0xffffffff;
}


// 0x10303130  [lib]
void __fastcall FUN_10303130(uint param_1)

{
  if (5 < DAT_103d5ebc) {
    vcvtqq2pd_avx512vl(ZEXT416(param_1));
    return;
  }
  return;
}


// 0x10303180  [lib]
longlong FUN_10303180(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  float10 in_ST0;
  uint64_t uStack_20;
  uint16_t uStack_18;
  uint32_t unkuint10;   /* not traced by Ghidra: value with no visible source */
  
  if (1 < DAT_103d5ebc) {
    return (longlong)in_ST0;
  }
  uStack_20._0_4_ = SUB104(in_ST0,0);
  uVar2 = (uint)uStack_20;
  uStack_20._4_4_ = (uint)((unkuint10)in_ST0 >> 0x20);
  uVar1 = uStack_20._4_4_;
  uStack_20 = SUB108(in_ST0,0);
  uStack_18 = (ushort)((unkuint10)in_ST0 >> 0x40);
  uVar4 = uStack_18 & 0x7fff;
  if (uVar4 < 0x3fff) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    if (uVar4 < 0x403e) {
      bVar3 = 0x3e - (char)uVar4;
      uVar5 = uVar1;
      if (0x1f < bVar3) {
        uVar5 = 0;
        uVar2 = uVar1;
      }
      uVar2 = uVar2 >> (bVar3 & 0x1f) | uVar5 << 0x20 - (bVar3 & 0x1f);
      uVar5 = uVar5 >> (bVar3 & 0x1f);
      if ((short)uStack_18 < 0) {
        bVar6 = uVar2 != 0;
        uVar2 = -uVar2;
        uVar5 = -(uVar5 + bVar6);
      }
      return CONCAT44(uVar5,uVar2);
    }
    if (((uVar4 < 0x403f) && ((uVar1 & 0x7fffffff) == 0 && uVar2 == 0)) && ((short)uStack_18 < 0)) {
      return uStack_20;
    }
  }
  return -0x8000000000000000;
}


// 0x1030319e  [lib]
uint64_t FUN_1030319e(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  unkbyte10 in_ST0;
  uint64_t local_20;
  uint16_t uStack_18;
  uint32_t unkbyte10;   /* not traced by Ghidra: value with no visible source */
  uint32_t unkuint10;   /* not traced by Ghidra: value with no visible source */
  
  local_20._0_4_ = (uint)in_ST0;
  uVar2 = (uint)local_20;
  local_20._4_4_ = (uint)((unkuint10)in_ST0 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = (uint64_t)in_ST0;
  uStack_18 = (ushort)((unkuint10)in_ST0 >> 0x40);
  uVar4 = uStack_18 & 0x7fff;
  if (uVar4 < 0x3fff) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    if (uVar4 < 0x403e) {
      bVar3 = 0x3e - (char)uVar4;
      uVar5 = uVar1;
      if (0x1f < bVar3) {
        uVar5 = 0;
        uVar2 = uVar1;
      }
      uVar2 = uVar2 >> (bVar3 & 0x1f) | uVar5 << 0x20 - (bVar3 & 0x1f);
      uVar5 = uVar5 >> (bVar3 & 0x1f);
      if ((short)uStack_18 < 0) {
        bVar6 = uVar2 != 0;
        uVar2 = -uVar2;
        uVar5 = -(uVar5 + bVar6);
      }
      return CONCAT44(uVar5,uVar2);
    }
    if (((uVar4 < 0x403f) && ((uVar1 & 0x7fffffff) == 0 && uVar2 == 0)) && ((short)uStack_18 < 0)) {
      return local_20;
    }
  }
  return 0x8000000000000000;
}


// 0x1030322b  [lib]
void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1030322b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}


// 0x10303231  [lib]
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10303231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


// 0x10303237  [lib]
void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10303237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}


// 0x1030323d  [lib]
void _CIatan2(void)

{
                    /* WARNING: Could not recover jumptable at 0x1030323d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIatan2();
  return;
}


// 0x10303243  [lib]
void __cdecl dclass(void)

{
                    /* WARNING: Could not recover jumptable at 0x10303243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dclass();
  return;
}


// 0x10303249  [lib]
void __cdecl fdclass(void)

{
                    /* WARNING: Could not recover jumptable at 0x10303249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fdclass();
  return;
}


// 0x1030324f  [lib]
void __cdecl libm_sse2_cos_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x1030324f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_cos_precise();
  return;
}


// 0x10303255  [lib]
void __cdecl libm_sse2_pow_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x10303255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_pow_precise();
  return;
}


// 0x1030325b  [lib]
void __cdecl libm_sse2_sin_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x1030325b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sin_precise();
  return;
}


// 0x10303261  [lib]
void __cdecl libm_sse2_sqrt_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x10303261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sqrt_precise();
  return;
}


// 0x10303267  [lib]
double __cdecl ceil(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10303267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(_X);
  return dVar1;
}


// 0x1030326d  [lib]
double __cdecl floor(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1030326d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}


// 0x10316520  [lib]
void FUN_10316520(void)

{
  thunk_FUN_1020f8e0(&DAT_104dcd80);
  return;
}


// 0x10316830  [lib]
void FUN_10316830(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd014);
  return;
}


// 0x10316b40  [lib]
void FUN_10316b40(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd278);
  return;
}


// 0x10316e50  [lib]
void FUN_10316e50(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd490);
  return;
}


// 0x10317160  [lib]
void FUN_10317160(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd700);
  return;
}


// 0x10317470  [lib]
void FUN_10317470(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd624);
  return;
}


// 0x10317480  [lib]
void FUN_10317480(void)

{
  thunk_FUN_1020f8e0(&DAT_104dd9d4);
  return;
}


// 0x10317790  [lib]
void FUN_10317790(void)

{
  thunk_FUN_1020f8e0(&DAT_104ddbc8);
  return;
}


// 0x10317aa0  [lib]
void FUN_10317aa0(void)

{
  thunk_FUN_1020f8e0(&DAT_104dddf4);
  return;
}


// 0x10317db0  [lib]
void FUN_10317db0(void)

{
  thunk_FUN_1020f8e0(&DAT_104ddfc8);
  return;
}


// 0x103180c0  [lib]
void FUN_103180c0(void)

{
  thunk_FUN_1020f8e0(&DAT_104de1c8);
  return;
}


// 0x103183d0  [lib]
void FUN_103183d0(void)

{
  thunk_FUN_1020f8e0(&DAT_104de3a0);
  return;
}


// 0x103186e0  [lib]
void FUN_103186e0(void)

{
  thunk_FUN_1020f8e0(&DAT_104de5bc);
  return;
}


// 0x103189f0  [lib]
void FUN_103189f0(void)

{
  thunk_FUN_1020f8e0(&DAT_104de7b0);
  return;
}


// 0x10318d00  [lib]
void FUN_10318d00(void)

{
  thunk_FUN_1020f8e0(&DAT_104de970);
  return;
}


// 0x10319010  [lib]
void FUN_10319010(void)

{
  thunk_FUN_1020f8e0(&DAT_104deb84);
  return;
}


// 0x10319320  [lib]
void FUN_10319320(void)

{
  thunk_FUN_1020f8e0(&DAT_104ded4c);
  return;
}


// 0x10319630  [lib]
void FUN_10319630(void)

{
  thunk_FUN_1020f8e0(&DAT_104def20);
  return;
}


// 0x10319940  [lib]
void FUN_10319940(void)

{
  thunk_FUN_1020f8e0(&DAT_104df0f0);
  return;
}


// 0x10319c70  [lib]
void FUN_10319c70(void)

{
  thunk_FUN_1020f8e0(&DAT_104e0994);
  return;
}


// 0x10319fa0  [lib]
void FUN_10319fa0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e0b54);
  return;
}


// 0x1031a2b0  [lib]
void FUN_1031a2b0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e0d08);
  return;
}


// 0x1031a5c0  [lib]
void FUN_1031a5c0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e0ec0);
  return;
}


// 0x1031a8e0  [lib]
void FUN_1031a8e0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e106c);
  return;
}


// 0x1031abf0  [lib]
void FUN_1031abf0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e1224);
  return;
}


// 0x1031af00  [lib]
void FUN_1031af00(void)

{
  thunk_FUN_1020f8e0(&DAT_104e13d0);
  return;
}


// 0x1031b210  [lib]
void FUN_1031b210(void)

{
  thunk_FUN_1020f8e0(&DAT_104e15e8);
  return;
}


// 0x1031b520  [lib]
void FUN_1031b520(void)

{
  thunk_FUN_1020fb40(&DAT_104e1694);
  return;
}


// 0x1031b530  [lib]
void FUN_1031b530(void)

{
  thunk_FUN_1020f8e0(&DAT_104e1664);
  return;
}


// 0x1031b540  [lib]
void FUN_1031b540(void)

{
  thunk_FUN_1020f8e0(&DAT_104e16c4);
  return;
}


// 0x1031b550  [lib]
void FUN_1031b550(void)

{
  sub_1025eae0(&DAT_104e17bc);
  return;
}


// 0x1031b560  [lib]
void FUN_1031b560(void)

{
  thunk_FUN_10255dd0(&DAT_104e1570);
  return;
}


// 0x1031b580  [lib]
void FUN_1031b580(void)

{
  thunk_FUN_1020f8e0(&DAT_104e1898);
  return;
}


// 0x1031b8a0  [lib]
void FUN_1031b8a0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e1b30);
  return;
}


// 0x1031bbb0  [lib]
void FUN_1031bbb0(void)

{
  thunk_FUN_1026c210(0x104e1c78);
  return;
}


// 0x1031bbc0  [lib]
void FUN_1031bbc0(void)

{
  thunk_FUN_1026c210(0x104e1acc);
  return;
}


// 0x1031bbd0  [lib]
void FUN_1031bbd0(void)

{
  thunk_FUN_1026c210(0x104e19e4);
  return;
}


// 0x1031bbe0  [lib]
void FUN_1031bbe0(void)

{
  thunk_FUN_1026c210(0x104e1db4);
  return;
}


// 0x1031bbf0  [lib]
void FUN_1031bbf0(void)

{
  thunk_FUN_1026c210(0x104e1b74);
  return;
}


// 0x1031bc00  [lib]
void FUN_1031bc00(void)

{
  thunk_FUN_1026c210(0x104e1ce4);
  return;
}


// 0x1031bc10  [lib]
void FUN_1031bc10(void)

{
  thunk_FUN_1026c210(0x104e1a0c);
  return;
}


// 0x1031bc20  [lib]
void FUN_1031bc20(void)

{
  thunk_FUN_1026c210(0x104e1c54);
  return;
}


// 0x1031bc30  [lib]
void FUN_1031bc30(void)

{
  thunk_FUN_1026c210(0x104e1ddc);
  return;
}


// 0x1031bc40  [lib]
void FUN_1031bc40(void)

{
  thunk_FUN_1026c210(0x104e1a48);
  return;
}


// 0x1031bc50  [lib]
void FUN_1031bc50(void)

{
  thunk_FUN_1026c210(0x104e1a84);
  return;
}


// 0x1031bc60  [lib]
void FUN_1031bc60(void)

{
  thunk_FUN_1026c210(0x104e1cac);
  return;
}


// 0x1031bc70  [lib]
void FUN_1031bc70(void)

{
  thunk_FUN_1026c210(0x104e1d94);
  return;
}


// 0x1031bc80  [lib]
void FUN_1031bc80(void)

{
  thunk_FUN_1026c210(0x104e1bdc);
  return;
}


// 0x1031bc90  [lib]
void FUN_1031bc90(void)

{
  thunk_FUN_1026c210(0x104e1b54);
  return;
}


// 0x1031bca0  [lib]
void FUN_1031bca0(void)

{
  thunk_FUN_1026c210(0x104e1d1c);
  return;
}


// 0x1031bcb0  [lib]
void FUN_1031bcb0(void)

{
  thunk_FUN_1026c210(0x104e1b10);
  return;
}


// 0x1031bcc0  [lib]
void FUN_1031bcc0(void)

{
  thunk_FUN_1026c210(0x104e1c04);
  return;
}


// 0x1031bcd0  [lib]
void FUN_1031bcd0(void)

{
  thunk_FUN_1026c210(0x104e1c34);
  return;
}


// 0x1031bce0  [lib]
void FUN_1031bce0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e1e9c);
  return;
}


// 0x1031c040  [lib]
void FUN_1031c040(void)

{
  thunk_FUN_1020f8e0(&DAT_104e25e4);
  return;
}


// 0x1031c350  [lib]
uint64_t FUN_1031c350(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e2650);
  return uVar1;
}


// 0x1031c360  [lib]
void FUN_1031c360(void)

{
  sub_102acf00(0x104e2060);
  return;
}


// 0x1031c370  [lib]
void FUN_1031c370(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2668);
  return;
}


// 0x1031c380  [lib]
void FUN_1031c380(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2694);
  return;
}


// 0x1031c390  [lib]
void FUN_1031c390(void)

{
  thunk_FUN_1020f8e0(&DAT_104e27b8);
  return;
}


// 0x1031c6a0  [lib]
void FUN_1031c6a0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2964);
  return;
}


// 0x1031c9b0  [lib]
void FUN_1031c9b0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2b18);
  return;
}


// 0x1031ccc0  [lib]
void FUN_1031ccc0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2cdc);
  return;
}


// 0x1031cff0  [lib]
void FUN_1031cff0(void)

{
  thunk_FUN_1020f5d0(&DAT_104e2c88);
  return;
}


// 0x1031d000  [lib]
void FUN_1031d000(void)

{
  thunk_FUN_1020f8e0(&DAT_104e2ea0);
  return;
}


// 0x1031d310  [lib]
void FUN_1031d310(void)

{
  thunk_FUN_1020f8e0(&DAT_104e3064);
  return;
}


// 0x1031d620  [lib]
void FUN_1031d620(void)

{
  thunk_FUN_1020f5d0(&DAT_104e3158);
  return;
}


// 0x1031d630  [lib]
uint64_t FUN_1031d630(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e30f0);
  return uVar1;
}


// 0x1031d640  [lib]
uint64_t FUN_1031d640(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e31f4);
  return uVar1;
}


// 0x1031d650  [lib]
void FUN_1031d650(void)

{
  thunk_FUN_1020f8e0(&DAT_104e32b4);
  return;
}


// 0x1031d960  [lib]
void FUN_1031d960(void)

{
  thunk_FUN_1020f8e0(&DAT_104e34b0);
  return;
}


// 0x1031dc70  [lib]
void FUN_1031dc70(void)

{
  thunk_FUN_102d3320(&DAT_104e34dc);
  return;
}


// 0x1031dc80  [lib]
void FUN_1031dc80(void)

{
  thunk_FUN_10255dd0(&DAT_104e33f0);
  return;
}


// 0x1031dc90  [lib]
uint64_t FUN_1031dc90(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e344c);
  return uVar1;
}


// 0x1031dca0  [lib]
void FUN_1031dca0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e368c);
  return;
}


// 0x1031dfb0  [lib]
void FUN_1031dfb0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e383c);
  return;
}


// 0x1031e2d0  [lib]
void FUN_1031e2d0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e3a00);
  return;
}


// 0x1031e5e0  [lib]
void FUN_1031e5e0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e3bb0);
  return;
}


// 0x1031e8f0  [lib]
void FUN_1031e8f0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e3d5c);
  return;
}


// 0x1031ec00  [lib]
void FUN_1031ec00(void)

{
  thunk_FUN_1020f8e0(&DAT_104e3f3c);
  return;
}


// 0x1031ef10  [lib]
void FUN_1031ef10(void)

{
  thunk_FUN_1020fb00((int *)&DAT_104e3ee8);
  return;
}


// 0x1031ef20  [lib]
uint64_t FUN_1031ef20(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e3ec8);
  return uVar1;
}


// 0x1031ef30  [lib]
uint64_t FUN_1031ef30(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e3f48);
  return uVar1;
}


// 0x1031ef40  [lib]
void FUN_1031ef40(void)

{
  thunk_FUN_1020f8e0(&DAT_104e4150);
  return;
}


// 0x1031f250  [lib]
uint64_t FUN_1031f250(void)

{
  uint64_t uVar1;
  
  uVar1 = thunk_FUN_1020fc60((uint32_t *)&DAT_104e40f0);
  return uVar1;
}


// 0x1031f270  [lib]
void FUN_1031f270(void)

{
  thunk_FUN_1020f8e0(&DAT_104e430c);
  return;
}


// 0x1031f580  [lib]
void FUN_1031f580(void)

{
  thunk_FUN_1020f8e0(&DAT_104e44e4);
  return;
}


// 0x1031f890  [lib]
void FUN_1031f890(void)

{
  thunk_FUN_1020f8e0(&DAT_104e4698);
  return;
}


// 0x1031fba0  [lib]
void FUN_1031fba0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e49d8);
  return;
}


// 0x1031feb0  [lib]
void FUN_1031feb0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5200);
  return;
}


// 0x103201c0  [lib]
void FUN_103201c0(void)

{
  thunk_FUN_1020fb40((uint32_t *)&DAT_104e52b0);
  return;
}


// 0x103201d0  [lib]
void FUN_103201d0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e53b8);
  return;
}


// 0x103204e0  [lib]
void FUN_103204e0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5570);
  return;
}


// 0x103207f0  [lib]
void FUN_103207f0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5728);
  return;
}


// 0x10320b00  [lib]
void FUN_10320b00(void)

{
  thunk_FUN_1020f8e0(&DAT_104e58e4);
  return;
}


// 0x10320e10  [lib]
void FUN_10320e10(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5a98);
  return;
}


// 0x10321120  [lib]
void FUN_10321120(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5c54);
  return;
}


// 0x10321430  [lib]
void FUN_10321430(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5e04);
  return;
}


// 0x10321740  [lib]
void FUN_10321740(void)

{
  thunk_FUN_1020f8e0(&DAT_104e5fb4);
  return;
}


// 0x10321a50  [lib]
void FUN_10321a50(void)

{
  thunk_FUN_1020f8e0(&DAT_104e6168);
  return;
}


// 0x10321d60  [lib]
void FUN_10321d60(void)

{
  thunk_FUN_1020f8e0(&DAT_104e6320);
  return;
}


// 0x10322070  [lib]
void FUN_10322070(void)

{
  thunk_FUN_1020f8e0(&DAT_104e64cc);
  return;
}


// 0x10322380  [lib]
void FUN_10322380(void)

{
  thunk_FUN_1020f8e0(&DAT_104e6684);
  return;
}


// 0x10322690  [lib]
void FUN_10322690(void)

{
  thunk_FUN_1020f8e0(&DAT_104e6840);
  return;
}


// 0x103229a0  [lib]
void FUN_103229a0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e69f4);
  return;
}


// 0x10322cb0  [lib]
void FUN_10322cb0(void)

{
  thunk_FUN_1020f8e0(&DAT_104e6bd0);
  return;
}


// 0x10322fc0  [lib]
void FUN_10322fc0(void)

{
  thunk_FUN_10255dd0(&DAT_104e6ccc);
  return;
}


// 0x10322fd0  [lib]
void FUN_10322fd0(void)

{
  thunk_FUN_10255dd0(&DAT_104e6b84);
  return;
}


// 0x10322fda  [lib]
void FUN_10322fda(void)

{
  FUN_103017f8();
  return;
}



// Functions missing from Ghidra's auto-analysis (reached through data tables), added by AddFunctions.java;
// decompiled together with the main export by FixAndExport.java (fd2 phase 3).

