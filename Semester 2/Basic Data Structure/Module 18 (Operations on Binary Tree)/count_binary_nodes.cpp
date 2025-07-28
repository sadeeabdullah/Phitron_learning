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

Node *input_tree()
{
    // we take the first value
    int val;
    cin >> val;

    //defining root 
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    
    //manually push the root to the queue and making a queue for that
    queue<Node *> q;
    q.push(root);

    // now we will use a loop to traverse lever order untill the queue is empty
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop(); // removing the front node

        // now we will take input of the left and right child node value
        int l, r;
        cin >> l >> r;
        
        //making nodes with given value
        // defining nodes
        Node *myLeft, *myRight;
         
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        //connecting the child nodes with parent node
        p->left =myLeft;
        p->right = myRight;

        if(p->left) // if it is not NULL
            q.push(p->left);
        if(p->right) // if it is not NULL
            q.push(p->right);
    }

    return root;
}

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int main()
{
    Node *root = input_tree();
    cout << count_node(root) << endl;
    return 0;
}