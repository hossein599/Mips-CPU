`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:06:52 01/01/2024 
// Design Name: 
// Module Name:    instruction_memory 
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
module instruction_memory(output reg [31:0] instruction_out,
								  input [7:0] read_address,
								  input reset, clk);

reg [31:0] rom [255:0];
integer i;
	
always@(posedge clk)
begin

	if(reset)
	begin
	
		for(i = 0; i < 256; i = i + 1)
		begin
		
			rom[i] = 32'b0;
			
		end
	end
	
	//=============================minus==============================
	
	/*
	rom[0] = 32'b001110_00000_00001_0000000000000101; //r1 = 5
	rom[1] = 32'b001110_00000_00010_0000000000000001; //r2 = 1
	
	rom[2] = 32'b000000_00001_00010_00011_00000_000110; //r3 = r1 - r2
	*/
	
	//============================multiple=============================
	
	/*
	rom[0] = 32'b001110_00000_01001_0000000000000111; //r9 = 7
	rom[1] = 32'b001110_00000_00111_0000000000001001; //r7 = 9
	
	rom[2] = 32'b000000_01001_00111_00011_00000_001101; //r3 = r9 * r7
	*/

	//============================factorial===========================
	
	
	rom[0] = 32'b001110_00000_00001_0000000000000101; //r1 = 5
	rom[1] = 32'b001110_00000_00010_0000000000000001; //r2 = 1

	rom[2] = 32'b000000_00001_00010_00011_00000_000110; //r3 = r1 - r2
	rom[3] = 32'b000000_00001_00011_00100_00000_001101; //r4 = r1 * r3

	//loop
	rom[4] = 32'b000000_00011_00010_00101_00000_000110; //r5 = r3 - r2
	rom[5] = 32'b000000_00101_00111_00011_00000_000110; //r3 = r5 - r7
	
	rom[6] = 32'b001100_00011_00010_0000000000000011; //branch if r3 = r2 (if 1)

	rom[7] = 32'b000000_00100_00011_00110_00000_001101; //r6 = r4 * r3
	rom[8] = 32'b000000_00110_00111_00100_00000_000110; //r4 = r5 - r7

	rom[9] = 32'b000100_00000000000000000000000100; //jump to 4
	
	
	instruction_out = rom[read_address];
	
end
endmodule