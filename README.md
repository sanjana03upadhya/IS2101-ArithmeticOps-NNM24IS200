# IS2101-ArithmeticOps-NNM24IS200

Implementation of integer multiplication (shift-add) and division (restoring & non-restoring) algorithms in C with signed support.

---

## Author
- **Name:** Sanjana C Upadhya  
- **USN:** NNM24IS200  
- **Section:** ISE - D  

---

## Project Overview
This repository contains C programs implementing basic arithmetic algorithms at a low-level (bitwise) simulation:

1. **Sequential (Shift-Add) Multiplication** – `sanjana_mult.c`  
   - Performs multiplication of signed integers using 2's complement.  
   - Implements step-by-step shift-and-add logic.  

2. **Restoring Division Algorithm** – `sanjana_restoring.c`  
   - Divides positive integers using the classic restoring division algorithm.  
   - Outputs quotient and remainder.  

3. **Non-Restoring Division Algorithm** – `sanjana_nonrestoring.c`  
   - Divides positive integers using the non-restoring division algorithm.  
   - Shows step-by-step trace output (remainder, quotient bits).  
   - Outputs final quotient and remainder after correction.  

---

## Inputs and Outputs

### Sequential (Shift-Add) Multiplication
- **Inputs:** Two integers `A` (multiplicand) and `B` (multiplier)  
- **Output:** Product of `A` and `B`  

Example:
Enter multiplicand: 6
Enter multiplier: -3
Result = -18

### Restoring Division
- **Inputs:** Dividend `Q`, Divisor `M` (both positive integers)  
- **Output:** Quotient and Remainder  

Example:
Enter dividend: 10
Enter divisor: 3
Quotient = 3, Remainder = 1

### Non-Restoring Division
- **Inputs:** Dividend `Q`, Divisor `M` (both positive integers)  
- **Output:** Quotient and Remainder (with trace of steps if enabled)  

Example:
Enter dividend: 19
Enter divisor: 4
Step 1: Remainder = 1, Quotient = 1
Step 2: Remainder = -2, Quotient = 10
Step 3: Remainder = 3, Quotient = 100
Step 4: Remainder = -1, Quotient = 1000
Final Result -> Quotient = 4, Remainder = 3

---

## How to Compile and Run

### Sequential Multiplication
```bash
gcc sanjana_mult.c -o sanjana_mult
./sanjana_mult
```
### Restoring Division
```bash
gcc sanjana_restoring.c -o sanjana_restoring
./sanjana_restoring
```
### Non-Restoring Division
```bash
gcc sanjana_nonrestoring.c -o sanjana_nonrestoring
./sanjana_nonrestoring
```
---

## Sample Output Screenshots

### Below are example outputs of the programs:

### Sequential Multiplication:
<img width="190" height="64" alt="Screenshot 2025-09-13 064955" src="https://github.com/user-attachments/assets/f7ae5c0c-61fc-4c97-91cd-ad50295d04b6" />

### Restoring Division:
<img width="327" height="72" alt="Screenshot 2025-09-13 065135" src="https://github.com/user-attachments/assets/16474cb1-c0c5-4d7b-8418-fd59cb17fecc" />

### Non-Restoring Division:
<img width="385" height="164" alt="Screenshot 2025-09-13 065232" src="https://github.com/user-attachments/assets/1206ce66-31ad-4333-8e63-5f97739f0602" />

---

## Notes / Algorithm Explanation

### Sequential (Shift-Add) Multiplication:
Multiplies integers by examining each bit of the multiplier. If the bit is 1, the multiplicand shifted by the bit position is added to the product. Supports signed integers using 2's complement.

### Restoring Division:
Shifts dividend into an accumulator, subtracts the divisor, and restores if the subtraction would result in negative remainder. Produces quotient and remainder.

### Non-Restoring Division:
Similar to restoring division, but the operation depends on the sign of the accumulator. No restoring step is needed after every subtraction; a final correction is applied if necessary.

### Comparison:
Restoring division always restores the remainder if subtraction is negative, while non-restoring is faster as it only corrects at the end.
---
