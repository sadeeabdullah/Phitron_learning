// https://www.codingninjas.com/studio/problems/insert-into-a-binary-search-tree_1279913


TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    if (root == NULL)
        return new TreeNode<int>(val);
    
    if (val < root->val)
        root->left = insertionInBST(root->left, val);
    else
        root ->right = insertionInBST(root->right, val);
    return root;
}
