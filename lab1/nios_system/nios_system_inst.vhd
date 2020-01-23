	component nios_system is
		port (
			clk_clk                           : in    std_logic                     := 'X';             -- clk
			keys_export                       : in    std_logic_vector(2 downto 0)  := (others => 'X'); -- export
			leds_export                       : out   std_logic_vector(25 downto 0);                    -- export
			new_sdram_controller_0_wire_addr  : out   std_logic_vector(12 downto 0);                    -- addr
			new_sdram_controller_0_wire_ba    : out   std_logic_vector(1 downto 0);                     -- ba
			new_sdram_controller_0_wire_cas_n : out   std_logic;                                        -- cas_n
			new_sdram_controller_0_wire_cke   : out   std_logic;                                        -- cke
			new_sdram_controller_0_wire_cs_n  : out   std_logic;                                        -- cs_n
			new_sdram_controller_0_wire_dq    : inout std_logic_vector(31 downto 0) := (others => 'X'); -- dq
			new_sdram_controller_0_wire_dqm   : out   std_logic_vector(3 downto 0);                     -- dqm
			new_sdram_controller_0_wire_ras_n : out   std_logic;                                        -- ras_n
			new_sdram_controller_0_wire_we_n  : out   std_logic;                                        -- we_n
			reset_reset_n                     : in    std_logic                     := 'X';             -- reset_n
			sdram_clk_clk                     : out   std_logic;                                        -- clk
			hex0_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex1_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex2_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex3_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex4_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex5_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex6_export                       : out   std_logic_vector(7 downto 0);                     -- export
			hex7_export                       : out   std_logic_vector(7 downto 0)                      -- export
		);
	end component nios_system;

	u0 : component nios_system
		port map (
			clk_clk                           => CONNECTED_TO_clk_clk,                           --                         clk.clk
			keys_export                       => CONNECTED_TO_keys_export,                       --                        keys.export
			leds_export                       => CONNECTED_TO_leds_export,                       --                        leds.export
			new_sdram_controller_0_wire_addr  => CONNECTED_TO_new_sdram_controller_0_wire_addr,  -- new_sdram_controller_0_wire.addr
			new_sdram_controller_0_wire_ba    => CONNECTED_TO_new_sdram_controller_0_wire_ba,    --                            .ba
			new_sdram_controller_0_wire_cas_n => CONNECTED_TO_new_sdram_controller_0_wire_cas_n, --                            .cas_n
			new_sdram_controller_0_wire_cke   => CONNECTED_TO_new_sdram_controller_0_wire_cke,   --                            .cke
			new_sdram_controller_0_wire_cs_n  => CONNECTED_TO_new_sdram_controller_0_wire_cs_n,  --                            .cs_n
			new_sdram_controller_0_wire_dq    => CONNECTED_TO_new_sdram_controller_0_wire_dq,    --                            .dq
			new_sdram_controller_0_wire_dqm   => CONNECTED_TO_new_sdram_controller_0_wire_dqm,   --                            .dqm
			new_sdram_controller_0_wire_ras_n => CONNECTED_TO_new_sdram_controller_0_wire_ras_n, --                            .ras_n
			new_sdram_controller_0_wire_we_n  => CONNECTED_TO_new_sdram_controller_0_wire_we_n,  --                            .we_n
			reset_reset_n                     => CONNECTED_TO_reset_reset_n,                     --                       reset.reset_n
			sdram_clk_clk                     => CONNECTED_TO_sdram_clk_clk,                     --                   sdram_clk.clk
			hex0_export                       => CONNECTED_TO_hex0_export,                       --                        hex0.export
			hex1_export                       => CONNECTED_TO_hex1_export,                       --                        hex1.export
			hex2_export                       => CONNECTED_TO_hex2_export,                       --                        hex2.export
			hex3_export                       => CONNECTED_TO_hex3_export,                       --                        hex3.export
			hex4_export                       => CONNECTED_TO_hex4_export,                       --                        hex4.export
			hex5_export                       => CONNECTED_TO_hex5_export,                       --                        hex5.export
			hex6_export                       => CONNECTED_TO_hex6_export,                       --                        hex6.export
			hex7_export                       => CONNECTED_TO_hex7_export                        --                        hex7.export
		);

