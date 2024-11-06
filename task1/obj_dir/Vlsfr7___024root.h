// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsfr7.h for the primary calling header

#ifndef VERILATED_VLSFR7___024ROOT_H_
#define VERILATED_VLSFR7___024ROOT_H_  // guard

#include "verilated.h"


class Vlsfr7__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlsfr7___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(dout,6,0);
    CData/*6:0*/ lsfr7__DOT__reg7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlsfr7__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsfr7___024root(Vlsfr7__Syms* symsp, const char* v__name);
    ~Vlsfr7___024root();
    VL_UNCOPYABLE(Vlsfr7___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
