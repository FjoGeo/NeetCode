## 200. Number of Islands

- Solution: Use BFS: BFS is iterative.
Visisted positions are stored in a set.
for every position in the grid if it is in not in the set and equals to 1 (land) call BFS with the current position.

-> BFS() -> add visited positions to a doublesidedqueue and to the set. while the deque is not empty visit all directions. --> island + 1


- Solution in C++: Use DFS: visit every position. if positon = 1 call dfs(). set the current position to 0 and use dfs on neighbours --> neighbours will be 0 and num islands + 1.


## 133. Clone Graph

- Solution: DFS + HashMap.
Start at a node and create a copy of the value and map the value to the clone. Go to the neighbours recursively and create a copy of each + mapping. From the second node visit the neighbours, if they are already in the hashmap -> connect them. 
O(n) = Edges + Vertices