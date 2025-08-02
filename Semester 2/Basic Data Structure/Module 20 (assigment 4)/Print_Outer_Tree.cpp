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

Node * inputTree(){
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
    return root;
}


// depth wise traversing with recursion and adding the node value except the leaf
vector<int> result;

void traverse_left(Node *root)
{
    if (!root)
        return;
    while (root)
    {
        result.push_back(root->val);
        if ( root ->left)
            root = root->left;
        else
            root = root->right;
    }
}
void traverse_right(Node *root)
{
    if (!root)
        return;
    
    while (root)
    {
        cout << root ->val << " ";
        if (root->right)
        {
            // shift root to root -> right
            root = root->right;
        }
        else 
        {
            root = root->left;
        }
    }
    
}

int main()
{
    Node *root = inputTree();
    traverse_left(root->left);
    reverse(result.begin(), result.end());

    for (int val : result)  
        cout << val << " ";
    cout << root ->val << " ";
    traverse_right(root->right);
    return 0;
}