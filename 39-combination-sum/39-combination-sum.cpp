class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        int start=0;
        solve(candidates,temp,target,start);
        return ans;
    }
    void solve(vector<int>& candidates,vector<int>&temp, int target,int start){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=start;i<candidates.size() && target>=candidates[i];i++){
            temp.push_back(candidates[i]);
            solve(candidates,temp,target-candidates[i],i);
            temp.pop_back();   
        }
    }
};