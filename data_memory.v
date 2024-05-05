`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:11:56 01/01/2024 
// Design Name: 
// Module Name:    data_memory 
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
module data_memory(output reg [7:0] read_data, 
						 input [7:0] write_data, address,
						 input memread, memwrite, reset, clk);

reg [7:0] ram [255:0];
integer i;

always @(posedge clk)
begin

	if(reset)
	begin
	
		for(i = 0; i < 256; i = i + 1)
		begin
		
			ram[i] <= 8'b0;
			
		end
	end
	
	else if(memwrite)
	begin
	
		ram[address] <= write_data;
		
	end
	
	else if(memread)
	begin
	
		read_data <= ram[address];
		
	end
end
endmodule
