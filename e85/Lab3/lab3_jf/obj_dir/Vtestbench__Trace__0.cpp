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
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->testbench__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->testbench__DOT__left));
        bufp->chgBit(oldp+2,(vlSelf->testbench__DOT__right));
        bufp->chgCData(oldp+3,(vlSelf->testbench__DOT__expected),6);
        bufp->chgIData(oldp+4,(vlSelf->testbench__DOT__vectornum),32);
        bufp->chgIData(oldp+5,(vlSelf->testbench__DOT__errors),32);
        bufp->chgCData(oldp+6,(vlSelf->testbench__DOT__vec),8);
        bufp->chgBit(oldp+7,(((IData)(vlSelf->testbench__DOT__left) 
                              ^ (IData)(vlSelf->testbench__DOT__right))));
        bufp->chgIData(oldp+8,(vlSelf->testbench__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+9,(((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                 | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)))));
        bufp->chgBit(oldp+10,(((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))));
        bufp->chgBit(oldp+11,(((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                               & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                  & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)))));
        bufp->chgBit(oldp+12,((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))));
        bufp->chgBit(oldp+14,((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))));
        bufp->chgBit(oldp+15,(vlSelf->testbench__DOT__dut__DOT__s2));
        bufp->chgBit(oldp+16,(vlSelf->testbench__DOT__dut__DOT__s1));
        bufp->chgBit(oldp+17,(vlSelf->testbench__DOT__dut__DOT__s0));
        bufp->chgBit(oldp+18,((1U & (~ ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))))));
        bufp->chgBit(oldp+19,(((~ ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                               ^ (IData)(vlSelf->testbench__DOT__dut__DOT__s1))));
        bufp->chgBit(oldp+21,(((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                               & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))));
        bufp->chgBit(oldp+22,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                               | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))));
    }
    bufp->chgBit(oldp+23,(vlSelf->testbench__DOT__clk));
    bufp->chgBit(oldp+24,(((~ (IData)(vlSelf->testbench__DOT__left)) 
                           & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                              & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                 & (IData)(vlSelf->testbench__DOT__right))))));
    bufp->chgBit(oldp+25,((((~ ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                            & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                           | ((~ (IData)(vlSelf->testbench__DOT__left)) 
                              & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                                 & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                    & (IData)(vlSelf->testbench__DOT__right)))))));
    bufp->chgBit(oldp+26,((((IData)(vlSelf->testbench__DOT__left) 
                            ^ (IData)(vlSelf->testbench__DOT__right)) 
                           & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                              & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__s1))))));
    bufp->chgBit(oldp+27,((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                            & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                           | (((IData)(vlSelf->testbench__DOT__left) 
                               ^ (IData)(vlSelf->testbench__DOT__right)) 
                              & ((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s0)) 
                                 & (~ (IData)(vlSelf->testbench__DOT__dut__DOT__s1)))))));
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
}
