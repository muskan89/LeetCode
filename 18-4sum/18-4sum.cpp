class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long h=(long long)nums[i];
                h+=(long long)nums[j];
                int k=j+1,l=n-1;
                while(k<l && l>j){
                    long long f=(long long)target;
                    f-=(long long)nums[k];
                    f-=(long long)nums[l];
                    if(f==h){
                        ans.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }else if(f>h){
                        k++;
                    }else{
                        l--;
                    }
                }
            }
        }
        
        
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};