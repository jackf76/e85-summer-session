// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelf->testbench__DOT__clk = 0U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"WAVES=%s"}, 
                                         vlSelf->testbench__DOT__unnamedblk3__DOT__wavefile))) {
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NN(vlSelf->testbench__DOT__unnamedblk3__DOT__wavefile));
        vlSymsp->_traceDumpOpen();
        VL_WRITEF("[TB] Dumping waves to %@\n",-1,&(vlSelf->testbench__DOT__unnamedblk3__DOT__wavefile));
    }
    __Vtemp_1[0U] = 0x453d2573U;
    __Vtemp_1[1U] = 0x4d46494cU;
    __Vtemp_1[2U] = 0x4d45U;
    if (VL_LIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                       vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__memfile))) {
        VL_WRITEF("INFO: Instruction Memory Using MEMFILE = '%@'\n",
                  -1,&(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__memfile));
    } else {
        VL_WRITEF("ERROR: Instruction Memory +MEMFILE not supplied\n");
        VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/ram1p1rwb.sv", 86, "");
    }
    VL_READMEM_N(true, 32, 1048576, 0, VL_CVT_PACK_STR_NN(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__memfile)
                 ,  &(vlSelf->testbench__DOT__InstructionMemory__DOT__InitMem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x453d2573U;
    __Vtemp_2[1U] = 0x4d46494cU;
    __Vtemp_2[2U] = 0x4d45U;
    if (VL_LIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                       vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__memfile))) {
        VL_WRITEF("INFO: Data Memory Using MEMFILE = '%@'\n",
                  -1,&(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__memfile));
    } else {
        VL_WRITEF("ERROR: Data Memory +MEMFILE not supplied\n");
        VL_FINISH_MT("/home/swagshamman/Documents/Github/E85-Summer-Session/tb/ram1p1rwb.sv", 86, "");
    }
    VL_READMEM_N(true, 32, 3145728, 0, VL_CVT_PACK_STR_NN(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__memfile)
                 ,  &(vlSelf->testbench__DOT__DataMemory__DOT__InitMem)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr = 0U;
    __Vtemp_3[0U] = 0x523d2568U;
    __Vtemp_3[1U] = 0x5f414444U;
    __Vtemp_3[2U] = 0x4e545259U;
    __Vtemp_3[3U] = 0x45U;
    (void)VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(4, __Vtemp_3), 
                               vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr);
    VL_WRITEF("[TB] ENTRY_ADDR = 0x%x\n",32,vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
