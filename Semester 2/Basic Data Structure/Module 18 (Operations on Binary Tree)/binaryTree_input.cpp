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

Node * input_tree()
{
    queue<Node *> q;

    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    // push the root to the queue
    if(root) q.push(root);

    while (!q.empty())
    {
        // store the front in a variable
        Node *p = q.front();
        q.pop();

        // taking input of the child
        int l, r;
        cin >> l >> r;

        // defining the node for myLeft and myRight
        Node *myLeft, *myRight;

        // setting myLeft or myRight to NULL if the given value is -1 or else making a new node with the given value
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // Now connecting the parents node with children node
        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    // we will need the root node to print the tree 
    return root;
}

// level order traversal and printing
void level_order(Node *root)
{
    if (!root)
    {
        cout << "No Tree";
        return;
    }
    // creating a queue
    queue<Node *> q;

    // storing the root in queue
    q.push(root);

    while (!q.empty()) // we will do the process untill the queue is empty
    {
        // storing the front node in a variable
        Node *p = q.front();
        q.pop(); // removing the front

        // printing the front node value
        cout << p->val << " ";

        // pushing the left child node if it is not NULL
        if(p->left)
            q.push(p->left);

        // pushing the right child node if is not NULL
        if(p->right)
            q.push(p->right);
    }
}
int main()
{
    // storing the root
    Node *root = input_tree();

    // printing the tree in level order
    level_order(root);
    return 0;
}