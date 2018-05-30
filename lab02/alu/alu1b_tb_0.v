// Verilog test fixture created from schematic C:\Users\Administrator\Documents\Classes\FR3\CSSE132\Lab\Lab2\alu\alu1b.sch - Wed Mar 15 16:00:28 2017
// Create by Yuankai Wang and Song Luo
`timescale 1ns / 1ps

module alu1b_alu1b_sch_tb();

// Inputs
   reg a;
   reg b;
   reg ci;
   reg less;
   reg [2:0] op;

// Output
   wire set;
   wire co;
   wire r;

// Bidirs

// Instantiate the UUT
   alu1b UUT (
		.a(a), 
		.b(b), 
		.ci(ci), 
		.set(set), 
		.less(less), 
		.co(co), 
		.op(op), 
		.r(r)
   );
// Initialize Inputs
	initial begin
	a = 0;
	b = 0;
	ci = 0;
	less = 0;
	op = 0;
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 1;
	b = 1;
	op = 2;
	#1;
	if ((r == 0) && (co == 1) && (set == 0))
		$display("okay 1");
	else
		$display("fail 1");
	
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 1;
	b = 1;
	op = 6;
	ci = 1;
	#1;
	if ((r == 0) && (co == 0) && (set == 0))
		$display("okay 1");
	else
		$display("fail 1");
	
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 0;
	b = 1;
	op = 2;
	#1;
	if ((r == 1) && (co == 0) && (set == 0))
		$display("okay 1");
	else
		$display("fail 1");

// Wait 100ns for the simulator to finish initializing
	#100;
	a = 1;
	b = 0;
	op = 6;
	#1;
	if ((r == 1) && (co == 0) && (set == 0))
		$display("okay 1");
	else
		$display("fail 1");
end
endmodule
