## 703. Kth Largest Element in a Stream

- Solution: Create a heap datastructure, beacuse a dele is O(log n) and a returning the min takes O(1). Delete from the heap unti it is of length k, so you can return the min. Returning the first value, because it is always the minimum.

- Notes:  greater -> It can be used as a comparison criterion for various standard library functions, including sorting and ordering data structures like std::priority_queue.


## 1046. Last Stone Weight

- Solution: Use MaxHeap, turning output to a maxHeap takes O(n). Getting the max value takes O(log n).
To get a maxHeap from a minHeap multiply every value with -1. --> pop the 2 smallest numbers from heap, if they are not the same value add the difference to the heap. Repeat unil heap is empty or has only 1 value. Return value of last value or 0. 