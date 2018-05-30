// Verilog test fixture created from schematic C:\Users\Administrator\Documents\Classes\FR3\CSSE132\Lab\Lab2\alu\alu.sch - Wed Mar 15 16:37:50 2017
// Create by Yuankai Wang and Song Luo
`timescale 1ns / 1ps

module alu_alu_sch_tb();

// Inputs
   reg [3:0] a;
   reg [3:0] b;
   reg ci;
   reg zero;
   reg [2:0] op;

// Output
   wire [3:0] r;
   wire slt;
   wire co;

// Bidirs

// Instantiate the UUT
   alu UUT (
		.a(a), 
		.b(b), 
		.ci(ci), 
		.r(r), 
		.zero(zero), 
		.slt(slt), 
		.op(op), 
		.co(co)
   );
// Initialize Inputs
initial begin
	a = 0;
	b = 0;
	ci = 0;
	zero = 0;
	op = 0;
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 4;
	b = 2;
	op = 2;
	#1;
	if ((r == 6) && (co == 0))
		$display("okay 1");
	else
		$display("fail 1");

// Wait 100ns for the simulator to finish initializing
	#100;
	a = 5;
	b = 2;
	ci = 1;
	op = 6;
	#1;
	if ((r == 3) && (co == 1))
		$display("okay 1");
	else
		$display("fail 1");

// Wait 100ns for the simulator to finish initializing
	#100;
	a = 2;
	b = 4;
	ci = 1;
	op = 6;
	#1;
	if ((r == -2) && (co == 0))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 2;
	b = 3;
	ci = 1;
	op = 6;
	#1;
	if ((r == -1) && (co == 0))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 2;
	b = 7;
	ci = 1;
	op = 7;
	#1;
	if ((r == -5) && (slt == 1))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 4;
	b = 4;
	ci = 1;
	op = 7;
	#1;
	if ((r == 0) && (slt == 0))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 5;
	b = 4;
	ci = 1;
	op = 7;
	#1;
	if ((r == 1) && (slt == 0))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = -1;
	b = 0;
	ci = 1;
	op = 7;
	#1;
	if ((r == -1) && (slt == 1))
		$display("okay 1");
	else
		$display("fail 1");	
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = -4;
	b = -4;
	ci = 1;
	op = 7;
	#1;
	if ((r == 0) && (slt == 0))
		$display("okay 1");
	else
		$display("fail 1");	
		
// Wait 100ns for the simulator to finish initializing
	#100;
	a = 1;
	b = 1;
	ci = 0;
	op = 0;
	#1;
	if ((r == 1) && (co == 0))
		$display("okay 1");
	else
		$display("fail 1");
		
// Wait 100ns for the simulator to finish initializing		
	#100;
	a = 1;
	b = 0;
	ci = 0;
	op = 1;
	#1;
	if ((r == 1) && (co == 0))
		$display("okay 1");
	else
		$display("fail 1");	
	end
endmodule
