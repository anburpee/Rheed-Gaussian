-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_rom is 
    generic(
             DWIDTH     : integer := 75; 
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


architecture rtl of dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "110111010111111111100001101000000000001000111111111000111010000000000001001", 
    1 => "111011100000000000011011010000000001101000011111111111100000000000100110000", 
    2 => "110110100110000000101011110000000010111000011111111101000001111111111101110", 
    3 => "101111111010000000101010011000000001011011011111111001001111111111000010010", 
    4 => "000010011011111111001010000111111100100011000000000001100000000000001110000", 
    5 => "011101101100000000000100110111111111100110011111111010001010000001100001010", 
    6 => "111110000110000000110001100000000010111100100000010001100001111110011111101", 
    7 => "111011011010000000100010100000000010011000011111111110100110000000000001001", 
    8 => "000110011010000000100010000000000001111001000000000001100000000000000000111", 
    9 => "000101111110000000011100010111111100010111000000011110011110000000001010101" );

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

entity dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V is
    generic (
        DataWidth : INTEGER := 75;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V is
    component dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_rom_U :  component dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


