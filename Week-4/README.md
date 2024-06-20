## Week-4: Write and verify the C-code using RISCV-GNU and spike simulator

### State Machine for CLTS (Closed Loop Temperature System) 
1. Start
2. Initialize Variables
3. Read Temperature Sensor
4. Calculate Temp Requirement = 27°C - delta_Temp
5. Is Current Temp >= Temp Requirement?
   - IF Yes: Turn OFF AC, Turn ON Fan
   - IF No: Turn ON AC, Turn OFF Fan
6. Wait for 15 Minutes (Timer A)
7. Increment Timer B Counter by 1
8. Is Timer B Counter == 8 (2 Hours)?
   - IF Yes:
     - Increase delta_Temp by 1°C
     - Reset Timer B Counter to 0
     - Increment Timer C Counter by 1
9. Is Timer C Counter == 4 (8 Hours)?
   - IF Yes:
     - Turn OFF AC
     - Turn OFF Fan
     - End Program
10. Repeat from Step 3
