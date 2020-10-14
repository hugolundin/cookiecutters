module top (
    input clk,
    input i1,
    input i2,
    output wire result
);
    assign result = i1 & i2;
endmodule
