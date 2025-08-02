#include <bits/stdc++.h>
using namespace std;

// node class defination for binary node
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

void print(Node *root, int depth)
{
    if (root == NULL) return;

    if (depth == 0)
    {
        cout << root ->val << " ";
        return;
    }
    print(root->left, depth - 1);
    print(root->right, depth - 1);
}

int main()
{
    int nodeCount = 0;
    
    // declaring root node root first
    Node *root;

    // level order for making the binary tree

    queue<pair<Node *, int>> q;

    int val;
    cin >> val;

    // creating node with the value
    if (val != -1)
    {
        root = new Node(val);
    }
    else
        root = NULL;
    if (root)
    {
        nodeCount++;
        q.push({root, 0});
    }
    int depth = 0;
    while (!q.empty())
    {
       pair<Node *, int>  p = q.front();
        q.pop();

        //splitting the pair
        Node *pNode = p.first;
        int level = p.second;

        depth = level;
        int l, r;
        cin >> l >> r;

        // declaring node for left child and right child
        Node *myLeft, *myRight;
        // making the child node and connecting
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        pNode->left = myLeft;
        pNode->right = myRight;
        
        if (myLeft)
        {
            nodeCount++;
            q.push({myLeft, level + 1});
        }
        if (myRight)
        {
            nodeCount++;
            q.push({myRight, level + 1});
        }
    }

    int x;
    cin >> x;
    if (x > depth || x < 0)
        cout << "Invalid" << endl;
    else 
    {
        print(root, x);
    }
    return 0;
}