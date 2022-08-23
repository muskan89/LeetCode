class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size(),maxi=1;
        vector<int>dp(n,1),dpp(n,1);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    if(dp[i]+1>dp[j]){
                        dp[j]=dp[i]+1;
                        maxi=max(maxi,dp[j]);
                        dpp[j]=dpp[i];
                    }else if(dp[i]+1 == dp[j]){
                        dpp[j]+=dpp[i];
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(dp[i]==maxi){
                ans+=dpp[i];
            }
        }
        return ans;
    }
};