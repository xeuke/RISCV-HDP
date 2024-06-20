#include <stdio.h>
#include <stdint.h>

int main()
{
    int desired_temp = 25; // Desired temperature
    int min_temp = 16; // Minimum temperature
    int current_temp; // Current temperature from sensor
    int delta_temp = 5; // Initial delta temperature
    int temp_requirement; // Temperature requirement
    int timer_A = 0; // 15 minutes timer (in increments of 15 minutes)
    int timer_B = 0; // 2 hours timer (counts 15-minute intervals, reset every 8)
    int timer_C = 0; // 8 hours timer (counts 2-hour intervals, reset every 4)
    int fan_state = 0; // Fan state: 0 for OFF, 1 for ON
    int ac_state = 1; // AC state: 0 for OFF, 1 for ON
    uint32_t x30 = 0; // Simulating x30 register for testing purposes

    while (1)
    {
        // Read temperature sensor data (simulated input)
        printf("Enter current temperature: ");
        scanf("%d", &current_temp);

        // Write current temperature to x30 at 8-LSBs
        asm volatile(
            "andi %0, %0, 0xFFFFFF00\n\t"  // Clear the 8 LSBs of x30
            "or %0, %0, %1\n\t"            // Set the 8 LSBs of x30 with current_temp
            : "+r"(x30)
            : "r"(current_temp & 0xFF)
            :
        );

        printf("x30 after writing temperature: 0x%X\n", x30);

        // Calculate temperature requirement
        temp_requirement = 27 - delta_temp;

        // Check if current temperature >= temp requirement
        if (current_temp >= temp_requirement)
        {
            ac_state = 0; // Turn OFF AC
            fan_state = 1; // Turn ON Fan
        }
        else
        {
            ac_state = 1; // Turn ON AC
            fan_state = 0; // Turn OFF Fan
        }

        printf("AC State: %d, Fan State: %d, Temp Requirement: %d, Current Temp: %d\n", ac_state, fan_state, temp_requirement, current_temp);

        // Simulate waiting for 15 minutes using a loop
        for (timer_A = 0; timer_A < 10000; timer_A++)
        {
            // Simulate the delay of Timer A by 15 minutes
        }
   
        // Increment Timer B by 1 for each Timer A completion
        timer_B++;

        // Check if Timer B counter == 8 (2 Hours)
        if (timer_B >= 8)
        {
            delta_temp += 1; // Increase delta_temp by 1°C
            timer_B = 0; // Reset Timer B to 0

            // Increment Timer C by 1 for each 2-hour interval completion
            timer_C++;
        }

        // Check if Timer C counter == 4 (8 Hours)
        if (timer_C >= 4)
        {
            ac_state = 0; // Turn OFF AC
            fan_state = 0; // Turn OFF Fan
            printf("8 hours have passed. Turning off AC and Fan.\n");
            break; // End the program
        }

        // Masks to clear specific bits for temperature control
        int temp_mask = 0xBFFFFFFF; // Clear x30[30] bit (for temp increase control)
        int temp_dec_mask = 0xEFFFFFFF; // Clear x30[28] bit (for temp decrease control)

        // Update x30 register with new temperature control states
        asm volatile(
            "andi %0, %1, %2\n\t"  // Clear bit 30
            "or %0, %0, %3\n\t"    // Set bit 30 if temp_increase is 1
            : "=r"(x30)
            : "r"(x30), "r"(temp_mask), "r"(ac_state << 30)
            :
        );

        printf("x30 after temp_increase update: 0x%X\n", x30);

        asm volatile(
            "andi %0, %1, %2\n\t"  // Clear bit 28
            "or %0, %0, %3\n\t"    // Set bit 28 if temp_decrease is 1
            : "=r"(x30)
            : "r"(x30), "r"(temp_dec_mask), "r"(fan_state << 28)
            :
        );

        printf("x30 after temp_decrease update: 0x%X\n", x30);
    }

    return 0;
}
