from collections import deque

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """

        # DFS
        # if not root:
        #     return 0
        

        # return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))



        # BFS
        # counting of levels / children

        # if not root:
        #     return 0
        
        # level = 1
        # q = deque([root])

        # while q:

        #     for i in range(len(q)):
        #         node = q.popleft()
        #         if node.left:
        #             q.append(node.left)
        #         if node.right:
        #             q.append(node.right)

        #     level += 1

        # return level



        # Iterative DFS

        
        stack = [[root],1]
        res = 0


        while stack:
            node, depth = stack.pop() # pop returns deleted value, here the root and the depth

            if node:
                res = max(res, depth) # update maximum depth
                stack.append([node.left, depth + 1])
                stack.append([node.right, depth + 1])

        return res



