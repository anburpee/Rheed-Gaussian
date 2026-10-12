-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_rom is 
    generic(
             DWIDTH     : integer := 47; 
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


architecture rtl of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011111111110001000000000111111100100000000001", 
    1 => "11101110000001110000000110111111111110000010011", 
    2 => "11011010000010110000001011111111110101111111111", 
    3 => "11000000000010101000000101111111100101111100001", 
    4 => "00001011111100101111110010000000000110000000111", 
    5 => "01110110000000010111111110111111101000000110001", 
    6 => "11111000000011001000001100000001000111111010000", 
    7 => "11101110000010001000001001111111111010000000001", 
    8 => "00011010000010001000000111100000000110000000000", 
    9 => "00011000000001110111110001100001111010000000101" );

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

entity dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V is
    generic (
        DataWidth : INTEGER := 47;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V is
    component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_rom_U :  component dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


