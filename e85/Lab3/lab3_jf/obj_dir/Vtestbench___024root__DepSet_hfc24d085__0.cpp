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
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x61766573U;
    __Vtemp_1[1U] = 0x2d702077U;
    __Vtemp_1[2U] = 0x64697220U;
    __Vtemp_1[3U] = 0x6d6bU;
    (void)VL_SYSTEM_IW(4, __Vtemp_1);
    __Vtemp_2[0U] = 0x2e766364U;
    __Vtemp_2[1U] = 0x62697264U;
    __Vtemp_2[2U] = 0x6e646572U;
    __Vtemp_2[3U] = 0x2f746875U;
    __Vtemp_2[4U] = 0x61766573U;
    __Vtemp_2[5U] = 0x77U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_2));
    vlSymsp->_traceDumpOpen();
    __Vtemp_3[0U] = 0x642e7476U;
    __Vtemp_3[1U] = 0x72626972U;
    __Vtemp_3[2U] = 0x756e6465U;
    __Vtemp_3[3U] = 0x7468U;
    VL_READMEM_N(false, 8, 10001, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_3)
                 ,  &(vlSelf->testbench__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__vectornum = 0U;
    vlSelf->testbench__DOT__errors = 0U;
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       28);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       28);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       28);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [0U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [1U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [2U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [3U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [4U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [5U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [6U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [7U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [8U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [9U];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [0xaU];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [0xbU];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [0xcU];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__vec = vlSelf->testbench__DOT__testvectors
        [0xdU];
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "thunderbird_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->testbench__DOT__left = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                          >> 7U));
    vlSelf->testbench__DOT__right = (1U & ((IData)(vlSelf->testbench__DOT__vec) 
                                           >> 6U));
    vlSelf->testbench__DOT__expected = (0x3fU & (IData)(vlSelf->testbench__DOT__vec));
    co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.clk)", 
                                                       "thunderbird_tb.sv", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                        & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                           | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                       << 5U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                   & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                  << 4U) | ((((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                              & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))) 
                                             << 3U) 
                                            | (((((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                  | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                 & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                                                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2))))))) 
                     != (IData)(vlSelf->testbench__DOT__expected)))) {
        VL_WRITEF("Error: inputs = %b\n outputs = %b %b %b %b %b %b (%b expected)\n",
                  2,(((IData)(vlSelf->testbench__DOT__left) 
                      << 1U) | (IData)(vlSelf->testbench__DOT__right)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        | (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)),
                  1,((~ (IData)(vlSelf->testbench__DOT__dut__DOT__s2)) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                        & (IData)(vlSelf->testbench__DOT__dut__DOT__s1))),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      | (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,((IData)(vlSelf->testbench__DOT__dut__DOT__s1) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  1,(((IData)(vlSelf->testbench__DOT__dut__DOT__s0) 
                      & (IData)(vlSelf->testbench__DOT__dut__DOT__s1)) 
                     & (IData)(vlSelf->testbench__DOT__dut__DOT__s2)),
                  6,(IData)(vlSelf->testbench__DOT__expected));
        vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                          + vlSelf->testbench__DOT__errors);
    }
    vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                         + vlSelf->testbench__DOT__vectornum);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0xeU;
    VL_WRITEF("%0# tests completed with %0# errors\n",
              32,vlSelf->testbench__DOT__vectornum,
              32,vlSelf->testbench__DOT__errors);
    VL_FINISH_MT("thunderbird_tb.sv", 51, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->testbench__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->testbench__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
