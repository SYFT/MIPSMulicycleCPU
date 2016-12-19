`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:48 12/04/2016 
// Design Name: 
// Module Name:    Extend 
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
module Extend(
    input [15:0] in,
    input ExtCtrl,
    output [31:0] out
    );
	
	assign out = {ExtCtrl ? {16{in[15]}} : {16{1'b0}}, {in[15:0]}};

endmodule

