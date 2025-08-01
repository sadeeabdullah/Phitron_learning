// https://www.codingninjas.com/studio/problems/code-find-a-node_5682

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {

    //if the tree is null then we have return false
    if (root == NULL) return false;

    // we taking a queue to level order traversal
    queue<BinaryTreeNode <int>*> q;
    q.push(root);

    bool isFound = false;

    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();
        
        if (p->data == x)
        {
            isFound = true;
            break;
        }

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return isFound;
}