///https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519

#include <bits/stdc++.h> 
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

vector<int> getLeftView(TreeNode<int> *root)
{

    // we configuring a vector to return as the return type of the function is vector
    vector<int> result;

    // if root is null then
    if (!root) return result;
    
    // taking a frequency array to check if i push the value from specific level or not
    bool freq[3005] = {false}; // the all element value of the array is false we will conditionally true the value as needed


    // let configure the level wise traversal with tracking the level

    // making pair
    pair<TreeNode<int>*, int> p = {root, 1};

    // making queue with the pair
    queue<pair<TreeNode<int>*, int>> q;
    q.push(p);

    while (!q.empty())
    {
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop();

        // spliting the node and level
        TreeNode<int> * node = parent.first;
        int level = parent.second;

        // main action here 
        if (freq[level] == false)
        {
            result.push_back(node->data);
            freq[level] = true;
        }

        // pushing the child node value;
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    return result;
}