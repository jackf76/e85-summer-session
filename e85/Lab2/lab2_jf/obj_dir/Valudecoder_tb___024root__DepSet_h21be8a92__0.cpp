// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valudecoder_tb.h for the primary calling header

#include "Valudecoder_tb__pch.h"
#include "Valudecoder_tb___024root.h"

VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__0(Valudecoder_tb___024root* vlSelf);
VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__1(Valudecoder_tb___024root* vlSelf);
VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__2(Valudecoder_tb___024root* vlSelf);

void Valudecoder_tb___024root___eval_initial(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0 
        = vlSelf->aludecoder_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__1(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSelf->aludecoder_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "aludecoder_tb.sv", 
                                           32);
        vlSelf->aludecoder_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "aludecoder_tb.sv", 
                                           33);
    }
}

VL_INLINE_OPT VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__2(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h2ab741dd__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge aludecoder_tb.clk)", 
                                                           "aludecoder_tb.sv", 
                                                           50);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "aludecoder_tb.sv", 
                                           51);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->aludecoder_tb__DOT__ALUOp = (3U & (
                                                   ((0x2710U 
                                                     >= 
                                                     (0x3fffU 
                                                      & vlSelf->aludecoder_tb__DOT__vectornum))
                                                     ? 
                                                    vlSelf->aludecoder_tb__DOT__testvectors
                                                    [
                                                    (0x3fffU 
                                                     & vlSelf->aludecoder_tb__DOT__vectornum)]
                                                     : 0U) 
                                                   >> 8U));
        vlSelf->aludecoder_tb__DOT__funct3 = (7U & 
                                              (((0x2710U 
                                                 >= 
                                                 (0x3fffU 
                                                  & vlSelf->aludecoder_tb__DOT__vectornum))
                                                 ? 
                                                vlSelf->aludecoder_tb__DOT__testvectors
                                                [(0x3fffU 
                                                  & vlSelf->aludecoder_tb__DOT__vectornum)]
                                                 : 0U) 
                                               >> 5U));
        vlSelf->aludecoder_tb__DOT__op5 = (1U & (((0x2710U 
                                                   >= 
                                                   (0x3fffU 
                                                    & vlSelf->aludecoder_tb__DOT__vectornum))
                                                   ? 
                                                  vlSelf->aludecoder_tb__DOT__testvectors
                                                  [
                                                  (0x3fffU 
                                                   & vlSelf->aludecoder_tb__DOT__vectornum)]
                                                   : 0U) 
                                                 >> 4U));
        vlSelf->aludecoder_tb__DOT__funct75 = (1U & 
                                               (((0x2710U 
                                                  >= 
                                                  (0x3fffU 
                                                   & vlSelf->aludecoder_tb__DOT__vectornum))
                                                  ? 
                                                 vlSelf->aludecoder_tb__DOT__testvectors
                                                 [(0x3fffU 
                                                   & vlSelf->aludecoder_tb__DOT__vectornum)]
                                                  : 0U) 
                                                >> 3U));
        vlSelf->aludecoder_tb__DOT__ALUControlexpected 
            = ((0x2710U >= (0x3fffU & vlSelf->aludecoder_tb__DOT__vectornum))
                ? (7U & vlSelf->aludecoder_tb__DOT__testvectors
                   [(0x3fffU & vlSelf->aludecoder_tb__DOT__vectornum)])
                : 0U);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Valudecoder_tb___024root___act_comb__TOP__0(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->aludecoder_tb__DOT__ALUControl = ((3U & (IData)(vlSelf->aludecoder_tb__DOT__ALUControl)) 
                                              | (4U 
                                                 & ((IData)(
                                                            (((IData)(vlSelf->aludecoder_tb__DOT__ALUOp) 
                                                              >> 1U) 
                                                             & (2U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->aludecoder_tb__DOT__funct3))))) 
                                                    << 2U)));
    vlSelf->aludecoder_tb__DOT__ALUControl = ((5U & (IData)(vlSelf->aludecoder_tb__DOT__ALUControl)) 
                                              | ((IData)(
                                                         (((IData)(vlSelf->aludecoder_tb__DOT__ALUOp) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->aludecoder_tb__DOT__funct3) 
                                                             >> 2U))) 
                                                 << 1U));
    vlSelf->aludecoder_tb__DOT__ALUControl = ((6U & (IData)(vlSelf->aludecoder_tb__DOT__ALUControl)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->aludecoder_tb__DOT__ALUOp) 
                                                    | ((((IData)(vlSelf->aludecoder_tb__DOT__ALUOp) 
                                                         >> 1U) 
                                                        & (~ (IData)(vlSelf->aludecoder_tb__DOT__funct3))) 
                                                       & (((IData)(vlSelf->aludecoder_tb__DOT__funct3) 
                                                           >> 1U) 
                                                          | ((IData)(vlSelf->aludecoder_tb__DOT__op5) 
                                                             & (IData)(vlSelf->aludecoder_tb__DOT__funct75)))))));
}

void Valudecoder_tb___024root___eval_act(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Valudecoder_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valudecoder_tb___024root___nba_sequent__TOP__0(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->aludecoder_tb__DOT__reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->aludecoder_tb__DOT__ALUControl) 
                         != (IData)(vlSelf->aludecoder_tb__DOT__ALUControlexpected)))) {
            VL_WRITEF("Error: ALUOp=%b funct3=%b op5=%b funct75=%b\n",
                      2,vlSelf->aludecoder_tb__DOT__ALUOp,
                      3,(IData)(vlSelf->aludecoder_tb__DOT__funct3),
                      1,vlSelf->aludecoder_tb__DOT__op5,
                      1,(IData)(vlSelf->aludecoder_tb__DOT__funct75));
            vlSelf->aludecoder_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->aludecoder_tb__DOT__errors);
            VL_WRITEF("  ALUControl = %b (%b expected)\n",
                      3,vlSelf->aludecoder_tb__DOT__ALUControl,
                      3,(IData)(vlSelf->aludecoder_tb__DOT__ALUControlexpected));
        }
        vlSelf->aludecoder_tb__DOT__vectornum = ((IData)(1U) 
                                                 + vlSelf->aludecoder_tb__DOT__vectornum);
        if (VL_UNLIKELY(((0x2710U >= (0x3fffU & vlSelf->aludecoder_tb__DOT__vectornum))
                          ? (0x400U & vlSelf->aludecoder_tb__DOT__testvectors
                             [(0x3fffU & vlSelf->aludecoder_tb__DOT__vectornum)])
                          : 0U))) {
            VL_WRITEF("%10# tests completed with %10# errors\n",
                      32,vlSelf->aludecoder_tb__DOT__vectornum,
                      32,vlSelf->aludecoder_tb__DOT__errors);
            VL_FINISH_MT("aludecoder_tb.sv", 68, "");
        }
    }
}

void Valudecoder_tb___024root___eval_nba(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valudecoder_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valudecoder_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Valudecoder_tb___024root___timing_resume(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2ab741dd__0.resume("@(posedge aludecoder_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Valudecoder_tb___024root___timing_commit(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2ab741dd__0.commit("@(posedge aludecoder_tb.clk)");
    }
}

void Valudecoder_tb___024root___eval_triggers__act(Valudecoder_tb___024root* vlSelf);

bool Valudecoder_tb___024root___eval_phase__act(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valudecoder_tb___024root___eval_triggers__act(vlSelf);
    Valudecoder_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valudecoder_tb___024root___timing_resume(vlSelf);
        Valudecoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valudecoder_tb___024root___eval_phase__nba(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valudecoder_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__nba(Valudecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__act(Valudecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valudecoder_tb___024root___eval(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valudecoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("aludecoder_tb.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valudecoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("aludecoder_tb.sv", 11, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valudecoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valudecoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valudecoder_tb___024root___eval_debug_assertions(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
