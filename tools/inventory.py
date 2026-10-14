#!/usr/bin/env python3
"""Phase 0 inventory: hashes + per-PE report for a PD2 install copy.

Usage: python3 -I tools/inventory.py <install_dir> <out_dir> [--ref-game <sigmaRE/5_game_source>]

Writes <out_dir>/hashes.csv, <out_dir>/pe_report.csv, <out_dir>/pe/<file>.md and
<out_dir>/base_modules.csv (only with --ref-game). Re-runnable; overwrites its outputs.
Never writes into <install_dir>.
"""
import argparse, csv, hashlib, math, os, re, sys
from collections import Counter

import pefile

# Rich header product ids -> toolchain (partial table; unknown ids are printed raw).
# Source: well-known comp.id tables (VS2003..VS2022). Only the build number is used.
VS_BY_BUILD = [
    (30000, "VS2019/2022 (14.2x-14.3x)"), (27000, "VS2019 (14.2x)"), (25000, "VS2017 (14.1x)"),
    (24000, "VS2015 (14.0)"), (21000, "VS2013 (12.0)"), (20000, "VS2012 (11.0)"),
    (30319, "VS2010 (10.0)"), (21022, "VS2008 (9.0)"), (50727, "VS2005 (8.0)"),
    (6030, "VS2003 (7.1)"), (9466, "VS2002 (7.0)"), (8168, "VC6"), (8447, "VC6 SP"),
]

PACKER_SECTIONS = {".vmp0", ".vmp1", ".vmp2", ".themida", ".winlice", "UPX0", "UPX1", "UPX2",
                   ".aspack", ".adata", ".enigma1", ".enigma2", ".petite", ".mpress1", ".mpress2", ".nsp0"}


def entropy(b: bytes) -> float:
    if not b:
        return 0.0
    c = Counter(b)
    n = len(b)
    return -sum(v / n * math.log2(v / n) for v in c.values())


def sha256(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def md5(path):
    h = hashlib.md5()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def toolchain(build):
    # exact matches are more reliable than ranges for old toolsets
    for b, name in [(8168, "VC6"), (8447, "VC6 SP5/6"), (9466, "VS2002"), (6030, "VS2003"),
                    (50727, "VS2005"), (21022, "VS2008"), (30729, "VS2008 SP1"), (30319, "VS2010"),
                    (40219, "VS2010 SP1")]:
        if build == b:
            return name
    if 20000 <= build < 30000 and build < 21005:
        return "VS2012"
    if 21005 <= build < 23000:
        return "VS2013"
    if 23000 <= build < 25000:
        return "VS2015"
    if 25000 <= build < 27000:
        return "VS2017"
    if 27000 <= build < 30000:
        return "VS2019"
    if 30000 <= build < 40000:
        return "VS2022"
    return "?"


def rich(pe):
    r = pe.parse_rich_header()
    if not r:
        return []
    vals = r["values"]
    out = []
    for i in range(0, len(vals), 2):
        compid, count = vals[i], vals[i + 1]
        out.append((compid >> 16, compid & 0xFFFF, count))
    return out


def pdb_path(pe):
    if not hasattr(pe, "DIRECTORY_ENTRY_DEBUG"):
        return ""
    for d in pe.DIRECTORY_ENTRY_DEBUG:
        e = d.entry
        if e is not None and hasattr(e, "PdbFileName"):
            return e.PdbFileName.rstrip(b"\0").decode("latin-1")
    return ""


def version_info(pe):
    out = {}
    for fi in getattr(pe, "FileInfo", []) or []:
        for entry in fi:
            for st in getattr(entry, "StringTable", []) or []:
                for k, v in st.entries.items():
                    out[k.decode("latin-1")] = v.decode("latin-1")
    if hasattr(pe, "VS_FIXEDFILEINFO") and pe.VS_FIXEDFILEINFO:
        f = pe.VS_FIXEDFILEINFO[0]
        out["_FileVersion"] = "%d.%d.%d.%d" % (f.FileVersionMS >> 16, f.FileVersionMS & 0xFFFF,
                                               f.FileVersionLS >> 16, f.FileVersionLS & 0xFFFF)
    return out


def analyze(path):
    pe = pefile.PE(path, fast_load=False)
    oh = pe.OPTIONAL_HEADER
    secs = []
    for s in pe.sections:
        name = s.Name.rstrip(b"\0").decode("latin-1")
        data = s.get_data()
        secs.append(dict(name=name, va=s.VirtualAddress, vsize=s.Misc_VirtualSize, rawsize=s.SizeOfRawData,
                         entropy=entropy(data), flags=s.Characteristics))
    imports = []
    for d in getattr(pe, "DIRECTORY_ENTRY_IMPORT", []) or []:
        imports.append((d.dll.decode("latin-1"), [(i.name.decode("latin-1") if i.name else "#%d" % i.ordinal)
                                                    for i in d.imports]))
    delay = []
    for d in getattr(pe, "DIRECTORY_ENTRY_DELAY_IMPORT", []) or []:
        delay.append((d.dll.decode("latin-1"), len(d.imports)))
    exports = []
    if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
        for e in pe.DIRECTORY_ENTRY_EXPORT.symbols:
            exports.append((e.ordinal, oh.ImageBase + e.address, e.name.decode("latin-1") if e.name else ""))
    tls = []
    if hasattr(pe, "DIRECTORY_ENTRY_TLS") and pe.DIRECTORY_ENTRY_TLS:
        cb = pe.DIRECTORY_ENTRY_TLS.struct.AddressOfCallBacks
        if cb:
            rva = cb - oh.ImageBase
            for i in range(64):
                try:
                    v = pe.get_dword_at_rva(rva + 4 * i)
                except Exception:
                    break
                if not v:
                    break
                tls.append(v)
    ep = oh.AddressOfEntryPoint
    ep_sec = next((s["name"] for s in secs if s["va"] <= ep < s["va"] + max(s["vsize"], s["rawsize"])), "?")
    flags = []
    names = {s["name"] for s in secs}
    if names & PACKER_SECTIONS:
        flags.append("packer-section:" + ",".join(sorted(names & PACKER_SECTIONS)))
    for s in secs:
        if s["flags"] & 0x20000000 and s["entropy"] > 7.2:
            flags.append("high-entropy-code:%s=%.2f" % (s["name"], s["entropy"]))
    if ep_sec not in (".text", "CODE", ".code") and secs:
        flags.append("entry-not-in-.text:%s" % ep_sec)
    # .NET?
    clr = oh.DATA_DIRECTORY[14]
    is_dotnet = clr.VirtualAddress != 0 and clr.Size != 0
    with open(path, "rb") as f:
        raw = f.read()
    overlay_off = pe.get_overlay_data_start_offset()
    overlay = len(raw) - overlay_off if overlay_off else 0
    rtti = len(set(re.findall(rb"\.\?A[VU][A-Za-z0-9_@?$]+@@", raw)))
    return dict(pe=pe, machine=hex(pe.FILE_HEADER.Machine), timestamp=pe.FILE_HEADER.TimeDateStamp,
                imagebase=oh.ImageBase, entry=oh.ImageBase + ep, ep_sec=ep_sec, linker="%d.%d" % (oh.MajorLinkerVersion, oh.MinorLinkerVersion),
                subsystem=oh.Subsystem, dll=bool(pe.FILE_HEADER.Characteristics & 0x2000),
                sections=secs, imports=imports, delay=delay, exports=exports, tls=tls, rich=rich(pe),
                pdb=pdb_path(pe), version=version_info(pe), flags=flags, dotnet=is_dotnet,
                overlay=overlay, rtti=rtti, size=len(raw))


def iso(ts):
    import datetime
    return datetime.datetime.fromtimestamp(ts, datetime.timezone.utc).strftime("%Y-%m-%d %H:%M:%S")


def write_md(path, rel, a):
    L = [f"# {rel}", "", f"- Size: {a['size']:,} bytes", f"- Machine: {a['machine']}, {'DLL' if a['dll'] else 'EXE'}, subsystem {a['subsystem']}",
         f"- TimeDateStamp: 0x{a['timestamp']:08x} ({iso(a['timestamp'])} UTC)",
         f"- ImageBase 0x{a['imagebase']:08x}, entry 0x{a['entry']:08x} (in {a['ep_sec']})",
         f"- Linker {a['linker']}; .NET: {'yes' if a['dotnet'] else 'no'}; overlay {a['overlay']:,} bytes",
         f"- PDB: `{a['pdb'] or '(none)'}`",
         f"- RTTI type descriptors (`.?AV`/`.?AU`): {a['rtti']}",
         f"- TLS callbacks: {', '.join('0x%08x' % t for t in a['tls']) or 'none'}",
         f"- Packer/protector heuristics: {'; '.join(a['flags']) or 'none'}", ""]
    if a["version"]:
        L += ["## Version resource", ""] + [f"- {k}: {v}" for k, v in sorted(a["version"].items())] + [""]
    L += ["## Sections", "", "| name | VA | vsize | rawsize | entropy | flags |", "|---|---|---:|---:|---:|---|"]
    for s in a["sections"]:
        L.append(f"| {s['name']} | 0x{s['va']:x} | {s['vsize']:,} | {s['rawsize']:,} | {s['entropy']:.2f} | 0x{s['flags']:08x} |")
    L += ["", "## Rich header", "", "| product id | build | count | toolchain |", "|---:|---:|---:|---|"]
    for pid, build, cnt in a["rich"]:
        L.append(f"| {pid} | {build} | {cnt} | {toolchain(build)} |")
    L += ["", "## Imports", ""]
    for dll, fns in a["imports"]:
        shown = ", ".join(fns[:40]) + (f", ... (+{len(fns) - 40})" if len(fns) > 40 else "")
        L.append(f"- **{dll}** ({len(fns)}): {shown}")
    for dll, n in a["delay"]:
        L.append(f"- delay-load **{dll}** ({n})")
    L += ["", f"## Exports ({len(a['exports'])})", ""]
    for o, addr, n in a["exports"][:300]:
        L.append(f"- {o} 0x{addr:08x} {n}")
    if len(a["exports"]) > 300:
        L.append(f"- ... (+{len(a['exports']) - 300})")
    with open(path, "w") as f:
        f.write("\n".join(L) + "\n")


REF_DIR_NAME = {"Diablo II.exe": "DiabloII", "Game.exe": "Game"}


def base_check(install, ref_game, analyses):
    """Compare each shipped game module with the 1.13c reference: export ordinals/addresses
    and function starts from the reference symbols.csv."""
    rows = []
    for mod_dir in sorted(os.listdir(ref_game)):
        rd = os.path.join(ref_game, mod_dir)
        if not os.path.isdir(rd):
            continue
        fname = next((f for f in analyses if os.path.splitext(f)[0].replace(" ", "") == mod_dir and "/" not in f), None)
        if not fname:
            rows.append(dict(module=mod_dir, file="(not shipped)", verdict="n/a"))
            continue
        a = analyses[fname]
        pe = a["pe"]
        ref_exp = {}
        ep = os.path.join(rd, "exports.tsv")
        if os.path.exists(ep):
            with open(ep) as f:
                for r in csv.DictReader(f, delimiter="\t"):
                    ref_exp[int(r["ordinal"])] = int(r["address"], 16)
        # function starts from the reference symbols.csv. The reference may have been loaded at
        # another base in Ghidra (Storm: 0x6f600000), so everything is compared as RVAs.
        starts = []
        with open(os.path.join(rd, "symbols.csv")) as f:
            for r in csv.DictReader(f):
                starts.append(int(r["address"], 16))
        base = a["imagebase"]
        ref_base = (min(starts) - 0x1000) & ~0xFFFF if starts else base
        got = {o: addr - base for o, addr, _ in a["exports"]}
        exp_match = sum(1 for o, v in ref_exp.items() if got.get(o) == v - ref_base)
        text = next((s for s in pe.sections if s.Name.startswith(b".text")), None)
        tstart = text.VirtualAddress if text else 0
        tend = tstart + (text.Misc_VirtualSize if text else 0)
        in_text = sum(1 for s in starts if tstart <= s - ref_base < tend)
        stored = pe.OPTIONAL_HEADER.CheckSum
        computed = pe.generate_checksum()
        rows.append(dict(module=mod_dir, file=fname, imagebase="0x%08x" % base, ref_base="0x%08x" % ref_base,
                         pe_checksum_stored="0x%08x" % stored, pe_checksum_ok=(stored == computed) if stored else "unset",
                         timestamp="0x%08x" % a["timestamp"], ts_utc=iso(a["timestamp"]),
                         ref_exports=len(ref_exp), exports_same_addr=exp_match, shipped_exports=len(got),
                         ref_functions=len(starts), ref_functions_in_text=in_text,
                         verdict=("exports-match" if ref_exp and exp_match == len(ref_exp) == len(got)
                                  else ("no-exports" if not ref_exp and not got else "MISMATCH"))))
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("install")
    ap.add_argument("out")
    ap.add_argument("--ref-game")
    ap.add_argument("--skip-dirs", default="", help="comma-separated subdirs to hash but not PE-analyze")
    args = ap.parse_args()
    os.makedirs(os.path.join(args.out, "pe"), exist_ok=True)
    skip = set(filter(None, args.skip_dirs.split(",")))
    files = []
    for root, _, fs in os.walk(args.install):
        for f in fs:
            p = os.path.join(root, f)
            files.append(os.path.relpath(p, args.install).replace(os.sep, "/"))
    files.sort(key=lambda s: (s.count("/"), s.lower()))
    analyses = {}
    with open(os.path.join(args.out, "hashes.csv"), "w", newline="") as hf:
        w = csv.writer(hf)
        w.writerow(["path", "size", "sha256", "md5"])
        for rel in files:
            p = os.path.join(args.install, rel)
            w.writerow([rel, os.path.getsize(p), sha256(p), md5(p)])
            top = rel.split("/")[0] if "/" in rel else ""
            if rel.lower().endswith((".dll", ".exe", ".ocx")) and top not in skip:
                try:
                    analyses[rel] = analyze(p)
                except pefile.PEFormatError as e:
                    print("not PE:", rel, e, file=sys.stderr)
    with open(os.path.join(args.out, "pe_report.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["file", "size", "timestamp_utc", "imagebase", "linker", "toolchain_max", "dotnet", "pdb",
                    "file_version", "product", "rtti_types", "exports", "import_dlls", "tls_callbacks", "max_code_entropy", "flags"])
        for rel, a in analyses.items():
            builds = [b for pid, b, c in a["rich"] if pid != 1]
            tc = toolchain(max(builds)) + " (%d)" % max(builds) if builds else ""
            maxent = max((s["entropy"] for s in a["sections"] if s["flags"] & 0x20000000), default=0)
            w.writerow([rel, a["size"], iso(a["timestamp"]), "0x%08x" % a["imagebase"], a["linker"], tc,
                        a["dotnet"], a["pdb"], a["version"].get("_FileVersion", ""),
                        a["version"].get("ProductName", ""), a["rtti"], len(a["exports"]),
                        ";".join(d for d, _ in a["imports"]), len(a["tls"]), "%.2f" % maxent, ";".join(a["flags"])])
            write_md(os.path.join(args.out, "pe", rel.replace("/", "__") + ".md"), rel, a)
    if args.ref_game:
        rows = base_check(args.install, args.ref_game, analyses)
        with open(os.path.join(args.out, "base_modules.csv"), "w", newline="") as f:
            keys = ["module", "file", "imagebase", "ref_base", "pe_checksum_stored", "pe_checksum_ok", "timestamp", "ts_utc", "ref_exports", "exports_same_addr",
                    "shipped_exports", "ref_functions", "ref_functions_in_text", "verdict"]
            w = csv.DictWriter(f, keys)
            w.writeheader()
            for r in rows:
                w.writerow(r)
    print(f"{len(files)} files hashed, {len(analyses)} PE files analyzed")


if __name__ == "__main__":
    main()
