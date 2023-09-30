## 136. Single Number
- Solution: Write the numbers in their binary representation. then use XOR = non-equivalence, if two nubres are the same, they will cancel each other out. --> only the non duplicate stays.

## 191. Number of 1 Bits
- Solution: modulo 2 --> returns if its a 1 or zero. integer devision by 2 shifts it to the right. Alternative fancy version: subtract a bit each time with n = n & (n-1).