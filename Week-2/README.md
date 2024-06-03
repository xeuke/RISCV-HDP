# Week-2 Assignments:
## Task-1: Verify all the following C-codes from the previous assignment using the RISC-V compiler and SPIKE:
- Counter
- Matrix Multiplication
- ALU
### Counter:
Use the following commands:
- ```riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -ffreestanding -o counter.o counter.c```
- ```spike pk counter.o```

![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/2169e029-6482-45b9-9193-abfd17f5d925)

### Matrix Multiplication:
Use the following commands:
- ```riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -ffreestanding -o mulMat.o mulMat.c```
- ```spike pk mulMat.o```
  
![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/bc252cfd-7b3f-43a3-98a2-1b36e5241425)

###  ALU:
Use the following commands:
- ```riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -ffreestanding -o alu.o alu.c```
- ```spike pk alu.o```
  
  ![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/820aabb9-84ce-451e-8fb8-b3267a47bf1f)

## Task-2: Measure the CPU performance of all the above programs using either Godbolt.org or RISC-V disassembler

###  To generate assembly code text file:
```IMPORTANT: Make sure to remove #include libraries and printf statement before performing this step.```
Use the following commands to generate assembly files as text:
- ALU
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o alu.o alu.c ```
  - ```riscv64-unknown-elf-objdump -d -r alu.o > alu_assembly.txt```

- Matrix Multiplication
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o mulMat.o mulMat.c```
  - ```riscv64-unknown-elf-objdump -d -r mulMat.o > mulMat_assembly.txt```

- Counter
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o counter.o counter.c```
  - ```riscv64-unknown-elf-objdump -d -r counter.o > counter_assembly.txt ```

## Task-3: Measure the CPU performance of all the above programs using RISC-V disassembler

###  Counter:
```
Instruction     Occurrences   Cycles/Instr   Total Cycles
--------------------------------------------------------
addi            63             7             441
sw              35             7             245
lw              33             8             264
li              31             1             31
jalr            30             4             120
add             25             6             150
beqz            16             2             32
jal             15             9             135
j               14             5             70
ret             14             3             42
auipc           13             4             52
slli            10             7             70
bnez             9             9             81
sb               8             5             40
nop              3             8             24
andi             1             6             6
bltu             1             1             1
bne              5             2             10
srai             3             3             9
or               6             5             30
sll              5             6             30
beq              9             1             9
blt              5             1             5
bge              1             1             1
jr               1             2             2
--------------------------------------------------------
Total Cycles: 1860
```
*Assuming a clock of 500 MHz i.e. period of 2ns, Total CPU Time = 1860 x 2ns = 3.72ms*

###  Matrix Multiplication:
```
Instruction     Occurrences   Cycles/Instr   Total Cycles
--------------------------------------------------------
addi            75             7             525
sw              36             7             252
lw              42             8             336
li              28             1             28
jalr            26             4             104
add             21             6             126
beqz            11             2             22
jal             15             9             135
j               12             5             60
ret             18             3             54
auipc           14             4             56
slli            11             7             77
bnez            11             9             99
sb              9              5             45
nop             3              8             24
andi            3              6             18
bltu            2              1             2
bne             7              2             14
srai            2              3             6
or              2              5             10
sll             1              6             6
beq             4              1             4
blt             3              1             3
bge             5              1             5
jr              4              2             8
--------------------------------------------------------
Total Cycles: 2109
```
*Assuming a clock of 500 MHz i.e. period of 2ns, Total CPU Time = 2109 x 2ns = 4.218ms*

###  ALU:
```
Instruction     Occurrences   Cycles/Instr   Total Cycles
--------------------------------------------------------
addi           28             7            196         
sw             15             7            105         
lw             19             8            152         
li             15             1            15          
jalr           14             4            56          
add            4              6            24          
beqz           5              2            10          
jal            8              9            72          
j              7              5            35          
ret            16             3            48          
auipc          8              4            32          
slli           3              7            21          
bnez           4              9            36          
sb             14             5            70          
nop            2              8            16          
andi           3              6            18          
bltu           2              1            2           
bne            2              2            4           
srai           1              3            3           
or             1              5            5           
sll            1              6            6           
beq            1              1            1           
blt            1              1            1           
bge            1              1            1           
jr             4              2            8           
--------------------------------------------------------
Total Cycles: 937
```

*Assuming a clock of 500 MHz i.e. period of 2ns, Total CPU Time = 937 x 2ns = 1.874ms*
