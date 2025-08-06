// https://leetcode.com/problems/increasing-order-search-tree/


class Solution {
public:

    vector<int> v;

    // inorder 
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* makeTree(vector<int> v)
    {
        TreeNode *root = new TreeNode(v[0]);
        TreeNode *tmp = root;
        for (int i = 1; i < v.size(); i++)
        {
            TreeNode *right = new TreeNode(v[i]);
            tmp->right = right;
            tmp = tmp->right;
        }
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return makeTree(v);
    }
};