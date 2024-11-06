module f1_fsm (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] dout
);

typedef enum{S0, S1, S2, S3, S4, S5, S6, S7, S8} state;
state current, next;

always_ff@(posedge clk)
    if (rst) current <= S0;
    else if (en) current <= next;

always_comb
    case (current)
        S0: next = S1;
        S1: next = S2;
        S2: next = S3;
        S3: next = S4;
        S4: next = S5;
        S5: next = S6;
        S6: next = S7;
        S7: next = S8;
        S7: next = S0;
        default next = S0;
    endcase

always_comb
    case (current)
        S0: dout = 8'b00000000;
        S1: dout = 8'b00000001;
        S2: dout = 8'b00000011;
        S3: dout = 8'b00000111;
        S4: dout = 8'b00001111;
        S5: dout = 8'b00011111;
        S6: dout = 8'b00111111;
        S7: dout = 8'b01111111;
        S8: dout = 8'b11111111;
    endcase



// state unit

endmodule

