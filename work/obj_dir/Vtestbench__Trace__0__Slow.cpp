// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"DataAdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MemReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"TestbenchRequestReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"IMEM_WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"WriteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"MemEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WriteByteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"TestbenchRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"TO_HOST_ADR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"tohost_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"tohost_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"jump_to_self_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+2,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("DataMemory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+100,0,"MEMORY_NAME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+103,0,"ADDRESS_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"MEMORY_SIZE_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"MEMORY_FILE_BASE_ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"MEMORY_ADR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"MEMORY_FILE_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+107,0,"MEMFILE_PLUS_ARG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"En",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"WriteEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WriteByteEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"MemoryAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"EXTRA_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"memory_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"LocalReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("InstructionMemory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+111,0,"MEMORY_NAME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBus(c+103,0,"ADDRESS_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"MEMORY_SIZE_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"MEMORY_FILE_BASE_ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"MEMORY_ADR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"MEMORY_FILE_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+107,0,"MEMFILE_PLUS_ARG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"En",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"WriteEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"WriteByteEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+83,0,"MemoryAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"EXTRA_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+41,0,"memory_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"LocalReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"IEUAdr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"MemEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"WriteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WriteByteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"PCPlus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"PCSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"Load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ieu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"PCPlus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WriteByteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"IEUAdr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"MemEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"Eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"Op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+73,0,"Eq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"Funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+54,0,"Funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WriteByteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+91,0,"PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+44,0,"MemEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"Funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+47,0,"ALUResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"Eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"PCPlus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"IEUAdr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"ImmExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"SrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"SrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"IEUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"SrcA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"SrcB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"Funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+92,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"IEUAdr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"CondInvb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"Sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"Overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"LT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"ALUFunct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("cmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"R1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"R2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"Eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+50,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"ImmExt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ieuresultmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("resultmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"WE3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"A3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"WD3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"RD1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"RD2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("srcamux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcbmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"PCSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"IEUAdr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"PCPlus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"PCNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"entry_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pcadd4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"inputA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"inputB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pcmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"ch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+99,(vlSelf->testbench__DOT__IMEM_WriteData),32);
    __Vtemp_1[0U] = 0x6d6f7279U;
    __Vtemp_1[1U] = 0x61204d65U;
    __Vtemp_1[2U] = 0x446174U;
    bufp->fullWData(oldp+100,(__Vtemp_1),88);
    bufp->fullIData(oldp+103,(0x20U),32);
    bufp->fullIData(oldp+104,(0x300000U),32);
    bufp->fullIData(oldp+105,(0x80000000U),32);
    bufp->fullCData(oldp+106,(0U),8);
    bufp->fullQData(oldp+107,(0x4d454d46494c45ULL),56);
    bufp->fullIData(oldp+109,(0U),32);
    bufp->fullIData(oldp+110,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk4__DOT__i),32);
    __Vtemp_2[0U] = 0x6d6f7279U;
    __Vtemp_2[1U] = 0x6e204d65U;
    __Vtemp_2[2U] = 0x6374696fU;
    __Vtemp_2[3U] = 0x73747275U;
    __Vtemp_2[4U] = 0x496eU;
    bufp->fullWData(oldp+111,(__Vtemp_2),144);
    bufp->fullIData(oldp+116,(0x100000U),32);
    bufp->fullBit(oldp+117,(1U));
    bufp->fullBit(oldp+118,(0U));
    bufp->fullCData(oldp+119,(0U),4);
    bufp->fullIData(oldp+120,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__LocalReadData),32);
    bufp->fullIData(oldp+121,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+122,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+123,(vlSelf->testbench__DOT__dut__DOT__Load));
    bufp->fullBit(oldp+124,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__Jump));
    bufp->fullIData(oldp+125,(4U),32);
    bufp->fullIData(oldp+126,(vlSelf->testbench__DOT__unnamedblk1__DOT__i),32);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->testbench__DOT__jump_to_self_count),4);
    bufp->fullQData(oldp+2,(vlSelf->testbench__DOT__cycle_count),64);
    bufp->fullIData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->testbench__DOT__TestbenchRequestReadData),32);
    bufp->fullIData(oldp+36,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+37,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk1__DOT__memory_entry),32);
    bufp->fullIData(oldp+38,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__LocalReadData),32);
    bufp->fullIData(oldp+39,(vlSelf->testbench__DOT__DataMemory__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+40,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+41,(vlSelf->testbench__DOT__InstructionMemory__DOT__unnamedblk1__DOT__memory_entry),32);
    bufp->fullIData(oldp+42,(vlSelf->testbench__DOT__Instr),32);
    bufp->fullBit(oldp+43,((0U != (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                         >> 4U))))))));
    bufp->fullBit(oldp+44,((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))));
    bufp->fullCData(oldp+45,((0xfU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                                    >> 4U)))))),4);
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 5U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+49,((3U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                    >> 7U))),2);
    bufp->fullCData(oldp+50,((3U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                    >> 9U))),2);
    bufp->fullCData(oldp+51,((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub) 
                               << 1U) | (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                               >> 6U)))),2);
    bufp->fullCData(oldp+52,((0x7fU & vlSelf->testbench__DOT__Instr)),7);
    bufp->fullCData(oldp+53,((7U & (vlSelf->testbench__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+54,((1U & (vlSelf->testbench__DOT__Instr 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 2U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 1U))));
    bufp->fullBit(oldp+57,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 6U))));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 4U))));
    bufp->fullSData(oldp+60,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls),12);
    bufp->fullIData(oldp+61,(((0x400U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                               ? ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                   ? (((- (IData)((vlSelf->testbench__DOT__Instr 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      ((0xff000U & vlSelf->testbench__DOT__Instr) 
                                       | ((0x800U & 
                                           (vlSelf->testbench__DOT__Instr 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->testbench__DOT__Instr 
                                                >> 0x14U)))))
                                   : (((- (IData)((vlSelf->testbench__DOT__Instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->testbench__DOT__Instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->testbench__DOT__Instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->testbench__DOT__Instr 
                                                            >> 7U))))))
                               : ((0x200U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
                                   ? (((- (IData)((vlSelf->testbench__DOT__Instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->testbench__DOT__Instr 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->testbench__DOT__Instr 
                                                         >> 7U))))
                                   : (((- (IData)((vlSelf->testbench__DOT__Instr 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->testbench__DOT__Instr 
                                                   >> 0x14U))))),32);
    bufp->fullCData(oldp+62,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct),3);
    bufp->fullIData(oldp+63,((vlSelf->testbench__DOT__Instr 
                              >> 7U)),25);
    bufp->fullCData(oldp+64,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->testbench__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 8U))));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                  >> 7U))));
    bufp->fullIData(oldp+69,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum),32);
    bufp->fullIData(oldp+70,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2),32);
    bufp->fullBit(oldp+71,(vlSelf->testbench__DOT__TestbenchRequest));
    bufp->fullBit(oldp+72,(vlSelf->testbench__DOT____Vcellinp__DataMemory__En));
    bufp->fullBit(oldp+73,((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                            == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)));
    bufp->fullIData(oldp+74,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1),32);
    bufp->fullIData(oldp+75,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA),32);
    bufp->fullIData(oldp+76,(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB),32);
    bufp->fullIData(oldp+77,(((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                               ^ ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                   ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                  & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                     ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                              >> 0x1fU)),32);
    bufp->fullBit(oldp+78,((((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                              ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                             & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+79,((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                            >> 0x1fU)));
    bufp->fullBit(oldp+80,(((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                             ^ ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                 ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB) 
                                & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcA 
                                   ^ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+81,(vlSelf->testbench__DOT__clk));
    bufp->fullBit(oldp+82,(vlSelf->testbench__DOT__reset));
    bufp->fullIData(oldp+83,(vlSelf->testbench__DOT__PC),32);
    bufp->fullIData(oldp+84,(((IData)(vlSelf->testbench__DOT__TestbenchRequest)
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
    bufp->fullIData(oldp+85,(((IData)(vlSelf->testbench__DOT____Vcellinp__DataMemory__En)
                               ? ((0x2fffffU >= (0x3fffffU 
                                                 & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U)))
                                   ? vlSelf->testbench__DOT__DataMemory__DOT__Memory
                                  [(0x3fffffU & ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
                                                  - (IData)(0x80000000U)) 
                                                 >> 2U))]
                                   : 0U) : 0U)),32);
    bufp->fullIData(oldp+86,(vlSelf->testbench__DOT__TO_HOST_ADR),32);
    bufp->fullIData(oldp+87,(vlSelf->testbench__DOT__tohost_lo),32);
    bufp->fullIData(oldp+88,(vlSelf->testbench__DOT__tohost_hi),32);
    bufp->fullIData(oldp+89,(vlSelf->testbench__DOT__payload),32);
    bufp->fullIData(oldp+90,(((IData)(4U) + vlSelf->testbench__DOT__PC)),32);
    bufp->fullBit(oldp+91,((1U & ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                    >> 2U) & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                                              == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)) 
                                  | ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                     >> 1U)))));
    bufp->fullIData(oldp+92,(((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__ALUFunct))
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
                                                 : 
                                                ((vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum 
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
    bufp->fullIData(oldp+93,(((0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
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
                                                  : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum))))),32);
    bufp->fullIData(oldp+94,(((8U & (IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls))
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
                                            ? 0U : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum)))))),32);
    bufp->fullIData(oldp+95,(((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sub)
                               ? (~ vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)
                               : vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__SrcB)),32);
    bufp->fullIData(oldp+96,(((1U & ((((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                       >> 2U) & (vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R1 
                                                 == vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__R2)) 
                                     | ((IData)(vlSelf->testbench__DOT__dut__DOT__ieu__DOT__c__DOT__controls) 
                                        >> 1U))) ? vlSelf->testbench__DOT__dut__DOT__ieu__DOT__dp__DOT__alu__DOT__Sum
                               : ((IData)(4U) + vlSelf->testbench__DOT__PC))),32);
    bufp->fullIData(oldp+97,(vlSelf->testbench__DOT__dut__DOT__ifu__DOT__entry_addr),32);
    bufp->fullCData(oldp+98,(vlSelf->testbench__DOT__unnamedblk2__DOT__ch),8);
}
