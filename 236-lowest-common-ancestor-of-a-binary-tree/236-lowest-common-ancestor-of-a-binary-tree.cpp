/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p || root==q){
            return root;
        }
        if((find(root->left,p)&&find(root->right,q))||(find(root->left,q)&&find(root->right,p))){
            return root;
        }
        if((find(root->left,p)&&find(root->left,q))){
            return lowestCommonAncestor(root->left,p,q);
        }
        if((find(root->right,p)&&find(root->right,q))){
            return lowestCommonAncestor(root->right,p,q);
        }
        return NULL;
    }
    
    bool find(TreeNode* root, TreeNode* p){
        if(root==NULL){
            return false;
        }
        if(root==p){
            return true;
        }
        return find(root->left,p)||find(root->right,p);
    }
};