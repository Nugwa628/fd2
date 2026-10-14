#!/usr/bin/env python3
r"""Build a candidate MPQ listfile for Diablo II archives that lack a (listfile).

usage: python3 -I make_listfile.py <out.txt> [--listfile F]... [--tsv F]... [--pe F]... [--txtdir D]...

  --listfile F  plain listfile (one path per line; 'key<TAB>path' lines also accepted)
  --tsv F       mpqx 'list' output; its path column is used (pseudo names skipped)
  --pe F        binary (DLL/EXE): ASCII and UTF-16LE strings containing 'data\\' are used;
                strings without an extension are expanded with the usual D2 extensions
  --txtdir D    directory tree of extracted excel .txt files; every *invfile / flippyfile column
                value becomes data\global\items\<value>.dc6

Generated on top: every excel table name seen anywhere (as .txt and .bin, plus the known
vanilla 1.13c table set) and the string tables for all D2 language folders.
Names are only candidates: StormLib keeps those whose hash matches an entry.
"""
import os
import re
import sys

VANILLA_EXCEL = """arena armor armtype automagic automap belts bodylocs books charstats chartemplate colors
compcode composit cubemain cubemod cubetype difficultylevels elemtypes events experience gamble gems
hiredesc hireling hitclass inventory itemratio itemscode itemstatcost itemtypes leveldefs levels
lowqualityitems lvlmaze lvlprest lvlsub lvltypes lvlwarp magicprefix magicsuffix misc misscalc
misscode missiles monai monequip monitempercent monlvl monmode monname monplace monpreset monprop
monseq monsounds monstats monstats2 montype monumod npc objects objgroup objmode objtype overlay
pettype playerclass plrmode plrtype properties qualityitems rareprefix raresuffix runes setitems sets
shrines skillcalc skilldesc skilldesccode skills skillscode soundenviron sounds states storepage
superuniques treasureclass treasureclassex uniqueappellation uniqueitems uniqueprefix uniquesuffix
uniquetitle weaponclass weapons""".split()
LANGS = "eng deu fra ita esp pol kor chi jpn por rus".split()
TBLS = "string expansionstring patchstring".split()
RUNES = ("El Eld Tir Nef Eth Ith Tal Ral Ort Thul Amn Sol Shael Dol Hel Io Lum Ko Fal Lem Pul Um "
         "Mal Ist Gul Vex Ohm Lo Sur Ber Jah Cham Zod").split()
EXTS = ".dc6 .dcc .dt1 .ds1 .wav .txt .bin .tbl .cof .pl2 .dat .pal .bik .tbl".split()


def pe_strings(path):
    data = open(path, "rb").read()
    out = set()
    for m in re.finditer(rb"[\x20-\x7e]{6,}", data):
        out.add(m.group().decode("ascii"))
    for m in re.finditer(rb"(?:[\x20-\x7e]\x00){6,}", data):
        out.add(m.group().decode("utf-16le"))
    res = set()
    for s in out:
        for m in re.finditer(r"(?i)data\\[\w\\. \-]+", s):
            res.add(m.group())
    return res


def invfile_values(path):
    lines = open(path, encoding="latin-1").read().split("\n")
    hdr = lines[0].rstrip("\r").split("\t")
    cols = [i for i, h in enumerate(hdr) if "invfile" in h.lower() or h.lower() == "flippyfile"]
    for line in lines[1:]:
        c = line.rstrip("\r").split("\t")
        for i in cols:
            if i < len(c) and c[i].strip():
                yield c[i].strip()


def main(argv):
    out = argv[0]
    names = set()
    i = 1
    while i < len(argv):
        opt, f = argv[i], argv[i + 1]
        i += 2
        if opt == "--listfile":
            for line in open(f, encoding="latin-1"):
                line = line.strip().split("\t")[-1].strip()
                if line:
                    names.add(line)
        elif opt == "--tsv":
            for n, line in enumerate(open(f, encoding="latin-1")):
                p = line.split("\t")[0]
                if n and not re.match(r"File\d{8}", p):
                    names.add(p)
        elif opt == "--pe":
            for s in pe_strings(f):
                s = s.rstrip("\\. ")
                names.add(s)
                if not re.search(r"\.\w{2,3}$", s):
                    for e in EXTS:
                        names.add(s + e)
        elif opt == "--txtdir":
            for dirpath, _, files in os.walk(f):
                for fn in files:
                    if fn.lower().endswith(".txt"):
                        for v in invfile_values(os.path.join(dirpath, fn)):
                            names.add("data\\global\\items\\%s.dc6" % v)
        else:
            sys.exit("bad option " + opt)
    excel = set(VANILLA_EXCEL)
    for n in list(names):
        m = re.match(r"(?i)data\\global\\excel\\(\w+)\.(txt|bin)$", n)
        if m:
            excel.add(m.group(1).lower())
    for t in excel:
        names.add("data\\global\\excel\\%s.txt" % t)
        names.add("data\\global\\excel\\%s.bin" % t)
    for lang in LANGS:
        for t in TBLS:
            names.add("data\\local\\lng\\%s\\%s.tbl" % (lang, t))
    # act loading-screen labels, localised (data\local\ui\<lang>\[Expansion\]A5L28.dc6 ...)
    for lang in LANGS:
        for sub in ("", "Expansion\\"):
            for a in range(1, 6):
                for n in range(60):
                    for fmt in ("A%dL%d", "A%dL%02d", "A%dQ%d", "A%dQ%02d"):
                        names.add("data\\local\\ui\\%s\\%s%s.dc6" % (lang, sub, fmt % (a, n)))
    for r in RUNES:
        names.add("data\\global\\items\\invr%s.dc6" % r)
    # same path with '/' separators normalised
    names = {n.replace("/", "\\") for n in names}
    with open(out, "w", encoding="latin-1", newline="\r\n") as fh:
        for n in sorted(names, key=str.lower):
            fh.write(n + "\n")
    print("%d candidate names -> %s" % (len(names), out))


if __name__ == "__main__":
    main(sys.argv[1:])
