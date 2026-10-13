-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_rom is 
    generic(
             DWIDTH     : integer := 68; 
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


architecture rtl of dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010000000100001110000011111101011101001111101111101000000101111110", 
    1 => "01000000100011111100000100111111100011001111001111110011111010000100", 
    2 => "11001000000100001010000111000000000000010000111111101100000001111100", 
    3 => "00001111110111111111111100111111111111001111101000001111111110000101", 
    4 => "11010000000011110111111010000000000000010000001000010000000001110010", 
    5 => "10101000001000000011111100000101000000000000001000000000000001111110", 
    6 => "11010000010000000100000000111100011101110001001111110111110101111010", 
    7 => "10011000000111110111111101000000111100100000001000010100001011111010", 
    8 => "00000000011100001001111100111101100010010000001000010111111111111101", 
    9 => "11110000100111110111111111111110100001011111100000100000000010000011", 
    10 => "00001000101011101111111010000010111110101110111000000011101010000011", 
    11 => "00001111111111111111110110111111000010011111101111111100001100000010", 
    12 => "11101111111111111010000010111110111110000000001000001000000110000010", 
    13 => "11101000000011111101111111111101111111100000001111111100000010000001", 
    14 => "11100000000111101100000011000010100000000000011111110000000111111000" );

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

entity dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V is
    generic (
        DataWidth : INTEGER := 68;
        AddressRange : INTEGER := 15;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V is
    component dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_rom_U :  component dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


