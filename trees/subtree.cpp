#include <stddef.h>
/**
 * Definition for a binary tree node.  */
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL)
        {
            return false;
        }
        if (isSame(root, subRoot))
        {
            return true;
        }
        return isSubtree(root->left, subRoot) || 
                isSubtree(root->right, subRoot);

    }

private:
    bool isSame(TreeNode* root, TreeNode* subroot)
    {
        if (root == NULL && subroot == NULL)
        {
            return true;
        }
        if (root == NULL || subroot == NULL)
        {
            return false;
        }
        if (root->val != subroot->val)
        {
            return false;
        }
        return isSame(root->left, subroot->left) &&
                isSame(root->right, subroot->right);
    }
};