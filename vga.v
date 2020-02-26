
module 
vga (
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
	
	inout [15:0] SRAM_DQ,
	output [19:0] SRAM_ADDR,
	output SRAM_UB_N,
	output SRAM_LB_N,
	output SRAM_WE_N,
	output SRAM_CE_N,
	output SRAM_OE_N,
	
	output VGA_CLK,
	output VGA_HS,
	output VGA_VS,
	output VGA_BLANK_N,
	output VGA_SYNC_N,
	output [7:0] VGA_R,
	output [7:0] VGA_G,
	output [7:0] VGA_B
);

nios_system u0 (
	.clk_clk                           (CLOCK_50),
	.reset_reset_n                     (KEY[0]),
	.new_sdram_controller_0_wire_addr  (DRAM_ADDR),
	.new_sdram_controller_0_wire_ba    (DRAM_BA),
	.new_sdram_controller_0_wire_cas_n (DRAM_CAS_N),
	.new_sdram_controller_0_wire_cke   (DRAM_CKE),
	.new_sdram_controller_0_wire_cs_n  (DRAM_CS_N),
	.new_sdram_controller_0_wire_dq    (DRAM_DQ),
	.new_sdram_controller_0_wire_dqm   (DRAM_DQM),
	.new_sdram_controller_0_wire_ras_n (DRAM_RAS_N),
	.new_sdram_controller_0_wire_we_n  (DRAM_WE_N),
	.sdram_clk_clk                     (DRAM_CLK),
	
	.sram_DQ   (SRAM_DQ),
	.sram_ADDR (SRAM_ADDR),
	.sram_UB_N (SRAM_UB_N),
	.sram_LB_N (SRAM_LB_N),
	.sram_WE_N (SRAM_WE_N),
	.sram_CE_N (SRAM_CE_N),
	.sram_OE_N (SRAM_OE_N),
	
	.vga_CLK		(VGA_CLK),
	.vga_HS		(VGA_HS),
	.vga_VS		(VGA_VS),
	.vga_BLANK	(VGA_BLANK_N),
	.vga_SYNC 	(VGA_SYNC_N),
	.vga_R 		(VGA_R),
	.vga_G 		(VGA_G),
	.vga_B 		(VGA_B)
);					
endmodule	