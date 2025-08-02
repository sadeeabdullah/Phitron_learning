//https://leetcode.com/problems/univalued-binary-tree/


class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root) return true;
        if (root->left &&root->val != root->left->val)
        return false;
        if (root->right &&root->right->val != root->val)  
            return false;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};