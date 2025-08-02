// https://leetcode.com/problems/invert-binary-tree/description/

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
// creating vector to return
    vector<int> v;
    // using freq arr
    bool freq[105] = {false};
    vector<int> rightSideView(TreeNode* root) {
// creating function to get the right view traversing whole tree in level order


    //taking pair for tracking the level
    pair<TreeNode *, int> pr;
    //taking a queue for traversing
    queue<pair<TreeNode *, int>> q;
//manually pushing the root value into it
    if (root)
        q.push({root,1});
    while (!q.empty())
    {
        pair<TreeNode *, int> p = q.front();
        q.pop();

        //spliting the pair
        TreeNode *node = p.first;
        int level = p.second;
        if (freq[level] == false)
        {
            v.push_back(node->val);
            freq[level] = true;
        }
        if (node->right)
            q.push({node->right, level + 1});
        if (node->left)
            q.push({node->left, level + 1});
    }
    return v;
        
    }
};