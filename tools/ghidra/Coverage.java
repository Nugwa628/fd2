// Coverage: share of .text inside function bodies; skips padding and 5-byte jmp stubs to known functions;
// writes leftover non-padding ranges to the file given as the first script argument.
// Usage: analyzeHeadless <projdir> <proj> -process -noanalysis -readOnly -scriptPath tools/ghidra -postScript Coverage.java <out.tsv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
public class Coverage extends GhidraScript {
  boolean isStub(Address a) throws Exception {
    int d = currentProgram.getMemory().getInt(a.add(1));
    long tv = a.getOffset()+5+(long)d;
    if (tv < 0 || tv > 0xffffffffL) return false;
    Address t = a.getNewAddress(tv);
    return currentProgram.getFunctionManager().getFunctionAt(t)!=null;
  }
  public void run() throws Exception {
    MemoryBlock text = currentProgram.getMemory().getBlock(".text");
    AddressSet all = new AddressSet(text.getStart(), text.getEnd());
    AddressSet inFn = new AddressSet();
    FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
    int nf=0; while (it.hasNext()) { Function f = it.next(); inFn.add(f.getBody()); nf++; }
    AddressSet rest = all.subtract(inFn);
    long pad=0, real=0, instr=0, stubs=0; AddressSet resid=new AddressSet(); int realRanges=0, bigRanges=0; StringBuilder big=new StringBuilder();
    Listing L=currentProgram.getListing();
    for (AddressRange r : rest) {
      long nonpad=0;
      for (Address a=r.getMinAddress(); a.compareTo(r.getMaxAddress())<=0; a=a.next()) {
        int b = currentProgram.getMemory().getByte(a) & 0xff;
        if (b==0xcc || b==0x00 || b==0x90) { pad++; }
        else if (b==0xe9 && isStub(a)) { stubs++; for (int k=0;k<4;k++) a=a.next(); }
        else { real++; nonpad++; resid.add(a); }
        if (L.getInstructionAt(a)!=null) instr++;
        if (a.equals(r.getMaxAddress())) break;
      }
      if (nonpad>0) realRanges++;
      if (nonpad>=16) { bigRanges++; if (bigRanges<=15) big.append(r.getMinAddress()+"-"+r.getMaxAddress()+" ("+nonpad+") "); }
    }
    java.io.PrintWriter pw=new java.io.PrintWriter(getScriptArgs()[0]);
    for (AddressRange r: resid) pw.println(r.getMinAddress()+"\t"+r.getLength());
    pw.close();
    println("RESULT jmp_stubs="+stubs+" residual_bytes="+real+" residual_ranges="+resid.getNumAddressRanges());
    // indirect calls/jumps
    long icall=0, ijmp=0, ijmpUnres=0;
    InstructionIterator ii = L.getInstructions(text.getStart(), true);
    while (ii.hasNext()) { Instruction in = ii.next(); if (!text.contains(in.getAddress())) break;
      FlowType ft = in.getFlowType();
      if (ft.isCall() && ft.isComputed()) icall++;
      if (ft.isJump() && ft.isComputed()) { ijmp++; if (in.getFlows().length==0) ijmpUnres++; } }
    println("RESULT functions="+nf+" text="+all.getNumAddresses()+" inFunctions="+inFn.intersect(all).getNumAddresses()
      +" outside="+rest.getNumAddresses()+" outside_padding="+pad+" outside_nonpadding="+real+" outside_disassembled="+instr
      +" ranges_with_code="+realRanges+" ranges_ge16="+bigRanges);
    println("RESULT indirect_calls="+icall+" computed_jumps="+ijmp+" computed_jumps_unresolved="+ijmpUnres);
    println("RESULT sample_big_ranges: "+big);
  }
}
