//https://leetcode.com/problems/search-in-a-binary-search-tree/

// solution without recursion:

class Solution {
public:

    
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != NULL)
        {
            if (root ->val == val)
                return root;
            if (root->val > val)
            {
                root = root->left;
            }
            else
            {
                root = root ->right;
            }
        }
        return NULL;
    }
};



// solution with recursion

class Solution {
public:

    
    TreeNode* searchBST(TreeNode* root, int val) {
    //with recursion
    if (!root) return NULL;
    if (root ->val == val)
        return root;
    if (val < root->val)
        return searchBST(root->left, val);
    else
        return searchBST(root->right, val);
    }
};