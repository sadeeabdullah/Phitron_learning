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

long long sum = 0;
// level order printing for testing
// void levelOrder(Node *root)
// {
//     queue<Node *> q;

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         cout << p->val; 

//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
// }


// depth wise traversing with recursion and adding the node value except the leaf
void total (Node *root)
{
    // base case here
    if (root == NULL) return;
    
    if (root ->left == NULL && root ->right == NULL)
        return;
    sum += root->val;
    total(root->left); 
    total(root->right); 
    return;
}

int main()
{

    // declaring root node root first
    Node *root;
    // level order for making the binary tree

    queue<Node *> q;

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
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

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
        p->left = myLeft;
        p->right = myRight;
        
        if (p->left)
            q.push(myLeft);
        if (p->right)
            q.push(myRight);
    }

    total(root);

    cout << sum << endl;
    return 0;
}