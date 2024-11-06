// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "Vf1_fsm__pch.h"
#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___eval_static(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_final(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__stl(Vf1_fsm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vf1_fsm___024root___eval_phase__stl(Vf1_fsm___024root* vlSelf);

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
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
            Vf1_fsm___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("f1_fsm.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vf1_fsm___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__stl(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vf1_fsm___024root___stl_sequent__TOP__0(Vf1_fsm___024root* vlSelf);

VL_ATTR_COLD void Vf1_fsm___024root___eval_stl(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vf1_fsm___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vf1_fsm___024root___stl_sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vf1_fsm___024root___eval_triggers__stl(Vf1_fsm___024root* vlSelf);

VL_ATTR_COLD bool Vf1_fsm___024root___eval_phase__stl(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vf1_fsm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vf1_fsm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__act(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vf1_fsm___024root___dump_triggers__nba(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->f1_fsm__DOT__current = 0;
    vlSelf->f1_fsm__DOT__next = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
