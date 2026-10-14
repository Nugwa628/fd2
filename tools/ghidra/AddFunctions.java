// Creates functions Ghidra's analysis missed (reached only through data pointers), decompiles them,
// and writes them in the "//==== name @ address" export format to a separate file.
// Args: <output .c file> <address>[:<calling convention>] ...
//@category MedianXL
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.*;

public class AddFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        di.setOptions(opts);
        di.toggleCCode(true);
        di.openProgram(currentProgram);
        try (Writer w = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(args[0]), "UTF-8"))) {
            w.write("// Functions missing from the main export (no direct callers; reached through data tables).\n");
            w.write("// Created and decompiled by AddFunctions.java from " + currentProgram.getName() + "\n\n");
            for (int i = 1; i < args.length; i++) {
                String[] parts = args[i].split(":");
                Address a = toAddr(Long.parseLong(parts[0].replace("0x", ""), 16));
                Function f = getFunctionAt(a);
                if (f == null) {
                    disassemble(a);
                    f = createFunction(a, null);
                }
                if (f == null) { println("could not create function at " + a); continue; }
                if (parts.length > 1) f.setCallingConvention(parts[1]);
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                String c = r != null && r.decompileCompleted() ? r.getDecompiledFunction().getC() : "\n/* decompilation failed */\n";
                w.write("//==== " + f.getName() + " @ " + a.toString().replaceFirst("^.*:", "") + "\n" + c + "\n\n");
                println("added " + f.getName() + " @ " + a + " (" + f.getCallingConventionName() + ")");
            }
        }
    }
}
