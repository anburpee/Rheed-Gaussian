-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_rom is 
    generic(
             DWIDTH     : integer := 177; 
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
    0 => "010000001101011100101000000000001110010111011110000001111111111000001000000101001111000000000011010110100110011000000000000001010110011010111011100000000000001000000111101001110", 
    1 => "000000000100100010000011111111110110100101001111101111111111111110110101101010000100111111111110001111011110011001111111111110110000111010100100101111111111110010111000100110010", 
    2 => "000100110000001110000011111111111011001101001000011110000000000000000001010010110100000000000011111000010111000101111111111110001001101010100111111111111111011001010111011000101", 
    3 => "010100101110000000100000000000000111001001001010000011111111111100110110010101011101000000000100000101100000110010000000000001100010101101111000000000000001001000111011110001011", 
    4 => "111111100010110000000111111111110110100011111000000011111111111010010110100100111111111111111011101001000100100000011111111111000011100001001101110000000000011101111101111110110", 
    5 => "111111001000001000110111111111111101101000000011001100000000000111000001101110100001111111111100100111000110001110011111111111010011101011101001001111111111011110001001111001110", 
    6 => "010100001111101011111011111111110001111010000100111101111111111011010110000100110100000000000000000101000000100010111111111111111011000000100000001111111110111111110010000010101", 
    7 => "011010000010101011111100000000000010001100110011011111111111111000110100001010111110111111111011101001111001010111000000000001010100101000010011000000000000011010101101111011111", 
    8 => "000110011001010110000111111111111111000010010101101100000000000011011001011001100100111111111101110001010010110100111111111101101011010110100011001111111111010011100110110100110" );

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
        DataWidth : INTEGER := 177;
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


