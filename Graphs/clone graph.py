"""
# Definition for a Node.
class Node(object):
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution(object):
    def cloneGraph(self, node):
        """
        :type node: Node
        :rtype: Node
        """
        oldToNew = {} # hashmap

        def dfs(node):
            if node in oldToNew: # is the node in the hashmap
                return oldToNew[node] # return the clone
            
            copy = Node(node.val)
            oldToNew[node] = copy

            for neigh in node.neighbors:
                copy.neighbors.append(dfs(neigh))
            return copy
        
        return dfs(node) if node else None