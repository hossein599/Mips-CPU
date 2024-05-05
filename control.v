`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:07:40 01/01/2024 
// Design Name: 
// Module Name:    control 
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
module control(output reg [3:0] alu_op, 
					output reg regdst, jump, branch, memread, memtoreg, memwrite, alusrc, regwrite, 
					input [31:0]in);

always@(in)
begin

	case(in[31:26])
	
		6'b000000:
		begin
		
			regdst = 1;
			
			jump = 0;
			
			branch = 0;
			
			memread = 0;
			
			memtoreg = 0;
			
			alu_op = in[3:0];
			
			memwrite = 0;
			
			alusrc = 0;
			
			regwrite = 1;
			
		end
		
		6'b000100:
		begin
		
			regdst = 0;
			
			jump = 1;
			
			branch = 0;

			memread = 0;
			
			memtoreg = 0;
			
			alu_op = 4'b0000;
			
			memwrite = 0;
			
			alusrc = 0;
			
			regwrite = 0;
			
		end
		
		6'b001100:
		begin
		
			regdst = 0;
			
			jump = 0;
			
			branch = 1;

			memread = 0;
			
			memtoreg = 0;
			
			alu_op = 4'b0110;
			
			memwrite = 0;
			
			alusrc = 0;
			
			regwrite = 0;
			
		end
		
		6'b001110:
		begin
		
			regdst = 0;
			
			jump = 0;
			
			branch = 0;
			
			memread = 0;
			
			memtoreg = 0;
			
			alu_op = 4'b0010;
			
			memwrite = 0;
			
			alusrc = 1;
			
			regwrite = 1;
			
		end
		
		6'b001111:
		begin
		
			regdst = 0;
			
			jump = 0;
			
			branch = 0;

			memread = 0;
			
			memtoreg = 0;
			
			alu_op = 4'b0000;
			
			memwrite = 0;
			
			alusrc = 1;
			
			regwrite = 1;
			
		end
	
		6'b100100:
		begin
		
			regdst = 0;
			
			jump = 0;
			
			branch = 0;

			memread = 1;
			
			memtoreg = 1;
			
			alu_op = 4'b0010;
			
			memwrite = 0;
			
			alusrc = 1;
			
			regwrite = 1;
			
		end
	
		6'b100110:
		begin
		
			regdst = 0;
			
			jump = 0;
			
			branch = 0;

			memread = 0;
			
			memtoreg = 0;
			
			alu_op = 4'b0010;
			
			memwrite = 1;
			
			alusrc = 1;
			
			regwrite = 0;
			
		end
	endcase
end
endmodule
