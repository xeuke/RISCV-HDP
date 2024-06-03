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
Use the following commands as an example for all c-codes:
-ALU
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o alu.o alu.c ```
  - ```riscv64-unknown-elf-objdump -d -r alu.o > alu_assembly.txt```

-Matrix Multiplication
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o mulMat.o mulMat.c```
  - ```riscv64-unknown-elf-objdump -d -r mulMat.o > mulMat_assembly.txt```

-Counter
  - ```riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o counter.o counter.c```
  - ```riscv64-unknown-elf-objdump -d -r counter.o > counter_assembly.txt ```
