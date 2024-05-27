# Binary Arithmetic Operations Using Signed, 1's Complement, and 2's Complement

This document demonstrates the calculation of three arithmetic operations using signed, 1's complement, and 2's complement binary representations.

## Binary Representation (8-bit)

We'll use 8-bit binary representation for simplicity.

### Conversion of Decimal Numbers to Binary:

- \(10_{10}\) = `00001010<sub>2</sub>`
- \(19_{10}\) = `00010011<sub>2</sub>`
- \(20_{10}\) = `00010100<sub>2</sub>`
- \(30_{10}\) = `00011110<sub>2</sub>`
- \(36_{10}\) = `00100100<sub>2</sub>`
- \(12_{10}\) = `00001100<sub>2</sub>`

### Negative Numbers in Signed, 1's Complement, and 2's Complement:

- **Signed magnitude:** For a negative number, flip the most significant bit (MSB) to 1.
  - \( -19_{10} \): \( 10010011_2 \)
  - \( -12_{10} \): \( 10001100_2 \)

- **1's complement:** Invert all the bits.
  - \( 19_{10} \): \( 00010011_2 \) → \( -19_{10} \): \( 11101100_2 \)
  - \( 12_{10} \): \( 00001100_2 \) → \( -12_{10} \): \( 11110011_2 \)

- **2's complement:** Invert all the bits and add 1.
  - \( 19_{10} \): \( 00010011_2 \) → \( 11101100_2 \) + 1 = \( 11101101_2 \)
  - \( 12_{10} \): \( 00001100_2 \) → \( 11110011_2 \) + 1 = \( 11110100_2 \)

## Perform Operations

### 1. \(10 - 19\)

- **Signed magnitude:**
  \[
  10_{10} = 00001010_2 \\
  -19_{10} = 10010011_2 \\
  \text{Result (signed magnitude)} = \text{}
  \]

- **1's complement:**
  \[
  10_{10} = 00001010_2 \\
  -19_{10} = 11101100_2 \\
  00001010 + 11101100 = 11110110 \\
  \text{Since there's a carry, add it to the result:} \\
  11110110 + 1 = 11110111 \\
  \text{Convert back: } 11110111 \text{ is } -9_{10}
  \]

- **2's complement:**
  \[
  10_{10} = 00001010_2 \\
  -19_{10} = 11101101_2 \\
  00001010 + 11101101 = 11110111 \\
  \text{Result: } 11110111 \text{ is } -9_{10}
  \]

### 2. \(20 + 30\)

- **Signed magnitude:**
  \[
  20_{10} = 00010100_2 \\
  30_{10} = 00011110_2 \\
  00010100 + 00011110 = 00110010 \\
  \text{Result: } 00110010 \text{ is } 50_{10}
  \]

- **1's complement:**
  \[
  20_{10} = 00010100_2 \\
  30_{10} = 00011110_2 \\
  00010100 + 00011110 = 00110010 \\
  \text{Result: } 00110010 \text{ is } 50_{10}
  \]

- **2's complement:**
  \[
  20_{10} = 00010100_2 \\
  30_{10} = 00011110_2 \\
  00010100 + 00011110 = 00110010 \\
  \text{Result: } 00110010 \text{ is } 50_{10}
  \]

### 3. \(36 - 12\)

- **Signed magnitude:**
  \[
  36_{10} = 00100100_2 \\
  -12_{10} = 10001100_2 \\
  \text{Result (signed magnitude)} = \text{}
  \]

- **1's complement:**
  \[
  36_{10} = 00100100_2 \\
  -12_{10} = 11110011_2 \\
  00100100 + 11110011 = 00010111 + 1 \text{ (with end-around carry)} \\
  00010111 = 23_{10}
  \]

- **2's complement:**
  \[
  36_{10} = 00100100_2 \\
  -12_{10} = 11110100_2 \\
  00100100 + 11110100 = 00011000 \\
  \text{Result: } 00011000 \text{ is } 24_{10}
  \]

## Summary of Results:

1. \(10 - 19\):
   - Signed magnitude: \( \text{} \)
   - 1's complement: \(-9\)
   - 2's complement: \(-9\)

2. \(20 + 30\):
   - Signed magnitude: \(50\)
   - 1's complement: \(50\)
   - 2's complement: \(50\)

3. \(36 - 12\):
   - Signed magnitude: \( \text{} \)
   - 1's complement: \(23\)
   - 2's complement: \(24\)

This document demonstrates the operations using signed, 1's complement, and 2's complement binary arithmetic.

