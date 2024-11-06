module lsfr4 (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [3:0] dout
);

logic [3:0] reg4;

always_ff@(posedge clk)
    if (rst) reg4 <= {3'b0, en};
    else reg4 <= {reg4[2:0], reg4[3]^reg4[2]};

assign dout = reg4;
endmodule

