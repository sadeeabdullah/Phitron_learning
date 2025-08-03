#include <bits/stdc++.h>
using namespace std;

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

Node *inputTree()
{
    queue<Node *> q;
    int val;
    cin >> val;

    Node *root;

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
        Node *myLeft, *myRight;

        

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);


        //connect the nodes
        p->left = myLeft;
        p->right = myRight;

        if (myLeft)
            q.push(myLeft);
        if (myRight)
            q.push(myRight);
    }
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    
    if (root->val == val)
        return true;
    
    if (val > root->val)
        return search(root->right, val);
    else 
        return search(root->left, val);
}

int main()
{
    Node *root = inputTree();
    int val;
    cin >> val;
    cout << ((search(root, val)) ? "Found" : "Not Found") << endl;
    return 0;
}