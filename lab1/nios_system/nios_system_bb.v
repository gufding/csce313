
module nios_system (
	clk_clk,
	keys_export,
	leds_export,
	new_sdram_controller_0_wire_addr,
	new_sdram_controller_0_wire_ba,
	new_sdram_controller_0_wire_cas_n,
	new_sdram_controller_0_wire_cke,
	new_sdram_controller_0_wire_cs_n,
	new_sdram_controller_0_wire_dq,
	new_sdram_controller_0_wire_dqm,
	new_sdram_controller_0_wire_ras_n,
	new_sdram_controller_0_wire_we_n,
	reset_reset_n,
	sdram_clk_clk,
	hex0_export,
	hex1_export,
	hex2_export,
	hex3_export,
	hex4_export,
	hex5_export,
	hex6_export,
	hex7_export);	

	input		clk_clk;
	input	[2:0]	keys_export;
	output	[25:0]	leds_export;
	output	[12:0]	new_sdram_controller_0_wire_addr;
	output	[1:0]	new_sdram_controller_0_wire_ba;
	output		new_sdram_controller_0_wire_cas_n;
	output		new_sdram_controller_0_wire_cke;
	output		new_sdram_controller_0_wire_cs_n;
	inout	[31:0]	new_sdram_controller_0_wire_dq;
	output	[3:0]	new_sdram_controller_0_wire_dqm;
	output		new_sdram_controller_0_wire_ras_n;
	output		new_sdram_controller_0_wire_we_n;
	input		reset_reset_n;
	output		sdram_clk_clk;
	output	[7:0]	hex0_export;
	output	[7:0]	hex1_export;
	output	[7:0]	hex2_export;
	output	[7:0]	hex3_export;
	output	[7:0]	hex4_export;
	output	[7:0]	hex5_export;
	output	[7:0]	hex6_export;
	output	[7:0]	hex7_export;
endmodule
