`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:24:19 12/05/2016 
// Design Name: 
// Module Name:    Mux32_4to1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Mux32_4to1(
    input [1:0] select,
    input [31:0] inA,
    input [31:0] inB,
    input [31:0] inC,
    input [31:0] inD,
    output [31:0] out
    );

    reg [31:0] _out;
    assign out = _out;

    always @(*)
        case(select)
            2'b00: _out <= inA;
            2'b01: _out <= inB;
            2'b10: _out <= inC;
            2'b11: _out <= inD;
            default: _out <= {32{1'bx}};
        endcase

endmodule

