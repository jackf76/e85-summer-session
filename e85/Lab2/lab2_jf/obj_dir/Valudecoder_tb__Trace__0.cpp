// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valudecoder_tb__Syms.h"


void Valudecoder_tb___024root__trace_chg_0_sub_0(Valudecoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valudecoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root__trace_chg_0\n"); );
    // Init
    Valudecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valudecoder_tb___024root*>(voidSelf);
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valudecoder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valudecoder_tb___024root__trace_chg_0_sub_0(Valudecoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->aludecoder_tb__DOT__ALUOp),2);
        bufp->chgCData(oldp+1,(vlSelf->aludecoder_tb__DOT__funct3),3);
        bufp->chgBit(oldp+2,(vlSelf->aludecoder_tb__DOT__op5));
        bufp->chgBit(oldp+3,(vlSelf->aludecoder_tb__DOT__funct75));
        bufp->chgCData(oldp+4,(vlSelf->aludecoder_tb__DOT__ALUControlexpected),3);
    }
    bufp->chgBit(oldp+5,(vlSelf->aludecoder_tb__DOT__clk));
    bufp->chgBit(oldp+6,(vlSelf->aludecoder_tb__DOT__reset));
    bufp->chgCData(oldp+7,(vlSelf->aludecoder_tb__DOT__ALUControl),3);
    bufp->chgIData(oldp+8,(vlSelf->aludecoder_tb__DOT__vectornum),32);
    bufp->chgIData(oldp+9,(vlSelf->aludecoder_tb__DOT__errors),32);
    bufp->chgIData(oldp+10,(vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i),32);
}

void Valudecoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root__trace_cleanup\n"); );
    // Init
    Valudecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valudecoder_tb___024root*>(voidSelf);
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
