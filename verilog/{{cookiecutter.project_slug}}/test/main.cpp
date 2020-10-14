#include <verilated.h>
#include <Vtop.h>
#include <iostream>

vluint64_t main_time = 0;

int main()
{
    Vtop top;
    Verilated::debug(0);

    top.i1 = 1;
    top.i2 = 2;
    top.clk = 0;

    while (!Verilated::gotFinish()) {
        main_time += 1;
        top.clk = !top.clk;
        top.eval();

        VL_PRINTF("[%" VL_PRI64 "d] clk=%x result=%x\n", main_time, top.clk, top.result);
    }

    top.final();
}
