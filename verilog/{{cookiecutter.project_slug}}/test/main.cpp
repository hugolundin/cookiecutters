#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include <iostream>

vluint64_t main_time = 0;

int main()
{
    Vtop top;
    VerilatedVcdC tf;

    Verilated::debug(0);
    Verilated::traceEverOn(true);
    top.trace(&tf, 99);
    tf.open("dump.vcd");

    top.i1 = 1;
    top.i2 = 2;
    top.clk = 0;

    while (!Verilated::gotFinish()) {
        main_time += 1;
        top.clk = !top.clk;
        top.eval();
        tf.dump(main_time);

        VL_PRINTF("[%" VL_PRI64 "d] clk=%x result=%x\n", main_time, top.clk, top.result);
    }

    top.final();
    tf.close();
}

