library vunit_lib;
context vunit_lib.vunit_context;

library IEEE;
use IEEE.std_logic_1164.all;

entity {{cookiecutter.project_name}}_tb is
    generic (runner_cfg : string := runner_cfg_default);
end {{cookiecutter.project_name}}_tb;

architecture behavior of {{cookiecutter.project_name}}_tb is
    component {{cookiecutter.project_name}} is 
    	
    end component;
		
    signal clk: std_logic := '0';
    
begin
    {{cookiecutter.project_name}}_component: {{cookiecutter.project_name}} port map (
        
    );
    
    clk <= not clk after 50 ns;
    
    main: process
    begin
        test_runner_setup(runner, runner_cfg);
        report "Hello!";
        test_runner_cleanup(runner);
    end process;
end;
