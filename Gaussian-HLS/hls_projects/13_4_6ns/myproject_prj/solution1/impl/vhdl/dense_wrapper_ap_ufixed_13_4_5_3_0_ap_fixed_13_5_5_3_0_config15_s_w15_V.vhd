-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V_rom is 
    generic(
             DWIDTH     : integer := 191; 
             AWIDTH     : integer := 4; 
             MEM_SIZE    : integer := 10
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01111100011111111010101111110011011000000111110100000100101000000011000011111111100100111111011010011111111101001111111001001100000000011111111110101111111111101100111111010010110000010001110", 
    1 => "11110111011111101001010000001111001111111100110011111101101101111111111011111101111010011111100011101111100100101000000010111100000011011000000011000111000000010001000000000100011111111110110", 
    2 => "11000111111111101101101111110101111000010010010011111011010011111100111011111111101010000000010011000000000100001000000000010111111110110111111101111000111111111011000000001010100000000100010", 
    3 => "10101010100000001000111111110100011000000000011011111110001110000000011000111110100110111111101110001111100000000000001011010100000000011000000000110101000001001101011111110110000000001001100", 
    4 => "00011101111111110010010000000011110111111000111000000100000000000001100000111111111010100000000101101111101111010000000001000111111101011101111101011000111111011110011111011001111111111101101", 
    5 => "01100001100000010010110000001001100111111101100011111101101101111101011001111111010001100000111100111111100101101000001000010000000000110010000010001001000001011101111111111110111111111100100", 
    6 => "00111010100000101101100000000011011000000000111111111110011001111101010100111110101000111111010010101111111111010000000001001000000101010000000011000000111111010110100000100010100000001100011", 
    7 => "11111000111111110011101111101100100000000010001111111101100111111110000001111110100101011111101000000000000001011000000001010100000010111100000001001101000000100011100000000101111111111111000", 
    8 => "11101101111111101000101111111001001111110101100011111001011100000000000110111111010100011111011001111111111010001111111001011011111110000001111111011001000001110011000000101000011111111101001", 
    9 => "10111010011111000110010000000000110000000001001111111011101001111110010010000001100001000000100100111111011011011000000010010000000000000000000001101011000000010001111111001001110000001110001" );

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

entity dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V is
    generic (
        DataWidth : INTEGER := 191;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V is
    component dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V_rom_U :  component dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config15_s_w15_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


