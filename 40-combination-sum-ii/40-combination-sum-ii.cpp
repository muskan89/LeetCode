class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        solve(0,ans,temp,candidates,target);
        return ans;
    }
    
    void solve(int start,vector<vector<int>>&ans,vector<int>&temp,vector<int>& candidates, int target){
        if(target==0){
            ans.push_back(temp);
        }else if(target<0){
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i != start && candidates[i]==candidates[i-1])continue;
            if(candidates[i]<=target){
                temp.push_back(candidates[i]);
            }else{
                break;
            }
            solve(i+1,ans,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }
        
        
        
        
        
        
        
        
    }
};