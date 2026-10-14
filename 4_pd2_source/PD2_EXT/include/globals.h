/* globals.h - every DAT_/PTR_ global referenced by the decompiled code.
 * Table globals carry recovered names and types (tables/sigma_tables.h). For the rest the type
 * is inferred from use: called -> code (function pointer), dereferenced or offset -> uint8_t *,
 * only address-taken -> opaque uint8_t[] object, otherwise uint32_t.
 * Comment lists reference count and the source files that use it. */
#pragma once

/* ---- recovered ---- */
extern uint8_t Game_sub_00407600_0040763f;  /* was DAT_0040763f: Game.exe code at 0x0040763f (+0x3f in sub_00407600, Game/_unattributed/code.cpp), patched at run time; x3 */
extern uint32_t Game_sub_00407600_00407640;  /* was DAT_00407640: Game.exe code at 0x00407640 (+0x40 in sub_00407600, Game/_unattributed/code.cpp), patched at run time; x2 */
extern uint8_t Game_sub_00408250_004082dd;  /* was DAT_004082dd: Game.exe code at 0x004082dd (+0x8d in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x3 */
extern uint32_t Game_sub_00408250_004082de;  /* was DAT_004082de: Game.exe code at 0x004082de (+0x8e in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x2 */
extern uint32_t Game_sub_00408250_004083ef;  /* was DAT_004083ef: Game.exe code at 0x004083ef (+0x19f in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x3 */
extern uint32_t Game_sub_00408250_004083f3;  /* was DAT_004083f3: Game.exe code at 0x004083f3 (+0x1a3 in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_004083f7;  /* was DAT_004083f7: Game.exe code at 0x004083f7 (+0x1a7 in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_004083fb;  /* was DAT_004083fb: Game.exe code at 0x004083fb (+0x1ab in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_004083ff;  /* was DAT_004083ff: Game.exe code at 0x004083ff (+0x1af in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_00408403;  /* was DAT_00408403: Game.exe code at 0x00408403 (+0x1b3 in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_00408407;  /* was DAT_00408407: Game.exe code at 0x00408407 (+0x1b7 in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint32_t Game_sub_00408250_0040840b;  /* was DAT_0040840b: Game.exe code at 0x0040840b (+0x1bb in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern uint8_t Game_sub_00408250_0040840f;  /* was DAT_0040840f: Game.exe code at 0x0040840f (+0x1bf in sub_00408250, Game/_unattributed/code.cpp), patched at run time; x1 */
extern code Orig_D2Win_10086;  /* was DAT_100162d4: original target of the call at Game.exe 0x40763f (in sub_00407600): Game.exe's import thunk 0x004074c6 -> D2Win_10086, D2Win/Src/_unattributed/between_Src_D2WinArchive_and_Src_D2Comp.cpp; saved before the call is redirected, called by the hook; x2 */
extern code Orig_Game_sub_00407ee0;  /* was DAT_100162d8: original target of the call at Game.exe 0x4082dd (in sub_00408250): sub_00407ee0 0x00407ee0, Game/_unattributed/code.cpp; saved before the call is redirected, called by the hook; x2 */

/* ---- inferred from usage ---- */
extern uint8_t DAT_1000e138[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e13c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e140[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e150[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e154[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e164[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e168[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000e16c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ebdc[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ebf0[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ec00[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ec14[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ec28[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000ec88[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000edd0[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000f4c8[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000f4dc[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000f4f4[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000f50c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1000f528[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10010018;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10012230;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10012640;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10012ac0;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10012c58[];  /* x1  lib/msvc_crt_stl_part02.cpp */
extern uint8_t DAT_10013760[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1001381c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10013b20[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015000[];  /* x69  dllmain.cpp, lib/msvc_crt_stl_part01.cpp, lib/msvc_crt_stl_part02.cpp */
extern uint32_t DAT_10015040;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015050;  /* x16  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015060;  /* x13  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015074;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015078;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_1001507c;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015080;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015090;  /* x16  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015094[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015098[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100150a0[];  /* x8  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100150b8[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100151b9[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100152c0[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100153c8[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100154c8[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_100154d0;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015680[];  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015688[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015730[];  /* x8  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015790[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015890;  /* x8  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015908;  /* x6  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015910;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015914;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_1001591c;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015920;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015924;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015960;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100159ec;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100159f0;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100159f4;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100159f8;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100159fc;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a00;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a04;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a08;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a0c;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a10;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a14;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a18;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a1c;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a20;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a24;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015a28;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015c30[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015c38[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015c40[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c48;  /* x5  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c4c;  /* x6  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c50;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c51;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015c54[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c58;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c5c;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015c60[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c64;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c68;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c6c;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c70;  /* x10  lib/msvc_crt_stl_part01.cpp, lib/msvc_crt_stl_part02.cpp */
extern uint32_t DAT_10015c74;  /* x7  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015c78;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015cb8[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015cc8;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015ce0[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015cf8;  /* x7  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015cfc;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015d08;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015d20;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015d24;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015d28;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015d30[];  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015e38[];  /* x5  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015e3c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015e40;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015e44;  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015e48[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015e50;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015e54[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015e60;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015e68;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015fd0;  /* x7  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015fd4;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015fd8;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015fdc;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10015fe0[];  /* x6  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015fe4;  /* x5  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015fe8;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015fec;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10015ff0;  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015ff4;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10015ffc;  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10016000;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10016008;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016064[];  /* x11  lib/msvc_crt_stl_part01.cpp, lib/msvc_crt_stl_part02.cpp */
extern uint8_t *DAT_10016068;  /* x44  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_10016268;  /* x11  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_1001626c;  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016270[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016274[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016278[];  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_1001627c[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10016280;  /* x5  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016284[];  /* x6  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016288[];  /* x8  lib/msvc_crt_stl_part01.cpp */
extern uint8_t *DAT_1001628c;  /* x19  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10016298[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100162a0[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162a8;  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162ac;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162b8;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162bc;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162c0;  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162c4;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_100162c8[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162cc;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_100162d0;  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t DAT_10017000[];  /* x7  lib/msvc_crt_stl_part01.cpp */
extern code DAT_1001700c;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10017048;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10017050;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint32_t DAT_10017068;  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1000e174[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1000f558[];  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_100155c0[];  /* x4  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001567c[];  /* x3  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015738[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001573c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015740[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015744[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015748[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001574c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015750[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015754[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015758[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001575c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015768[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001576c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015770[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015774[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015778[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_1001577c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015780[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_DAT_10015784[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_LAB_1000ed50[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_LAB_1000edcc[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_PTR_10015678[];  /* x2  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR____DestructExceptionObject_1000e17c[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_u_api_ms_win_core_datetime_l1_1_1_1000ef78[];  /* x1  lib/msvc_crt_stl_part01.cpp */
extern uint8_t PTR_u_api_ms_win_core_fibers_l1_1_1_1000eb34[];  /* x1  lib/msvc_crt_stl_part01.cpp */
