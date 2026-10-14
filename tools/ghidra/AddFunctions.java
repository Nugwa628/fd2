// Creates functions Ghidra's analysis missed (reached only through data pointers), decompiles them,
// and writes them in the "//==== name @ address" export format to a separate file.
// Args: <output .c file> <address>[:<calling convention>] ...
//   An argument "@<file>" reads more addresses from <file>: one <address>[:<calling convention>] per line,
//   blank lines and lines starting with '#' are ignored, anything after whitespace is a comment.
//@category MedianXL
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class AddFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] raw = getScriptArgs();
        List<String> list = new ArrayList<>();
        for (int i = 0; i < raw.length; i++) {
            if (i > 0 && raw[i].startsWith("@")) {
                for (String line : Files.readAllLines(Paths.get(raw[i].substring(1)))) {
                    line = line.trim();
                    if (line.isEmpty() || line.startsWith("#")) continue;
                    list.add(line.split("\\s+")[0]);
                }
            } else list.add(raw[i]);
        }
        String[] args = list.toArray(new String[0]);
        int created = 0, failed = 0;
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
                    if (f != null) created++;
                }
                if (f == null) { println("could not create function at " + a); failed++; continue; }
                if (parts.length > 1) f.setCallingConvention(parts[1]);
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                String c = r != null && r.decompileCompleted() ? r.getDecompiledFunction().getC() : "\n/* decompilation failed */\n";
                w.write("//==== " + f.getName() + " @ " + a.toString().replaceFirst("^.*:", "") + "\n" + c + "\n\n");
                println("added " + f.getName() + " @ " + a + " (" + f.getCallingConventionName() + ")");
            }
        }
        println("RESULT AddFunctions: " + (args.length - 1) + " addresses, " + created + " functions created, " + failed + " failed");
    }
}
