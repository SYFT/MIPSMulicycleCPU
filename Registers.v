`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:51:24 12/04/2016 
// Design Name: 
// Module Name:    Registers 
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
module Registers(
    input CLK,
    input RST,
    input [4:0] rs,
    input [4:0] rt,
    input RegWre,
    input [4:0] rd,
    input [31:0] writeData,
    output [31:0] outA,
    output [31:0] outB
    );

    reg [31:0] regs [0:31];

    integer i;
    initial begin
        for(i = 0; i < 32; i = i + 1) regs[i] <= 0;
    end
    
    assign outA = regs[rs];
    assign outB = regs[rt];

    always @(negedge CLK or posedge RST) begin
        if(RST) begin
            for(i = 0; i < 32; i = i + 1) regs[i] <= 0;
        end else if(RegWre && rd) regs[rd] <= writeData;
    end

endmodule

