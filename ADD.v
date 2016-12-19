`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:46:29 12/06/2016 
// Design Name: 
// Module Name:    ADD 
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
module ADD(
    input [31:0] inA,
    input [31:0] inB,
    output [31:0] out
    );

    parameter ADD_op = 3'b000;
	wire Zero;
    ALU alu(ADD_op, inA, inB, out, Zero);

endmodule

