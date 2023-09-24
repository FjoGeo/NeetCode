## 70. Climbing Stairs

- Solution:  Memoization = Caching the result, DP Bottom Up.
Store Position in an array DP from zero to n. Bottom problem depends on the previous. Adding the last 2 values to get the previous one, like fibonacci n = 5 --> [8 5 3 2 1 1] -->
1 + 1 = 2 , 1+2 = 3 2+3 = 5 5 + 3 = 8. Only 2 variables neede not an entire array. Loop n-1 times.

## 746. Min Cost Climbing Stairs

- Solution: DP. Solve subproblmens first because of dependecy --> solve from right to left. Append a 0 to the cost array to garanty two values.