// https://leetcode.com/problems/diameter-of-binary-tree/description/


class Solution {
public:
    // mx variable to get the max height total or the diameter
    int mx = 0;

    // height function to get and height of every node and get the maximum
    int height(TreeNode *root)
    {
        if (root == NULL) return 0;

        int l = height(root -> left);
        int r = height(root -> right);

        mx = max(mx, l + r);
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return mx;
    }
};