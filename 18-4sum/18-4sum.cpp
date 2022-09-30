class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                long long h=(long long)nums[i];
                h+=(long long)nums[j];
                int k=j+1,l=n-1;
                while(k<l && l>j){
                    long long f=(long long)target;
                    f-=(long long)nums[k];
                    f-=(long long)nums[l];
                    if(f==h){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(l>j && nums[l]==nums[l+1])l--;
                    }else if(f>h){
                        k++;
                    }else{
                        l--;
                    }
                    
                }
                while(j+1<n && nums[j]==nums[j+1])j++;
            }
        }
        
        
        return ans;
    }
};