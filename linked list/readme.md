## 206. reversed linked list

- Solution 1: Iterative -> using two pointers and a temp variable (nxt) to save the next value. then assign the next value to prev and the previous value to the current (shifting the pointer). assign the current var to the saved temp var (shifting second pointer)

- Solution 2: recursive --> create temp var that equals the first element. check if there is a next element, if yes call the function and set newHead to head --> last element of list will be head. Then reverse the links. Last set the next value to None


## 21. Merge Two Sorted Lists

- Solution 1: Create an empty ListNode as dummy to avoid edge case. while loop to compare the values and insert the lower value into dummy. add the remaining values of the non empty list to the dummy.