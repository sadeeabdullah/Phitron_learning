// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/


class Solution {
public:

    // function for converting array to bst
    TreeNode *convert(vector<int> nums,int l, int r)
    {
        if (l > r)
            return NULL;
        
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(nums[mid]);

        //getting the left and right sub tree for it
        TreeNode *leftTree = convert(nums, l, mid - 1);
        TreeNode *rightTree = convert(nums, mid + 1, r);

        // connecting with the root tree
        root->left = leftTree;
        root ->right = rightTree;
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root = convert(nums, 0, nums.size() - 1);
        return root;
    }
};