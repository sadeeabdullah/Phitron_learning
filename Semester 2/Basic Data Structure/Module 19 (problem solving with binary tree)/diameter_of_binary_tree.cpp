///https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int mx;

//maximum height getting function
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    // here the counting of the height started
    if (root->left == NULL && root->right == NULL)
        return 1; // leaf node height is 1
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r) + 1;
}


int diameterOfBinaryTree(TreeNode<int> *root){
    mx = 0;
	// getting maximum height of the tree
    int h = maxHeight(root);
    return mx;
}
