//https://leetcode.com/problems/same-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1, q2;

        q1.push(p);
        q2.push(q);

        while (!q1.empty() && !q2.empty()) {
            TreeNode* node1 = q1.front(); q1.pop();
            TreeNode* node2 = q2.front(); q2.pop();

            // Both are null — continue to next pair
            if (!node1 && !node2) continue;

            // One is null, the other is not — trees differ
            if (!node1 || !node2) return false;

            // Values differ — trees are not same
            if (node1->val != node2->val) return false;

            // Push children of both nodes in same order
            q1.push(node1->left);
            q1.push(node1->right);

            q2.push(node2->left);
            q2.push(node2->right);
        }

        // Both queues must be empty if trees are identical
        return q1.empty() && q2.empty();
    }
};
