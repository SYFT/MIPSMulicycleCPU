`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:20 12/06/2016 
// Design Name: 
// Module Name:    DataMemmory 
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
module DataMemory(
    input CLK,
    input RD,
    input WR,
    input [31:0] address,
    input [31:0] writeData,
    output [31:0] dataout
    );

    reg [7:0] mems[0:63];

    reg [31:0] _dataout;
    assign dataout = _dataout;
	
	always@(RD)
		if(RD) begin
			_dataout[31:24] <= mems[address];
			_dataout[23:16] <= mems[address + 1];
			_dataout[15:8] <= mems[address + 2];
			_dataout[7:0] <= mems[address + 3];
		end else begin
			_dataout[31:0] <= {{31{1'bz}}};
		end

    always@(posedge CLK)
        if(0 <= address && address <= 127) begin
            if(WR) begin
				mems[address] <= writeData[31:24];
				mems[address + 1] <= writeData[23:16];
				mems[address + 2] <= writeData[15:8];
				mems[address + 3] <= writeData[7:0];
			end
        end

endmodule

