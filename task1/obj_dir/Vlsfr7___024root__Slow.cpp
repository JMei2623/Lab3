// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr7.h for the primary calling header

#include "Vlsfr7__pch.h"
#include "Vlsfr7__Syms.h"
#include "Vlsfr7___024root.h"

void Vlsfr7___024root___ctor_var_reset(Vlsfr7___024root* vlSelf);

Vlsfr7___024root::Vlsfr7___024root(Vlsfr7__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlsfr7___024root___ctor_var_reset(this);
}

void Vlsfr7___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlsfr7___024root::~Vlsfr7___024root() {
}
