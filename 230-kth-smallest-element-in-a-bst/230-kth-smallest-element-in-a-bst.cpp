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
    int ans=0;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }
        inorder(root,k);
        return ans;
    }
    void inorder(TreeNode* root,int &k){
        if(root==NULL){
            return;
        }
        inorder(root->left,k);
        if(--k == 0){
            ans=root->val;
            return;
        }
        inorder(root->right,k);
    }
};