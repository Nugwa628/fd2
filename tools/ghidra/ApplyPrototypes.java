// Sets calling convention, return type and parameters of existing functions. Used for prototypes Ghidra cannot infer,
// e.g. lazy "resolve, then jmp [ptr]" thunks to game functions, whose stack arguments are otherwise dropped at every call site.
// Args: <file> ; one function per line:
//   <address> <TAB> <calling convention> <TAB> <return type> <TAB> <params> [<TAB> <new name>]
//   params: "type name" pairs separated by ',' (empty or "void" for none). Types are Ghidra data type names
//   (built-ins, pointers with '*', or types already in the program). Lines starting with '#' are ignored.
//   Example: 0x1029af00	__cdecl	void	char * szMsg, char * szFile, int nLine	Fog_10024
// fd2 phase 3 (backward compatible): the optional 5th column renames the function (USER_DEFINED); C99 names
//   (uint32_t, int8_t ...) and Ghidra spellings that don't parse fall back to a type of the same size
//   (pointer -> void *); a leading "this" parameter of a __thiscall prototype is left to Ghidra (it adds its own).
//   Without a 5th column the name is kept, as before.
//@category fd2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.data.DataTypeParser;
import java.nio.file.*;
import java.util.*;

public class ApplyPrototypes extends GhidraScript {
    DataTypeParser parser;
    int fallbacks;

    static final Map<String, String> C99 = Map.ofEntries(
        Map.entry("uint8_t", "uchar"), Map.entry("uint16_t", "ushort"), Map.entry("uint32_t", "uint"), Map.entry("uint64_t", "ulonglong"),
        Map.entry("int8_t", "char"), Map.entry("int16_t", "short"), Map.entry("int32_t", "int"), Map.entry("int64_t", "longlong"),
        Map.entry("size_t", "uint"), Map.entry("wchar16", "wchar_t"), Map.entry("BOOL", "int"), Map.entry("DWORD", "uint"));

    DataType type(String t) {
        t = t.trim();
        try { return parser.parse(t); } catch (Exception e) { }
        String base = t.replace("*", "").trim();
        int stars = t.length() - t.replace("*", "").length();
        if (C99.containsKey(base)) {
            try { return parser.parse(C99.get(base) + " " + "*".repeat(stars)); } catch (Exception e) { }
        }
        fallbacks++;
        if (stars > 0) return new PointerDataType(VoidDataType.dataType);
        if (base.equals("float10")) return Float10DataType.dataType;
        if (base.matches("(?i).*(8|longlong|double)$")) return Undefined8DataType.dataType;
        return Undefined4DataType.dataType;
    }

    @Override
    public void run() throws Exception {
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        parser = new DataTypeParser(dtm, dtm, null, DataTypeParser.AllowedDataTypes.ALL);
        int ok = 0, bad = 0, renamed = 0;
        for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
            if (line.isBlank() || line.startsWith("#")) continue;
            String[] c = line.split("\t", -1);
            try {
                Function f = getFunctionAt(toAddr(Long.parseLong(c[0].trim().replace("0x", ""), 16)));
                if (f == null) throw new Exception("no function");
                String cc = c[1].trim();
                List<ParameterImpl> ps = new ArrayList<>();
                String plist = c.length > 3 ? c[3].trim() : "";
                if (!plist.isEmpty() && !plist.equals("void")) {
                    int idx = 0;
                    for (String p : plist.split(",")) {
                        p = p.trim();
                        int i = Math.max(p.lastIndexOf(' '), p.lastIndexOf('*'));
                        String ty = p.substring(0, i + 1).trim(), name = p.substring(i + 1).trim();
                        if (idx++ == 0 && cc.equals("__thiscall") && name.equals("this")) continue;
                        ps.add(new ParameterImpl(name, type(ty), currentProgram));
                    }
                }
                f.updateFunction(cc, new ReturnParameterImpl(type(c[2].trim()), currentProgram), ps,
                        Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
                if (c.length > 4 && !c[4].trim().isEmpty() && !c[4].trim().equals(f.getName())) {
                    f.setName(c[4].trim(), SourceType.USER_DEFINED);
                    renamed++;
                }
                println("applied " + f.getName() + " : " + f.getPrototypeString(true, false));
                ok++;
            } catch (Exception e) { println("FAILED " + line + " : " + e); bad++; }
        }
        println("RESULT ApplyPrototypes: " + ok + " applied, " + bad + " failed, " + renamed + " renamed, " + fallbacks + " type fallbacks");
    }
}
