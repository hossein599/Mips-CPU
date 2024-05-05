`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:32:50 01/02/2024
// Design Name:   CPU
// Module Name:   C:/CPU/CPU/CPU/CPU_TB.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_TB;

	reg reset;
	
	reg clk=0;
	always #10 clk = ~clk;


	CPU cpu (
		.reset(reset), 
		.clk(clk)
	);

initial begin

	reset = 1;
		
	#60;
		
	reset = 0;
	     
end
endmodule

