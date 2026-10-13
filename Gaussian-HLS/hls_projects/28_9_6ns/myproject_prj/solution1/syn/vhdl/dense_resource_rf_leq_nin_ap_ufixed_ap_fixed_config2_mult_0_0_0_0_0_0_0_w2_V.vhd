-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom is 
    generic(
             DWIDTH     : integer := 160; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 9
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0100000011010111001100000000011100101110111100001111111110000010000001010100000000000110101101001100110000000000010101100110101111000000000000010000001111010011", 
    1 => "0000000001001000100011111111101101001010011111101111111111101101011010100001111111111100011110111100110111111111101100001110101001001111111111100101110001001100", 
    2 => "0001001100000011100011111111110110011010010001000000000000000000010100101101000000000111110000101110001111111111100010011010101010001111111110110010101110110001", 
    3 => "0101001011100000001000000000001110010010010100001111111111001101100101010111000000001000001011000001100100000000011000101011011110000000000010010001110111100011", 
    4 => "1111111000101100000011111111101101000111110000001111111110100101101001010000111111110111010010001001000011111111110000111000010011100000000000111011111011111110", 
    5 => "1111110010000010001111111111111011010000000110100000000001110000011011101000111111111001001110001100011111111111110100111010111010011111111110111100010011110011", 
    6 => "0101000011111010111111111111100011110100001001111111111110110101100001001101000000000000001010000001000111111111111110110000001000001111111101111111100100000101", 
    7 => "0110100000101011000000000000000100011001100111001111111110001101000010101111111111110111010011110010110000000000010101001010000100110000000000110101011011111000", 
    8 => "0001100110010101100011111111111110000100101011010000000000110110010110011001111111111011100010100101101011111111011010110101101000111111111110100111001101101001" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V is
    generic (
        DataWidth : INTEGER := 160;
        AddressRange : INTEGER := 9;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V is
    component dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom_U :  component dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


