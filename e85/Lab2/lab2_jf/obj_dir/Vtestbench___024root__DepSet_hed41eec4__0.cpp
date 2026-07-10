// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSelf->testbench__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench.sv", 
                                           29);
        vlSelf->testbench__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench.sv", 
                                           30);
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clk)", 
                                                           "testbench.sv", 
                                                           49);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "testbench.sv", 
                                           50);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->testbench__DOT__a = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 4U));
        vlSelf->testbench__DOT__b = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 3U));
        vlSelf->testbench__DOT__cin = (1U & (((0x2710U 
                                               >= (0x3fffU 
                                                   & vlSelf->testbench__DOT__vectornum))
                                               ? vlSelf->testbench__DOT__testvectors
                                              [(0x3fffU 
                                                & vlSelf->testbench__DOT__vectornum)]
                                               : 0U) 
                                             >> 2U));
        vlSelf->testbench__DOT__coutexpected = (1U 
                                                & (((0x2710U 
                                                     >= 
                                                     (0x3fffU 
                                                      & vlSelf->testbench__DOT__vectornum))
                                                     ? 
                                                    vlSelf->testbench__DOT__testvectors
                                                    [
                                                    (0x3fffU 
                                                     & vlSelf->testbench__DOT__vectornum)]
                                                     : 0U) 
                                                   >> 1U));
        vlSelf->testbench__DOT__sexpected = ((0x2710U 
                                              >= (0x3fffU 
                                                  & vlSelf->testbench__DOT__vectornum))
                                              ? (1U 
                                                 & vlSelf->testbench__DOT__testvectors
                                                 [(0x3fffU 
                                                   & vlSelf->testbench__DOT__vectornum)])
                                              : 0U);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__s = ((IData)(vlSelf->testbench__DOT__a) 
                                 ^ ((IData)(vlSelf->testbench__DOT__b) 
                                    ^ (IData)(vlSelf->testbench__DOT__cin)));
    vlSelf->testbench__DOT__cout = (((IData)(vlSelf->testbench__DOT__a) 
                                     & (IData)(vlSelf->testbench__DOT__b)) 
                                    | (((IData)(vlSelf->testbench__DOT__b) 
                                        | (IData)(vlSelf->testbench__DOT__a)) 
                                       & (IData)(vlSelf->testbench__DOT__cin)));
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->testbench__DOT__s) 
                          != (IData)(vlSelf->testbench__DOT__sexpected)) 
                         | ((IData)(vlSelf->testbench__DOT__cout) 
                            != (IData)(vlSelf->testbench__DOT__coutexpected))))) {
            VL_WRITEF("Error: inputs = %b\n",3,(((IData)(vlSelf->testbench__DOT__a) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->testbench__DOT__b) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->testbench__DOT__cin))));
            vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                              + vlSelf->testbench__DOT__errors);
            VL_WRITEF("  outputs = %b %b (%b %b expected)\n",
                      1,vlSelf->testbench__DOT__s,1,
                      (IData)(vlSelf->testbench__DOT__cout),
                      1,vlSelf->testbench__DOT__sexpected,
                      1,(IData)(vlSelf->testbench__DOT__coutexpected));
        }
        vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                             + vlSelf->testbench__DOT__vectornum);
        if (VL_UNLIKELY(((0x2710U >= (0x3fffU & vlSelf->testbench__DOT__vectornum))
                          ? (0x20U & vlSelf->testbench__DOT__testvectors
                             [(0x3fffU & vlSelf->testbench__DOT__vectornum)])
                          : 0U))) {
            VL_WRITEF("%10# tests completed with %10# errors\n",
                      32,vlSelf->testbench__DOT__vectornum,
                      32,vlSelf->testbench__DOT__errors);
            VL_FINISH_MT("testbench.sv", 66, "");
        }
    }
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8270553__0.resume("@(posedge testbench.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8270553__0.commit("@(posedge testbench.clk)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    Vtestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench.sv", 15, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 15, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
