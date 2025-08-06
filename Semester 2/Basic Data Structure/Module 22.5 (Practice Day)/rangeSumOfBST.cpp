// https://leetcode.com/problems/range-sum-of-bst/


class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        long long sum = 0 ;
        // we will traverse level order and check the range and add the value to the sum

        queue<TreeNode *> q;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            TreeNode* p = q.front();
            q.pop();

            if (p->val >= low && p->val <= high)
                sum += p->val;
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }

        return sum;
    }
};