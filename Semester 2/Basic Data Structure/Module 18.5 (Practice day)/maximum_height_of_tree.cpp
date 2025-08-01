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


// creating function to take input of binary tree node
Node * leveOrderInput()
{
    // we are taking queue to have the have the tree
    queue<Node *> q;

    int val;
    cin >> val;

    // we will create a node with the val
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    
    if (root != NULL)
    q.push(root);

    //after pushing the root to the queue we will add its child to the queue 
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myleft;
        if (l == -1) myleft = NULL;
        else myleft = new Node(l);
        Node *myRight;
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        //connecting the left and right node with the parent node
        p->left = myleft;
        p->right = myRight;

        if (p->left) q.push(myleft);
        if (p->right) q.push(myRight);
    }
    return root;
}

// level order printing
void levelOrderPrinting(Node *root)
{

    // if the root is null then it has no tree
    if (!root)
    {
        cout << "NO tree";
        return;
    }
    // we taking another queue to traverse the tree
    queue<Node *> q;

    // we are pushing the the root into it manually
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";
        if (p->left)
            q.push(p->left) ;
        if (p->right)
            q.push(p->right) ;

    }
    
}
int main()
{
    // taking input
    Node * root= leveOrderInput();

    // showing output
    levelOrderPrinting(root);

    return 0;
}