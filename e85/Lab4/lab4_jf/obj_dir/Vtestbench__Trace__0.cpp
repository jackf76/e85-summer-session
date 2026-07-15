// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.testbench__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelfRef.testbench__DOT__N));
        bufp->chgBit(oldp+2,(vlSelfRef.testbench__DOT__S));
        bufp->chgBit(oldp+3,(vlSelfRef.testbench__DOT__E));
        bufp->chgBit(oldp+4,(vlSelfRef.testbench__DOT__W));
        bufp->chgCData(oldp+5,(vlSelfRef.testbench__DOT__expected),2);
        bufp->chgIData(oldp+6,(vlSelfRef.testbench__DOT__vectornum),32);
        bufp->chgIData(oldp+7,(vlSelfRef.testbench__DOT__errors),32);
        bufp->chgCData(oldp+8,(vlSelfRef.testbench__DOT__vec),7);
        bufp->chgIData(oldp+9,(vlSelfRef.testbench__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+10,(vlSelfRef.testbench__DOT__WIN));
        bufp->chgBit(oldp+11,(vlSelfRef.testbench__DOT__DIE));
        bufp->chgBit(oldp+12,(vlSelfRef.testbench__DOT__dut__DOT__inStash));
        bufp->chgCData(oldp+13,(vlSelfRef.testbench__DOT__dut__DOT__room__DOT__nextState),3);
        bufp->chgBit(oldp+14,(vlSelfRef.testbench__DOT__dut__DOT__sword__DOT__nextState));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+15,(vlSelfRef.testbench__DOT__dut__DOT__hasSword));
        bufp->chgCData(oldp+16,(vlSelfRef.testbench__DOT__dut__DOT__room__DOT__currentState),3);
        bufp->chgBit(oldp+17,(vlSelfRef.testbench__DOT__dut__DOT__sword__DOT__currentState));
    }
    bufp->chgBit(oldp+18,(vlSelfRef.testbench__DOT__clk));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
