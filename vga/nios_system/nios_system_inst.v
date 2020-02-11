	nios_system u0 (
		.clk_clk                           (<connected-to-clk_clk>),                           //                         clk.clk
		.new_sdram_controller_0_wire_addr  (<connected-to-new_sdram_controller_0_wire_addr>),  // new_sdram_controller_0_wire.addr
		.new_sdram_controller_0_wire_ba    (<connected-to-new_sdram_controller_0_wire_ba>),    //                            .ba
		.new_sdram_controller_0_wire_cas_n (<connected-to-new_sdram_controller_0_wire_cas_n>), //                            .cas_n
		.new_sdram_controller_0_wire_cke   (<connected-to-new_sdram_controller_0_wire_cke>),   //                            .cke
		.new_sdram_controller_0_wire_cs_n  (<connected-to-new_sdram_controller_0_wire_cs_n>),  //                            .cs_n
		.new_sdram_controller_0_wire_dq    (<connected-to-new_sdram_controller_0_wire_dq>),    //                            .dq
		.new_sdram_controller_0_wire_dqm   (<connected-to-new_sdram_controller_0_wire_dqm>),   //                            .dqm
		.new_sdram_controller_0_wire_ras_n (<connected-to-new_sdram_controller_0_wire_ras_n>), //                            .ras_n
		.new_sdram_controller_0_wire_we_n  (<connected-to-new_sdram_controller_0_wire_we_n>),  //                            .we_n
		.reset_reset_n                     (<connected-to-reset_reset_n>),                     //                       reset.reset_n
		.sdram_clk_clk                     (<connected-to-sdram_clk_clk>),                     //                   sdram_clk.clk
		.sram_DQ                           (<connected-to-sram_DQ>),                           //                        sram.DQ
		.sram_ADDR                         (<connected-to-sram_ADDR>),                         //                            .ADDR
		.sram_LB_N                         (<connected-to-sram_LB_N>),                         //                            .LB_N
		.sram_UB_N                         (<connected-to-sram_UB_N>),                         //                            .UB_N
		.sram_CE_N                         (<connected-to-sram_CE_N>),                         //                            .CE_N
		.sram_OE_N                         (<connected-to-sram_OE_N>),                         //                            .OE_N
		.sram_WE_N                         (<connected-to-sram_WE_N>),                         //                            .WE_N
		.vga_CLK                           (<connected-to-vga_CLK>),                           //                         vga.CLK
		.vga_HS                            (<connected-to-vga_HS>),                            //                            .HS
		.vga_VS                            (<connected-to-vga_VS>),                            //                            .VS
		.vga_BLANK                         (<connected-to-vga_BLANK>),                         //                            .BLANK
		.vga_SYNC                          (<connected-to-vga_SYNC>),                          //                            .SYNC
		.vga_R                             (<connected-to-vga_R>),                             //                            .R
		.vga_G                             (<connected-to-vga_G>),                             //                            .G
		.vga_B                             (<connected-to-vga_B>)                              //                            .B
	);

