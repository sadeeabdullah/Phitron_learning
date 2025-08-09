// problem link:


// solution link : 

class Solution {
public:
        // we need to return a vector so creating a vector first
        vector<int> result;

        // recursive function for inorder traversal
        void inorder(TreeNode *root)
        {
            // base case here if the node goes to null we will return 
            if (root == NULL)
                return;
            
            // recursive calls and operation
            inorder(root->left);
            
            // operation 
            result.push_back(root->val);

            inorder(root->right);
        }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);

        return result;
    }
};