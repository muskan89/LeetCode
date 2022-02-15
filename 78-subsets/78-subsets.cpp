class Solution {
public:
    vector<vector<int>>ans;    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);
        return ans;
    }
    
    void solve(vector<int>& nums,int start,vector<int>&temp){
        ans.push_back(temp);
        if(start>=nums.size())return;
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            solve(nums,i+1,temp);
            temp.pop_back();
        }
    }
    
};