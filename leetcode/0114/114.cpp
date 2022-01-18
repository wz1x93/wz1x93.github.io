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

    void preorder(TreeNode *root, vector<int> &path){
        if(root != NULL){
            path.push_back(root->val);
            preorder(root->left,path);
            preorder(root->right,path);
        }
    }

    void doing(TreeNode *root, vector<int> &path, int idx){
        if(idx == path.size()){
            return;
        }
        TreeNode* tmp = new TreeNode(path[idx]);
        root->left  = nullptr;
        root->right = tmp;
        doing(tmp,path,idx+1);

    }
    
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        vector<int> path;
        preorder(root,path);
        doing(root, path, 1);
    }
};
