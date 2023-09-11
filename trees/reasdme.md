## 226. Invert Binary Tree

- Solution 1 : Use a temp variable to save one root, swap the values of the leaves. Call the function with the swapped values -> selfrecursion.


## 104. Maximum Depth of Binary Tree

- __Solution 1__: DFS -> Check for empty root. Then self-recursive call of the function and adding 1, since the first check equals 0 --> must be at least one leave. 

- Solution 2: BFS -> Check each level. If the node is not empty. pop the last element and add the children to the deque and add one level. Return the level

- Soltion 3: Iterative DFS -> Visit each node and add the depth to the stack. Pop the top of  the stack add the children + depth. Continue till all children are poped.


## 543. Diameter of Binary Tree

- Solution 1: 'global' result variable ,write a nested function, DFS -> self recursion, traverse the tree and add 1 to the height for each site. Diameter = 2 + left + right



## 110. Balanced Binary Tree

- Solution 1: create a nested function, that returns if the tree is balanced and the height. balance is given by actual height difference and a check for previous balance.



## 100. Same Tree
- Solution 1: DFS --> check for edge cases = non empty trees.  Selfrecursion moving both trees in the same direction and compare the return values.


## 572. Subtree of Another Tree
- Solution 1: helper function to detect same trees, where the whole subtree is compared. edge cases with empty trees. traverse tree recursively and compare if the tree is the same. comparison by helper function and moving along the tree with selfrecursion.