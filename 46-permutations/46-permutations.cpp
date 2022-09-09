class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,0,nums);
        return ans;
    }
    
    void solve(vector<vector<int>>&ans,int start,vector<int>& nums){
        if(start>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=start;i<nums.size();i++){
            swap(nums[i],nums[start]);
            solve(ans,start+1,nums);
            swap(nums[start],nums[i]);
            
        }
    }
    
};