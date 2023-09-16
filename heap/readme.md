## 703. Kth Largest Element in a Stream

- Solution: Create a heap datastructure, beacuse a dele is O(log n) and a returning the min takes O(1). Delete from the heap unti it is of length k, so you can return the min. Returning the first value, because it is always the minimum.