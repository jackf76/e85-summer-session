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
    CData/*0:0*/ testbench__DOT__a;
    CData/*0:0*/ testbench__DOT__b;
    CData/*0:0*/ testbench__DOT__cin;
    CData/*0:0*/ testbench__DOT__s;
    CData/*0:0*/ testbench__DOT__cout;
    CData/*0:0*/ testbench__DOT__sexpected;
    CData/*0:0*/ testbench__DOT__coutexpected;
    CData/*5:0*/ testbench__DOT____Vlvbound_h48ca5934__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ testbench__DOT__vectornum;
    IData/*31:0*/ testbench__DOT__errors;
    IData/*31:0*/ testbench__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*5:0*/, 10001> testbench__DOT__testvectors;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf8270553__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
