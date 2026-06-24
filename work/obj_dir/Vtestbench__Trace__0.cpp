// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->testbench__DOT__jump_to_self_count),4);
        bufp->chgQData(oldp+1,(vlSelf->testbench__DOT__cycle_count),64);
        bufp->chgIData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[30]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->testbench__DOT__TestbenchRequestReadData),32);
        bufp->chgIData(oldp+35,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+36,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry),32);
        bufp->chgIData(oldp+37,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData),32);
        bufp->chgIData(oldp+38,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+39,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+40,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+41,(vlSelf->testbench__DOT__Instr),32);
        bufp->chgBit(oldp+42,((0U != (0xfU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                            >> 4U))))))));
        bufp->chgBit(oldp+43,((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))));
        bufp->chgCData(oldp+44,((0xfU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                       >> 4U)))))),4);
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 5U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+48,((3U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                       >> 7U))),2);
        bufp->chgCData(oldp+49,((3U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                       >> 9U))),2);
        bufp->chgCData(oldp+50,((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub) 
                                  << 1U) | (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                  >> 6U)))),2);
        bufp->chgCData(oldp+51,((0x7fU & vlSelf->testbench__DOT__Instr)),7);
        bufp->chgCData(oldp+52,((7U & (vlSelf->testbench__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+53,((1U & (vlSelf->testbench__DOT__Instr 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 2U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 1U))));
        bufp->chgBit(oldp+56,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 6U))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 4U))));
        bufp->chgSData(oldp+59,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls),12);
        bufp->chgIData(oldp+60,(((0x400U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                  ? ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelf->testbench__DOT__Instr 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->testbench__DOT__Instr) 
                                            | ((0x800U 
                                                & (vlSelf->testbench__DOT__Instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->testbench__DOT__Instr 
                                                     >> 0x14U)))))
                                      : (((- (IData)(
                                                     (vlSelf->testbench__DOT__Instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->testbench__DOT__Instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->testbench__DOT__Instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->testbench__DOT__Instr 
                                                     >> 7U))))))
                                  : ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelf->testbench__DOT__Instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->testbench__DOT__Instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->testbench__DOT__Instr 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->testbench__DOT__Instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->testbench__DOT__Instr 
                                            >> 0x14U))))),32);
        bufp->chgCData(oldp+61,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct),3);
        bufp->chgIData(oldp+62,((vlSelf->testbench__DOT__Instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+63,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+64,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 8U))));
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 7U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+68,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum),32);
        bufp->chgIData(oldp+69,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2),32);
        bufp->chgBit(oldp+70,(vlSelf->testbench__DOT__TestbenchRequest));
        bufp->chgBit(oldp+71,(vlSelf->testbench__DOT____Vcellinp__DataMemory__En));
        bufp->chgBit(oldp+72,((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                               == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)));
        bufp->chgIData(oldp+73,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1),32);
        bufp->chgIData(oldp+74,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA),32);
        bufp->chgIData(oldp+75,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB),32);
        bufp->chgIData(oldp+76,(((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                  ^ ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                      ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                     & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                        ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                                 >> 0x1fU)),32);
        bufp->chgBit(oldp+77,((((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                 ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                   ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)) 
                               >> 0x1fU)));
        bufp->chgBit(oldp+78,((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                               >> 0x1fU)));
        bufp->chgBit(oldp+79,(((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                ^ ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                    ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                   & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                      ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                               >> 0x1fU)));
    }
    bufp->chgBit(oldp+80,(vlSelf->testbench__DOT__clk));
    bufp->chgBit(oldp+81,(vlSelf->testbench__DOT__reset));
    bufp->chgIData(oldp+82,(vlSelf->testbench__DOT__PC),32);
    bufp->chgIData(oldp+83,(((IData)(vlSelf->testbench__DOT__TestbenchRequest)
                              ? vlSelf->testbench__DOT__TestbenchRequestReadData
                              : ((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En)
                                  ? ((0x2fffffU >= 
                                      (0x3fffffU & 
                                       ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                         - (IData)(0x80000000U)) 
                                        >> 2U))) ? 
                                     vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                     [(0x3fffffU & 
                                       ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                         - (IData)(0x80000000U)) 
                                        >> 2U))] : 0U)
                                  : 0U))),32);
    bufp->chgIData(oldp+84,(((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En)
                              ? ((0x2fffffU >= (0x3fffffU 
                                                & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U)))
                                  ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                 [(0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                 - (IData)(0x80000000U)) 
                                                >> 2U))]
                                  : 0U) : 0U)),32);
    bufp->chgIData(oldp+85,(vlSelf->testbench__DOT__TO_HOST_ADR),32);
    bufp->chgIData(oldp+86,(vlSelf->testbench__DOT__tohost_lo),32);
    bufp->chgIData(oldp+87,(vlSelf->testbench__DOT__tohost_hi),32);
    bufp->chgIData(oldp+88,(vlSelf->testbench__DOT__payload),32);
    bufp->chgIData(oldp+89,(((IData)(4U) + vlSelf->testbench__DOT__PC)),32);
    bufp->chgBit(oldp+90,((1U & ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                   >> 2U) & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                                             == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)) 
                                 | ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                    >> 1U)))));
    bufp->chgIData(oldp+91,(((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                              ? ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                  ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                      ? (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                         & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                                      : (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                         | vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB))
                                  : 0U) : ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                            ? ((1U 
                                                & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                ? 0U
                                                : (
                                                   (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                    ^ 
                                                    ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                      ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                                     & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                        ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                                                   >> 0x1fU))
                                            : ((1U 
                                                & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                ? 0U
                                                : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)))),32);
    bufp->chgIData(oldp+92,(((0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                              ? ((IData)(4U) + vlSelf->testbench__DOT__PC)
                              : ((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                  ? ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                      ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                          ? (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                             & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                                          : (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                             | vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB))
                                      : 0U) : ((2U 
                                                & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                     ^ 
                                                     ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                       ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                                      & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                         ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                                                    >> 0x1fU))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                    ? 0U
                                                    : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))))),32);
    bufp->chgIData(oldp+93,(((8U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                              ? ((IData)(vlSelf->testbench__DOT__TestbenchRequest)
                                  ? vlSelf->testbench__DOT__TestbenchRequestReadData
                                  : ((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En)
                                      ? ((0x2fffffU 
                                          >= (0x3fffffU 
                                              & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                  - (IData)(0x80000000U)) 
                                                 >> 2U)))
                                          ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                         [(0x3fffffU 
                                           & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))]
                                          : 0U) : 0U))
                              : ((0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                  ? ((IData)(4U) + vlSelf->testbench__DOT__PC)
                                  : ((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                      ? ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                          ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                              ? (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                 & vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                                              : (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                 | vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB))
                                          : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                     ? 0U
                                                     : 
                                                    ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                      ^ 
                                                      ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                        ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                                       & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                                          ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
                                                     ? 0U
                                                     : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)))))),32);
    bufp->chgIData(oldp+94,(((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub)
                              ? (~ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                              : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)),32);
    bufp->chgIData(oldp+95,(((1U & ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                      >> 2U) & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                                                == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)) 
                                    | ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                       >> 1U))) ? vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum
                              : ((IData)(4U) + vlSelf->testbench__DOT__PC))),32);
    bufp->chgIData(oldp+96,(vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr),32);
    bufp->chgCData(oldp+97,(vlSelf->testbench__DOT__unnamedblk2__DOT__ch),8);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
