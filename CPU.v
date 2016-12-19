`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:37:23 12/06/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
    input CLK,
    input RST,
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
	input [31:0] InstructionIn // im
    );

    wire [4:0] rs, rt, rd, shamt;
    wire [5:0] op;
    wire [15:0] imme;
	wire [25:0] address;

    assign 
        op = instruc[31:26],
        rs = instruc[25:21], 
        rt = instruc[20:16],
        rd = instruc[15:11],
        imme[15:0] = instruc[15:0],
        shamt[4:0] = instruc[10:6],
		address[25:0] = instruc[25:0];

    ControlUnit cu(
        .CLK(CLK),
        .RST(RST),
        .Zero(Zero),
        .op(op),
        .PCWre(PCWre),
        .ExtSel(ExtSel),
        .IRWre(IRWre),
        .WrRegDSrc(WrRegDSrc),
        .RegDst(RegDst),
        .RegWre(RegWre),
        .ALUCtrl(ALUCtrl),
        .PCSrc(PCSrc),
        .ALUSrcA(ALUSrcA),
        .ALUSrcB(ALUSrcB),
        .RD(RD),
        .WR(WR),
        .ALUM2Reg(ALUM2Reg),
		.InsMemRW(InsMemRw)
    );
    PC pc_module(
        .CLK(CLK),
        .RST(RST),
        .PCWre(PCWre),
        .nextPC(nextPC),
        .pc(pc)
    );
    InstructionMemory im(
        .address(pc),
		.InsMemRW(insMemRW),
		.datain(InstructionIn),
        .instruction(instruction)
    );
    ADD adderPC4(
        .inA(4),
        .inB(pc),
        .out(PC4)
    );
    IR ir(
        .CLK(CLK),
        .IRWre(IRWre),
        .in(instruction),
        .out(instruc)
    );
    Registers registers(
        .CLK(CLK),
        .RST(RST),
        .rs(rs),
        .rt(rt),
        .RegWre(RegWre),
        .rd(regWrite),
        .writeData(regWriteData),
        .outA(regOutA),
        .outB(regOutB)
    );
    Extend extend(
        .in(imme),
        .ExtCtrl(ExtSel),
        .out(extImme)
    );
    DataMemory dm(
        .CLK(CLK),
        .RD(RD),
        .WR(WR),
        .address(aluOut),
        .writeData(bdrOut),
        .dataout(memOut)
    );
    ALU alu(
        .ALUCtrl(ALUCtrl),
        .inA(aluDataA),
        .inB(aluDataB),
        .out(aluResult),
        .Zero(Zero)
    );
	wire [31:0] _branchAddress;
	assign _branchAddress = {extImme[29:0], {2'b00}};
    ADD adderBranch(
        .inA(pc),
        .inB(_branchAddress),
        .out(branchAddress)
    );
    DataReg ADR(
        .CLK(CLK),
        .in(regOutA),
        .out(adrOut)
    );
    DataReg BDR(
        .CLK(CLK),
        .in(regOutB),
        .out(bdrOut)
    );
    DataReg ALUOut(
        .CLK(CLK),
        .in(aluResult),
        .out(aluOut)
    );
    DataReg ALUM2DR(
        .CLK(CLK),
        .in(ALUMData),
        .out(alum2drOut)
    );
    Mux32_2to1 mux_ALUM(
        .select(ALUM2Reg),
        .inA(aluResult),
        .inB(memOut),
        .out(ALUMData)
    );
	wire [31:0] _shamt;
	assign _shamt = {{27{1'b0}}, shamt};
    Mux32_2to1 mux_ALUSrcA(
        .select(ALUSrcA),
        .inA(adrOut),
        .inB(_shamt),
        .out(aluDataA)
    );
    Mux32_2to1 mux_ALUSrcB(
        .select(ALUSrcB),
        .inA(bdrOut),
        .inB(extImme),
        .out(aluDataB)
    );
	wire [31:0] jumpAddress = {pc[31:28], address[25:0], {2'b00}};
    Mux32_4to1 mux_PCSrc(
        .select(PCSrc),
        .inA(PC4),
        .inB(branchAddress),
        .inC(regOutA),
        .inD(jumpAddress),
        .out(nextPC)
    );
    Mux5_4to1 mux_RegDst(
        .select(RegDst),
        .inA(5'b11111),
        .inB(rt),
        .inC(rd),
        .inD(5'b00000),
        .out(regWrite)
    );
    Mux32_2to1 mux_WrRegDSrc(
        .select(WrRegDSrc),
        .inA(pc),
        .inB(alum2drOut),
        .out(regWriteData)
    );
endmodule

