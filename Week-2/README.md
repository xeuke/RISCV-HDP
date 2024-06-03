# Week-2 Assignments:
## Task-1: Verify all the following C-codes from the previous assignment using the RISC-V compiler and SPIKE:
- Counter
- Matrix Multiplication
- ALU
### COUNTER:
Use the following commands:
- ```riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -ffreestanding -o counter.o counter.c```
- ```spike pk counter.o```

![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/2169e029-6482-45b9-9193-abfd17f5d925)

  
## Task-2: Measure the CPU performance of all the above programs using either Godbolt.org or RISC-V disassembler
