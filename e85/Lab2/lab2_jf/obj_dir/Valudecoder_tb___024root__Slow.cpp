// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valudecoder_tb.h for the primary calling header

#include "Valudecoder_tb__pch.h"
#include "Valudecoder_tb__Syms.h"
#include "Valudecoder_tb___024root.h"

void Valudecoder_tb___024root___ctor_var_reset(Valudecoder_tb___024root* vlSelf);

Valudecoder_tb___024root::Valudecoder_tb___024root(Valudecoder_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valudecoder_tb___024root___ctor_var_reset(this);
}

void Valudecoder_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valudecoder_tb___024root::~Valudecoder_tb___024root() {
}
