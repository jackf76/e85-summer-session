// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__3(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__4(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
        = vlSelf->testbench__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                       38);
    vlSelf->testbench__DOT__reset = 0U;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->testbench__DOT__TO_HOST_ADR = 0U;
    __Vtemp_1[0U] = 0x523d2568U;
    __Vtemp_1[1U] = 0x5f414444U;
    __Vtemp_1[2U] = 0x484f5354U;
    __Vtemp_1[3U] = 0x544fU;
    (void)VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_1), 
                               vlSelf->testbench__DOT__TO_HOST_ADR);
    VL_WRITEF("[TB] TOHOST_ADDR = 0x%x\n",32,vlSelf->testbench__DOT__TO_HOST_ADR);
    co_await vlSelf->__VtrigSched_hc3646aee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge testbench.reset)", 
                                                       "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                                       199);
    VL_WRITEF("[%0t] INFO: Starting simulation.\n",
              64,VL_TIME_UNITED_Q(1000),-9);
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                           33);
        vlSelf->testbench__DOT__clk = (1U & (~ (IData)(vlSelf->testbench__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge testbench.clk)", 
                                                           "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                                           140);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                           143);
        vlSelf->testbench__DOT__tohost_lo = ((0x2fffffU 
                                              >= (0x3fffffU 
                                                  & ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                      - (IData)(0x80000000U)) 
                                                     >> 2U)))
                                              ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                             [(0x3fffffU 
                                               & ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                   - (IData)(0x80000000U)) 
                                                  >> 2U))]
                                              : 0U);
        vlSelf->testbench__DOT__tohost_hi = ((0x2fffffU 
                                              >= (0x3fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                       - (IData)(0x80000000U)) 
                                                      >> 2U))))
                                              ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                             [(0x3fffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U)))]
                                              : 0U);
        if ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
              & (0U != (0xfU & (- (IData)((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                 >> 4U))))))) 
             & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                == ((IData)(4U) + vlSelf->testbench__DOT__TO_HOST_ADR)))) {
            vlSelf->testbench__DOT__payload = vlSelf->testbench__DOT__tohost_lo;
            if (VL_UNLIKELY(((0U == vlSelf->testbench__DOT__tohost_hi) 
                             & vlSelf->testbench__DOT__payload))) {
                if ((0U != VL_SHIFTR_III(32,32,32, vlSelf->testbench__DOT__payload, 1U))) {
                    VL_WRITEF("ERROR: Test Failed (code=%10#)\n",
                              32,VL_SHIFTR_III(32,32,32, vlSelf->testbench__DOT__payload, 1U));
                } else {
                    VL_WRITEF("INFO: Test Completed!\n");
                }
                VL_WRITEF("[%0t] INFO: Program Finished! Ending simulation.\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
                VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 165, "");
            } else if (VL_UNLIKELY((0x1010000U == vlSelf->testbench__DOT__tohost_hi))) {
                vlSelf->testbench__DOT__unnamedblk2__DOT__ch 
                    = (0xffU & vlSelf->testbench__DOT__tohost_lo);
                VL_WRITEF("%c",8,vlSelf->testbench__DOT__unnamedblk2__DOT__ch);
                if (VL_UNLIKELY((0xaU == (IData)(vlSelf->testbench__DOT__unnamedblk2__DOT__ch)))) {
                    if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
                }
            }
            vlSelf->testbench__DOT____Vlvbound_hc49dfa76__0 = 0U;
            if (VL_LIKELY((0x2fffffU >= (0x3fffffU 
                                         & ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                             - (IData)(0x80000000U)) 
                                            >> 2U))))) {
                vlSelf->testbench__DOT__DataMemory__DOT__Memory[(0x3fffffU 
                                                                 & ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                                     - (IData)(0x80000000U)) 
                                                                    >> 2U))] 
                    = vlSelf->testbench__DOT____Vlvbound_hc49dfa76__0;
            }
            vlSelf->testbench__DOT____Vlvbound_hfd05399e__0 = 0U;
            if (VL_LIKELY((0x2fffffU >= (0x3fffffU 
                                         & ((IData)(1U) 
                                            + ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                - (IData)(0x80000000U)) 
                                               >> 2U)))))) {
                vlSelf->testbench__DOT__DataMemory__DOT__Memory[(0x3fffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    ((vlSelf->testbench__DOT__TO_HOST_ADR 
                                                                      - (IData)(0x80000000U)) 
                                                                     >> 2U)))] 
                    = vlSelf->testbench__DOT____Vlvbound_hfd05399e__0;
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__4(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hf8270716__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge testbench.clk)", 
                                                           "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                                           56);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 
                                           58);
    }
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__testbench__DOT__jump_to_self_count;
    __Vdly__testbench__DOT__jump_to_self_count = 0;
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvdim0__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvval__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvset__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    // Body
    __Vdly__testbench__DOT__jump_to_self_count = vlSelf->testbench__DOT__jump_to_self_count;
    __Vdlyvset__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
    if (vlSelf->testbench__DOT__reset) {
        vlSelf->testbench__DOT__cycle_count = 0ULL;
        __Vdly__testbench__DOT__jump_to_self_count = 0U;
    } else {
        vlSelf->testbench__DOT__cycle_count = (1ULL 
                                               + vlSelf->testbench__DOT__cycle_count);
        if ((0x6fU == vlSelf->testbench__DOT__Instr)) {
            __Vdly__testbench__DOT__jump_to_self_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__jump_to_self_count)));
        }
    }
    if ((0x800U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))) {
        vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT____Vlvbound_h2483e79a__0 
            = ((8U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                ? ((IData)(vlSelf->testbench__DOT__TestbenchRequest)
                    ? vlSelf->testbench__DOT__TestbenchRequestReadData
                    : ((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En)
                        ? ((0x2fffffU >= (0x3fffffU 
                                          & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                              - (IData)(0x80000000U)) 
                                             >> 2U)))
                            ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                           [(0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                           - (IData)(0x80000000U)) 
                                          >> 2U))] : 0U)
                        : 0U)) : ((0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                   ? ((IData)(4U) + vlSelf->testbench__DOT__PC)
                                   : ((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                       ? ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                           ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                               ? (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                  & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                                               : (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                  | vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB))
                                           : 0U) : 
                                      ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                        ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                            ? 0U : 
                                           ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                             ^ ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                 ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                                & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                   ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                                            >> 0x1fU))
                                        : ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                            ? 0U : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)))));
        if ((0x1eU >= (0x1fU & ((vlSelf->testbench__DOT__Instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 
                = vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT____Vlvbound_h2483e79a__0;
            __Vdlyvset__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
            __Vdlyvdim0__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0 
                = (0x1fU & ((vlSelf->testbench__DOT__Instr 
                             >> 7U) - (IData)(1U)));
        }
    }
    vlSelf->testbench__DOT__jump_to_self_count = __Vdly__testbench__DOT__jump_to_self_count;
    if (__Vdlyvset__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0) {
        vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[__Vdlyvdim0__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*21:0*/ __Vdlyvdim0__testbench__DOT__DataMemory__DOT__Memory__v0;
    __Vdlyvdim0__testbench__DOT__DataMemory__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__DataMemory__DOT__Memory__v0;
    __Vdlyvval__testbench__DOT__DataMemory__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__DataMemory__DOT__Memory__v0;
    __Vdlyvset__testbench__DOT__DataMemory__DOT__Memory__v0 = 0;
    // Body
    __Vdlyvset__testbench__DOT__DataMemory__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->testbench__DOT__reset)) 
                     & (0xfU == (IData)(vlSelf->testbench__DOT__jump_to_self_count))))) {
        VL_WRITEF("ERROR: Program stuck in infinite loop at address %x\n",
                  32,vlSelf->testbench__DOT__PC);
        VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 216, "");
    }
    vlSelf->testbench__DOT__TestbenchRequestReadData = 0U;
    if ((((IData)(vlSelf->testbench__DOT__TestbenchRequest) 
          & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls)) 
         & (~ (IData)((0U != (0xfU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                    >> 4U)))))))))) {
        if ((0x200bff8U == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)) {
            vlSelf->testbench__DOT__TestbenchRequestReadData 
                = (IData)(vlSelf->testbench__DOT__cycle_count);
        }
        if ((0x200bffcU == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)) {
            vlSelf->testbench__DOT__TestbenchRequestReadData 
                = (IData)((vlSelf->testbench__DOT__cycle_count 
                           >> 0x20U));
        }
    }
    if (vlSelf->testbench__DOT__reset) {
        vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100000U, vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i)) {
            vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry 
                = vlSelf->testbench__DOT__InstructionMemory__DOT__InitMem
                [(0xfffffU & vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i)];
            vlSelf->testbench__DOT__InstructionMemory__DOT__Memory[(0xfffffU 
                                                                    & vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i)] 
                = vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry;
            vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i);
        }
    } else if (VL_UNLIKELY(((0x80000000U > vlSelf->testbench__DOT__PC) 
                            | (0x803ffffcU < vlSelf->testbench__DOT__PC)))) {
        VL_WRITEF("ERROR: Instruction Memory memory out-of-range addr %x\nDEBUG: MEM_ADR_OFFSET(80000000) MEMORY_SIZE_ENTRIES(00100000) DATA_BITS(00000020) TOP(803ffffc)\n",
                  32,vlSelf->testbench__DOT__PC);
        VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/ram1p1rwb.sv", 51, "");
    }
    if (vlSelf->testbench__DOT__reset) {
        vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x300000U, vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i)) {
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry 
                = ((0x2fffffU >= (0x3fffffU & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i))
                    ? vlSelf->testbench__DOT__DataMemory__DOT__InitMem
                   [(0x3fffffU & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i)]
                    : 0U);
            vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h86b2b35d__0 
                = vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry;
            if (VL_LIKELY((0x2fffffU >= (0x3fffffU 
                                         & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->testbench__DOT__DataMemory__DOT__Memory[(0x3fffffU 
                                                                 & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i)] 
                    = vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h86b2b35d__0;
            }
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i);
        }
    } else if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En) 
                            & ((0x80000000U > vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum) 
                               | (0x80bffffcU < vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))))) {
        VL_WRITEF("ERROR: Data Memory memory out-of-range addr %x\nDEBUG: MEM_ADR_OFFSET(80000000) MEMORY_SIZE_ENTRIES(00300000) DATA_BITS(00000020) TOP(80bffffc)\n",
                  32,vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum);
        VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/ram1p1rwb.sv", 51, "");
    } else if (((0U != (0xfU & (- (IData)((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                 >> 4U)))))) 
                & (IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En))) {
        vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData 
            = ((0x2fffffU >= (0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                            - (IData)(0x80000000U)) 
                                           >> 2U)))
                ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
               [(0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                               - (IData)(0x80000000U)) 
                              >> 2U))] : 0U);
        if ((0x10U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))) {
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData 
                = ((0xffffff00U & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData) 
                   | (0xffU & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2));
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData 
                = ((0xffff00ffU & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData) 
                   | (0xff00U & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2));
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData 
                = ((0xff00ffffU & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData) 
                   | (0xff0000U & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2));
            vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData 
                = ((0xffffffU & vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData) 
                   | (0xff000000U & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2));
        }
        vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h31d4bd5b__0 
            = vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData;
        if ((0x2fffffU >= (0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                         - (IData)(0x80000000U)) 
                                        >> 2U)))) {
            __Vdlyvval__testbench__DOT__DataMemory__DOT__Memory__v0 
                = vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h31d4bd5b__0;
            __Vdlyvset__testbench__DOT__DataMemory__DOT__Memory__v0 = 1U;
            __Vdlyvdim0__testbench__DOT__DataMemory__DOT__Memory__v0 
                = (0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                 - (IData)(0x80000000U)) 
                                >> 2U));
        }
    }
    if (__Vdlyvset__testbench__DOT__DataMemory__DOT__Memory__v0) {
        vlSelf->testbench__DOT__DataMemory__DOT__Memory[__Vdlyvdim0__testbench__DOT__DataMemory__DOT__Memory__v0] 
            = __Vdlyvval__testbench__DOT__DataMemory__DOT__Memory__v0;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->testbench__DOT__PC = ((IData)(vlSelf->testbench__DOT__reset)
                                   ? vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr
                                   : vlSelf->testbench__DOT__dut__DOT__ifu__DOT__PCNext);
}

extern const VlUnpacked<SData/*11:0*/, 128> Vtestbench__ConstPool__TABLE_h109fc91f_0;

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->testbench__DOT__Instr = vlSelf->testbench__DOT__InstructionMemory__DOT__Memory
        [(0xfffffU & ((vlSelf->testbench__DOT__PC - (IData)(0x80000000U)) 
                      >> 2U))];
    __Vtableidx1 = (0x7fU & vlSelf->testbench__DOT__Instr);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls 
        = Vtestbench__ConstPool__TABLE_h109fc91f_0[__Vtableidx1];
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct 
        = (7U & ((vlSelf->testbench__DOT__Instr >> 0xcU) 
                 & (- (IData)((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 6U))))));
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub 
        = (((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
            >> 6U) & ((IData)((0x40000020U == (0x40007020U 
                                               & vlSelf->testbench__DOT__Instr))) 
                      | (2U == (7U & (vlSelf->testbench__DOT__Instr 
                                      >> 0xcU)))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2 
        = ((0U == (0x1fU & (vlSelf->testbench__DOT__Instr 
                            >> 0x14U))) ? 0U : ((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & ((vlSelf->testbench__DOT__Instr 
                                                      >> 0x14U) 
                                                     - (IData)(1U))))
                                                 ? 
                                                vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf
                                                [(0x1fU 
                                                  & ((vlSelf->testbench__DOT__Instr 
                                                      >> 0x14U) 
                                                     - (IData)(1U)))]
                                                 : 0U));
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
        = ((0U == (0x1fU & (vlSelf->testbench__DOT__Instr 
                            >> 0xfU))) ? 0U : ((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & ((vlSelf->testbench__DOT__Instr 
                                                     >> 0xfU) 
                                                    - (IData)(1U))))
                                                ? vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf
                                               [(0x1fU 
                                                 & ((vlSelf->testbench__DOT__Instr 
                                                     >> 0xfU) 
                                                    - (IData)(1U)))]
                                                : 0U));
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB 
        = ((0x80U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
            ? ((0x400U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                ? ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                    ? (((- (IData)((vlSelf->testbench__DOT__Instr 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff000U & vlSelf->testbench__DOT__Instr) 
                          | ((0x800U & (vlSelf->testbench__DOT__Instr 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->testbench__DOT__Instr 
                                                      >> 0x14U)))))
                    : (((- (IData)((vlSelf->testbench__DOT__Instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->testbench__DOT__Instr 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->testbench__DOT__Instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->testbench__DOT__Instr 
                                                      >> 7U))))))
                : ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                    ? (((- (IData)((vlSelf->testbench__DOT__Instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->testbench__DOT__Instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->testbench__DOT__Instr 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->testbench__DOT__Instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->testbench__DOT__Instr 
                          >> 0x14U)))) : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
        = ((0x100U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
            ? vlSelf->testbench__DOT__PC : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
        = (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
           + (((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub)
                ? (~ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
              + (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub)));
    vlSelf->testbench__DOT__TestbenchRequest = ((0x200bff8U 
                                                 == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum) 
                                                | (0x200bffcU 
                                                   == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum));
    vlSelf->testbench__DOT__dut__DOT__ifu__DOT__PCNext 
        = ((1U & ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                    >> 2U) & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                              == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)) 
                  | ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                     >> 1U))) ? vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum
            : ((IData)(4U) + vlSelf->testbench__DOT__PC));
    vlSelf->testbench__DOT____Vcellinp__DataMemory__En 
        = (1U & ((~ (IData)(vlSelf->testbench__DOT__TestbenchRequest)) 
                 & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls)));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc3646aee__0.resume("@(negedge testbench.reset)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8270716__0.resume("@(negedge testbench.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc3646aee__0.commit("@(negedge testbench.reset)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8270716__0.commit("@(negedge testbench.clk)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
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
            VL_FATAL_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 26, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 26, "", "Active region did not converge.");
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
