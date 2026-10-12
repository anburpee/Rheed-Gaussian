-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_rom is 
    generic(
             DWIDTH     : integer := 147; 
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


architecture rtl of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "011111011111110111111100111000001111100001001010000110001111111001011110110101111111010111110010100000001001111101100111111011011110100110000100011", 
    1 => "111101111111010010000011110111111001111111011011111111111111011110111111000111111001001000000110000000110110000110010000000100100000001001111111101", 
    2 => "110010011111011101111101100000100100111110110101111001111111111010100000100110000001000000000000111111101111111011110111111110100000010100000001000", 
    3 => "101010100000010011111101001000000000111111100100000000110111101001111111011101111000000000010110100000000110000001101000010011011111101100000010011", 
    4 => "000111111111100100000001000111110010000001000000000011000111111110100000001101111011111000000010011111010111111010110111110111111110110101111111011", 
    5 => "011000100000100110000010011111111011011111011011111010110111110100100001111011111001011000010000100000001100000100010000010111111111111111111111001", 
    6 => "001110100001011100000000111000000010011111100111111010101111101010011110100101111111110000000010000001010100000110000111110101100001000110000011001", 
    7 => "111110011111101001111011001000000100111111011011111100000111101001011111010000000000011000000010100000101110000010011000001001000000001101111111110", 
    8 => "111011111111010001111110010111101011011110011000000000001111110101011110110101111110100111110011011111100001111110110000011101000001010001111111010", 
    9 => "101110111110001100000000010000000010111110111011111100101000011000100001001011110110111000000100100000000000000011011000000100111110010100000011100" );

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

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V is
    generic (
        DataWidth : INTEGER := 147;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V is
    component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_rom_U :  component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


