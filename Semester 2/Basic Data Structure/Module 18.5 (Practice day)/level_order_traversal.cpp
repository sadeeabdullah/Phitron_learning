// https://www.codingninjas.com/studio/problems/level-order-traversal_796002

#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    // we will return the vector as the return type is vector
    vector<int> result;
    if (root == NULL) return result;
    //  we will use a queue to do the traversal.
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();

        result.push_back(p->val);
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);

    }
}