#include <string>

class TrieNode {
public:
    TrieNode* children[26]; // array of size 26
    bool endOfWord;

    TrieNode() // constructor
    {
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL; 
        }
        endOfWord = false;
    }
};


class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(std::string word) {
        TrieNode* node = root;
        int cur = 0;

        for (int i = 0; i < word.size(); i++)
        {
            cur = word[i] - 'a'; // subtracts, because  in C++ 'a' = 97 --> ASCII 
            if (node->children[cur] == NULL)
            {
                node->children[cur] = new TrieNode();
            }
            node = node->children[cur];
        }
        node->endOfWord = true;
    }
    
    bool search(std::string word) {
        TrieNode* node = root;
        int cur = 0;

        for (int i = 0; i < word.size(); i++)
        {
            cur = word[i] - 'a';
            if (node->children[cur] == NULL)
            {
                return false;
            }
            node = node->children[cur];
        }
        return node->endOfWord;
    }
    
    bool startsWith(std::string prefix) {
                TrieNode* node = root;
        int cur = 0;

        for (int i = 0; i < prefix.size(); i++)
        {
            cur = prefix[i] - 'a';
            if (node->children[cur] == NULL)
            {
                return false;
            }
            node = node->children[cur];
        }
        return true;
    }
private:
    TrieNode* root;
};

/**
This class is used as a building block for constructing a Trie data structure, 
which is commonly used for efficient string storage and retrieval operations, 
such as dictionary searches and autocomplete features.
 */