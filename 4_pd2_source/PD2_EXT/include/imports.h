/* imports.h - functions this module calls in other game modules, with the prototype
 * from the module that defines them (see 5_game_source/<Module>/include); the comment names the defining file. */
#pragma once

uint32_t LOCK();   /* called but not found in any module header or system DLL */
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);   /* sigmaRE/5_game_source/Bnclient/_unattributed/before_SRP_SHA.cpp */
uint32_t UNLOCK();   /* called but not found in any module header or system DLL */
uint32_t halt_baddata();   /* called but not found in any module header or system DLL */
uint32_t log2();   /* called but not found in any module header or system DLL */
uint32_t pcmpistri();   /* called but not found in any module header or system DLL */
uint32_t pshuflw();   /* called but not found in any module header or system DLL */
uint32_t xinuse();   /* called but not found in any module header or system DLL */
