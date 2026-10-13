-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_rom is 
    generic(
             DWIDTH     : integer := 88; 
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


architecture rtl of dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101110101011111111111000011010000000000000010001111111111110001110100000000000000010010", 
    1 => "1110111000000000000000110110011000000000011010000011111111111111000000000000001001100001", 
    2 => "1101101001110000000001010111101000000000101101111111111111111010000001111111111111011101", 
    3 => "1011111110100000000001010100111000000000010110110111111111110010011011111111110000100100", 
    4 => "0000100110101111111110010100000111111111001000110100000000000011000000000000000011100000", 
    5 => "0111011011010000000000001001101111111111111001011111111111110100010100000000011000010100", 
    6 => "1111100001100000000001100011000000000000101111001000000000100011000011111111100111111011", 
    7 => "1110110110100000000001000100111000000000100110000011111111111101001010000000000000010001", 
    8 => "0001100110110000000001000100000000000000011110010100000000000011000000000000000000001110", 
    9 => "0001011111100000000000111000100111111111000101110100000000111100111100000000000010101010" );

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

entity dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V is
    generic (
        DataWidth : INTEGER := 88;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V is
    component dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_rom_U :  component dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


