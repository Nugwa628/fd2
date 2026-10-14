// Repairs the signatures behind Ghidra's untraced placeholders and exports the decompiled C.
//   in_stack_XXXXXXXX (positive offset) -> missing stack parameters are added
//   in_EAX / unaff_ESI ...              -> the register becomes a parameter (custom storage)
//   extraout_EAX / EDX / ST0            -> the called function gets a return type
// Repeats until no more changes, then writes "//==== name @ address" blocks like the original export.
// Args: <output .c file> [max passes] [strict]
//   strict (optional, fd2): a return type set because of extraout_EAX/EDX/ST0 is kept only if the callee really
//   writes that register (its decompile shows no in_EAX / in_EDX / in_ST0 afterwards); otherwise it is undone.
//   Without it, a callee that leaves EDX untouched gets "undefined8" and then reg_EAX/reg_EDX parameters, which
//   spread to all of its callers (seen in ProjectDiablo.dll: 3,338 functions with a bogus reg_EDX).
//@category MedianXL
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class FixAndExport extends GhidraScript {

    static final Pattern IN_STACK = Pattern.compile("\\bin_stack_([0-9a-f]{8})\\b");
    static final Pattern REG_IN = Pattern.compile("\\b(in|unaff)_(EAX|ECX|EDX|EBX|ESI|EDI|EBP)\\b");
    static final Pattern PLACEHOLDER = Pattern.compile("\\b(in_stack_[0-9a-f]{8}|in_[A-Z][A-Za-z0-9_]*|unaff_\\w+|extraout_\\w+)\\b");

    DecompInterface di;
    Map<Function, String> cache = new HashMap<>();
    int addedStack, addedReg, setReturn, skipped, revertedReturn;
    boolean strict;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args[0];
        int maxPasses = args.length > 1 ? Integer.parseInt(args[1]) : 4;
        strict = args.length > 2 && args[2].equalsIgnoreCase("strict");

        di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        di.setOptions(opts);
        di.toggleCCode(true);
        di.toggleSyntaxTree(true);
        di.setSimplificationStyle("decompile");
        di.openProgram(currentProgram);

        List<Function> all = new ArrayList<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) if (!f.isExternal()) all.add(f);

        Set<Function> todo = new LinkedHashSet<>(all);
        int before = -1;
        for (int pass = 1; pass <= maxPasses && !todo.isEmpty(); pass++) {
            Set<Function> changed = new LinkedHashSet<>();
            int placeholders = 0, n = 0;
            for (Function f : todo) {
                monitor.checkCancelled();
                if (++n % 500 == 0) println("pass " + pass + ": " + n + "/" + todo.size());
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                if (r == null || !r.decompileCompleted()) { cache.put(f, null); continue; }
                String c = r.getDecompiledFunction().getC();
                cache.put(f, c);
                if (f.isThunk()) continue;
                boolean ch = false;
                try {
                    ch |= fixInStack(f, c);
                    ch |= fixRegisters(f, c);
                    ch |= fixExtraout(f, r.getHighFunction(), changed);
                } catch (Exception e) { skipped++; }
                if (ch) changed.add(f);
            }
            for (String c : cache.values()) if (c != null) { Matcher m = PLACEHOLDER.matcher(c); while (m.find()) placeholders++; }
            if (before < 0) before = placeholders;
            println(String.format("pass %d: decompiled %d, changed %d, placeholder uses now %d", pass, todo.size(), changed.size(), placeholders));
            // next pass: changed functions and everything that calls them
            Set<Function> next = new LinkedHashSet<>(changed);
            for (Function f : changed)
                for (Function caller : f.getCallingFunctions(monitor)) if (!caller.isExternal()) next.add(caller);
            todo = next;
        }
        // decompile anything changed in the last pass so the export is current
        for (Function f : todo) {
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            cache.put(f, r != null && r.decompileCompleted() ? r.getDecompiledFunction().getC() : null);
        }
        int after = 0;
        for (String c : cache.values()) if (c != null) { Matcher m = PLACEHOLDER.matcher(c); while (m.find()) after++; }

        try (Writer w = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(outPath), "UTF-8"))) {
            w.write("// Decompiled by Ghidra " + getGhidraVersion() + " from " + currentProgram.getName() + "\n");
            w.write("// Signatures repaired by FixAndExport.java: " + addedStack + " stack params, " + addedReg +
                    " register params, " + setReturn + " return types\n\n");
            for (Function f : all) {
                String c = cache.get(f);
                w.write("//==== " + f.getName() + " @ " + f.getEntryPoint().toString().replaceFirst("^.*:", "") + "\n");
                w.write(c != null ? c : "\n/* decompilation failed */\n");
                w.write("\n\n");
            }
        }
        println(String.format("RESULT %s: placeholders %d -> %d; added %d stack params (%d reverted), %d register params, %d return types; %d errors",
                currentProgram.getName(), before, after, addedStack, revertedStack, addedReg, setReturn, skipped)
                + (strict ? String.format(" [strict: %d return types reverted]", revertedReturn) : ""));
    }

    // in_stack_XXXXXXXX with a positive offset: the function reads stack arguments its signature lacks
    boolean fixInStack(Function f, String c) throws Exception {
        int maxOff = -1;
        Matcher m = IN_STACK.matcher(c);
        while (m.find()) {
            long off = Long.parseLong(m.group(1), 16);
            if (off >= 4 && off < 0x100) maxOff = Math.max(maxOff, (int) off);
        }
        if (maxOff < 0) return false;
        int covered = 0;
        for (Parameter p : f.getParameters()) if (p.isStackVariable()) covered = Math.max(covered, p.getStackOffset() + p.getLength());
        if (covered > maxOff) return false;

        // Only keep the change if it reduces untraced values in this function and its callers
        // (e.g. a by-value C++ object the caller constructs in place just moves the problem into the caller).
        List<Function> callers = new ArrayList<>();
        for (Function cf : f.getCallingFunctions(monitor)) if (!cf.isExternal() && callers.size() < 60) callers.add(cf);
        int before = count(c);
        for (Function cf : callers) before += count(cached(cf));
        boolean wasCustom = f.hasCustomVariableStorage();
        List<Variable> saved = new ArrayList<>();
        for (Parameter p : f.getParameters()) saved.add(new ParameterImpl(p.getName(), p.getDataType(), p.getVariableStorage(), currentProgram));

        int added = applyStackParams(f, covered, maxOff);
        if (added == 0) return false;
        int after = count(decompile(f));
        for (Function cf : callers) after += count(decompile(cf));
        if (after >= before) {
            if (!wasCustom) f.setCustomVariableStorage(true);
            f.replaceParameters(saved, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.ANALYSIS);
            if (!wasCustom) f.setCustomVariableStorage(false);
            cache.put(f, decompile(f));
            for (Function cf : callers) cache.put(cf, decompile(cf));
            revertedStack++;
            return false;
        }
        addedStack += added;
        return true;
    }

    int revertedStack;

    int count(String c) {
        if (c == null) return 0;
        int n = 0; Matcher m = PLACEHOLDER.matcher(c); while (m.find()) n++;
        return n;
    }

    String decompile(Function f) {
        DecompileResults r = di.decompileFunction(f, 60, monitor);
        return r != null && r.decompileCompleted() ? r.getDecompiledFunction().getC() : null;
    }

    String cached(Function f) {
        if (!cache.containsKey(f)) cache.put(f, decompile(f));
        return cache.get(f);
    }

    int applyStackParams(Function f, int covered, int maxOff) throws Exception {
        List<Variable> params = new ArrayList<>(Arrays.asList(f.getParameters()));
        int added = 0;
        if (f.hasCustomVariableStorage()) {
            for (int off = Math.max(4, covered); off <= maxOff; off += 4) {
                params.add(new ParameterImpl("param_" + (params.size() + 1), Undefined4DataType.dataType, off, currentProgram));
                added++;
            }
            f.replaceParameters(params, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.ANALYSIS);
        } else {
            while (covered <= maxOff && added < 16) {
                params.add(new ParameterImpl("param_" + (params.size() + 1), Undefined4DataType.dataType, currentProgram));
                added++;
                f.replaceParameters(params, Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.ANALYSIS);
                covered = 0;
                for (Parameter p : f.getParameters()) if (p.isStackVariable()) covered = Math.max(covered, p.getStackOffset() + p.getLength());
                params = new ArrayList<>(Arrays.asList(f.getParameters()));
            }
        }
        return added;
    }

    // in_REG / unaff_REG: the register carries an argument the signature doesn't declare
    boolean fixRegisters(Function f, String c) throws Exception {
        String name = f.getName();
        boolean funclet = name.startsWith("Catch") || name.startsWith("Unwind");
        Set<String> regs = new LinkedHashSet<>();
        Matcher m = REG_IN.matcher(c);
        while (m.find()) {
            String reg = m.group(2);
            if (reg.equals("EBP") && (funclet || c.contains("_prolog") || m.group(1).equals("unaff"))) continue; // frame pointer, not an argument
            regs.add(reg);
        }
        if (regs.isEmpty()) return false;
        for (Parameter p : f.getParameters())
            if (p.isRegisterVariable() && p.getRegister() != null) regs.remove(p.getRegister().getBaseRegister().getName());
        if (regs.isEmpty()) return false;
        if (!f.hasCustomVariableStorage()) f.setCustomVariableStorage(true);
        List<Variable> params = new ArrayList<>(Arrays.asList(f.getParameters()));
        for (String reg : regs) {
            Register r = currentProgram.getRegister(reg);
            params.add(new ParameterImpl("reg_" + reg, Undefined4DataType.dataType, r, currentProgram));
        }
        f.replaceParameters(params, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.ANALYSIS);
        addedReg += regs.size();
        return true;
    }

    // extraout_REG is defined by an INDIRECT attached to a CALL: that callee really returns the value
    boolean fixExtraout(Function f, HighFunction h, Set<Function> changed) throws Exception {
        if (h == null) return false;
        Map<Address, PcodeOpAST> calls = new HashMap<>();
        List<PcodeOpAST> indirects = new ArrayList<>();
        Iterator<PcodeOpAST> it = h.getPcodeOps();
        while (it.hasNext()) {
            PcodeOpAST op = it.next();
            if (op.getOpcode() == PcodeOp.CALL) calls.put(op.getSeqnum().getTarget(), op);
            else if (op.getOpcode() == PcodeOp.INDIRECT) indirects.add(op);
        }
        boolean any = false;
        for (PcodeOpAST op : indirects) {
            Varnode out = op.getOutput();
            if (out == null || out.getHigh() == null || out.getHigh().getName() == null) continue;
            if (!out.getHigh().getName().startsWith("extraout_")) continue;
            PcodeOpAST call = calls.get(op.getSeqnum().getTarget());
            if (call == null || !out.isRegister()) continue;
            Function callee = getFunctionAt(call.getInput(0).getAddress());
            if (callee == null) continue;
            if (callee.isThunk()) { Function t = callee.getThunkedFunction(true); if (t != null) callee = t; }
            Register reg = currentProgram.getRegister(out);
            if (reg == null) continue;
            String rn = reg.getBaseRegister().getName();
            DataType cur = callee.getReturnType();
            DataType want = null;
            if (rn.equals("EAX") && (cur == null || cur instanceof VoidDataType || cur.getLength() < 4)) want = Undefined4DataType.dataType;
            else if (rn.equals("EDX") && (cur == null || cur.getLength() <= 4)) want = Undefined8DataType.dataType;
            else if (rn.startsWith("ST") && (cur == null || !(cur instanceof AbstractFloatDataType))) want = Float10DataType.dataType;
            if (want == null) continue;
            callee.setReturnType(want, SourceType.ANALYSIS);
            if (strict) {
                String cc = decompile(callee);
                String in = rn.startsWith("ST") ? "in_ST0" : "in_" + rn;
                if (cc == null || Pattern.compile("\\b" + in + "\\b").matcher(cc).find()) {
                    callee.setReturnType(cur, SourceType.ANALYSIS);
                    revertedReturn++;
                    continue;
                }
            }
            setReturn++;
            changed.add(callee);
            any = true;
        }
        return any;
    }
}
