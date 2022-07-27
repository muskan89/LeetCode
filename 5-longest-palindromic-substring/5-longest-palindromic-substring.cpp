class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((j-i)<3 && (s[i]==s[j])){
                    dp[i][j]=true;
                }
            }
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if((s[i]==s[j]) && dp[i+1][j-1]){
                    dp[i][j]=true;
                }
            }
        }
        int ansi=0,ansj=0,res=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(dp[i][j]){
                    //res=max(res,abs(j-i+1));
                    if(abs(j-i+1)>res){
                        res=abs(j-i+1);
                        ansi=i;
                        ansj=j;
                    }
                }
            }
        }
        string ans;
        for(int i=ansi;i<=ansj;i++){
            ans+=s[i];
        }
        return ans;
    }
};