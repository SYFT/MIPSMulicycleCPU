`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:21:46 12/05/2016 
// Design Name: 
// Module Name:    Mux5 
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
module Mux5_4to1(
    input [1:0] select,
    input [4:0] inA,
    input [4:0] inB,
	input [4:0] inC,
	input [4:0] inD,
    output [4:0] out
    );

	assign out =
		select == 2'b00 ? inA : (
		select == 2'b01 ? inB : (
		select == 2'b10 ? inC : (
		select == 2'b11 ? inD : 2'bxx
	)
	)
	);

endmodule
