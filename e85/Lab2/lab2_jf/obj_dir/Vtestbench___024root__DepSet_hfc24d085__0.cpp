// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64646572U;
    __Vtemp_1[2U] = 0x756c6c61U;
    __Vtemp_1[3U] = 0x65732f66U;
    __Vtemp_1[4U] = 0x776176U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x2710U, vlSelf->testbench__DOT__unnamedblk1__DOT__i)) {
        vlSelf->testbench__DOT____Vlvbound_h48ca5934__0 = 0x3fU;
        if (VL_LIKELY((0x2710U >= (0x3fffU & vlSelf->testbench__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->testbench__DOT__testvectors[(0x3fffU 
                                                 & vlSelf->testbench__DOT__unnamedblk1__DOT__i)] 
                = vlSelf->testbench__DOT____Vlvbound_h48ca5934__0;
        }
        vlSelf->testbench__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->testbench__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_3[0U] = 0x722e7476U;
    __Vtemp_3[1U] = 0x61646465U;
    __Vtemp_3[2U] = 0x66756c6cU;
    VL_READMEM_N(false, 6, 10001, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->testbench__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__vectornum = 0U;
    vlSelf->testbench__DOT__errors = 0U;
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x16ULL, nullptr, 
                                       "testbench.sv", 
                                       45);
    vlSelf->testbench__DOT__reset = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->testbench__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->testbench__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
