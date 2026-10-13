-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_rom is 
    generic(
             DWIDTH     : integer := 89; 
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


architecture rtl of dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011101010101111111110000110011000000000000100011011111111100011100110000000000000100100", 
    1 => "11101110000000000000001101100111000000000110100000011111111111110000000000000010011000010", 
    2 => "11011010011010000000010101111001000000001011011111011111111110100000011111111111110111001", 
    3 => "10111111101010000000010101001110000000000101101101011111111100100110101111111100001000111", 
    4 => "00001001101001111111100101000000111111110010001100100000000000110000000000000000111000000", 
    5 => "01110110110100000000000010011010111111111110010111011111111101000101000000000110000101000", 
    6 => "11111000011010000000011000110000000000001011110010000000001000110000101111111001111110101", 
    7 => "11101101100110000000010001001111000000001001100000011111111111010010100000000000000100011", 
    8 => "00011001101010000000010001000000000000000111100101000000000000110000000000000000000011011", 
    9 => "00010111111000000000001110001000111111110001011100100000001111001111010000000000101010011" );

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

entity dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V is
    generic (
        DataWidth : INTEGER := 89;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V is
    component dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_rom_U :  component dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


