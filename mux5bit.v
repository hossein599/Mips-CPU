`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:08:25 01/01/2024 
// Design Name: 
// Module Name:    mux5bit 
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
module mux5bit(output [4:0] mux_out, 
					input [4:0] in1, in2, 
					input control);

assign mux_out = (control == 0) ? in1 : in2;

endmodule
