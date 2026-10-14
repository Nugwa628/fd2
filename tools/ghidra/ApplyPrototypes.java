// Sets calling convention, return type and parameters of existing functions (the name is kept, so exports keep
// Ghidra's default FUN_ names). Used for prototypes Ghidra cannot infer, e.g. lazy "resolve, then jmp [ptr]"
// thunks to game functions, whose stack arguments are otherwise dropped at every call site.
// Args: <file> ; one function per line:  <address> <TAB> <calling convention> <TAB> <return type> <TAB> <params>
//   params: "type name" pairs separated by ',' (empty or "void" for none). Types are Ghidra data type names
//   (built-ins, pointers with '*', or types already in the program). Lines starting with '#' are ignored.
//   Example: 0x1029af00	__cdecl	void	char * szMsg, char * szFile, int nLine
//@category fd2
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.data.DataTypeParser;
import java.nio.file.*;
import java.util.*;

public class ApplyPrototypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        DataTypeParser parser = new DataTypeParser(dtm, dtm, null, DataTypeParser.AllowedDataTypes.ALL);
        int ok = 0, bad = 0;
        for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
            if (line.isBlank() || line.startsWith("#")) continue;
            String[] c = line.split("\t", -1);
            try {
                Function f = getFunctionAt(toAddr(Long.parseLong(c[0].trim().replace("0x", ""), 16)));
                if (f == null) throw new Exception("no function");
                List<ParameterImpl> ps = new ArrayList<>();
                String plist = c.length > 3 ? c[3].trim() : "";
                if (!plist.isEmpty() && !plist.equals("void")) {
                    for (String p : plist.split(",")) {
                        p = p.trim();
                        int i = Math.max(p.lastIndexOf(' '), p.lastIndexOf('*'));
                        String type = p.substring(0, i + 1).trim(), name = p.substring(i + 1).trim();
                        ps.add(new ParameterImpl(name, parser.parse(type), currentProgram));
                    }
                }
                f.updateFunction(c[1].trim(), new ReturnParameterImpl(parser.parse(c[2].trim()), currentProgram), ps,
                        Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
                println("applied " + f.getName() + " : " + f.getPrototypeString(true, false));
                ok++;
            } catch (Exception e) { println("FAILED " + line + " : " + e); bad++; }
        }
        println("RESULT ApplyPrototypes: " + ok + " applied, " + bad + " failed");
    }
}
