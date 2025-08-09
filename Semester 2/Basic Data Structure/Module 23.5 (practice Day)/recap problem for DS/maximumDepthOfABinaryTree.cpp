// problem link : https://leetcode.com/problems/maximum-depth-of-binary-tree/

// solution: 

class Solution {
public:
    // to get the max height we have to measure the left and right node height then get the maximum of them and add 1 with it
    // why + 1? while counting the left and right node we will not count the root height with each so we have to add 1 at the end

    int maxHeight(TreeNode *root)
    {
        // base case if we reach to the root we will return 0
        if (root == NULL)
            return 0;
        
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);

        return max(l, r) + 1;
    }

    int maxDepth(TreeNode* root) {
        int result = maxHeight(root);
        return result;
    }
};