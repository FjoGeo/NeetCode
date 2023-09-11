# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# class Solution(object):
#     def isSameTree(self, p, q):
#         """
#         :type p: TreeNode
#         :type q: TreeNode
#         :rtype: bool
#         """
#         if not p and not q:
#             return True
        
#         if not p or not q or p.val != q.val:
#             return False


#         return (self.isSameTree(p.left, q.left) and
#         self.isSameTree(p.right, q.right))


# My solution:
class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        tree_1, tree_2 = [], []

        def dfs(root, tree):

            if not root:
                tree.append(None)
                return 
            

            dfs(root.left, tree)
            dfs(root.right, tree)

            tree.append(root.val)

            return
        
        dfs(p, tree_1)
        dfs(q, tree_2)


        return tree_1 == tree_2 