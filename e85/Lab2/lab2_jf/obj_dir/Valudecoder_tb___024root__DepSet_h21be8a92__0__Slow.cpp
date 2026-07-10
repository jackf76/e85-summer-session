// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valudecoder_tb.h for the primary calling header

#include "Valudecoder_tb__pch.h"
#include "Valudecoder_tb___024root.h"

VL_ATTR_COLD void Valudecoder_tb___024root___eval_static(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valudecoder_tb___024root___eval_final(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__stl(Valudecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valudecoder_tb___024root___eval_phase__stl(Valudecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Valudecoder_tb___024root___eval_settle(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Valudecoder_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("aludecoder_tb.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valudecoder_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__stl(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valudecoder_tb___024root___act_comb__TOP__0(Valudecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Valudecoder_tb___024root___eval_stl(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valudecoder_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Valudecoder_tb___024root___eval_triggers__stl(Valudecoder_tb___024root* vlSelf);

VL_ATTR_COLD bool Valudecoder_tb___024root___eval_phase__stl(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valudecoder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Valudecoder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__act(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge aludecoder_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge aludecoder_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__nba(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge aludecoder_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge aludecoder_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valudecoder_tb___024root___ctor_var_reset(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->aludecoder_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->aludecoder_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->aludecoder_tb__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->aludecoder_tb__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->aludecoder_tb__DOT__op5 = VL_RAND_RESET_I(1);
    vlSelf->aludecoder_tb__DOT__funct75 = VL_RAND_RESET_I(1);
    vlSelf->aludecoder_tb__DOT__ALUControl = VL_RAND_RESET_I(3);
    vlSelf->aludecoder_tb__DOT__ALUControlexpected = VL_RAND_RESET_I(3);
    vlSelf->aludecoder_tb__DOT__vectornum = VL_RAND_RESET_I(32);
    vlSelf->aludecoder_tb__DOT__errors = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 10001; ++__Vi0) {
        vlSelf->aludecoder_tb__DOT__testvectors[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->aludecoder_tb__DOT____Vlvbound_h2a240b78__0 = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
