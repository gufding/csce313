module 
lights (
	input CLOCK_50,
	input [3:0] KEY,
	output [12:0] DRAM_ADDR,
	output [1:0] DRAM_BA,
	output DRAM_CAS_N,
	output DRAM_CKE,
	output DRAM_CS_N,
	inout [31:0] DRAM_DQ,
	output [3:0] DRAM_DQM,
	output DRAM_RAS_N,
	output DRAM_WE_N,
	output DRAM_CLK,
	output [17:0] LEDR,
	output [7:0] LEDG,
	
	output [6:0] HEX0,
	output [6:0] HEX1,
	output [6:0] HEX2,
	output [6:0] HEX3,
	output [6:0] HEX4,
	output [6:0] HEX5,
	output [6:0] HEX6,
	output [6:0] HEX7
);

nios_system u0 (
	.clk_clk                           (CLOCK_50),   // clk.clk
	.reset_reset_n                     (KEY[0]),     // reset.reset_n
	.new_sdram_controller_0_wire_addr  (DRAM_ADDR),  // new_sdram_controller_0_wire.addr
	.new_sdram_controller_0_wire_ba    (DRAM_BA),    // .ba
	.new_sdram_controller_0_wire_cas_n (DRAM_CAS_N), // .cas_n
	.new_sdram_controller_0_wire_cke   (DRAM_CKE),   // .cke
	.new_sdram_controller_0_wire_cs_n  (DRAM_CS_N),  // .cs_n
	.new_sdram_controller_0_wire_dq    (DRAM_DQ),    // .dq
	.new_sdram_controller_0_wire_dqm   (DRAM_DQM),   // .dqm
	.new_sdram_controller_0_wire_ras_n (DRAM_RAS_N), // .ras_n
	.new_sdram_controller_0_wire_we_n  (DRAM_WE_N),  // .we_n
	.sdram_clk_clk                     (DRAM_CLK),
	.keys_export                       (KEY[3:1]),   // keys.export
	.leds_export                       ({LEDR,LEDG}), // leds.export
	
	.hex0_export (HEX0),
	.hex1_export (HEX1),
	.hex2_export (HEX2),
	.hex3_export (HEX3),
	.hex4_export (HEX4),
	.hex5_export (HEX5),
	.hex6_export (HEX6),
	.hex7_export (HEX7)
);					
endmodule
