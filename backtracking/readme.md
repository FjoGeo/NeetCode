## 78. Subsets

- Solution: Backtracking -> using DFS and traversing the tree with each node having the option to add a element or don't add.

## 39. Combination Sum

- Solution: Backtracking -> Using the two branch approach by calling DFS twice. adding the vlue of the pointer to the list until it is equal or larger the target. if it is larger pop it and move the pointer to the next value of candidates. add value, if to large -> pop -> move pointer if equal add to result set.