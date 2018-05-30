// Verilog test fixture created from schematic C:\Users\Administrator\Documents\Classes\FR3\CSSE132\Lab\Lab2\alu\add1b.sch - Mon Mar 13 22:34:07 2017
// Created by Yuankai Wang (Kevin) on Mar. 13, 2017
`timescale 1ns / 1ps

module add1b_add1b_sch_tb();

// Inputs
   reg b;
   reg ci;
   reg a;

// Output
   wire r;
   wire co;

// Bidirs

// Instantiate the UUT
   add1b UUT (
		.b(b), 
		.ci(ci), 
		.r(r), 
		.a(a), 
		.co(co)
   );
// Initialize Inputs
   initial begin
		ci = 0;
		b = 0;
		a = 0;
		// Wait 100ns for the simulator to finish initializing
		#100;
		a = 1;
		#1;
		if((r == 1)&&(co == 0))
			$display("okay 1");
		else
			$display("fail 1");
		#100;
		a = 1;
		b = 1;
		#1;
		if((r == 1)&&(co == 1))
			$display("okay 1");
		else
			$display("fail 1");
	end
endmodule
