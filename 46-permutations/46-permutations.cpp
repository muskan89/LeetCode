class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        solve(nums,0,n-1);
        return ans;
    }
    void solve(vector<int>&nums, int start,int end){
        cout<<start<<" "<<end<<"\n";
        if(start==end){
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(nums[start],nums[i]);
            solve(nums,start+1,end);
            swap(nums[i],nums[start]);
        }
    }
    
};