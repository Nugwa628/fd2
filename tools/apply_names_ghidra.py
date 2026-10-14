# Applies a generated tree's function names and file attribution to a Ghidra project
# (4_pd2_source/<Module>/symbols.csv, or the sigmaRE 4_sigma_source / 5_game_source/<Module> ones).
# Renames only functions that still have their default FUN_ name, and adds a plate
# comment with the source file, confidence and evidence.
#@category fd2
import csv
from ghidra.program.model.symbol import SourceType

csv_file = askFile("Select <tree>/symbols.csv", "Apply")
af = currentProgram.getAddressFactory()
fm = currentProgram.getFunctionManager()
renamed = 0
commented = 0

fh = open(csv_file.getAbsolutePath())
try:
    for row in csv.DictReader(fh):
        addr = af.getAddress(row["address"].replace("0x", ""))
        fn = fm.getFunctionAt(addr)
        if fn is None:
            continue
        if row["new_name"] != row["ghidra_name"] and fn.getName().startswith("FUN_"):
            fn.setName(row["new_name"], SourceType.USER_DEFINED)
            renamed += 1
        if row["file"]:
            setPlateComment(addr, "%s [%s]\n%s" % (row["file"], row["confidence"], row["evidence"]))
            commented += 1
finally:
    fh.close()

print("Renamed %d functions, commented %d" % (renamed, commented))
