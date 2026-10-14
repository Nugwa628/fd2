/* globals.h - every DAT_/PTR_ global referenced by the decompiled code.
 * Table globals carry recovered names and types (tables/sigma_tables.h). For the rest the type
 * is inferred from use: called -> code (function pointer), dereferenced or offset -> uint8_t *,
 * only address-taken -> opaque uint8_t[] object, otherwise uint32_t.
 * Comment lists reference count and the source files that use it. */
#pragma once

/* ---- recovered ---- */

/* ---- inferred from usage ---- */
extern uint8_t DAT_0040763f[];  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_00407640;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_004082dd[];  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_004082de;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_004083ef[];  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_004083f3;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_004083f7;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_004083fb;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_004083ff;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_00408403;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_00408407;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_0040840b;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_0040840f;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e138[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e13c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e140[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e150[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e154[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e164[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e168[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000e16c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ebdc[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ebf0[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ec00[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ec14[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ec28[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000ec88[];  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000edd0[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000f4c8[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000f4dc[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000f4f4[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000f50c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1000f528[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10010018;  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10012230;  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10012640;  /* x2  _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10012ac0;  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10012c58[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10013760[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_1001381c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10013b20[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10015000[];  /* x69  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint32_t DAT_10015040;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015050;  /* x16  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015060;  /* x13  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015074;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015078;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_1001507c;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015080;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015090;  /* x16  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015094[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015098[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100150a0[];  /* x8  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100150b8[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100151b9[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100152c0[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100153c8[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100154c8[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_100154d0;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015680[];  /* x3  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10015688[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10015730[];  /* x8  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10015790[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_10015890;  /* x8  _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10015908;  /* x6  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015910;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015914;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_1001591c;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015920;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015924;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015960;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100159ec;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100159f0;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100159f4;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100159f8;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100159fc;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a00;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a04;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a08;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a0c;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a10;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a14;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a18;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a1c;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a20;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a24;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015a28;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015c30[];  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015c38[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015c40[];  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c48;  /* x5  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c4c;  /* x6  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c50;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c51;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015c54[];  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c58;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c5c;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015c60[];  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c64;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c68;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c6c;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c70;  /* x10  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint32_t DAT_10015c74;  /* x7  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015c78;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015cb8[];  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015cc8;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015ce0[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015cf8;  /* x7  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015cfc;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015d08;  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015d20;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015d24;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015d28;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015d30[];  /* x3  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015e38[];  /* x5  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015e3c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015e40;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015e44;  /* x4  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015e48[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015e50;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015e54[];  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015e60;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015e68;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015fd0;  /* x7  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015fd4;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015fd8;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015fdc;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10015fe0[];  /* x6  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint32_t DAT_10015fe4;  /* x5  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015fe8;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015fec;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10015ff0;  /* x4  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015ff4;  /* x2  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10015ffc;  /* x4  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10016000;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t *DAT_10016008;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10016064[];  /* x11  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10016068;  /* x44  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_10016268;  /* x11  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint32_t DAT_1001626c;  /* x4  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016270[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016274[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016278[];  /* x3  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_1001627c[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_10016280;  /* x5  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016284[];  /* x6  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016288[];  /* x8  _unattributed/code_10007a36.cpp */
extern uint8_t *DAT_1001628c;  /* x19  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t DAT_10016298[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint8_t DAT_100162a0[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162a8;  /* x4  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162ac;  /* x3  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162b8;  /* x1  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162bc;  /* x1  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162c0;  /* x2  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162c4;  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t DAT_100162c8[];  /* x1  _unattributed/code_10001000.cpp */
extern uint32_t DAT_100162cc;  /* x1  _unattributed/code_10007a36.cpp */
extern uint32_t DAT_100162d0;  /* x1  _unattributed/code_10007a36.cpp */
extern code DAT_100162d4;  /* x2  _unattributed/code_10001000.cpp */
extern code DAT_100162d8;  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t DAT_10017000[];  /* x7  _unattributed/code_10001000.cpp */
extern code DAT_1001700c;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10017048;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10017050;  /* x3  _unattributed/code_10001000.cpp */
extern uint32_t DAT_10017068;  /* x3  _unattributed/code_10001000.cpp */
extern uint8_t PTR_DAT_1000e174[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t PTR_DAT_1000f558[];  /* x3  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_100155c0[];  /* x4  _unattributed/code_10001000.cpp, _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001567c[];  /* x3  _unattributed/code_10001000.cpp */
extern uint8_t PTR_DAT_10015738[];  /* x2  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001573c[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015740[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015744[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015748[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001574c[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015750[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015754[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015758[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001575c[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015768[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001576c[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015770[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015774[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015778[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_1001577c[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015780[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_DAT_10015784[];  /* x1  _unattributed/code_10007a36.cpp */
extern uint8_t PTR_LAB_1000ed50[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t PTR_LAB_1000edcc[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t PTR_PTR_10015678[];  /* x2  _unattributed/code_10001000.cpp */
extern uint8_t PTR____DestructExceptionObject_1000e17c[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t PTR_u_api_ms_win_core_datetime_l1_1_1_1000ef78[];  /* x1  _unattributed/code_10001000.cpp */
extern uint8_t PTR_u_api_ms_win_core_fibers_l1_1_1_1000eb34[];  /* x1  _unattributed/code_10001000.cpp */
