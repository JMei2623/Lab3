// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vlsfr7__pch.h"
#include "Vlsfr7.h"
#include "Vlsfr7___024root.h"

// FUNCTIONS
Vlsfr7__Syms::~Vlsfr7__Syms()
{
}

Vlsfr7__Syms::Vlsfr7__Syms(VerilatedContext* contextp, const char* namep, Vlsfr7* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
