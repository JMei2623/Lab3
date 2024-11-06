// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


void Vf1_fsm___024root__trace_chg_0_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_fsm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_chg_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_fsm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_fsm___024root__trace_chg_0_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.en));
    bufp->chgCData(oldp+3,(vlSelfRef.dout),8);
    bufp->chgIData(oldp+4,(vlSelfRef.f1_fsm__DOT__current),32);
    bufp->chgIData(oldp+5,((((((((((0U == vlSelfRef.f1_fsm__DOT__current) 
                                   | (1U == vlSelfRef.f1_fsm__DOT__current)) 
                                  | (2U == vlSelfRef.f1_fsm__DOT__current)) 
                                 | (3U == vlSelfRef.f1_fsm__DOT__current)) 
                                | (4U == vlSelfRef.f1_fsm__DOT__current)) 
                               | (5U == vlSelfRef.f1_fsm__DOT__current)) 
                              | (6U == vlSelfRef.f1_fsm__DOT__current)) 
                             | (7U == vlSelfRef.f1_fsm__DOT__current))
                             ? ((0U == vlSelfRef.f1_fsm__DOT__current)
                                 ? 1U : ((1U == vlSelfRef.f1_fsm__DOT__current)
                                          ? 2U : ((2U 
                                                   == vlSelfRef.f1_fsm__DOT__current)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelfRef.f1_fsm__DOT__current)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelfRef.f1_fsm__DOT__current)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelfRef.f1_fsm__DOT__current)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelfRef.f1_fsm__DOT__current)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
}

void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_cleanup\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
