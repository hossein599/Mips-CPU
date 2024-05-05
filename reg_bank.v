`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:09 01/01/2024 
// Design Name: 
// Module Name:    reg_bank 
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
module reg_bank(output reg [7:0] read_data1, read_data2, 
					 input [7:0] write_data, 
					 input [4:0] read_register1, read_register2, write_register, 
					 input reset, write);

reg [7:0] regbank [31:0];
integer i;
	
always@(*)
begin

	if(reset)
	begin
	
		for(i = 0; i < 32; i = i + 1)
		begin
		
			regbank[i] = 8'b0;
			
		end
	end

	else if(write)
	begin
	
		regbank[write_register] = write_data;
		
	end
	
	read_data1 = regbank[read_register1];
	read_data2 = regbank[read_register2];
	
end
endmodule