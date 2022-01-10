/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inorder(TreeNode *root, vector<int> &path){
        if(root != NULL){
            inorder(root->left,path);
            path.push_back(root->val);
            inorder(root->right,path);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> path;
        inorder(root,path);
        return path;
    }
};
