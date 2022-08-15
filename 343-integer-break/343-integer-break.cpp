class Solution {
public:
    int integerBreak(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        int ans=1;
        for(int i=1;i<=n;i++){
            dp[i][1]=i;
        }
        for(int i=2;i<=n;i++){
            for(int j=2;j<=i;j++){
                for(int k=1;k<i;k++){
                    dp[i][j]=max(dp[i][j],dp[i-k][j-1]*k);
                }
            }
        }
        ans=*max_element(dp[n].begin()+2,dp[n].end());
        return ans;
    }
};