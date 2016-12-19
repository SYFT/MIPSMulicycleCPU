`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:23 12/04/2016 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input CLK,
    input RST,
    input PCWre,
    input [31:0] nextPC,
    output [31:0] pc
    );
	
    reg [31:0] _PC;

    assign pc = _PC;
	
    always@(posedge CLK or posedge RST) begin
        if(RST) _PC <= 0;
        else if(PCWre) _PC <= nextPC;
    end

endmodule

