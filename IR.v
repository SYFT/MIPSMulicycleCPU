`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:37:59 12/06/2016 
// Design Name: 
// Module Name:    IR 
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
module IR(
    input CLK,
    input IRWre,
    input [31:0] in,
    output [31:0] out
    );
    reg [31:0] _out;
	
	initial _out <= 0;
	
    assign out = _out;

    always @(posedge CLK)
        if(IRWre) _out <= in;

endmodule

