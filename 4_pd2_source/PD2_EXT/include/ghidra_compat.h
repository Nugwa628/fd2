/* ghidra_compat.h - definitions for the helper operations and pseudo-registers Ghidra's C output uses. */
#pragma once
#include <windows.h>
#include <intrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long double float10;                      /* x87 80-bit value */
#define ExceptionList   (*(void **)NtCurrentTeb())  /* fs:[0], head of the SEH chain */
#define in_FS_OFFSET    ((uint8_t *)NtCurrentTeb())  /* fs: segment base = TEB */
extern uint32_t MXCSR;                             /* SSE control/status register (use _mm_getcsr/_mm_setcsr) */
static code *swi(int n) { (void)n; __debugbreak(); return 0; }   /* software interrupt, e.g. int3 */
typedef unsigned int   unsigned_int;    /* Ghidra spellings of C++ type names */
typedef unsigned short unsigned_short;
typedef unsigned char  unsigned_char;
#define builtin_strncpy(d,s,n) strncpy((char *)(d),(const char *)(s),(n))   /* inlined copy loops */
#define builtin_memcpy(d,s,n)  memcpy((d),(s),(n))
#define builtin_memset(d,c,n)  memset((d),(c),(n))
#define fscale(x,e)            ldexpl((x),(int)(e))                          /* x87 FSCALE */
#define fsin(x)   sinl(x)                 /* x87 instructions Ghidra writes as functions */
#define fcos(x)   cosl(x)
#define fptan(x)  tanl(x)
#define fsqrt(x)  sqrtl(x)
#define f2xm1(x)  (exp2l(x) - 1.0L)
#define fyl2x(x,y) ((y) * log2l(x))
#define fpatan(y,x) atan2l((y),(x))
#define rdtsc()   __rdtsc()
uint32_t *cpuid(uint32_t leaf);                /* CPUID: returns {eax,ebx,ecx,edx} */
uint32_t *cpuid_basic_info(uint32_t leaf);     /* CPUID, leaf 0: returns {eax,ebx,ecx,edx} */
uint32_t *cpuid_Version_info(uint32_t leaf);   /* CPUID, leaf 1 */
uint32_t *cpuid_cache_tlb_info(uint32_t leaf); /* CPUID, leaf 2 */

#define ABS(x)       fabs(x)
#define CARRY4(a,b) ((uint32_t)((uint32_t)(a) + (uint32_t)(b)) < (uint32_t)(a))
#define CONCAT11(hi,lo) ((uint16_t)(((uint64_t)(uint8_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define CONCAT13(hi,lo) ((uint32_t)(((uint64_t)(uint8_t)(hi) << 24) | ((uint64_t)(lo) & 0xffffffULL)))
#define CONCAT14(hi,lo) ((uint64_t)(((uint64_t)(uint8_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define CONCAT15(hi,lo) ((uint64_t)(((uint64_t)(uint8_t)(hi) << 40) | ((uint64_t)(lo) & 0xffffffffffULL)))
#define CONCAT22(hi,lo) ((uint32_t)(((uint64_t)(uint16_t)(hi) << 16) | ((uint64_t)(lo) & 0xffffULL)))
#define CONCAT24(hi,lo) ((uint64_t)(((uint64_t)(uint16_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define CONCAT26(hi,lo) ((uint64_t)(((uint64_t)(uint16_t)(hi) << 48) | ((uint64_t)(lo) & 0xffffffffffffULL)))
#define CONCAT31(hi,lo) ((uint32_t)(((uint64_t)(uint32_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define CONCAT44(hi,lo) ((uint64_t)(((uint64_t)(uint32_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define NAN(x)       isnan(x)
#define POPCOUNT(x)  __popcnt((unsigned)(x))
#define ROUND(x)     round(x)
/* SUB161: operates on 16+ byte values (SSE/x87); no portable C definition */
uint64_t SUB161();
/* SUB1615: operates on 16+ byte values (SSE/x87); no portable C definition */
uint64_t SUB1615();
#define SUB82(v,off) ((uint16_t)((uint64_t)(v) >> (8 * (off))))
#define SUB84(v,off) ((uint32_t)((uint64_t)(v) >> (8 * (off))))
/* ZEXT216: operates on 16+ byte values (SSE/x87); no portable C definition */
uint64_t ZEXT216();
/* ZEXT416: operates on 16+ byte values (SSE/x87); no portable C definition */
uint64_t ZEXT416();
uint32_t *cpuid_Extended_Feature_Enumeration_info(uint32_t leaf);   /* CPUID leaf query: returns {eax,ebx,ecx,edx} */

/* type names Ghidra used without a definition (layout unknown) */
typedef struct EHExceptionRecord EHExceptionRecord;
typedef struct EHRegistrationNode EHRegistrationNode;
typedef struct ESTypeList ESTypeList;
typedef struct HandlerType HandlerType;
typedef struct TypeDescriptor TypeDescriptor;
typedef struct _CONTEXT _CONTEXT;
typedef struct _EXCEPTION_DISPOSITION _EXCEPTION_DISPOSITION;
typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS;
typedef struct _FILETIME _FILETIME;
typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER;
typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY;
typedef struct _STARTUPINFOW _STARTUPINFOW;
typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW;
typedef struct __acrt_ptd __acrt_ptd;
typedef struct __crt_locale_data __crt_locale_data;
typedef struct __crt_multibyte_data __crt_multibyte_data;
typedef struct __crt_signal_action_t __crt_signal_action_t;
typedef struct __ehstate_t __ehstate_t;
typedef struct _cpinfo _cpinfo;
typedef struct _func_void_int _func_void_int;
typedef struct _locale_t _locale_t;
typedef struct _s_CatchableType _s_CatchableType;
typedef struct _s_FuncInfo _s_FuncInfo;
typedef struct _s_HandlerType _s_HandlerType;
typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry;
typedef struct action action;
typedef struct int3 int3;
typedef struct sbyte sbyte;
typedef struct type_info type_info;
typedef struct wint_t wint_t;
