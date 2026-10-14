// Post-script: writes a plain-text analysis report for the fd2 Phase 2 decompiles.
//   functions (total / thunks / FUN_ default / named), Function ID matches, RTTI type descriptors,
//   every vftable (class, address, slot count, slots that are not function entries) and
//   candidate functions reached only through data (vtable slots and runs of >=3 code pointers
//   in non-executable memory, plus absolute code addresses used as instruction immediates, found through the
//   base relocations; the target must not be inside any existing function and must follow padding/ret).
// Args: <output .txt file>
//@category fd2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class Pd2Report extends GhidraScript {
    Memory mem;
    boolean isCode(Address a) { MemoryBlock b = mem.getBlock(a); return b != null && b.isExecute() && b.isInitialized(); }
    Address ptrAt(Address a) {
        try { long v = mem.getInt(a) & 0xffffffffL; return toAddr(v); } catch (Exception e) { return null; }
    }

    // previous bytes end an instruction stream: int3/nop padding, ret, ret imm16, or a 16-byte aligned start
    boolean startsCleanly(Address x) {
        if ((x.getOffset() & 15) == 0) return true;
        try {
            int b1 = mem.getByte(x.subtract(1)) & 0xff, b3 = mem.getByte(x.subtract(3)) & 0xff;
            return b1 == 0xcc || b1 == 0x90 || b1 == 0xc3 || b3 == 0xc2;
        } catch (Exception e) { return false; }
    }

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        SymbolTable st = currentProgram.getSymbolTable();
        int total = 0, thunks = 0, deflt = 0, named = 0, ext = 0;
        for (Function f : fm.getFunctions(true)) {
            total++;
            if (f.isThunk()) thunks++;
            if (f.getSymbol().getSource() == SourceType.DEFAULT) deflt++; else named++;
        }
        for (Function f : fm.getExternalFunctions()) ext++;
        Set<Address> fid = new TreeSet<>();
        Iterator<Bookmark> bi = currentProgram.getBookmarkManager().getBookmarksIterator();
        while (bi.hasNext()) { Bookmark b = bi.next(); if (b.getCategory() != null && b.getCategory().contains("Function ID")) fid.add(b.getAddress()); }

        try (PrintWriter w = new PrintWriter(new OutputStreamWriter(new FileOutputStream(getScriptArgs()[0]), "UTF-8"))) {
            w.printf("program %s  base %s  ghidra %s%n", currentProgram.getName(), currentProgram.getImageBase(), getGhidraVersion());
            w.printf("functions %d (thunks %d, default-named %d, named %d), externals %d, FID bookmarks %d%n", total, thunks, deflt, named, ext, fid.size());
            for (Address a : fid) { Function f = fm.getFunctionAt(a); w.println("FID " + a + " " + (f != null ? f.getName(true) : "?")); }
            for (Function f : fm.getFunctions(true))
                if (f.getSymbol().getSource() != SourceType.DEFAULT && !f.isThunk()) w.println("NAMED " + f.getEntryPoint() + " " + f.getSymbol().getSource() + " " + f.getName(true));

            // RTTI type descriptors
            int td = 0;
            for (Symbol s : st.getAllSymbols(true))
                if (s.getName().equals("RTTI_Type_Descriptor")) { td++; w.println("TYPEDESC " + s.getAddress() + " " + s.getParentNamespace().getName(true)); }
            w.println("type descriptors " + td);

            Set<Address> cand = new TreeSet<>();
            Map<Address, String> why = new HashMap<>();
            int vt = 0;
            List<Symbol> vfts = new ArrayList<>();
            for (Symbol s : st.getAllSymbols(true)) if (s.getName().contains("vftable") && !s.getName().contains("meta") && !s.getName().startsWith("PTR_")) vfts.add(s);
            vfts.sort(Comparator.comparing(Symbol::getAddress));
            for (Symbol s : vfts) {
                Address a = s.getAddress();
                List<String> slots = new ArrayList<>();
                int n = 0, missing = 0;
                while (n < 512) {
                    Address cur = a.add(4L * n);
                    if (n > 0 && st.getPrimarySymbol(cur) != null && st.getPrimarySymbol(cur).getSource() != SourceType.DEFAULT) break;
                    Address t = ptrAt(cur);
                    if (t == null || !isCode(t)) break;
                    Function f = fm.getFunctionAt(t);
                    if (f == null) {
                        missing++;
                        if (fm.getFunctionContaining(t) == null) { cand.add(t); why.putIfAbsent(t, "vftable " + s.getParentNamespace().getName(true) + " slot " + n); }
                    }
                    slots.add(f != null ? f.getName() : ("!" + t));
                    n++;
                }
                vt++;
                w.printf("VFTABLE %s %s slots=%d nonfunc=%d [%s] : %s%n", a, s.getParentNamespace().getName(true), n, missing, s.getName(), String.join(" ", slots));
            }
            w.println("vftables " + vt);

            // runs of >=3 code pointers in non-executable initialized memory
            for (MemoryBlock b : mem.getBlocks()) {
                if (b.isExecute() || !b.isInitialized() || b.isExternalBlock()) continue;
                Address end = b.getEnd();
                Address a = b.getStart();
                long off = a.getOffset() & 3; if (off != 0) a = a.add(4 - off);
                List<Address> run = new ArrayList<>(); List<Address> tg = new ArrayList<>();
                while (a.add(3).compareTo(end) <= 0) {
                    Address t = ptrAt(a);
                    boolean code = t != null && isCode(t);
                    if (code) { run.add(a); tg.add(t); }
                    if (!code || a.add(7).compareTo(end) > 0) {
                        if (run.size() >= 3)
                            for (int i = 0; i < tg.size(); i++) {
                                Address x = tg.get(i);
                                if (fm.getFunctionAt(x) == null && fm.getFunctionContaining(x) == null) {
                                    Instruction ins = getInstructionAt(x);
                                    Data d = getDataAt(x);
                                    if (d != null && d.isDefined()) continue;
                                    if (!startsCleanly(x)) continue;
                                    cand.add(x); why.putIfAbsent(x, "pointer table @" + run.get(0) + "[" + i + "/" + run.size() + "]" + (ins == null ? " undisassembled" : ""));
                                }
                            }
                        run.clear(); tg.clear();
                    }
                    a = a.add(4);
                }
            }
            // absolute code addresses used as immediates inside code (push offset hook / mov reg, offset fn):
            // every such operand has a base relocation, so walk the relocation table
            for (Iterator<ghidra.program.model.reloc.Relocation> ri = currentProgram.getRelocationTable().getRelocations(); ri.hasNext(); ) {
                Address r = ri.next().getAddress();
                if (!isCode(r)) continue;
                Address x = ptrAt(r);
                if (x == null || !isCode(x) || fm.getFunctionAt(x) != null || fm.getFunctionContaining(x) != null) continue;
                if (fm.getFunctionContaining(r) == null) continue;          // the referencing site must be real code
                Instruction ins = getInstructionContaining(r);
                if (ins == null || ins.getFlowType().isJump() || ins.getFlowType().isCall()) continue;
                Data d = getDataAt(x);
                if (d != null && d.isDefined()) continue;
                if (!startsCleanly(x)) continue;
                cand.add(x); why.putIfAbsent(x, "immediate in " + fm.getFunctionContaining(r).getName() + " @" + r + (getInstructionAt(x) == null ? " undisassembled" : ""));
            }
            for (Address x : cand) w.println("CANDIDATE " + x + " " + why.get(x));
            w.println("candidates " + cand.size());
        }
        println("Pd2Report written: " + getScriptArgs()[0]);
    }
}
