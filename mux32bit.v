`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:14 01/01/2024 
// Design Name: 
// Module Name:    mux32bit 
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
module mux32bit(output [31:0] mux_out, 
				   input [31:0] in1, in2, 
					input control);

assign mux_out = (control == 0) ? in1 : in2;

endmodule
