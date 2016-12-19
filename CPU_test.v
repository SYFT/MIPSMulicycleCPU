`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:22 12/06/2016 
// Design Name: 
// Module Name:    CPU_test 
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
module CPU_test(
    output [31:0] pc, // pc
    output [31:0] instruction, // im
    output [31:0] PC4, // adderPC4
    output [31:0] instruc, // ir
    output [31:0] regOutA, // registers
    output [31:0] regOutB, // registers
    output [31:0] extImme, // extend
    output [31:0] memOut, // dm
    output [31:0] aluResult, // alu
    output Zero, // alu
    output [31:0] branchAddress, // adderBranch
    output [31:0] adrOut, // ADR
    output [31:0] bdrOut, // BDR
    output [31:0] aluOut, // ALUOut
    output [31:0] alum2drOut, // ALUM2DR
    output [31:0] ALUMData, // mux_ALUM
    output [31:0] aluDataA, // mux_ALUSrcA
    output [31:0] aluDataB, // mux_ALUSrcB
    output [31:0] nextPC, // mux_PCSrc
    output [4:0] regWrite, // mux_RegDst
    output [31:0] regWriteData, // mux_WrRegDSrc
    output PCWre, // cu
    output ExtSel, // cu
    output IRWre, // cu
    output WrRegDSrc, // cu
    output RegWre, // cu
    output ALUSrcA, // cu
    output ALUSrcB, // cu
    output RD, // cu
    output WR, // cu
    output ALUM2Reg, // cu
    output [1:0]  RegDst, // cu
    output [1:0] PCSrc, // cu
    output [2:0] ALUCtrl, // cu
	output InsMemRW, // im
	output InstructionIn // im
    );
	
	reg CLK;
	reg RST;
	wire [31:0] instructionIn;
	assign InstructionIn = {{31{1'b0}}};
	
	initial begin
		CLK = 0;
		RST = 1;
		# 250
		RST = 0;
	end
	
	always # 500
    	CLK = ~CLK;

    CPU cpu(
        .CLK(CLK),
        .RST(RST),
        .pc(pc),
        .instruction(instruction),
        .PC4(PC4),
        .instruc(instruc),
        .regOutA(regOutA),
        .regOutB(regOutB),
        .extImme(extImme),
        .memOut(memOut),
        .aluResult(aluResult),
        .Zero(Zero),
        .branchAddress(branchAddress),
        .adrOut(adrOut),
        .bdrOut(bdrOut),
        .aluOut(aluOut),
        .alum2drOut(alum2drOut),
        .ALUMData(ALUMData),
        .aluDataA(aluDataA),
        .aluDataB(aluDataB),
        .nextPC(nextPC),
        .regWrite(regWrite),
        .regWriteData(regWriteData),
        .PCWre(PCWre),
        .ExtSel(ExtSel),
        .IRWre(IRWre),
        .WrRegDSrc(WrRegDSrc),
        .RegWre(RegWre),
        .ALUSrcA(ALUSrcA),
        .ALUSrcB(ALUSrcB),
        .RD(RD),
        .WR(WR),
        .ALUM2Reg(ALUM2Reg),
        .RegDst(RegDst),
        .PCSrc(PCSrc),
        .ALUCtrl(ALUCtrl),
		.InsMemRW(InsMemRW),
		.InstructionIn(InstructionIn)
    );

endmodule

