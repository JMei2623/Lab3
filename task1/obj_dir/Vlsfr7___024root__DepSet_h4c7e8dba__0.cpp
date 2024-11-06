// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr7.h for the primary calling header

#include "Vlsfr7__pch.h"
#include "Vlsfr7___024root.h"

void Vlsfr7___024root___eval_act(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vlsfr7___024root___nba_sequent__TOP__0(Vlsfr7___024root* vlSelf);

void Vlsfr7___024root___eval_nba(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlsfr7___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlsfr7___024root___nba_sequent__TOP__0(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsfr7__DOT__reg7 = ((IData)(vlSelfRef.rst)
                                   ? (IData)(vlSelfRef.en)
                                   : ((0x7eU & ((IData)(vlSelfRef.lsfr7__DOT__reg7) 
                                                << 1U)) 
                                      | (1U & VL_REDXOR_8(
                                                          (0x44U 
                                                           & (IData)(vlSelfRef.lsfr7__DOT__reg7))))));
    vlSelfRef.dout = vlSelfRef.lsfr7__DOT__reg7;
}

void Vlsfr7___024root___eval_triggers__act(Vlsfr7___024root* vlSelf);

bool Vlsfr7___024root___eval_phase__act(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlsfr7___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlsfr7___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlsfr7___024root___eval_phase__nba(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlsfr7___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__nba(Vlsfr7___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr7___024root___dump_triggers__act(Vlsfr7___024root* vlSelf);
#endif  // VL_DEBUG

void Vlsfr7___024root___eval(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlsfr7___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lsfr7.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vlsfr7___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lsfr7.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlsfr7___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlsfr7___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlsfr7___024root___eval_debug_assertions(Vlsfr7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr7___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
