`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:33 12/05/2016 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input CLK,
    input RST,
    input Zero,
    input [5:0] op,
    output PCWre,
    output ExtSel,
    output IRWre,
    output WrRegDSrc,
    output [1:0] RegDst,
    output RegWre,
    output [2:0] ALUCtrl,
    output [1:0] PCSrc,
    output ALUSrcA,
    output ALUSrcB,
    output RD,
    output WR,
    output ALUM2Reg,
	output InsMemRW
    );

    // ALUOP
    parameter ADD_op = 3'b000, SUB_op = 3'b001, SLT_op = 3'b010, SRL_op = 3'b011;
    parameter SLL_op = 3'b100, OR_op = 3'b101, AND_op = 3'b110, NOR_op = 3'b111;;
    // op
    parameter ADDU = 6'b000000, SUBU = 6'b000001, ADDIU = 6'b000010, OR = 6'b010000, AND = 6'b010001;
    parameter ORI = 6'b010010, SLL = 6'b011000, SLTU = 6'b100110, SLTIU = 6'b100111, SW = 6'b110000;
    parameter LW = 6'b110001, BEQ = 6'b110100, JUMP = 6'b111000, JR = 6'b111001, JAL = 6'b111010;
	parameter HALT = 6'b111111;

    reg [2:0] s;
    always @(negedge CLK or posedge RST)
        if(RST) s <= 3'b000;
        else begin
            s[0] <= op == HALT ? 1'b0 : (
                s == 3'b000 |
                s == 3'b001 & op == BEQ |
                s == 3'b110 |
                s == 3'b010 & (op == SW | op == LW)
			);
            s[1] <= op == HALT ? 1'b0 : (
                s == 3'b001 & (op == ADDU | op == SUBU | op == ADDIU | op == OR | op == AND | 
								op == ORI | op == SLL | op == SLTU | op == SLTIU) |
                s == 3'b001 & (op == SW | op == LW) |
                s == 3'b110 |
                s == 3'b010
			);
            s[2] <= op == HALT ? 1'b0 : (
                s == 3'b001 & (op == ADDU | op == SUBU | op == ADDIU | op == OR | op == AND | 
								op == ORI | op == SLL | op == SLTU | op == SLTIU) |
                s == 3'b001 & op == BEQ |
                s == 3'b110 |
                s == 3'b011 & op == LW
			);
        end

	assign PCWre = ~(op == HALT) & (
        s == 3'b000 |
        s == 3'b001 & (op == JUMP | op == JAL | op == JR | op == HALT) |
        s == 3'b101 & Zero
	);
    assign ExtSel =
        s == 3'b110 & (op == ADDIU | op == SLTIU) |
        s == 3'b010 |
		s == 3'b101;
    assign IRWre = ~(op == HALT) & s == 3'b000;
    assign WrRegDSrc = ~(s == 3'b000 & op == JAL);
	assign RegDst[0] =
        s == 3'b011 & op == LW |
        s == 3'b110 & (op == SLTIU | op == ORI | op == ADDIU);
    assign RegDst[1] =
        s == 3'b110 & (op == ADDU | op == SUBU | op == OR | op == AND | op == SLL | op == SLTU);
    assign RegWre = 
        s == 3'b000 & op == JAL |
        s == 3'b011 & op == LW |
        s == 3'b110;
    assign ALUCtrl[2:0] =
        op == AND ? AND_op : (
        op == OR | op == ORI ? OR_op : (
        op == ADDU | op == ADDIU | op == SW | op == LW ? ADD_op : (
        op == SUBU | op == BEQ ? SUB_op : (
        op == SLTU | op == SLTIU ? SLT_op : (
        op == SLL ? SLL_op : 3'bxxx
    )))));
    assign PCSrc[0] =   
        s == 3'b101 & Zero |
        s == 3'b001 & (op == JUMP | op == JAL);
    assign PCSrc[1] =
        s == 3'b001 & (op == JUMP | op == JAL | op == JR);
    assign ALUSrcA = s == 3'b110 & op == SLL;
    assign ALUSrcB =
        s == 3'b110 & (op == SLTIU | op == ADDIU | op == ORI) |
        s == 3'b010 & (op == SW | op == LW);
    assign RD = s == 3'b011 & op == LW;
    assign WR = s == 3'b011 & op == SW;
    assign ALUM2Reg = s == 3'b011 & op == LW;
	assign InsMemRW = ~RST;

endmodule

