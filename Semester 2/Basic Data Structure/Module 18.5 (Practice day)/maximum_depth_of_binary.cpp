//https://leetcode.com/problems/maximum-depth-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max_depth(TreeNode *root)
    {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        int l = max_depth(root->left);
        int r = max_depth(root->right);
        return max(l,r) + 1;
    }
    int maxDepth(TreeNode* root) {
        return max_depth(root);
    }
};