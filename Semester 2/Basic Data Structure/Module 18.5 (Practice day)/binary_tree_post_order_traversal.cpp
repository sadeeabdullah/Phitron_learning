//https://leetcode.com/problems/binary-tree-postorder-traversal/


class Solution {
public: 

//declaring a vector for the post order traversal
vector<int> result;
    // for post order traversal
    void post_order(TreeNode *root)
    {
        if (root == NULL) return;
        post_order(root->left);
        post_order(root->right);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        post_order(root);
        return result;
    }
};