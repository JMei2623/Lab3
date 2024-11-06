#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{
    int i, clk;

    Verilated::commandArgs(argc, argv);

    Vf1_fsm *top = new Vf1_fsm; // verilog instance (manipulate)

    // turning on signal tracing (not manipulate)
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Vf1_fsm.vcd"); // data stored

    // input init
    top->clk = 1;
    top->rst = 0;
    top->en = 1;

    for (i = 0; i < 100; i++)
    {
        for (clk = 0; clk < 2; clk++) // (manipulate)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        top->en = 1;
        top->rst = (i < 1);
        if (Verilated::gotFinish()) // (manipulate)
            exit(0);
    }
    tfp->close();
    exit(0);
}