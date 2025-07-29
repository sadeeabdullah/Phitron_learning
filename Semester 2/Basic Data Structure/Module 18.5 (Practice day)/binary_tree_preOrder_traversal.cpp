// https://leetcode.com/problems/binary-tree-preorder-traversal/description/

class Solution
{
public:
    // we are taking a vector to return and we will push all the pre order traversal value in it
    vector<int> result;

    // doing the preorder traversal
    void preOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        // pushing the root value in the vector
        result.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        preOrder(root);
        return result;
    }
};