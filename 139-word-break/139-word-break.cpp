class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,bool>mp;
        for(string s:wordDict){
            mp[s]=true;
        }
        int n=s.length();
        vector<bool>dp(n+1);
        dp[0]=true; //0 is 1st ending point
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                string h=s.substr(j,i-j);
                if(dp[j] && mp[h]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
        
        
        
        
        
        
        
    }
};