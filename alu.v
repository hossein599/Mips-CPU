`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:32 01/01/2024 
// Design Name: 
// Module Name:    alu 
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
module alu(output reg [15:0] alu_result,
			  output reg zero, 
			  input [7:0] a, b,
			  input [3:0] control);

always @(*)
begin

	case(control)
	
		4'b0000:
		begin
		
			alu_result = a & b;
			
		end
		
		4'b0001:
		begin
		
			alu_result = a | b;
			
		end
		
		4'b0010:
		begin
		
			alu_result = a + b;
			
		end
		
		4'b0110:
		begin
		
			alu_result = a - b;
			
		end
		
		4'b1100:
		begin
		
			alu_result = ~(a | b);
			
		end
		
		4'b1101:
		begin
		
			alu_result = a * b;
			
		end
	endcase
	
	if (alu_result == 0)
	begin
	
		zero = 1;
		
	end
	
	else
	begin
	
		zero = 0;
		
	end
end
endmodule