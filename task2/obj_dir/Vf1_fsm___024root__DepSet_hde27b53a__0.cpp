// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "Vf1_fsm__pch.h"
#include "Vf1_fsm___024root.h"

void Vf1_fsm___024root___eval_act(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vf1_fsm___024root___nba_sequent__TOP__0(Vf1_fsm___024root* vlSelf);

void Vf1_fsm___024root___eval_nba(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vf1_fsm___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vf1_fsm___024root___nba_sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.f1_fsm__DOT__current = 0U;
    } else if (vlSelfRef.en) {
        vlSelfRef.f1_fsm__DOT__current = vlSelfRef.f1_fsm__DOT__next;
    }
    if (((((((((0U == vlSelfRef.f1_fsm__DOT__current) 
               | (1U == vlSelfRef.f1_fsm__DOT__current)) 
              | (2U == vlSelfRef.f1_fsm__DOT__current)) 
             | (3U == vlSelfRef.f1_fsm__DOT__current)) 
            | (4U == vlSelfRef.f1_fsm__DOT__current)) 
           | (5U == vlSelfRef.f1_fsm__DOT__current)) 
          | (6U == vlSelfRef.f1_fsm__DOT__current)) 
         | (7U == vlSelfRef.f1_fsm__DOT__current))) {
        if ((0U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 1U;
            vlSelfRef.dout = 0U;
        } else if ((1U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 2U;
            vlSelfRef.dout = 1U;
        } else if ((2U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 3U;
            vlSelfRef.dout = 3U;
        } else if ((3U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 4U;
            vlSelfRef.dout = 7U;
        } else if ((4U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 5U;
            vlSelfRef.dout = 0xfU;
        } else if ((5U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 6U;
            vlSelfRef.dout = 0x1fU;
        } else if ((6U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.f1_fsm__DOT__next = 7U;
            vlSelfRef.dout = 0x3fU;
        } else {
            vlSelfRef.f1_fsm__DOT__next = 8U;
            vlSelfRef.dout = 0x7fU;
        }
    } else {
        vlSelfRef.f1_fsm__DOT__next = 0U;
        if ((8U == vlSelfRef.f1_fsm__DOT__current)) {
            vlSelfRef.dout = 0xffU;
        }
    }
}

void Vf1_fsm___024root___eval_triggers__act(Vf1_fsm___024root* vlSelf);

bool Vf1_fsm___024root___eval_phase__act(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vf1_fsm___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vf1_fsm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vf1_fsm___024root___eval_phase__nba(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vf1_fsm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__nba(Vf1_fsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__act(Vf1_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
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
            Vf1_fsm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("f1_fsm.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vf1_fsm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("f1_fsm.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vf1_fsm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vf1_fsm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
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
