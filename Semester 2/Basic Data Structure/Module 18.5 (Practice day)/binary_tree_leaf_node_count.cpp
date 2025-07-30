// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int leaf_node_count (BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = leaf_node_count(root->left);
    int r = leaf_node_count(root->right);
    return l + r;
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = leaf_node_count(root);
    return count;
}