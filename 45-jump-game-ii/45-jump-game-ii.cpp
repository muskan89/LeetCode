class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,10001);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int y=min(i+nums[i],n-1);
            for(int j=i+1;j<=y;j++){
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};