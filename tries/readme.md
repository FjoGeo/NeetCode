## 208. Implement Trie (Prefix Tree)

- Solution: Create a new class TrieNode with children as dictionarys and the property endOfWord as boolean which marks the end.
1. Initialize with an empty TrieNode
2. Insert function: set a variable with the current node. Iterate through the inserted word and check if it is already in the TrieNode. If not add it as empty value (dictionary character : '') if it is in the node set the current value to it (move forward). Set the end of the word.
3. Search: current var. -> compare each char with node -> check for end of word
4. startsWith: same as search, but don't check for end of word



## 211. Design Add and Search Words Data Structure
- Sollution: 
1. Trienode with hashmap and endOfWord var. 
2. Initialize empty TrieNode
3. addWord -> iterate through the word and check if it is in the TrieNode, if not add a new TrieNode. Update current pointer to the TrieNode. At the end set the end variable.
4. Search: Use DFS. Function that iterates throught the word. If the current character is a '.' check all values of the child (characters or NULL). Return True if it is a char. If the current char is a character and not '.' compare it to the children. Lastly check if the word ends.