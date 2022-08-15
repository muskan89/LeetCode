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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,root,targetSum);
        return ans;
    }
    
    void solve(vector<vector<int>>&ans,vector<int>&temp,TreeNode* root,int targetSum){
        if(root==NULL){
            return;
        }
        temp.push_back(root->val);
        if(!(root->left) && !(root->right) && targetSum==root->val){
            //temp.push_back(root->val);
            ans.push_back(temp);
            //return;
        }
        
        solve(ans,temp,root->left,targetSum - root->val);
        solve(ans,temp,root->right,targetSum - root->val);
        //if(!temp.empty())
        temp.pop_back();
    }
};