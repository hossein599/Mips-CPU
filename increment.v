`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:06:10 01/01/2024 
// Design Name: 
// Module Name:    increment 
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
module increament(output reg [7:0] increment_out,
						input [7:0] increment_in, 
						input clk);

always @(posedge clk)
begin

	increment_out <= increment_in + 1;
	
end
endmodule

