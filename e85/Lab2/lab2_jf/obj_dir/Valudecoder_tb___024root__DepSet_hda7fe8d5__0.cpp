// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valudecoder_tb.h for the primary calling header

#include "Valudecoder_tb__pch.h"
#include "Valudecoder_tb__Syms.h"
#include "Valudecoder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valudecoder_tb___024root___eval_initial__TOP__Vtiming__0(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6f646572U;
    __Vtemp_1[2U] = 0x75646563U;
    __Vtemp_1[3U] = 0x732f616cU;
    __Vtemp_1[4U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x2710U, vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->aludecoder_tb__DOT____Vlvbound_h2a240b78__0 = 0x7ffU;
        if (VL_LIKELY((0x2710U >= (0x3fffU & vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->aludecoder_tb__DOT__testvectors[(0x3fffU 
                                                     & vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i)] 
                = vlSelf->aludecoder_tb__DOT____Vlvbound_h2a240b78__0;
        }
        vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->aludecoder_tb__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_3[0U] = 0x642e7476U;
    __Vtemp_3[1U] = 0x46697865U;
    __Vtemp_3[2U] = 0x6f646572U;
    __Vtemp_3[3U] = 0x75646563U;
    __Vtemp_3[4U] = 0x616cU;
    VL_READMEM_N(false, 11, 10001, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_3)
                 ,  &(vlSelf->aludecoder_tb__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelf->aludecoder_tb__DOT__vectornum = 0U;
    vlSelf->aludecoder_tb__DOT__errors = 0U;
    vlSelf->aludecoder_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x16ULL, nullptr, 
                                       "aludecoder_tb.sv", 
                                       46);
    vlSelf->aludecoder_tb__DOT__reset = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valudecoder_tb___024root___dump_triggers__act(Valudecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valudecoder_tb___024root___eval_triggers__act(Valudecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valudecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valudecoder_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->aludecoder_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->aludecoder_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__aludecoder_tb__DOT__clk__0 
        = vlSelf->aludecoder_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valudecoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
