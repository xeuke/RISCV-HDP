## Task-3: Design the same ALU code in Verilog and verify it using iVerilog and GTKwave
### Here is a tutorial of how to run this "alu.v" and "alu_tb.v" file using iVerilog and GTKwave.
  - Open a terminal and navigate to the directory where the files are saved. Compile the Verilog files using Icarus Verilog with the following command:
    - ```iverilog -o alu_tb ALU_4bit.v ALU_4bit_tb.v```
  - Run the simulation using the compiled output file:
    - ```vvp alu_tb```
    - This command will execute the simulation and generate a VCD file named ALU_4bit_tb.vcd.
  - Open the VCD file in GTKwave to visualize the results:
    - ```gtkwave ALU_4bit_tb.vcd```
  - Analyze the Waveform
  - In GTKwave:
    -  Load the signals 'A', 'B', 'op', and 'result' into the waveform viewer.
    -  Verify that the output results match the expected values for each operation.
  -  Screenshot attached below for reference:
    
![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/be849391-b45c-44c3-ad54-6bc47e19fc80)


![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/fabc4a45-c94e-4914-9de7-87b1e1f10af2)
