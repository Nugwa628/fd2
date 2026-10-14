#!/usr/bin/env python3
r"""Phase 1 table stage: PD2 excel tables -> 2_txt, vanilla 1.13c baseline from patch_d2.mpq, diffs.

usage: python3 -I build_tables.py <pd2data extract dir> <patch_d2 extract dir> <repo 2_txt dir>

Reads the trees written by tools/mpq/run_all.sh (1_bin_from_mpq/pd2data, 1_bin_from_mpq/patch_d2).
Writes (all generated, do not hand-edit):
  2_txt/pd2/<table>.txt                  PD2 excel .txt, byte copy, lower-case file name
  2_txt/pd2/raw_dumps/<table>.txt        PD2 .bin tables without a .txt (u8@offset columns /
                                         hex for the compiled formula blobs *code.bin)
  2_txt/pd2/strings/<name>.tbl.txt       decoded PD2 .tbl files
  2_txt/pd2/other/<file>                 other text files in pd2data (UTF-16 -> UTF-8)
  2_txt/vanilla_113c/<table>.txt         stock 1.13c excel .txt from patch_d2.mpq (byte copy)
  2_txt/vanilla_113c/raw_dumps/<t>.txt   stock .bin tables that have no .txt in patch_d2.mpq
  2_txt/vanilla_113c/strings/patchstring.tbl.txt   stock English patchstring.tbl
  2_txt/diff/<table>.md, 2_txt/diff/README.md, 2_txt/PD2_ONLY.md, 2_txt/pd2/TABLES.md
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.dont_write_bytecode = True
sys.path.insert(0, HERE)
import tbl2txt  # noqa: E402

# Excel table names of stock 1.13c (d2data/d2exp/patch_d2), as .txt or .bin
VANILLA = set("""aiparms arena armor armtype automagic automap belts bodylocs books charstats chartemplate
colors compcode composit cubemain cubemod cubetype difficultylevels elemtypes events experience gamble
gems hiredesc hireling hitclass inventory itemratio itemscode itemstatcost itemtypes leveldefs levels
lowqualityitems lvlmaze lvlprest lvlsub lvltypes lvlwarp magicprefix magicsuffix misc misscalc
misscode missiles monai monequip monitempercent monlvl monmode monname monplace monpreset monprop
monseq monsounds monstats monstats2 montype monumod npc objects objgroup objmode objtype overlay
pettype playerclass plrmode plrtype properties qualityitems rareprefix raresuffix runes setitems sets
shrines skillcalc skilldesc skilldesccode skills skillscode soundenviron sounds states storepage
superuniques treasureclass treasureclassex uniqueappellation uniqueitems uniqueprefix uniquesuffix
uniquetitle weaponclass weapons""".split())

# Natural key column per table (else: first column). Duplicate keys get '#2', '#3', ... suffixes.
KEYS = {
    "armor": "code", "weapons": "code", "misc": "code", "gems": "code", "levels": "Id",
    "missiles": "Missile", "monstats": "Id", "monstats2": "Id", "objects": "Id", "skills": "Id",
    "skilldesc": "skilldesc", "states": "state", "itemstatcost": "ID", "itemtypes": "Code",
    "properties": "code", "superuniques": "Superunique", "treasureclassex": "Treasure Class",
    "uniqueitems": "index", "setitems": "index", "sets": "index", "sounds": "Sound", "overlay": "overlay",
    "monsounds": "Id", "monprop": "Id", "montype": "type", "monai": "AI", "runes": "Name",
    "cubemain": "description", "experience": "Level", "monlvl": "Level", "pettype": "pet type",
}
# Tables where the game indexes rows by position: report index shifts
INDEXED_NOTE = "D2 links most tables by row index, so inserted/reordered rows shift every later index."


def find_excel(root):
    for dp, dn, fn in os.walk(root):
        if os.path.basename(dp).lower() == "excel":
            return dp
    sys.exit("no excel dir under " + root)


def read_table(path):
    text = open(path, "rb").read().decode("latin-1")
    lines = text.split("\n")
    lines = [ln[:-1] if ln.endswith("\r") else ln for ln in lines]
    while lines and lines[-1] == "":
        lines.pop()
    hdr = lines[0].split("\t")
    rows = [ln.split("\t") for ln in lines[1:]]
    return hdr, rows


def uniq_names(names):
    seen = {}
    out = []
    for n in names:
        n2 = n.strip()
        c = seen.get(n2, 0) + 1
        seen[n2] = c
        out.append(n2 if c == 1 else "%s#%d" % (n2, c))
    return out


def keyed(hdr, rows, keycol):
    ki = hdr.index(keycol) if keycol in hdr else 0
    seen = {}
    out = {}
    order = []
    for idx, r in enumerate(rows):
        k = r[ki].strip() if ki < len(r) else ""
        c = seen.get(k, 0) + 1
        seen[k] = c
        kk = k if c == 1 else "%s#%d" % (k, c)
        out[kk] = (idx, r)
        order.append(kk)
    return out, order, hdr[ki] if ki < len(hdr) else "?"


def cell(r, i):
    return r[i].strip() if i < len(r) else ""


def norm(v):
    # the game's txt parser reads an empty numeric cell as 0
    return "0" if v == "" else v


def md_esc(s):
    return s.replace("|", "\\|").replace("\n", " ")


def rowsummary(names, r, limit=None):
    parts = ["%s=%s" % (names[i], cell(r, i)) for i in range(len(names)) if cell(r, i) != ""]
    return "; ".join(parts)


def diff_table(name, vpath, ppath, outdir):
    vh, vr = read_table(vpath)
    ph, pr = read_table(ppath)
    vn, pn = uniq_names(vh), uniq_names(ph)
    keycol = KEYS.get(name, vh[0])
    if keycol not in vh or keycol not in ph:
        keycol = vh[0]
    vk, vorder, kname = keyed(vh, vr, keycol)
    pk, porder, _ = keyed(ph, pr, keycol)
    added_cols = [c for c in pn if c not in vn]
    removed_cols = [c for c in vn if c not in pn]
    # a removed and an added column at the same position = renamed column, compared as one
    renamed = [(i, vn[i], pn[i]) for i in range(min(len(vn), len(pn)))
               if vn[i] in removed_cols and pn[i] in added_cols]
    for i, o, n in renamed:
        removed_cols.remove(o)
        added_cols.remove(n)
    common = [c for c in vn if c in pn] + [o for i, o, n in renamed]
    vi = {c: vn.index(c) for c in common}
    pi = {c: pn.index(c) for c in common if c in pn}
    pi.update({o: pn.index(n) for i, o, n in renamed})
    added = [k for k in porder if k not in vk]
    removed = [k for k in vorder if k not in pk]
    changed = []
    moved = 0
    for k in vorder:
        if k not in pk:
            continue
        (oi, orow), (ni, nrow) = vk[k], pk[k]
        if oi != ni:
            moved += 1
        ch = [(c, cell(orow, vi[c]), cell(nrow, pi[c])) for c in common
              if norm(cell(orow, vi[c])) != norm(cell(nrow, pi[c]))]
        if ch:
            changed.append((k, oi, ni, ch))
    L = []
    L.append("# %s: PD2 vs vanilla 1.13c" % name)
    L.append("")
    L.append("Generated by `tools/data/build_tables.py`. Vanilla = `patch_d2.mpq` (stock 1.13c); PD2 = `pd2data.mpq`.")
    L.append("Key column: `%s` (duplicates suffixed `#n` by occurrence). Cells compared after trimming spaces; empty and `0` count as equal (the game reads an empty numeric cell as 0)." % kname)
    L.append("")
    L.append("| | vanilla | PD2 |")
    L.append("|---|---:|---:|")
    L.append("| rows | %d | %d |" % (len(vr), len(pr)))
    L.append("| columns | %d | %d |" % (len(vh), len(ph)))
    L.append("")
    L.append("Summary: %d rows added, %d removed, %d changed, %d kept rows at a different row index. "
             "%d columns added, %d removed, %d renamed." % (len(added), len(removed), len(changed), moved, len(added_cols),
                                               len(removed_cols), len(renamed)))
    if moved:
        L.append("")
        L.append(INDEXED_NOTE)
    if added_cols or removed_cols or renamed:
        L.append("")
        L.append("## Columns")
        L.append("")
        if added_cols:
            L.append("Added: " + ", ".join("`%s`" % c for c in added_cols))
        if removed_cols:
            L.append("")
            L.append("Removed: " + ", ".join("`%s`" % c for c in removed_cols))
        if renamed:
            L.append("")
            L.append("Renamed (same position): " + ", ".join("`%s` -> `%s`" % (o, n) for i, o, n in renamed))
    if added:
        L.append("")
        L.append("## Added rows (%d)" % len(added))
        L.append("")
        L.append("Format: `key` (PD2 row index): non-empty cells as column=value.")
        L.append("")
        for k in added:
            idx, r = pk[k]
            L.append("- `%s` (row %d): %s" % (md_esc(k), idx, md_esc(rowsummary(pn, r))))
    if removed:
        L.append("")
        L.append("## Removed rows (%d)" % len(removed))
        L.append("")
        for k in removed:
            idx, r = vk[k]
            L.append("- `%s` (vanilla row %d): %s" % (md_esc(k), idx, md_esc(rowsummary(vn, r))))
    if changed:
        L.append("")
        L.append("## Changed rows (%d)" % len(changed))
        L.append("")
        for k, oi, ni, ch in changed:
            pos = "row %d" % ni if oi == ni else "row %d -> %d" % (oi, ni)
            L.append("### `%s` (%s)" % (md_esc(k), pos))
            L.append("")
            L.append("| column | vanilla | PD2 |")
            L.append("|---|---|---|")
            for c, o, n in ch:
                L.append("| %s | %s | %s |" % (md_esc(c), md_esc(o), md_esc(n)))
            L.append("")
    write(os.path.join(outdir, name + ".md"), "\n".join(L).rstrip() + "\n")
    return {"vrows": len(vr), "prows": len(pr), "added": len(added), "removed": len(removed),
            "changed": len(changed), "moved": moved, "acols": len(added_cols), "rcols": len(removed_cols),
            "key": kname, "rename": ["%s->%s" % (o, n) for i, o, n in renamed]}


def write(path, text, mode="w"):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, mode, encoding="utf-8", newline="\n") as fh:
        fh.write(text)


def copy(src, dst):
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    with open(src, "rb") as a, open(dst, "wb") as b:
        b.write(a.read())


def bin_info(path):
    d = open(path, "rb").read()
    n = struct.unpack_from("<I", d, 0)[0]
    rec = (len(d) - 4) // n if n and (len(d) - 4) % n == 0 and (len(d) - 4) // n < 4096 else None
    return d, n, rec


def raw_dump(path, out):
    """u8@offset columns per record (like sigmaRE sigma_raw_dumps); hex lines when not a record table."""
    d, n, rec = bin_info(path)
    L = []
    if rec:
        L.append("\t".join(["row"] + ["u8@%d" % i for i in range(rec)]))
        for r in range(n):
            b = d[4 + r * rec: 4 + (r + 1) * rec]
            L.append("\t".join([str(r)] + [str(x) for x in b]))
        kind = "%d records x %d bytes" % (n, rec)
    else:
        L.append("offset\thex")
        for o in range(0, len(d), 16):
            L.append("%d\t%s" % (o, d[o:o + 16].hex(" ")))
        kind = "%d bytes, not a fixed-record table (compiled formula code)" % len(d)
    write(out, "\n".join(L) + "\n")
    return kind


def raw_diff(name, vbin, pbin, outdir):
    vd, vn, vrec = bin_info(vbin)
    pd, pn, prec = bin_info(pbin)
    L = ["# %s: PD2 vs vanilla 1.13c (.bin records)" % name, "",
         "No vanilla .txt exists in patch_d2.mpq for this table; the stock .bin is compared record by record "
         "with PD2's .bin (column names unknown here, offsets in bytes). PD2's .txt is in `2_txt/pd2/%s.txt`." % name, "",
         "| | vanilla | PD2 |", "|---|---:|---:|", "| records | %d | %d |" % (vn, pn), "| record size | %s | %s |" % (vrec, prec), ""]
    changed = 0
    if vrec and vrec == prec:
        body = []
        for r in range(min(vn, pn)):
            a = vd[4 + r * vrec: 4 + (r + 1) * vrec]
            b = pd[4 + r * prec: 4 + (r + 1) * prec]
            if a != b:
                changed += 1
                offs = [i for i in range(vrec) if a[i] != b[i]]
                body.append("- record %d: " % r + ", ".join("@%d %d->%d" % (i, a[i], b[i]) for i in offs))
        L.append("Summary: %d records changed in the first %d, %d records added, %d removed." %
                 (changed, min(vn, pn), max(0, pn - vn), max(0, vn - pn)))
        L.append("")
        if body:
            L.append("## Changed records (byte offset old->new)")
            L.append("")
            L += body
        if pn > vn:
            L.append("")
            L.append("Records %d..%d are new in PD2 (see raw dump / PD2 .txt)." % (vn, pn - 1))
    else:
        L.append("Record sizes differ; no record diff.")
    write(os.path.join(outdir, name + ".md"), "\n".join(L).rstrip() + "\n")
    return {"vrows": vn, "prows": pn, "changed": changed, "added": max(0, pn - vn), "removed": max(0, vn - pn)}


def main(argv):
    pd2root, vroot, out = argv[:3]
    pex, vex = find_excel(pd2root), find_excel(vroot)
    pfiles = {f.lower(): os.path.join(pex, f) for f in os.listdir(pex)}
    vfiles = {f.lower(): os.path.join(vex, f) for f in os.listdir(vex)}
    ptables = sorted({f.rsplit(".", 1)[0] for f in pfiles})
    vtables = sorted({f.rsplit(".", 1)[0] for f in vfiles})
    pd2dir, vdir, ddir = os.path.join(out, "pd2"), os.path.join(out, "vanilla_113c"), os.path.join(out, "diff")
    # clean generated dirs
    for d in (pd2dir, vdir, ddir):
        for dp, dn, fn in os.walk(d, topdown=False):
            for f in fn:
                if f != ".gitkeep":
                    os.remove(os.path.join(dp, f))
    inv = []  # (table, pd2 txt rows, cols, bin rows, bin rec, vanilla source)
    for t in ptables:
        txt, binf = pfiles.get(t + ".txt"), pfiles.get(t + ".bin")
        rows = cols = ""
        if txt:
            copy(txt, os.path.join(pd2dir, t + ".txt"))
            h, r = read_table(txt)
            rows, cols = len(r), len(h)
        brow = brec = ""
        if binf:
            _, brow, brec = bin_info(binf)
            if not txt:
                raw_dump(binf, os.path.join(pd2dir, "raw_dumps", t + ".txt"))
        if t + ".txt" in vfiles:
            vs = "patch_d2 .txt"
        elif t + ".bin" in vfiles:
            vs = "patch_d2 .bin only"
        else:
            vs = "none"
        inv.append((t, os.path.basename(txt) if txt else "", rows, cols, brow, brec or "", vs))
    # vanilla copies
    for t in vtables:
        if t + ".txt" in vfiles:
            copy(vfiles[t + ".txt"], os.path.join(vdir, t + ".txt"))
        elif t + ".bin" in vfiles:
            raw_dump(vfiles[t + ".bin"], os.path.join(vdir, "raw_dumps", t + ".txt"))
    # strings + other text in pd2data
    for dp, dn, fn in os.walk(pd2root):
        for f in fn:
            p = os.path.join(dp, f)
            if f.lower().endswith(".tbl"):
                hdr, rows = tbl2txt.decode(open(p, "rb").read(), "utf-8")
                write(os.path.join(pd2dir, "strings", f.lower() + ".txt"),
                      "".join("%s\t%s\r\n" % (tbl2txt.esc(k), tbl2txt.esc(v)) for k, v in rows))
            elif f.lower().endswith(".txt") and os.path.basename(dp).lower() != "excel":
                b = open(p, "rb").read()
                s = b.decode("utf-16") if b[:2] in (b"\xff\xfe", b"\xfe\xff") else b.decode("latin-1")
                write(os.path.join(pd2dir, "other", f), s)
    vtbl = None
    for dp, dn, fn in os.walk(vroot):
        for f in fn:
            if f.lower() == "patchstring.tbl" and os.path.basename(dp).lower() == "eng":
                vtbl = os.path.join(dp, f)
    if vtbl:
        hdr, rows = tbl2txt.decode(open(vtbl, "rb").read(), "utf-8")
        write(os.path.join(vdir, "strings", "patchstring.tbl.txt"),
              "".join("%s\t%s\r\n" % (tbl2txt.esc(k), tbl2txt.esc(v)) for k, v in rows))
    # diffs
    res = {}
    for t in ptables:
        if t + ".txt" in pfiles and t + ".txt" in vfiles:
            res[t] = ("txt", diff_table(t, vfiles[t + ".txt"], pfiles[t + ".txt"], ddir))
        elif t + ".bin" in pfiles and t + ".bin" in vfiles and t + ".txt" not in vfiles and not t.endswith("code") and t != "leveldefs":
            res[t] = ("bin", raw_diff(t, vfiles[t + ".bin"], pfiles[t + ".bin"], ddir))
    # string diff
    ptbl = os.path.join(pd2dir, "strings", "patchstring.tbl.txt")
    sres = None
    if vtbl and os.path.exists(ptbl):
        sres = diff_strings(os.path.join(vdir, "strings", "patchstring.tbl.txt"), ptbl, os.path.join(ddir, "patchstring.tbl.md"))
    # diff README
    L = ["# Diffs: PD2 vs vanilla 1.13c", "",
         "Generated by `tools/data/build_tables.py`. Baseline: stock `patch_d2.mpq` shipped in the PD2 install "
         "(verdict and evidence in `../README.md`). Tables whose stock version lives only in `d2data.mpq` / "
         "`d2exp.mpq` (not provided) have no baseline.", "",
         "| table | baseline | vanilla rows | PD2 rows | added | removed | changed | index-shifted | +cols | -cols | key |",
         "|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---|"]
    for t in ptables:
        if t in res:
            kind, r = res[t]
            L.append("| [%s](%s.md) | %s | %d | %d | %d | %d | %d | %s | %s | %s | %s |" % (
                t, t, "patch_d2 .txt" if kind == "txt" else "patch_d2 .bin (raw records)", r["vrows"], r["prows"],
                r["added"], r["removed"], r["changed"], r.get("moved", ""), r.get("acols", ""), r.get("rcols", ""),
                "`%s`" % r["key"] if "key" in r else "record index"))
    if sres:
        L.append("| [patchstring.tbl](patchstring.tbl.md) | patch_d2 eng .tbl | %d | %d | %d | %d | %d | | | | key |" % sres)
    L += ["", "## No baseline", "",
          "PD2 tables with no stock copy in `patch_d2.mpq` (stock version is in d2data/d2exp, not provided):", ""]
    nob = [t for t in ptables if t not in res and t in VANILLA]
    for t in nob:
        e = [x for x in inv if x[0] == t][0]
        L.append("- `%s` (%s)" % (t, "txt + bin" if e[1] and e[4] != "" else ("txt only" if e[1] else "bin only")))
    L += ["", "Also no baseline: `string.tbl`, `expansionstring.tbl` (PD2 ships neither; the game uses the stock ones).",
          "Compiled-only tables (`itemscode`, `misscode`, `skillscode`, `skilldesccode`, `leveldefs`) are byproducts "
          "of compiling skills/missiles/itemstatcost/levels .txt and are not diffed."]
    write(os.path.join(ddir, "README.md"), "\n".join(L) + "\n")
    # PD2-only tables
    L = ["# PD2-only tables", "",
         "Excel tables in `pd2data.mpq` whose name does not exist in stock 1.13c. "
         "Generated by `tools/data/build_tables.py`.", ""]
    for t in ptables:
        if t in VANILLA:
            continue
        e = [x for x in inv if x[0] == t][0]
        L.append("## %s" % t)
        L.append("")
        L.append("- files: %s" % ", ".join(f for f in (e[1], t + ".bin" if e[4] != "" else "") if f))
        if e[1]:
            h, r = read_table(pfiles[t + ".txt"])
            L.append("- rows: %d, columns: %d" % (len(r), len(h)))
            L.append("- columns: " + ", ".join("`%s`" % c for c in h))
        L.append("")
    L += ["## Stock tables with a changed .bin layout", "",
          "Same table name as vanilla, but PD2's compiled record size differs from stock 1.13c "
          "(so PD2 code compiles/reads them with its own layout):", ""]
    for t in ptables:
        if t + ".bin" in pfiles and t + ".bin" in vfiles:
            _, pn_, prec = bin_info(pfiles[t + ".bin"])
            _, vn_, vrec = bin_info(vfiles[t + ".bin"])
            if prec and vrec and prec != vrec:
                L.append("- `%s`: %d -> %d bytes per record (%d -> %d records)" % (t, vrec, prec, vn_, pn_))
    write(os.path.join(out, "PD2_ONLY.md"), "\n".join(L) + "\n")
    # inventory of PD2 tables
    L = ["# PD2 excel tables (pd2data.mpq)", "", "Generated by `tools/data/build_tables.py`. "
         "`.txt` files here are byte copies of pd2data's `data\\global\\excel\\*.txt` (file names lower-cased). "
         "`raw_dumps/` holds .bin tables that ship without a .txt.", "",
         "| table | pd2 .txt | txt rows | txt cols | .bin records | .bin record size | vanilla baseline |",
         "|---|---|---:|---:|---:|---:|---|"]
    for e in inv:
        L.append("| %s | %s | %s | %s | %s | %s | %s |" % e)
    write(os.path.join(pd2dir, "TABLES.md"), "\n".join(L) + "\n")
    print("tables: %d pd2 (%d txt), diffs: %d, pd2-only: %d" % (
        len(ptables), sum(1 for e in inv if e[1]), len(res), len([t for t in ptables if t not in VANILLA])))


def diff_strings(vpath, ppath, out):
    def load(p):
        d = {}
        order = []
        for ln in open(p, encoding="utf-8", newline="").read().split("\r\n"):
            if not ln:
                continue
            k, _, v = ln.partition("\t")
            kk = k
            n = 2
            while kk in d:
                kk = "%s#%d" % (k, n)
                n += 1
            d[kk] = v
            order.append(kk)
        return d, order
    vd, vo = load(vpath)
    pd, po = load(ppath)
    added = [k for k in po if k not in vd]
    removed = [k for k in vo if k not in pd]
    changed = [k for k in vo if k in pd and vd[k] != pd[k]]
    L = ["# patchstring.tbl (English): PD2 vs vanilla 1.13c", "",
         "Generated by `tools/data/build_tables.py`. Escapes as in the .tbl.txt files (\\n = newline).", "",
         "Vanilla %d strings, PD2 %d. Added %d, removed %d, changed %d." % (len(vo), len(po), len(added), len(removed), len(changed)), ""]
    if added:
        L += ["## Added (%d)" % len(added), "", "| key | PD2 |", "|---|---|"]
        L += ["| %s | %s |" % (md_esc(k), md_esc(pd[k])) for k in added]
        L.append("")
    if removed:
        L += ["## Removed (%d)" % len(removed), "", "| key | vanilla |", "|---|---|"]
        L += ["| %s | %s |" % (md_esc(k), md_esc(vd[k])) for k in removed]
        L.append("")
    if changed:
        L += ["## Changed (%d)" % len(changed), "", "| key | vanilla | PD2 |", "|---|---|---|"]
        L += ["| %s | %s | %s |" % (md_esc(k), md_esc(vd[k]), md_esc(pd[k])) for k in changed]
    write(out, "\n".join(L).rstrip() + "\n")
    return (len(vo), len(po), len(added), len(removed), len(changed))


if __name__ == "__main__":
    main(sys.argv[1:])
