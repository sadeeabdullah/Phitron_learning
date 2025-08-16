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

map<int, int> mp;
// get the leaf nodes
void leafNodes(Node *root)
{
    if(root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        mp[root->val]++;
        return;
    }
    leafNodes(root->left);
    leafNodes(root->right);
}

int main()
{
    // for input the tree
    Node *root = inputTree();
    leafNodes(root);

    int maxCount  = 0;
    int maxVal = INT_MAX;
    for(auto it : mp)
    {
        int val = it.first;
        int count = it.second;
        if (count > maxCount)
        {
            maxCount = count;
            maxVal = val;
        }
        else if(count == maxCount)
        {
            maxVal = min(maxVal, val);
        }
    }
    cout << maxVal << endl;
    return 0;
}