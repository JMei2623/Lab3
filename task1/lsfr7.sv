module lsfr7 (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [6:0] dout
);

logic [6:0] reg7;

always_ff@(posedge clk)
    if (rst) reg7 <= {6'b0, en};
    else reg7 <= {reg7[5:0], reg7[6]^reg7[2]};

assign dout = reg7;
endmodule

