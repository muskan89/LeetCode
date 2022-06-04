// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        vector<long long>dp(n+1);
        dp[0]=0;
        if(n>=1)
            dp[1]=1;
        if(n>=2)
            dp[2]=2;
        if(n>=3)
            dp[3]=4;
        for(int i=4;i<=n;i++){
            dp[i]=((dp[i-1]%1000000007)+(dp[i-2]%1000000007)+(dp[i-3]%1000000007))%1000000007;
        }
        
        
        return dp[n];
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends