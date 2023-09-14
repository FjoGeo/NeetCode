#include <string>

class Trienode {
public:
    Trienode* children[26];
    bool endOfWord;

    Trienode()
    {
        for (int i = 0; i<26; i++)
        {
            children[i] = NULL;
        }

        endOfWord = false;
    }
};

class WordDictionary {
public:
    // default constructor 
    WordDictionary() {
        root = new Trienode();
    }

    
    void addWord(std::string word) {
        Trienode* node = root;
        int cur = 0;

        for (int i = 0; i < word.size(); i++)
        {
            cur = word[i] - 'a';
            if (node->children[cur] == NULL)
            {
                node->children[cur] = new Trienode();
            }
            node = node->children[cur];
        }
        node -> endOfWord = true;
    }
    
    bool search(std::string word) {
        Trienode* node = root;
        return searchInNode(word, 0, node);
    }
private:
    Trienode* root;

    bool searchInNode(std::string& word, int i, Trienode* node)
    {
        if (node == NULL) return false;

        if (i == word.size()) return node->endOfWord;

        if (word[i] != '.')
        {
            return searchInNode(word, i + 1 , node->children[word[i] -'a']);
        }
        for (int j = 0; j < 26; j++)
        {
            if (searchInNode(word, i + 1, node->children[j]))
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */