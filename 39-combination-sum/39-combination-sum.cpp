class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(0,temp,ans,candidates,target);
        return ans;
    }
    
    void solve(int start,vector<int>&temp,vector<vector<int>>&ans,vector<int>& candidates, int target){
        if(target==0){
            ans.push_back(temp);
        }else if(target<0){
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]<=target){
                temp.push_back(candidates[i]);
            }else{
                break;
            }
            solve(i,temp,ans,candidates,target-candidates[i]);
            if(temp.size()){
                temp.pop_back();
            }
        }
    }
};