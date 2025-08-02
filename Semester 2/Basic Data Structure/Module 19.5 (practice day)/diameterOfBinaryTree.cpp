//https://leetcode.com/problems/binary-tree-right-side-view/description/


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

    // taking a global max variable to compare the max diameter
    int mx = 0;
    // getting the max diameter of tree

    int maxD(TreeNode *root)
    {
        if(root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) // then it is a leaf node and the height is 1
            return 1;
        
        int l = maxD(root->left);
        int r = maxD(root->right);
        
        mx = max(mx, l + r);

        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int diameter = maxD(root);
        return mx;
    }
};