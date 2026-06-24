// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__reset;
    CData/*0:0*/ testbench__DOT____Vcellinp__DataMemory__En;
    CData/*3:0*/ testbench__DOT__jump_to_self_count;
    CData/*0:0*/ testbench__DOT__TestbenchRequest;
    CData/*7:0*/ testbench__DOT__unnamedblk2__DOT__ch;
    CData/*0:0*/ testbench__DOT__dut__DOT__Load;
    CData/*0:0*/ testbench__DOT__dut__DOT__ieu__DOT__Jump;
    CData/*0:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub;
    CData/*2:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls;
    IData/*31:0*/ testbench__DOT__PC;
    IData/*31:0*/ testbench__DOT__Instr;
    IData/*31:0*/ testbench__DOT__TestbenchRequestReadData;
    IData/*31:0*/ testbench__DOT__IMEM_WriteData;
    IData/*31:0*/ testbench__DOT__TO_HOST_ADR;
    IData/*31:0*/ testbench__DOT__tohost_lo;
    IData/*31:0*/ testbench__DOT__tohost_hi;
    IData/*31:0*/ testbench__DOT__payload;
    IData/*31:0*/ testbench__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ testbench__DOT____Vlvbound_hc49dfa76__0;
    IData/*31:0*/ testbench__DOT____Vlvbound_hfd05399e__0;
    IData/*31:0*/ testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry;
    IData/*31:0*/ testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__LocalReadData;
    IData/*31:0*/ testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT____Vlvbound_h86b2b35d__0;
    IData/*31:0*/ testbench__DOT__DataMemory__DOT____Vlvbound_h31d4bd5b__0;
    IData/*31:0*/ testbench__DOT__dut__DOT__ifu__DOT__PCNext;
    IData/*31:0*/ testbench__DOT__dut__DOT__ifu__DOT__entry_addr;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT____Vlvbound_h2483e79a__0;
    IData/*31:0*/ testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ testbench__DOT__cycle_count;
    VlUnpacked<IData/*31:0*/, 1048576> testbench__DOT__InstructionMemory__DOT__InitMem;
    VlUnpacked<IData/*31:0*/, 1048576> testbench__DOT__InstructionMemory__DOT__Memory;
    VlUnpacked<IData/*31:0*/, 3145728> testbench__DOT__DataMemory__DOT__InitMem;
    VlUnpacked<IData/*31:0*/, 3145728> testbench__DOT__DataMemory__DOT__Memory;
    VlUnpacked<IData/*31:0*/, 31> testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string testbench__DOT__unnamedblk3__DOT__wavefile;
    std::string testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__memfile;
    std::string testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__memfile;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc3646aee__0;
    VlTriggerScheduler __VtrigSched_hf8270716__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
