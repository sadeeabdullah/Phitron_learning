// https://leetcode.com/problems/binary-tree-inorder-traversal/description/


class Solution {
public:

    // creating a vector to push the inorder traversal value and return
    vector<int> result;

    // doing inorder traversal
    void inorder (TreeNode *root)
    {
        if (root == NULL) return;
        inorder (root->left);
        result.push_back(root->val);
        inorder (root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder (root);
        return result;
    }
};