`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:05:38 01/01/2024 
// Design Name: 
// Module Name:    program_counter 
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
module program_counter(output reg [7:0] pc_out,
							  input [7:0] pc_in, 
							  input reset, clk);

always @(posedge clk)
begin

	if(reset)
	begin
	
		pc_out <= 8'b0;
		
	end

	else
	begin
	
		pc_out <= pc_in;
		
	end
end
endmodule