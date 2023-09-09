#include <queue>
#include <stddef.h>

/**
 * Definition for a binary tree node.*/
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
    int maxDepth(TreeNode* root) {
        
        if (root == NULL)
        {
            return 0;
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int result = 0; // result = level

        while (!q.empty())
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }

            }

            result++;
        }
        return result;
    }
};