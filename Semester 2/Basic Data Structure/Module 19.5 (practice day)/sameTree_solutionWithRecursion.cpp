// //https://leetcode.com/problems/same-tree/



class Solution {
public:
    // solving with recursion
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (!p && !q) return true;
        if (!p && q) return false;
        if (!q  && p)
            return false;

        // base case
        if (p->val != q->val) return false;

        bool l = isSameTree(p->left, q->left);
        bool r = isSameTree(p->right, q->right);

        return l && r;
        
    }
};