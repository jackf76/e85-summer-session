// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valudecoder_tb.h for the primary calling header

#ifndef VERILATED_VALUDECODER_TB___024ROOT_H_
#define VERILATED_VALUDECODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Valudecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valudecoder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ aludecoder_tb__DOT__clk;
    CData/*0:0*/ aludecoder_tb__DOT__reset;
    CData/*1:0*/ aludecoder_tb__DOT__ALUOp;
    CData/*2:0*/ aludecoder_tb__DOT__funct3;
    CData/*0:0*/ aludecoder_tb__DOT__op5;
    CData/*0:0*/ aludecoder_tb__DOT__funct75;
    CData/*2:0*/ aludecoder_tb__DOT__ALUControl;
    CData/*2:0*/ aludecoder_tb__DOT__ALUControlexpected;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ aludecoder_tb__DOT____Vlvbound_h2a240b78__0;
    IData/*31:0*/ aludecoder_tb__DOT__vectornum;
    IData/*31:0*/ aludecoder_tb__DOT__errors;
    IData/*31:0*/ aludecoder_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*10:0*/, 10001> aludecoder_tb__DOT__testvectors;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2ab741dd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valudecoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valudecoder_tb___024root(Valudecoder_tb__Syms* symsp, const char* v__name);
    ~Valudecoder_tb___024root();
    VL_UNCOPYABLE(Valudecoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
