#!/usr/bin/env python3
"""fd2 phase 3: evidence for the game structures ProjectDiablo.dll touches, and include/d2structs.h.

The decompiled tree has no struct types: a unit is an int, its fields are *(int *)(p + 0x14). This script
types values by propagation and collects the offsets PD2 reads or writes:

  seeds        values whose type is known from the game build itself: *p_D2Client_DAT_6fbcbbfc is the player
               unit (D2Client.dll+0x11bbfc in 1.13c / +0x11d050 in 1.13d, PD2's own version pair says the same)
  fields       a pointer field of a typed value has the type the layout below gives it
               (Unit+0x60 -> Inventory, Unit+0x5c -> StatList, Inventory+0x0c -> Unit ...)
  locals       V = <typed expression>;  -> V has that type inside the function
  calls        a typed argument at position k of a call types parameter k of the callee: of a PD2 function
               (param_k in its body), or of a game function (then every PD2 call passes that type at k)
  repeated until nothing changes; a (callee, k) slot that receives two different types is dropped.

Every access *(T *)(X + off) / *(T *)X on a typed X is recorded with the PD2 function's address. The layout
table LAYOUT is the community 1.13c layout (D2MOO / D2BS / BH D2Structs.h names); the header marks each field
"proven: <addr>" when PD2 code accesses that offset with that size on a value of that type, "assumed" otherwise,
and adds offsets PD2 uses that the table does not name as unk_<off>.

Usage: struct_evidence.py <tree dir> [out header]   (default <tree>/include/d2structs.h)
"""
import os, re, sys, collections

# type -> [(offset, size, C type, name)]; pointer fields name their target type in the C type ("Inventory *")
LAYOUT = {
    'Unit': [
        (0x00, 4, 'uint32_t', 'dwType'), (0x04, 4, 'uint32_t', 'dwClassId'), (0x08, 4, 'void *', 'pMemPool'),
        (0x0c, 4, 'uint32_t', 'dwUnitId'), (0x10, 4, 'uint32_t', 'dwMode'), (0x14, 4, 'void *', 'pUnitData'),
        (0x18, 4, 'uint32_t', 'dwAct'), (0x1c, 4, 'Act *', 'pAct'), (0x20, 4, 'uint32_t', 'dwSeedLow'),
        (0x24, 4, 'uint32_t', 'dwSeedHigh'), (0x28, 4, 'uint32_t', 'dwInitSeed'), (0x2c, 4, 'Path *', 'pPath'),
        (0x44, 4, 'uint32_t', 'dwGfxFrame'), (0x48, 4, 'uint32_t', 'dwFrameRemain'), (0x4c, 2, 'uint16_t', 'wFrameRate'),
        (0x5c, 4, 'StatList *', 'pStatList'), (0x60, 4, 'Inventory *', 'pInventory'), (0x64, 4, 'void *', 'pLight'),
        (0x80, 4, 'Game *', 'pGame'),
        (0x8c, 2, 'uint16_t', 'wX'), (0x8e, 2, 'uint16_t', 'wY'), (0x94, 4, 'uint32_t', 'dwOwnerType'),
        (0x98, 4, 'uint32_t', 'dwOwnerId'), (0xa4, 4, 'void *', 'pOverheadMsg'), (0xa8, 4, 'SkillList *', 'pSkills'),
        (0xc4, 4, 'uint32_t', 'dwFlags'), (0xc8, 4, 'uint32_t', 'dwFlagsEx'), (0xe4, 4, 'Unit *', 'pListNext'),
        (0xe8, 4, 'Unit *', 'pRoomNext'),
    ],
    'PlayerData': [
        (0x00, 1, 'char', 'szName[16]'), (0x10, 4, 'void *', 'pQuestNormal'), (0x14, 4, 'void *', 'pQuestNightmare'),
        (0x18, 4, 'void *', 'pQuestHell'), (0x1c, 4, 'void *', 'pWaypointNormal'), (0x20, 4, 'void *', 'pWaypointNightmare'),
        (0x24, 4, 'void *', 'pWaypointHell'), (0x4c, 4, 'uint32_t', 'bBusy'), (0x50, 4, 'uint32_t', 'dwTradeState'),
        (0x58, 4, 'uint32_t', 'dwAcceptTradeTick'), (0x9c, 4, 'Client *', 'pClient'),
    ],
    'ItemData': [
        (0x00, 4, 'uint32_t', 'dwQuality'), (0x04, 4, 'uint32_t', 'dwSeedLow'), (0x08, 4, 'uint32_t', 'dwSeedHigh'),
        (0x0c, 4, 'uint32_t', 'dwOwnerGUID'), (0x10, 4, 'uint32_t', 'dwInitSeed'), (0x14, 4, 'uint32_t', 'dwCommandFlags'),
        (0x18, 4, 'uint32_t', 'dwItemFlags'), (0x24, 4, 'uint32_t', 'dwActionStamp'), (0x28, 4, 'uint32_t', 'dwFileIndex'),
        (0x2c, 4, 'uint32_t', 'dwItemLevel'), (0x30, 2, 'uint16_t', 'wItemFormat'), (0x32, 2, 'uint16_t', 'wRarePrefix'),
        (0x34, 2, 'uint16_t', 'wRareSuffix'), (0x36, 2, 'uint16_t', 'wAutoAffix'), (0x38, 2, 'uint16_t', 'wMagicPrefix[3]'),
        (0x3e, 2, 'uint16_t', 'wMagicSuffix[3]'), (0x44, 1, 'uint8_t', 'nBodyLoc'), (0x45, 1, 'uint8_t', 'nInvPage'),
        (0x48, 1, 'uint8_t', 'nEarLevel'), (0x49, 1, 'uint8_t', 'nInvGfxIdx'), (0x4a, 1, 'char', 'szPlayerName[16]'),
        (0x5c, 4, 'Inventory *', 'pOwnerInventory'), (0x60, 4, 'Unit *', 'pPrevItem'), (0x64, 4, 'Unit *', 'pNextItem'),
        (0x68, 1, 'uint8_t', 'nNodePos'), (0x69, 1, 'uint8_t', 'nNodePosOther'), (0x70, 4, 'Unit *', 'pOwner'),
    ],
    'Inventory': [
        (0x00, 4, 'uint32_t', 'dwSignature'), (0x04, 4, 'void *', 'pMemPool'), (0x08, 4, 'Unit *', 'pOwner'),
        (0x0c, 4, 'Unit *', 'pFirstItem'), (0x10, 4, 'Unit *', 'pLastItem'), (0x14, 4, 'void *', 'pGrids'),
        (0x18, 4, 'uint32_t', 'dwStoresCount'), (0x1c, 4, 'uint32_t', 'dwLeftItemGUID'), (0x20, 4, 'Unit *', 'pCursorItem'),
        (0x24, 4, 'uint32_t', 'dwOwnerGUID'), (0x28, 4, 'uint32_t', 'dwItemCount'),
    ],
    'StatList': [
        (0x00, 4, 'void *', 'pMemPool'), (0x04, 4, 'Unit *', 'pUnit'), (0x08, 4, 'uint32_t', 'dwOwnerType'),
        (0x0c, 4, 'uint32_t', 'dwOwnerGUID'), (0x10, 4, 'uint32_t', 'dwFlags'), (0x14, 4, 'uint32_t', 'dwStateNo'),
        (0x18, 4, 'uint32_t', 'dwExpireFrame'), (0x1c, 4, 'uint32_t', 'dwSkillNo'), (0x20, 4, 'uint32_t', 'dwSkillLevel'),
        (0x24, 4, 'Stat *', 'pStats'), (0x28, 2, 'uint16_t', 'wStatCount'), (0x2a, 2, 'uint16_t', 'wStatCapacity'),
        (0x2c, 4, 'StatList *', 'pPrevLink'), (0x30, 4, 'StatList *', 'pNext'), (0x34, 4, 'StatList *', 'pPrev'),
        (0x3c, 4, 'StatList *', 'pMyLastList'), (0x40, 4, 'StatList *', 'pMyStats'), (0x44, 4, 'Unit *', 'pOwner'),
        (0x48, 4, 'Stat *', 'pFullStats'), (0x4c, 2, 'uint16_t', 'wFullStatCount'), (0x4e, 2, 'uint16_t', 'wFullStatCapacity'),
        (0x54, 4, 'Stat *', 'pModStats'), (0x58, 2, 'uint16_t', 'wModStatCount'),
    ],
    'Stat': [(0x00, 2, 'uint16_t', 'wLayer'), (0x02, 2, 'uint16_t', 'wStatId'), (0x04, 4, 'int32_t', 'nValue')],
    'SkillList': [
        (0x00, 4, 'void *', 'pMemPool'), (0x04, 4, 'Skill *', 'pFirstSkill'), (0x08, 4, 'Skill *', 'pLeftSkill'),
        (0x0c, 4, 'Skill *', 'pRightSkill'), (0x10, 4, 'Skill *', 'pUsedSkill'),
    ],
    'Skill': [
        (0x00, 4, 'void *', 'pSkillsTxt'), (0x04, 4, 'Skill *', 'pNextSkill'), (0x08, 4, 'uint32_t', 'dwSkillMode'),
        (0x28, 4, 'uint32_t', 'dwSkillLevel'), (0x2c, 4, 'uint32_t', 'dwLevelBonus'), (0x30, 4, 'uint32_t', 'dwQuantity'),
        (0x34, 4, 'uint32_t', 'dwOwnerItemGUID'), (0x38, 4, 'uint32_t', 'dwCharges'),
    ],
    'Path': [
        (0x00, 2, 'uint16_t', 'wOffsetX'), (0x02, 2, 'uint16_t', 'wPosX'), (0x04, 2, 'uint16_t', 'wOffsetY'),
        (0x06, 2, 'uint16_t', 'wPosY'), (0x10, 4, 'uint32_t', 'dwTargetX'), (0x14, 4, 'uint32_t', 'dwTargetY'),
        (0x1c, 4, 'Room *', 'pRoom'), (0x20, 4, 'Room *', 'pPrevRoom'), (0x30, 4, 'Unit *', 'pUnit'),
        (0x58, 4, 'Unit *', 'pTargetUnit'),
    ],
    'Room': [(0x10, 4, 'void *', 'pRoomEx'), (0x74, 4, 'Unit *', 'pFirstUnit')],
    'Act': [(0x0c, 4, 'uint32_t', 'dwMapSeed'), (0x10, 4, 'Room *', 'pRoom'), (0x14, 4, 'uint32_t', 'dwAct')],
    # server-side structures (D2Game). PD2's sizes differ from vanilla: its dump reads Game+0x26fa
    'Game': [(0x7c, 4, 'uint32_t', 'dwInitSeed'), (0x88, 4, 'Client *', 'pClientList'), (0x1df4, 4, 'uint32_t', 'bGameEventId'),
             (0x26f2, 4, 'int32_t', 'nCorruptedZone'), (0x26fa, 4, 'int32_t', 'nItemAllocation')],
    'Client': [(0x00, 4, 'uint32_t', 'ClientNbr'), (0x1d, 1, 'char', 'szName[16]'), (0x174, 4, 'Unit *', 'ptPlayer'),
               (0x1ac, 4, 'uint32_t', 'nAct'), (0x1b4, 4, 'void *', 'unk_1b4_ptr'), (0x498, 2, 'uint16_t', 'wXpos'),
               (0x49a, 2, 'uint16_t', 'wYpos'), (0x4a8, 4, 'Client *', 'pNext')],
}
# Offsets and names that PD2's own diagnostic dump (0x10269710, functions/D2CommonFunctions.cpp, "Hit Halt #2568") prints
# by name: each logged value is loaded from the field right before the to_string call that prints it (checked in the
# disassembly; tools/pd2/README of phase 3). These are proven by PD2 code and named by PD2 itself.
LOG = '0x10269710'
LOG_EVIDENCE = {
    ('Inventory', 0x00): 'pInventory->dwSignature', ('Inventory', 0x18): 'pInventory->dwStoresCount',
    ('Inventory', 0x28): 'pInventory->dwItemCount', ('Unit', 0x00): 'pItem->dwType / pOwner->dwType',
    ('Unit', 0x04): 'pItem->dwTxtFileNo / pOwner->dwTxtFileNo', ('Unit', 0x14): 'pItem->pItemData / ptPlayer->pPlayerData',
    ('Unit', 0x2c): 'pPlayer->pPath', ('Unit', 0x80): 'pGame of the owner (Unit+0x80)', ('ItemData', 0x00): 'pItemData->dwQuality',
    ('ItemData', 0x28): 'pItemData->dwFileIndex', ('ItemData', 0x2c): 'pItemData->dwItemLevel', ('ItemData', 0x44): 'pItemData->BodyLocation',
    ('ItemData', 0x45): 'pItemData->ItemLocation', ('ItemData', 0x70): 'pOwner (fallback owner of the item)',
    ('PlayerData', 0x4c): 'pPlayerData->bBusy', ('PlayerData', 0x50): 'pPlayerData->dwTradeState',
    ('PlayerData', 0x58): 'pPlayerData->dwAcceptTradeTick', ('PlayerData', 0x9c): 'pOwner->pPlayerData client (name at +0x1d)',
    ('Path', 0x02): 'pPlayer->pPath->xPos', ('Path', 0x06): 'pPlayer->pPath->yPos',
    ('Game', 0x7c): 'pGame->dwInitSeed', ('Game', 0x88): 'pGame client list', ('Game', 0x1df4): 'pGame->bGameEventId',
    ('Game', 0x26f2): 'pGame->nCorruptedZone', ('Game', 0x26fa): 'pGame->nItemAllocation',
    ('Client', 0x00): 'pClient->ClientNbr', ('Client', 0x1d): 'client name string', ('Client', 0x174): 'pClient->ptPlayer',
    ('Client', 0x1ac): 'pClient->nAct', ('Client', 0x1b4): 'passed to D2Common_10826', ('Client', 0x498): 'pClient->wXpos',
    ('Client', 0x49a): 'pClient->wYpos', ('Client', 0x4a8): 'next client in the list',
}
# parameters typed by PD2's own null-check messages in that dump ("2568: pInventory was NULL" on param_1 ...)
PARAM_SEEDS = {('functions_D2CommonFunctions_10269710', 0): 'Inventory', ('functions_D2CommonFunctions_10269710', 1): 'Unit'}
NOTES = {
    'Unit': 'D2UnitStrc (D2MOO) / UnitAny (BH, D2BS); 0xF4 bytes. pUnitData is PlayerData/ItemData/MonsterData/ObjectData by dwType',
    'PlayerData': 'D2PlayerDataStrc; Unit.pUnitData when dwType == 0',
    'ItemData': 'D2ItemDataStrc; Unit.pUnitData when dwType == 4',
    'Inventory': 'D2InventoryStrc; dwSignature is 0x01020304',
    'StatList': 'D2StatListStrc + D2StatListExStrc (the Ex part from 0x3c, only for a unit\'s main list)',
    'Stat': 'D2StatStrc: one stat entry of a StatList array (8 bytes)',
    'SkillList': 'D2SkillListStrc (Unit+0xa8)',
    'Skill': 'D2SkillStrc',
    'Path': 'D2DynamicPathStrc (players, monsters, missiles)',
    'Room': 'D2ActiveRoomStrc (Room1)',
    'Act': 'D2DrlgActStrc',
    'Game': 'D2GameStrc (server); PD2 enlarged it (fields beyond the vanilla size)',
    'Client': 'D2ClientStrc (server-side client of a game)',
}
FIELD = {t: {o: (s, ct, n) for o, s, ct, n in fs} for t, fs in LAYOUT.items()}
SEEDS = [(r'\*p_D2Client_DAT_6fbcbbfc\b', 'Unit', 'player unit: D2Client.dll+0x11bbfc (1.13c) / +0x11d050 (1.13d), PD2 game_pointers.tsv')]
# (also LOG_EVIDENCE / PARAM_SEEDS below: PD2's own diagnostic dump names the fields it prints)

HDR = re.compile(r'^// 0x([0-9a-f]{8})  ')
SIZE = [(re.compile(r'^(char|byte|uchar|uint8_t|int8_t|bool|undefined1)$'), 1),
        (re.compile(r'^(short|ushort|uint16_t|int16_t|wchar16|wchar_t|undefined2)$'), 2),
        (re.compile(r'^(longlong|ulonglong|uint64_t|int64_t|double|undefined8)$'), 8)]
def size_of(t):
    t = t.strip()
    if t.endswith('*'): return 4
    for rx, n in SIZE:
        if rx.match(t): return n
    return 4

def functions(tree):
    for d, _, fs in os.walk(tree):
        for f in fs:
            if not f.endswith('.cpp'): continue
            lines = open(os.path.join(d, f), encoding='utf-8', errors='replace').read().split('\n')
            cur = None
            for l in lines:
                m = HDR.match(l)
                if m:
                    if cur: yield cur
                    cur = [int(m.group(1), 16), []]
                    continue
                if cur: cur[1].append(l)
            if cur: yield cur

def parse(fn):
    addr, lines = fn
    body = '\n'.join(lines)
    i = body.find('{')
    sig = body[:i] if i >= 0 else ''
    m = re.search(r'(\w+)\s*\(([^()]*(?:\([^()]*\)[^()]*)*)\)\s*$', re.sub(r'/\*.*?\*/', '', sig, flags=re.S).strip())
    name, params = (m.group(1), [p.strip().split()[-1].lstrip('*') if p.strip() and p.strip() != 'void' else '' for p in m.group(2).split(',')]) if m else ('?', [])
    # element size of pointer variables (for p[N] indexing): parameters and the local declarations
    elem = {}
    decls = (m.group(2).split(',') if m else []) + re.findall(r'(?m)^\s+([\w ]+?\s*\*+\s*\w+);', body[i:] if i >= 0 else '')
    for d in decls:
        dm = re.match(r'^\s*([\w ]+?)\s*(\*+)\s*(\w+)\s*$', d)
        if dm and len(dm.group(2)) == 1: elem[dm.group(3)] = size_of(dm.group(1))
        elif dm: elem[dm.group(3)] = 4
    return {'addr': addr, 'name': name, 'params': params, 'body': body[i:] if i >= 0 else '', 'elem': elem}

ATOM = r'(?:\*?\(\w[\w ]*\*+\)\s*)?'   # optional cast before an operand

def main(tree, out):
    funcs = [parse(f) for f in functions(tree)]
    byname = {f['name']: f for f in funcs}
    param_type = dict(PARAM_SEEDS)      # (callee name, index) -> type
    bad_slots = set()
    var_types = collections.defaultdict(dict)   # func addr -> var -> type
    lit_types = collections.defaultdict(dict)   # func addr -> literal field-read expression -> type
    acc = collections.defaultdict(lambda: collections.defaultdict(set))   # type -> (off, size) -> {addr}
    for it in range(6):
        changed = False
        votes = collections.defaultdict(collections.Counter)
        for f in funcs:
            vt = var_types[f['addr']]
            for k, p in enumerate(f['params']):
                t = param_type.get((f['name'], k))
                if t and p and vt.get(p) != t: vt[p] = t; changed = True
            body = f['body']
            # typed atoms: seeds and typed variables
            atoms = [(rx, t) for rx, t, _ in SEEDS] + [(r'\b' + re.escape(v) + r'\b', t) for v, t in vt.items()] + \
                    [(re.escape(x), t) for x, t in lit_types[f['addr']].items()]
            if not atoms: continue
            for rx, t in atoms:
                # field reads: *(T *)(X + off)  and  *(T *)X / *X
                for m in re.finditer(r'\*\((\w[\w ]*?)\s*\*\)\(' + ATOM + '(' + rx + r')\s*\+\s*(0x[0-9a-f]+|\d+)\)', body):
                    off = int(m.group(3), 0); sz = size_of(m.group(1))
                    acc[t][(off, sz)].add(f['addr'])
                    fld = FIELD.get(t, {}).get(off)
                    # V = *(T *)(X + off); with a pointer field -> V has the field's type
                    if fld and fld[1].endswith('*') and fld[1][:-1].strip() in LAYOUT:
                        tgt = fld[1][:-1].strip()
                        if m.group(0) not in lit_types[f['addr']]: lit_types[f['addr']][m.group(0)] = tgt; changed = True
                        before = body[max(0, m.start() - 60):m.start()]
                        vm = re.search(r'(\w+) = (?:\([\w ]+\*?\))?\s*$', before)
                        if vm and vt.get(vm.group(1)) != tgt and vm.group(1) not in vt:
                            vt[vm.group(1)] = tgt; changed = True
                for m in re.finditer(r'\*\((\w[\w ]*?)\s*\*\)(' + rx + r')(?![\w\[(+])', body):
                    acc[t][(0, size_of(m.group(1)))].add(f['addr'])
                # p[N] on a typed pointer variable
                if rx.startswith(r'\b'):
                    v = rx[2:-2].replace('\\', '')
                    if v in f['elem']:
                        for m in re.finditer(r'\b' + re.escape(v) + r'\[(0x[0-9a-f]+|\d+)\]', body):
                            acc[t][(int(m.group(1), 0) * f['elem'][v], f['elem'][v])].add(f['addr'])
                # V = X;  (plain copy, maybe cast)
                for m in re.finditer(r'(?m)^\s*(\w+) = ' + ATOM + '(?:' + rx + r');', body):
                    v = m.group(1)
                    if v not in vt: vt[v] = t; changed = True
            # pUnitData by unit type: inside "if (*U == 4)" style code the copy of U->pUnitData is ItemData (0: PlayerData)
            for v, t in list(vt.items()):
                if t != 'Unit': continue
                for kind, tgt in ((4, 'ItemData'), (0, 'PlayerData')):
                    if not re.search(r'\*(?:\(\w+ \*\))?' + re.escape(v) + r' (?:==|!=) ' + str(kind) + r'\b', body): continue
                    if re.search(r'\*(?:\(\w+ \*\))?' + re.escape(v) + r' (?:==|!=) (?!' + str(kind) + r'\b)\d', body): continue
                    for m in re.finditer(r'(?m)^\s*(\w+) = \*\(\w+ \*\)\(' + ATOM + re.escape(v) + r' \+ 0x14\);', body):
                        if m.group(1) not in vt: vt[m.group(1)] = tgt; changed = True
            # calls: NAME(args) with typed args
            for m in re.finditer(r'(?:\(\*)?\b([A-Za-z_]\w*)\)?\s*\(([^;{}]*)\)', body):
                callee, args = m.group(1), m.group(2)
                if callee in ('if', 'while', 'for', 'switch', 'return', 'sizeof'): continue
                parts, depth, cur = [], 0, ''
                for ch in args:
                    if ch == '(': depth += 1
                    elif ch == ')': depth -= 1
                    if ch == ',' and depth == 0: parts.append(cur); cur = ''
                    else: cur += ch
                parts.append(cur)
                for k, a in enumerate(parts):
                    a = re.sub(r'^\s*\(\w[\w ]*\*?\)\s*', '', a.strip())
                    for rx, t in atoms:
                        if re.fullmatch(rx.replace(r'\b', '') if rx.startswith(r'\*') else rx, a):
                            votes[(callee, k)][t] += 1
        # return values: a PD2 function that returns a typed variable types "X = F(...)" in its callers
        for f in funcs:
            vt = var_types[f['addr']]
            rets = {vt.get(m.group(1)) for m in re.finditer(r'\breturn \(?(?:\w[\w ]*\*?\))?\s*(\w+);', f['body'])}
            if len(rets) == 1 and None not in rets:
                votes[(f['name'], 'ret')][next(iter(rets))] += 1
        for g in funcs:
            for m in re.finditer(r'(?m)^\s*(\w+) = (?:\(\w[\w ]*\*?\))?\s*(\w+)\(', g['body']):
                t = param_type.get((m.group(2), 'ret'))
                if t and m.group(1) not in var_types[g['addr']]: var_types[g['addr']][m.group(1)] = t; changed = True
        for slot, c in votes.items():
            if len(c) > 1: bad_slots.add(slot); continue
            t = next(iter(c))
            if slot not in bad_slots and param_type.get(slot) != t:
                param_type[slot] = t; changed = True
        for s in bad_slots: param_type.pop(s, None)
        if not changed: break
    write(out, acc, param_type, sum(len(v) for v in var_types.values()))

def write(out, acc, param_type, nvars):
    L = []
    L.append('/* d2structs.h - Diablo II 1.13c game structures as ProjectDiablo.dll uses them.')
    L.append(' * Generated by tools/pd2/struct_evidence.py (fd2 phase 3); do not edit, change the script.')
    L.append(' * Names and the layout come from the community 1.13c layouts (D2MOO, D2BS, BH\'s D2Structs.h);')
    L.append(' * evidence comes from PD2\'s own code: its diagnostic dump at 0x10269710 prints fields by name ("pItemData->dwQuality"),')
    L.append(' * and values are typed from that dump\'s parameters and from the player-unit pointer')
    L.append(' * (D2Client.dll+0x11bbfc) through pointer fields, local copies and call arguments, and every')
    L.append(' *   proven: <addr>   = a PD2 function at <addr> reads or writes this offset with this size on a value of this type')
    L.append(' *   assumed          = layout knowledge only, PD2 code shows no access')
    L.append(' *   unk_<off>        = PD2 accesses this offset but the layout table has no name for it')
    L.append(' * Typed values: %d local variables/parameters, %d call slots (callee, argument) typed.' % (nvars, len(param_type)))
    L.append(' * Not applied to the decompiled sources yet (see README.md, "Structures"). */')
    L.append('#pragma once')
    L.append('#include <stdint.h>')
    L.append('')
    for t in LAYOUT: L.append('typedef struct %s %s;' % (t, t))
    L.append('')
    proven_total = assumed_total = unk_total = 0
    for t, fields in LAYOUT.items():
        seen = acc.get(t, {})
        L.append('/* %s */' % NOTES.get(t, t))
        L.append('struct %s {' % t)
        names = {o: (s, ct, n) for o, s, ct, n in fields}
        offs = sorted(set(list(names) + [o for o, s in seen]))
        pos = 0
        for o in offs:
            if o > 0x400 and o not in names: continue
            if o < pos: continue
            if o > pos:
                L.append('    uint8_t _pad_%02x[0x%x];' % (pos, o - pos))
            if o in names:
                s, ct, n = names[o]
                ev = sorted(set().union(*[a for (oo, ss), a in seen.items() if oo == o and ss == s])) if any(oo == o and ss == s for oo, ss in seen) else []
                logged = LOG_EVIDENCE.get((t, o))
                other = sorted({ss for (oo, ss) in seen if oo == o and ss != s})
                cnt = 1
                am = re.match(r'(\w+)\[(\d+)\]', n)
                if am: cnt = int(am.group(2))
                if ev or logged: proven_total += 1
                else: assumed_total += 1
                evs = ([('%s (dump prints "%s")' if '->' in logged else '%s (dump: %s)') % (LOG, logged)] if logged else []) + ['0x%08x' % a for a in ev[:3]]
                tag = ('/* +0x%02x proven: %s%s */' % (o, ', '.join(evs), ' (+%d more)' % (len(ev) - 3) if len(ev) > 3 else '')) if evs else '/* +0x%02x assumed */' % o
                if other: tag = tag[:-3] + '; also accessed as %s-byte */' % '/'.join(map(str, other))
                L.append('    %s %s;%s%s' % (ct, n, ' ' * max(1, 34 - len(ct) - len(n)), tag))
                pos = o + s * cnt
            else:
                szs = sorted({ss for (oo, ss) in seen if oo == o})
                s = szs[-1]
                ev = sorted(set().union(*[a for (oo, ss), a in seen.items() if oo == o]))
                ct = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}[s]
                unk_total += 1
                L.append('    %s unk_%02x;%s/* +0x%02x proven: %s%s (name unknown%s) */' % (ct, o, ' ' * max(1, 30 - len(ct)), o,
                         ', '.join('0x%08x' % a for a in ev[:3]), ' (+%d more)' % (len(ev) - 3) if len(ev) > 3 else '',
                         ', sizes ' + '/'.join(map(str, szs)) if len(szs) > 1 else ''))
                pos = o + s
        L.append('};')
        L.append('')
    L.insert(9, ' * Fields: %d proven, %d assumed, %d unnamed offsets PD2 uses.' % (proven_total, assumed_total, unk_total))
    os.makedirs(os.path.dirname(out), exist_ok=True)
    open(out, 'w', encoding='utf-8').write('\n'.join(L) + '\n')
    print('d2structs.h: %d proven, %d assumed, %d unknown offsets; %d call slots typed' % (proven_total, assumed_total, unk_total, len(param_type)))

if __name__ == '__main__':
    tree = sys.argv[1]
    main(tree, sys.argv[2] if len(sys.argv) > 2 else os.path.join(tree, 'include', 'd2structs.h'))
