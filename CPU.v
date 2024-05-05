`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:00 01/01/2024 
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
module CPU(input clk, reset);

wire [31:0] instruction;
wire [15:0] alu_result;

wire [7:0] pc_out, increment_out, read_data1, read_data2,  mux_alusrc_out,
			  fulladder_out, mux_fulladder_out, data_memory_out, mux_jump_out, mux_memtoreg_out;	
			  
wire [4:0] mux_5bit_out;
wire [3:0] alu_op;
wire regdst, jump, branch, memread, memtoreg, memwrite, alusrc, regwrite, zero, mux_fulladder_control;

		
program_counter pc (
	.pc_out(pc_out), 
   .pc_in(mux_jump_out), 
   .reset(reset), 
   .clk(clk)
   );
		 
		 
increament increament (
   .increment_out(increment_out), 
   .increment_in(pc_out), 
   .clk(clk)
   ); 
	
	
instruction_memory instruction_memory (
   .instruction_out(instruction), 
   .read_address(pc_out), 
   .reset(reset), 
   .clk(clk)
   );
	
	
mux5bit mux5bit (
   .mux_out(mux_5bit_out), 
   .in1(instruction[20:16]), 
   .in2(instruction[15:11]), 
   .control(regdst)
   );
	
	
control control (
   .alu_op(alu_op), 
   .regdst(regdst), 
   .jump(jump), 
   .branch(branch), 
   .memread(memread), 
   .memtoreg(memtoreg), 
   .memwrite(memwrite), 
   .alusrc(alusrc), 
   .regwrite(regwrite), 
   .in(instruction)
   );
	
	
reg_bank registers (
   .read_data1(read_data1), 
   .read_data2(read_data2), 
   .write_data(mux_memtoreg_out), 
   .read_register1(instruction[25:21]), 
   .read_register2(instruction[20:16]), 
   .write_register(mux_5bit_out), 
   .reset(reset), 
   .write(regwrite)
   );
	
	
mux8bit mux_alusrc (
   .mux_out(mux_alusrc_out), 
   .in1(read_data2), 
   .in2(instruction[7:0]), 
   .control(alusrc)
   );
	
	
fulladder fulladder (
   .out(fulladder_out), 
   .in_a(increment_out), 
   .in_b(instruction[7:0])
   );


alu alu (
   .alu_result(alu_result), 
   .zero(zero), 
   .a(read_data1), 
   .b(mux_alusrc_out), 
   .control(alu_op)
   );
	
	
assign mux_fulladder_control =  zero & branch;

mux8bit mux_fulladder (
   .mux_out(mux_fulladder_out), 
   .in1(increment_out), 
   .in2(fulladder_out), 
   .control(mux_fulladder_control)
   );
	
	
data_memory data_memory (
   .read_data(data_memory_out), 
   .write_data(read_data2), 
   .address(alu_result[7:0]), 
   .memread(memread), 
   .memwrite(memwrite), 
   .reset(reset), 
   .clk(clk)
   );


mux8bit mux_jump (
   .mux_out(mux_jump_out), 
   .in1(mux_fulladder_out), 
   .in2(instruction[7:0]), 
   .control(jump)
   );
		

mux8bit mux_memtoreg (
   .mux_out(mux_memtoreg_out), 
   .in1(alu_result[7:0]), 
   .in2(data_memory_out), 
   .control(memtoreg)
   );
	
endmodule
