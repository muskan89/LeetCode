class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(0,ans,nums);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
    void solve(int start,set<vector<int>>&ans,vector<int>&nums){
        if(start==nums.size()){
            ans.insert(nums);
        }
        for(int i=start;i<nums.size();i++){
            if(i!=start && nums[i]==nums[i-1])continue;
            swap(nums[i],nums[start]);
            solve(start+1,ans,nums);
            swap(nums[start],nums[i]);
        }
    }
};