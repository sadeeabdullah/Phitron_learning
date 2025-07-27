#include <bits/stdc++.h>
using namespace std;

// node for Binary tree.
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

//preorder function
void preorder(Node *root)
{
    //base case
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";  // root
    preorder(root->left);  // left
    preorder(root->right); // right
}
int main()
{
    // creating node manually
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);

    // connecting nodes

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    c->left = f;


    preorder(root); // expected output: 10 20 40 70 30 50 60 
    return 0;
}