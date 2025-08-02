//https://leetcode.com/problems/leaf-similar-trees/


class Solution {
public:

    vector<int> leaf1, leaf2;
/// recursion for getting the leafnode
    void leafNode1(TreeNode* root)
    {
        if (!root) return ;
        if (root->left == NULL && root->right == NULL)
         {
            leaf1.push_back(root->val);
            return;
         }  

         leafNode1(root->left);
         leafNode1(root->right);
         return;
    }
    void leafNode2(TreeNode* root)
    {
        if (!root) return ;
        if (root->left == NULL && root->right == NULL)
         {
            leaf2.push_back(root->val);
            return;
         }  

         leafNode2(root->left);
         leafNode2(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafNode1(root1);
        leafNode2(root2);

        return leaf1 == leaf2;
    }
};