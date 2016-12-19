`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:40:11 12/06/2016 
// Design Name: 
// Module Name:    ADR 
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
module DataReg(
    input CLK,
    input [31:0] in,
    output [31:0] out
    );

    reg [31:0] _out;
    assign out = _out;

    always @(posedge CLK) _out <= in;


endmodule
