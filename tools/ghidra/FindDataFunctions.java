// Finds code addresses that are only reached through data: every aligned 4-byte value in the non-executable,
// initialized blocks (.rdata, .data, ...) that points into an executable block at a place that is not a function
// entry yet. Each target is classified; only "plausible" ones are written to the address list for AddFunctions.java.
//   plausible = not inside an existing function body, not in the middle of an instruction/data item, and
//               (a) already disassembled code with no function, or (b) a call target, or (c) starts with a
//               typical MSVC x86 prologue/stub byte pattern AND the preceding byte is padding (CC/90) or a ret/jmp,
//               or (d) is 16-byte aligned right after int3 (CC) padding (MSVC's function alignment).
//   Pure tail-jump stubs ("jmp rel32" followed by padding, e.g. the dynamic-initializer stubs MSVC emits per TU
//   for inline variables) are reported with verdict "jmpstub" and their destination, but not added unless the
//   third argument is "stubs".
// Args: <address list out> [<report tsv out>] [stubs]
//   address list: one hex address per line (AddFunctions.java @file input)
//   report tsv:   target, source address(es), block, verdict, reason
//@category fd2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class FindDataFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        boolean withStubs = args.length > 2 && args[2].equals("stubs");
        int nStub = 0;
        Memory mem = currentProgram.getMemory();
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();

        AddressSet exec = new AddressSet();
        for (MemoryBlock b : mem.getBlocks()) if (b.isExecute() && b.isInitialized()) exec.add(b.getStart(), b.getEnd());

        Map<Address, List<Address>> targets = new TreeMap<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (b.isExecute() || !b.isInitialized()) continue;
            Address a = b.getStart();
            long off = a.getOffset() & 3;
            if (off != 0) a = a.add(4 - off);
            while (a.compareTo(b.getEnd().subtract(3)) <= 0) {
                int v;
                try { v = mem.getInt(a); } catch (MemoryAccessException e) { a = a.add(4); continue; }
                Address t = toAddr(v & 0xffffffffL);
                if (exec.contains(t)) targets.computeIfAbsent(t, k -> new ArrayList<>()).add(a);
                a = a.add(4);
            }
        }

        int nFunc = 0, nInside = 0, nMid = 0, nPlaus = 0, nReject = 0;
        List<Address> out = new ArrayList<>();
        try (PrintWriter rep = args.length > 1 ? new PrintWriter(new FileWriter(args[1])) : null) {
            if (rep != null) rep.println("target\tsources\tverdict\treason\tbytes");
            for (Map.Entry<Address, List<Address>> e : targets.entrySet()) {
                Address t = e.getKey();
                String verdict, reason;
                if (fm.getFunctionAt(t) != null) { nFunc++; continue; }
                Function cont = fm.getFunctionContaining(t);
                CodeUnit cu = listing.getCodeUnitContaining(t);
                Instruction ins = listing.getInstructionAt(t);
                boolean callTarget = false;
                for (Reference r : rm.getReferencesTo(t)) if (r.getReferenceType().isCall()) callTarget = true;
                String bytes = hex(mem, t, 8);
                if (cont != null) { verdict = "skip"; reason = "inside " + cont.getName(); nInside++; }
                else if (cu != null && !cu.getMinAddress().equals(t)) { verdict = "skip"; reason = "mid code unit " + cu.getMinAddress(); nMid++; }
                else if (cu instanceof Data && ((Data) cu).isDefined()) { verdict = "skip"; reason = "defined data"; nMid++; }
                else if (b(mem, t, 0) == 0xe9 && (b(mem, t, 5) == 0xcc || b(mem, t, 5) == 0x90)) {
                    long dst = t.getOffset() + 5 + mem.getInt(t.add(1));
                    verdict = withStubs ? "add" : "jmpstub"; reason = String.format("jmp 0x%08x", dst);
                    Function df = fm.getFunctionAt(toAddr(dst));
                    reason += df != null ? " (" + df.getName() + ")" : " (no function)";
                    nStub++;
                }
                else if (ins != null) { verdict = "add"; reason = "code without function" + (callTarget ? ", call target" : ""); }
                else if (callTarget) { verdict = "add"; reason = "call target"; }
                else {
                    String p = prologue(mem, t);
                    String pre = precededByBoundary(mem, listing, t);
                    if (p != null && pre != null) { verdict = "add"; reason = "prologue " + p + ", after " + pre; }
                    else if (pre != null && pre.equals("int3 padding") && (t.getOffset() & 15) == 0) { verdict = "add"; reason = "16-aligned after int3 padding"; }
                    else { verdict = "skip"; reason = "no prologue/boundary (" + p + "/" + pre + ")"; }
                }
                if (verdict.equals("add")) { out.add(t); nPlaus++; } else if (!verdict.equals("jmpstub")) nReject++;
                if (rep != null) {
                    StringBuilder s = new StringBuilder();
                    for (Address src : e.getValue()) { if (s.length() > 0) s.append(','); s.append(src); if (s.length() > 120) { s.append(",..."); break; } }
                    rep.println(t + "\t" + s + "\t" + verdict + "\t" + reason + "\t" + bytes);
                }
            }
        }
        try (PrintWriter w = new PrintWriter(new FileWriter(args[0]))) { for (Address a : out) w.println(String.format("0x%08x", a.getOffset())); }
        println(String.format("RESULT pointers into code: %d distinct targets; already functions %d; inside functions %d; mid unit/data %d; jmp stubs %d%s; plausible (listed) %d; other rejected %d",
                targets.size(), nFunc, nInside, nMid, nStub, withStubs ? " (listed)" : " (not listed)", nPlaus, nReject - nInside - nMid));
    }

    static String hex(Memory m, Address a, int n) {
        StringBuilder s = new StringBuilder();
        for (int i = 0; i < n; i++) { try { s.append(String.format("%02x", m.getByte(a.add(i)) & 0xff)); } catch (Exception e) { break; } }
        return s.toString();
    }

    static int b(Memory m, Address a, int i) { try { return m.getByte(a.add(i)) & 0xff; } catch (Exception e) { return -1; } }

    // typical first bytes of an MSVC x86 function
    static String prologue(Memory m, Address a) {
        int b0 = b(m, a, 0), b1 = b(m, a, 1), b2 = b(m, a, 2);
        if (b0 == 0x55 && b1 == 0x8b && b2 == 0xec) return "push ebp;mov ebp,esp";
        if (b0 == 0x8b && b1 == 0xff) return "mov edi,edi";
        if (b0 == 0x6a && b2 == 0x68) return "push imm8;push imm32 (SEH prolog)";
        if (b0 == 0x83 && b1 == 0xec) return "sub esp,imm8";
        if (b0 == 0x81 && b1 == 0xec) return "sub esp,imm32";
        if (b0 >= 0x50 && b0 <= 0x57 && b0 != 0x54) return "push reg";
        if (b0 == 0x8b && (b1 == 0x44 || b1 == 0x4c || b1 == 0x54) && b2 == 0x24) return "mov reg,[esp+x]";
        if (b0 == 0x8b && (b1 == 0x01 || b1 == 0x41 || b1 == 0x81 || b1 == 0xc1)) return "mov eax,[ecx..]";
        if (b0 == 0xa1 || (b0 == 0x8b && (b1 == 0x0d || b1 == 0x15))) return "load global";
        if (b0 == 0x33 && b1 == 0xc0) return "xor eax,eax";
        if (b0 == 0xb8) return "mov eax,imm";
        if (b0 == 0xc3 || b0 == 0xc2) return "ret stub";
        if (b0 == 0xe9) return "jmp thunk";
        if (b0 == 0xff && b1 == 0x25) return "jmp [import]";
        if (b0 == 0x68) return "push imm32";
        if (b0 == 0xc7 && b1 == 0x01) return "mov [ecx],imm (ctor)";
        if (b0 == 0x8d && b1 == 0x41) return "lea eax,[ecx+x]";
        return null;
    }

    // the byte before is alignment padding or the end of a returning/jumping instruction
    static String precededByBoundary(Memory m, Listing l, Address a) {
        int p = b(m, a, -1);
        if (p == 0xcc) return "int3 padding";
        if (p == 0x90) return "nop padding";
        Instruction prev = l.getInstructionContaining(a.subtract(1));
        if (prev != null) {
            String mn = prev.getMnemonicString().toUpperCase();
            if (mn.startsWith("RET") || mn.equals("JMP") || mn.equals("INT3")) return mn;
        }
        if (p == 0xc3) return "ret byte";
        return null;
    }
}
