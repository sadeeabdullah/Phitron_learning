// https://leetcode.com/problems/invert-binary-tree/description/


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if (root == NULL) return NULL;
        // we will level order traversal to invert the tree
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode * p = q.front();
            q.pop();

            TreeNode *tmp = p->left;
            p->left = p->right;
            p->right = tmp;
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        return root;
    }
};