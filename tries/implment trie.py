class TrieNode:
    def __init__(self):
        self.children = {}
        self.endOfWord = False


class Trie(object):

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        """
        :type word: str
        :rtype: None
        """
        cur = self.root 

        for c in word:
            if c not in cur.children: # does the character exists?
                cur.children[c] = TrieNode() # create a new TrieNode
            cur = cur.children[c]
        cur.endOfWord = True # "mark" the last character


    def search(self, word):
        """
        :type word: str
        :rtype: bool
        """
        cur = self.root

        for c in word:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return cur.endOfWord # end of word is set to True
        

    def startsWith(self, prefix):
        """
        :type prefix: str
        :rtype: bool
        """

        cur = self.root

        for c in prefix:
            if c not in cur.children:
                return False 
            cur = cur.children[c]
        return True

        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)