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

void level_order(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        // get the front node
        Node *f = q.front();
        q.pop();

        // print the front node value
        cout << f->val << " ";

        // push the children of the front node to the  queue
        // if (f->left != NULL)
        if (f->left) // null == false
            q.push(f->left);
        // if (f->right != NULL)
        if (f->right) // null == false
            q.push(f->right);
    }
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

    // connecting nodes

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    level_order(root);
    return 0;
}