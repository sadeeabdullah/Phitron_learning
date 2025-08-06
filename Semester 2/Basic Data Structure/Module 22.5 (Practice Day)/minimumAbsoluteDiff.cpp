//https://leetcode.com/problems/minimum-absolute-difference-in-bst/


class Solution {
public:

    // creating vector
    vector<int> mediator;

    // traverse the whole tree and push it into a vector
    void preorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return ;
        }
        mediator.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
int getMinimumDifference(TreeNode* root) {
    preorder(root); // or skip if you've already filled mediator

    //sorting because we will nto get the value sorted without inorder
    sort(mediator.begin(), mediator.end());

    int mn = INT_MAX;

    for (int i = 1; i < mediator.size(); i++)
    {
        mn = min (mn, mediator[i] - mediator[i - 1]);
    }
    return mn;
}

};