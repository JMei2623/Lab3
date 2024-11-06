// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlsfr7__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlsfr7::Vlsfr7(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlsfr7__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vlsfr7::Vlsfr7(const char* _vcname__)
    : Vlsfr7(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlsfr7::~Vlsfr7() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlsfr7___024root___eval_debug_assertions(Vlsfr7___024root* vlSelf);
#endif  // VL_DEBUG
void Vlsfr7___024root___eval_static(Vlsfr7___024root* vlSelf);
void Vlsfr7___024root___eval_initial(Vlsfr7___024root* vlSelf);
void Vlsfr7___024root___eval_settle(Vlsfr7___024root* vlSelf);
void Vlsfr7___024root___eval(Vlsfr7___024root* vlSelf);

void Vlsfr7::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlsfr7::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlsfr7___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlsfr7___024root___eval_static(&(vlSymsp->TOP));
        Vlsfr7___024root___eval_initial(&(vlSymsp->TOP));
        Vlsfr7___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlsfr7___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlsfr7::eventsPending() { return false; }

uint64_t Vlsfr7::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlsfr7::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlsfr7___024root___eval_final(Vlsfr7___024root* vlSelf);

VL_ATTR_COLD void Vlsfr7::final() {
    Vlsfr7___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlsfr7::hierName() const { return vlSymsp->name(); }
const char* Vlsfr7::modelName() const { return "Vlsfr7"; }
unsigned Vlsfr7::threads() const { return 1; }
void Vlsfr7::prepareClone() const { contextp()->prepareClone(); }
void Vlsfr7::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlsfr7::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlsfr7___024root__trace_decl_types(VerilatedVcd* tracep);

void Vlsfr7___024root__trace_init_top(Vlsfr7___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlsfr7___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsfr7___024root*>(voidSelf);
    Vlsfr7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vlsfr7___024root__trace_decl_types(tracep);
    Vlsfr7___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vlsfr7___024root__trace_register(Vlsfr7___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlsfr7::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlsfr7::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlsfr7___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
