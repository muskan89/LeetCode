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
    bool bsearch(TreeNode* root,int key){
        if(root==NULL){
            return false;
        }
        if(root->val == key){
            return true;
        }
        if(root->val > key){
            return bsearch(root->left,key);
        }
        if(root->val < key){
            return bsearch(root->right,key);
        }
        return false;
    }
     
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q){
            return root;
        }
        if((root->val > p->val) && (root->val < q->val) && bsearch(root->left,p->val) && bsearch(root->right,q->val)){
            return root;
        }
        if((root->val > q->val) && (root->val < p->val) && bsearch(root->left,q->val) && bsearch(root->right,p->val)){
            return root;
        }
        if((root->val > p->val) && (root->val > q->val)){
            return lowestCommonAncestor(root->left,p,q);
        }
        if((root->val < p->val) && (root->val < q->val)){
            return lowestCommonAncestor(root->right,p,q);
        }
        return NULL;
        
    }
};