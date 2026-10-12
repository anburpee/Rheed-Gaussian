-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_rom is 
    generic(
             DWIDTH     : integer := 59; 
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


architecture rtl of dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000001111000100010010000011110000111100001111000011110001", 
    1 => "00011110001000011110000111011111110000000010010000000000000", 
    2 => "11111111111001011111110000000010000000000001111000000000000", 
    3 => "11100001111000000000000111111111110000100000000000100000001", 
    4 => "00000000000111100010001000000001111000011111111111111110000", 
    5 => "01000010001000011111111111100101110000100000001000100000000", 
    6 => "00100010000000000001111111111110000000000010010111100010001", 
    7 => "00000001111000011111111111111110000000000010001000100000000", 
    8 => "00011110000111111100000111111110000111111110000001000010000", 
    9 => "11111100000000011111111001000011110000000000001000011100001" );

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

entity dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V is
    generic (
        DataWidth : INTEGER := 59;
        AddressRange : INTEGER := 10;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V is
    component dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_rom_U :  component dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


