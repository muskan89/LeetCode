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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int sze=q.size();
            vector<int>temp;
            while(sze--){
                TreeNode* y=q.front();
                q.pop();
                temp.push_back(y->val);
                if(y->left){
                    q.push(y->left);
                }
                if(y->right){
                    q.push(y->right);
                }
                
            }
            cnt++;
            if(cnt%2==0){
                reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
        }
        
        
        return ans;
    }
};