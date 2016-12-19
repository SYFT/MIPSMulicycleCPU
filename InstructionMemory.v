`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:35:29 12/05/2016 
// Design Name: 
// Module Name:    MemData 
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
module InstructionMemory(
    input [31:0] address,
	input InsMemRW,
	input [31:0] datain,
    output [31:0] instruction
    );

    reg [7:0] mems [0:72];
    initial begin
		$readmemb("instructions.txt", mems);
    end

     assign instruction[31:24] = mems[address];
     assign instruction[23:16] = mems[address + 1];
     assign instruction[15:8] = mems[address + 2];
     assign instruction[7:0] = mems[address + 3];
	 
	 /*
	 InsMemRW && store datain instructions
	 */
    
endmodule

