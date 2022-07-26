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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return NULL;
        }
        if(n==1){
            TreeNode* r=new TreeNode(nums[0]);
            return r;
        }
        int mid=n/2;
        vector<int>a,b;
        for(int i=0;i<mid;i++){
            a.push_back(nums[i]);
        }
        for(int i=mid+1;i<n;i++){
            b.push_back(nums[i]);
        }
        TreeNode* root=new TreeNode(nums[mid],sortedArrayToBST(a),sortedArrayToBST(b));
        return root;
    }
};