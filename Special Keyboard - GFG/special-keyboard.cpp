// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int optimalKeys(int n){
        // code here
        vector<int>dp(75);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        dp[4]=4;
        dp[5]=5;
        dp[6]=6;
        int cur=0;
        for(int i=7;i<=n;i++){
            for(int j=i-3;j>=1;j--){
                cur=dp[j]*(i-j-1);
                dp[i]=cur>dp[i]?cur:dp[i];
            }
        }
        return dp[n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends