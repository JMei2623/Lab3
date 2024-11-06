// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr7.h for the primary calling header

#include "Vlsfr7__pch.h"
#include "Vlsfr7___024root.h"

VL_ATTR_COLD void Vlsfr7___024root___eval_static(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlsfr7___024root___eval_initial(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vlsfr7___024root___eval_final(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__stl(Vlsfr7___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlsfr7___024root___eval_phase__stl(Vlsfr7___024root* vlSelf);

VL_ATTR_COLD void Vlsfr7___024root___eval_settle(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vlsfr7___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lsfr7.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlsfr7___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__stl(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsfr7___024root___stl_sequent__TOP__0(Vlsfr7___024root* vlSelf);

VL_ATTR_COLD void Vlsfr7___024root___eval_stl(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlsfr7___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlsfr7___024root___stl_sequent__TOP__0(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dout = vlSelfRef.lsfr7__DOT__reg7;
}

VL_ATTR_COLD void Vlsfr7___024root___eval_triggers__stl(Vlsfr7___024root* vlSelf);

VL_ATTR_COLD bool Vlsfr7___024root___eval_phase__stl(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlsfr7___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlsfr7___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__act(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__nba(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsfr7___024root___ctor_var_reset(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(7);
    vlSelf->lsfr7__DOT__reg7 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
