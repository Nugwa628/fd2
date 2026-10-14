// Pre-script: turns on the analyzers the fd2 Phase 2 decompiles rely on and logs every analysis option.
// Args (optional): extra "Name=value" pairs, e.g. "Decompiler Parameter ID=true".
// Default: MSVC RTTI, demangler, Function ID, PE exception handling, Decompiler Parameter ID on.
//@category fd2
import ghidra.app.script.GhidraScript;
import java.util.*;

public class SetAnalysisOptions extends GhidraScript {
    @Override
    public void run() throws Exception {
        Map<String, String> want = new LinkedHashMap<>();
        want.put("Windows x86 PE RTTI Analyzer", "true");
        want.put("Demangler Microsoft", "true");
        want.put("Function ID", "true");
        want.put("Windows x86 PE Exception Handling", "true");
        want.put("Decompiler Parameter ID", "true");
        want.put("Decompiler Switch Analysis", "true");
        for (String a : getScriptArgs()) { int i = a.indexOf('='); if (i > 0) want.put(a.substring(0, i), a.substring(i + 1)); }
        Map<String, String> cur = getCurrentAnalysisOptionsAndValues(currentProgram);
        for (Map.Entry<String, String> e : want.entrySet()) {
            if (cur.containsKey(e.getKey())) { setAnalysisOption(currentProgram, e.getKey(), e.getValue()); println("SET " + e.getKey() + " = " + e.getValue()); }
            else println("WARN no analysis option named '" + e.getKey() + "'");
        }
        cur = getCurrentAnalysisOptionsAndValues(currentProgram);
        for (Map.Entry<String, String> e : new TreeMap<>(cur).entrySet())
            if (!e.getKey().contains(".")) println("OPT " + e.getKey() + " = " + e.getValue());
    }
}
