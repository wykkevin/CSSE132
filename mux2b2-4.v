`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:49 03/16/2017 
// Design Name: 
// Module Name:    mux2b2-4 
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
module mux2b2_4(
	input [1:0] a,
	input [1:0] b,
	input s,
	output [1:0] r
    );

	//assign r = (s == 0) ? a : b;
	always @ (a, b, s) //a triger to change
	begin
//		if (s==0)
	//		r=a;
		//else
			//r=b;
		
		r[0]=(a[0]& ~s)|(b[0]& ~s);
		r[1]=(a[1]& ~s)|(b[1]& ~s);
		end

endmodule
