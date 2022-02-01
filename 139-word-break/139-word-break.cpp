class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                string word=s.substr(j,i-j);
                if(dp[j]){
                    if(find(wordDict.begin(),wordDict.end(),word) != wordDict.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};