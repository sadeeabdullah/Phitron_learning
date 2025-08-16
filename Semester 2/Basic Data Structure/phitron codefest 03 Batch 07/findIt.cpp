#include <bits/stdc++.h>
using namespace std;

// creating nodes for binary tree
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// creating function for taking input value of nodes in a tree
Node *inputTree()
{
    int n;
    cin >> n;
    Node *root;

    if (n != -1)
        root = new Node(n);
    else
        root = NULL;

    // taking queue
    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int left, right;
        Node *leftVal, *rightVal;
        cin >> left >> right;

        if (left == -1)
            leftVal = NULL;
        else
            leftVal = new Node(left);
        if (right == -1)
            rightVal = NULL;
        else
            rightVal = new Node(right);

        // connecting left and right value to the root node

        p->left = leftVal;
        p->right = rightVal;

        // now pushing these value to the queue
        if (leftVal)
            q.push(leftVal);
        if (rightVal)
            q.push(rightVal);
    }

    return root;
}



int main()
{
    // for input the tree
    Node *root = inputTree();
    levelOrder(root);
    return 0;
}