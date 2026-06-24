// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
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
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/testbench.sv", 26, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*11:0*/, 128> Vtestbench__ConstPool__TABLE_h109fc91f_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->testbench__DOT__Instr = vlSelf->testbench__DOT__InstructionMemory__DOT__Memory
        [(0xfffffU & ((vlSelf->testbench__DOT__PC - (IData)(0x80000000U)) 
                      >> 2U))];
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
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
        = ((0x100U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
            ? vlSelf->testbench__DOT__PC : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1);
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

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge testbench.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge testbench.reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge testbench.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge testbench.reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__TestbenchRequestReadData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__IMEM_WriteData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT____Vcellinp__DataMemory__En = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__TO_HOST_ADR = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__tohost_lo = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__tohost_hi = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__jump_to_self_count = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__cycle_count = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__TestbenchRequest = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->testbench__DOT__unnamedblk2__DOT__ch = 0;
    vlSelf->testbench__DOT____Vlvbound_hc49dfa76__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT____Vlvbound_hfd05399e__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->testbench__DOT__InstructionMemory__DOT__InitMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->testbench__DOT__InstructionMemory__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__LocalReadData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3145728; ++__Vi0) {
        vlSelf->testbench__DOT__DataMemory__DOT__InitMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3145728; ++__Vi0) {
        vlSelf->testbench__DOT__DataMemory__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h86b2b35d__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__DataMemory__DOT____Vlvbound_h31d4bd5b__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__Load = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__ifu__DOT__PCNext = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls = VL_RAND_RESET_I(12);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT____Vlvbound_h2483e79a__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
