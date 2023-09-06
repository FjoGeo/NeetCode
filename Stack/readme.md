## 20. Valid Parentheses

- Solution 1: create a stack and a hashmap. if the string is an opening bracket, add it to the stack. if the current char is a closing bracket compare it against the last element (muist be non empty) of the stack. If they match delete the last element of stack (pop). return the stack (must be empty) 
