## 226. Invert Binary Tree

- Solution 1 : Use a temp variable to save one root, swap the values of the leaves. Call the function with the swapped values -> selfrecursion.


## 104. Maximum Depth of Binary Tree

- __Solution 1__: DFS -> Check for empty root. Then self-recursive call of the function and adding 1, since the first check equals 0 --> must be at least one leave. 

- Solution 2: BFS -> Check each level. If the node is not empty. pop the last element and add the children to the deque and add one level. Return the level

- Soltion 3: Iterative DFS -> Visit each node and add the depth to the stack. Pop the top of  the stack add the children + depth. Continue till all children are poped.