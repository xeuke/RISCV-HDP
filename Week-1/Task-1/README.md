# Task-1: Calculate 10-19, 20+30, 36-12 using signed, 1s and 2s complements
## Binary Arithmetic Operations Using Signed, 1's Complement, and 2's Complement

This document demonstrates the calculation of three arithmetic operations using signed, 1's complement, and 2's complement binary representations.

## Binary Representation (8-bit)

We'll use 8-bit binary representation for simplicity.

### Conversion of Decimal Numbers to Binary:
- 10<sub>10</sub> = 00001010<sub>2</sub>
- 19<sub>10</sub> = 00010011<sub>2</sub>
- 20<sub>10</sub> = 00010100<sub>2</sub>
- 30<sub>10</sub> = 00011110<sub>2</sub>
- 36<sub>10</sub> = 00100100<sub>2</sub>
- 12<sub>10</sub> = 00001100<sub>2</sub>

### Negative Numbers in Signed, 1's Complement, and 2's Complement:

- **Signed magnitude:** For a negative number, flip the most significant bit (MSB) to 1.
  - -19<sub>10</sub> = 10010011<sub>2</sub>
  - -12<sub>10</sub> = 10001100<sub>2</sub>

- **1's complement:** Invert all the bits. [Note: There are two representations for zero: positive zero (00000000) and negative zero (11111111).]
  - 19<sub>10</sub> = 00010011<sub>2</sub> → -19<sub>10</sub> = 11101100<sub>2</sub>
  - 12<sub>10</sub> = 00001100<sub>2</sub> → -12<sub>10</sub> = 11110011<sub>2</sub>

- **2's complement:** Invert all the bits and add 1.
  - 19<sub>10</sub> = 00010011<sub>2</sub> → 11101100<sub>2</sub> + 1 = 11101101<sub>2</sub>
  - 12<sub>10</sub> = 00001100<sub>2</sub> → 11110011<sub>2</sub> + 1 = 11110100<sub>2</sub>

## Perform Operations

### 1. 10 - 19

- **Signed magnitude:**
  - 10<sub>10</sub> = 00001010<sub>2</sub>
  - -19<sub>10</sub> = 10010011<sub>2</sub>
  - Result (signed magnitude) = 10<sub>10</sub> + (-9<sub>10</sub>) = 00001010<sub>2</sub> + 10010011<sub>2</sub> = 10011101<sub>2</sub> = -29<sub>10</sub>
  - This result is incorrect since we didn't use 1's or 2's compliments method.
 
- **1's Complement:**
  - 10<sub>10</sub> = 00001010<sub>2</sub>
  - 19<sub>10</sub> = 00010011<sub>2</sub> → -19<sub>10</sub> = 11101100<sub>2</sub>
  - 9<sub>10</sub> = 00001001<sub>2</sub> → -9<sub>10</sub> = 11110110<sub>2</sub>
  - Result (1's Complement) = 10<sub>10</sub> + (-19<sub>10</sub>) = 00001010<sub>2</sub> + 11101100<sub>2</sub> = 11110110<sub>2</sub> = -9<sub>10</sub> 
 
- **2's Complement:**
  - 10<sub>10</sub> = 00001010<sub>2</sub>
  - 19<sub>10</sub> = 00010011<sub>2</sub> → -19<sub>10</sub> = 11101100<sub>2</sub> [1's complement] + 1<sub>2</sub> = 11101101<sub>2</sub>
  - 9<sub>10</sub> = 00001001<sub>2</sub> → -9<sub>10</sub> = 11110110<sub>2</sub> [1's complement] + 1<sub>2</sub> = 11110111<sub>2</sub>
  - Result (2's Complement) = 10<sub>10</sub> + (-19<sub>10</sub>) = 00001010<sub>2</sub> + 11101101<sub>2</sub> = 11110111<sub>2</sub> = -9<sub>10</sub> 

#### 2. 20 + 30

**Signed Magnitude:**
- 20<sub>10</sub> = 00010100<sub>2</sub>
- 30<sub>10</sub> = 00011110<sub>2</sub>
- Result: 20<sub>10</sub> + 30<sub>10</sub> = 00010100<sub>2</sub> + 00011110<sub>2</sub> = 00110010<sub>2</sub> = 50<sub>10</sub>

**1's Complement:**
- 20<sub>10</sub> = 00010100<sub>2</sub>
- 30<sub>10</sub> = 00011110<sub>2</sub>
- Result: 20<sub>10</sub> + 30<sub>10</sub> = 00010100<sub>2</sub> + 00011110<sub>2</sub> = 00110010<sub>2</sub> = 50<sub>10</sub>

**2's Complement:**
- 20<sub>10</sub> = 00010100<sub>2</sub>
- 30<sub>10</sub> = 00011110<sub>2</sub>
- Result: 20<sub>10</sub> + 30<sub>10</sub> = 00010100<sub>2</sub> + 00011110<sub>2</sub> = 00110010<sub>2</sub> = 50<sub>10</sub>

#### 3. 36 - 12

**Signed Magnitude:**
- 36<sub>10</sub> = 00100100<sub>2</sub>
- -12<sub>10</sub> = 10001100<sub>2</sub>
- Result: 36<sub>10</sub> + (-12<sub>10</sub>) = 00100100<sub>2</sub> + 10001100<sub>2</sub> = 10110000<sub>2</sub> = -48<sub>10</sub>
- This result is incorrect since we didn't use the 1's or 2's complement method.

**1's Complement:**
- 36<sub>10</sub> = 00100100<sub>2</sub>
- 12<sub>10</sub> = 00001100<sub>2</sub> → -12<sub>10</sub> = 11110011<sub>2</sub>
- 24<sub>10</sub> = 00011000<sub>2</sub> 
- Result: 36<sub>10</sub> + (-12<sub>10</sub>) = 00100100<sub>2</sub> + 11110011<sub>2</sub> = 00010111 +1<sub>carry</sub> = 00011000<sub>2</sub> = 24<sub>10</sub>

**2's Complement:**
- 36<sub>10</sub> = 00100100<sub>2</sub>
- 12<sub>10</sub> = 00001100<sub>2</sub> → -12<sub>10</sub> = 11110011<sub>2</sub> [1's complement] + 1<sub>2</sub> = 11110100<sub>2</sub>
- 24<sub>10</sub> = 00011000<sub>2</sub> 
- Result: 36<sub>10</sub> + (-12<sub>10</sub>) = 00100100<sub>2</sub> + 11110100<sub>2</sub> = 00011000<sub>2</sub> +1<sub>carry</sub> [Discarded] = 24<sub>10</sub>

### Summary

This readme file demonstrates binary arithmetic operations using three methods: signed magnitude, 1's complement, and 2's complement for the given operations. 

  
