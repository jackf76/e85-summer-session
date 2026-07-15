// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x61766573U;
    __Vtemp_1[1U] = 0x2d702077U;
    __Vtemp_1[2U] = 0x64697220U;
    __Vtemp_1[3U] = 0x6d6bU;
    (void)VL_SYSTEM_IW(4, __Vtemp_1);
    __Vtemp_2[0U] = 0x2e766364U;
    __Vtemp_2[1U] = 0x74757265U;
    __Vtemp_2[2U] = 0x6476656eU;
    __Vtemp_2[3U] = 0x65732f61U;
    __Vtemp_2[4U] = 0x776176U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_2));
    vlSymsp->_traceDumpOpen();
    __Vtemp_3[0U] = 0x652e7476U;
    __Vtemp_3[1U] = 0x6e747572U;
    __Vtemp_3[2U] = 0x61647665U;
    VL_READMEM_N(false, 8, 10001, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelfRef.testbench__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelfRef.testbench__DOT__vectornum = 0U;
    vlSelfRef.testbench__DOT__errors = 0U;
    vlSelfRef.testbench__DOT__reset = 1U;
    vlSelfRef.testbench__DOT__N = 0U;
    vlSelfRef.testbench__DOT__S = 0U;
    vlSelfRef.testbench__DOT__E = 0U;
    vlSelfRef.testbench__DOT__W = 0U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [0U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [1U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [2U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [3U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [4U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [5U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [6U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [7U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [8U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [9U]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [0xaU]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [0xbU]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [0xcU]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelfRef.__VtrigSched_hb621bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__vec = (0x7fU & vlSelfRef.testbench__DOT__testvectors
                                     [0xdU]);
    vlSelfRef.testbench__DOT__reset = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                             >> 6U));
    vlSelfRef.testbench__DOT__N = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 5U));
    vlSelfRef.testbench__DOT__S = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 4U));
    vlSelfRef.testbench__DOT__E = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 3U));
    vlSelfRef.testbench__DOT__W = (1U & ((IData)(vlSelfRef.testbench__DOT__vec) 
                                         >> 2U));
    vlSelfRef.testbench__DOT__expected = (3U & (IData)(vlSelfRef.testbench__DOT__vec));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench.sv", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb621bc54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge testbench.clk)", 
                                                         "testbench.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.testbench__DOT__WIN) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__DIE)) 
                     != (IData)(vlSelfRef.testbench__DOT__expected)))) {
        VL_WRITEF_NX("Error at vector %0#\nInputs: reset=%b N=%b S=%b E=%b W=%b\nActual: WIN=%b DIE=%b\nExpected: WIN=%b DIE=%b\n",0,
                     32,vlSelfRef.testbench__DOT__vectornum,
                     1,(IData)(vlSelfRef.testbench__DOT__reset),
                     1,vlSelfRef.testbench__DOT__N,
                     1,(IData)(vlSelfRef.testbench__DOT__S),
                     1,vlSelfRef.testbench__DOT__E,
                     1,(IData)(vlSelfRef.testbench__DOT__W),
                     1,vlSelfRef.testbench__DOT__WIN,
                     1,(IData)(vlSelfRef.testbench__DOT__DIE),
                     1,(1U & ((IData)(vlSelfRef.testbench__DOT__expected) 
                              >> 1U)),1,(1U & (IData)(vlSelfRef.testbench__DOT__expected)));
        vlSelfRef.testbench__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.testbench__DOT__errors);
    }
    vlSelfRef.testbench__DOT__vectornum = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__vectornum);
    vlSelfRef.testbench__DOT__unnamedblk1__DOT__i = 0xeU;
    VL_WRITEF_NX("%0# tests completed with %0# errors\n",0,
                 32,vlSelfRef.testbench__DOT__vectornum,
                 32,vlSelfRef.testbench__DOT__errors);
    VL_FINISH_MT("testbench.sv", 53, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.testbench__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.testbench__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
        = vlSelfRef.testbench__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
