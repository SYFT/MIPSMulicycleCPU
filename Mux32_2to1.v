`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:00 12/05/2016 
// Design Name: 
// Module Name:    Mux32_2to1 
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
module Mux32_2to1(
    input select,
    input [31:0] inA,
    input [31:0] inB,
    output [31:0] out
    );

	assign out = select ? inB : inA;

endmodule
