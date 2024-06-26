## Week-3: Develop RISC-V with peripherals and drivers for an application.

### Application: Automated Room-Temperature Monitoring and Control System Using RISC-V

This project involves developing an automated room temperature monitoring and control system using a custom RISC-V processor. The system will read the initial room temperature from a sensor at the start of the recording time and then simulate an increase in room temperature by 1 degree Celsius every two hours over the next eight hours. The system will be designed to run on a custom RISC-V architecture, ensuring efficient processing and low power consumption.

### Block Diagram:

![image](https://github.com/xeuke/RISCV-HDP/assets/20591370/ef1c15ff-865d-4398-bda3-12e5838ddf54)

- GPIO is mapped with an x30 register, which can store 32-bit data
- We can use the 8-LSbs to store the data read from the temperature sensor
- 'Bit-30' is used to enable control for increasing temperature (1: enable temp increase, 0: do nothing); for this application, it will be represented with a green LED
- 'Bit-28' is used to enable control for decreasing temperature (1: enable temp decrease, 0: do nothing); for this application, it will be represented with a green LED

