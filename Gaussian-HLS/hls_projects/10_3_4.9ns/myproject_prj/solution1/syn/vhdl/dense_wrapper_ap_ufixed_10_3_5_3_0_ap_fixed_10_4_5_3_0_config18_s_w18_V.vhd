-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_rom is 
    generic(
             DWIDTH     : integer := 97; 
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


architecture rtl of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101000000000010000000111000000001010111110011011110011111111110100111110011000000010011111111000", 
    1 => "0100001000001111011111101110000010000111111110100001100011111100011111111000011111101100000001110", 
    2 => "1100010000000010000000101100000011101111111111100000000100000011100111110110111111111101111110000", 
    3 => "0000010111111010011111111001111101110111111101111111100011111110100000000101111111110110000010100", 
    4 => "1100111000000000011111010101111101010111111111000000001010000000110000001000100000000101111001001", 
    5 => "1010010000000100100000001001111110001000010011111111111100000000110000000000000000000011111110111", 
    6 => "1100111000001001000000010011111111111111110000011110111100000100010111111010011111010101111101001", 
    7 => "1001101000000011011111010101111110100000000010011110010000000000011000001010000000101101111101010", 
    8 => "0000001000001111000000100101111110001111110110000001001000000000100000001001011111110101111110101", 
    9 => "1111010000010010111111010111111111100111111010100000100101111101110000010001000000000110000001101", 
    10 => "0000110000010101011110111001111101000000001001011111001101111011011000000000011110101100000001011", 
    11 => "0000101111111101111111111001111011000111111011100001000101111110110111111101000000101110000000111", 
    12 => "1110101111111110111111101000000000111111111010011110111100000000100000000011000000011000000000111", 
    13 => "1110011000000000111111110011111111101111110110011111101110000000011111111110100000001000000000011", 
    14 => "1110000000000010111110110000000001101000001001011111111100000001100111111000100000011001111011111" );

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

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V is
    generic (
        DataWidth : INTEGER := 97;
        AddressRange : INTEGER := 15;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V is
    component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_rom_U :  component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


