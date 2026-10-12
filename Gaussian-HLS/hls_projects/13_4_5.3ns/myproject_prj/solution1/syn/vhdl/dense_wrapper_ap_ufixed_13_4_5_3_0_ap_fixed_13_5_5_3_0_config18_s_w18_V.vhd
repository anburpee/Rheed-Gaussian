-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V_rom is 
    generic(
             DWIDTH     : integer := 126; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 15
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "110100010000000000111100000011011110000000101001111111001101011111001111101111111001111111111001101000000001001001111111100001", 
    1 => "010000100000000111100111111110110110000001000010111111111010100000110001011111110001100111111100000111111110101110000000111000", 
    2 => "110001000000000000111000000010101100000001110011111111111110100000000010000000001110010111111011010011111111110001111111000001", 
    3 => "000001000111111100111111111111100001111110111001111111110110011111110001001111111001111000000010110111111111011100000001001111", 
    4 => "110011110000000000000011111101010001111110100111111111111100100000000101100000000010110000000100001000000000001111111100100110", 
    5 => "101001010000000010001100000000100011111111000101000001001101111111111110100000000010111000000000000100000000000111111111011101", 
    6 => "110011011000000100100000000001001001111111111101111111000001011111011101110000010001001111111101001011111101001101111110100100", 
    7 => "100110011000000001011111111101010101111111001111000000001000111111000111110000000001101000000101000100000010101101111110100110", 
    8 => "000000100000000111011000000010010001111111000010111111010111100000100011110000000010010000000100100111111111010001111111010100", 
    9 => "111100111000001001010011111101011011111111101110111111101011000000010010011111110111001000001000011100000000010100000000110010", 
    10 => "000010111000001010011111111011011111111110100010000000100100111111100110101111101101110000000000001011111010101110000000101010", 
    11 => "000010101111111110110011111111100011111101011110111111101110000000100010101111111010110111111110100100000010111010000000011110", 
    12 => "111010010111111111001011111110100010000000011101111111101000111111011110010000000001111000000001101000000001011110000000011110", 
    13 => "111001101000000000001011111111001001111111110101111111011000111111110111010000000001011111111111010000000000100010000000001100", 
    14 => "111000000000000001010011111010111110000000110100000000100100111111111110010000000110000111111100010100000001011111111101111100" );

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

entity dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V is
    generic (
        DataWidth : INTEGER := 126;
        AddressRange : INTEGER := 15;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V is
    component dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V_rom_U :  component dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config18_s_w18_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


