`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:57:36 03/16/2017
// Design Name:   mux2b2_4
// Module Name:   C:/Users/Administrator/Documents/Classes/FR3/CSSE132/Lab/mux2b_4_tb_0.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux2b2_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux2b_4_tb_0;

	// Inputs
	reg [1:0] a;
	reg [1:0] b;
	reg s;

	// Outputs
	wire [1:0] r;

	// Instantiate the Unit Under Test (UUT)
	mux2b2_4 uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.r(r)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		repeat (2)
		begin
			repeat (4)
			begin
				repeat (4)
				begin
					#10;
					$write("s:%b,a:%b,b:%b,r:%b",s,a,b,r)
					if (s==0&&r!=a)
						$display("fail");
					else if (s==1&&r!=b)
						$display("fail");
					else
						$display("pass");
					b=b+1;
				end
				a=a+1;
			end
			s=s+1;

		end
      
endmodule

