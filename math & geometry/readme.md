## 202. Happy Number

- Solution: Create a hashset for every number calculated, Calculate sum of squares until duplicate or 1. use helper function for sum of squares. first modulo the input value than integer division, until input value is 0.

## 66. Plus One
- Solution: Reverse the input array. Iterate through the array if the current integer equals 9 then set it to 0. Else add one and set the exit condition to end. if the index is iterated out of bound append 1. Reverse the array again.