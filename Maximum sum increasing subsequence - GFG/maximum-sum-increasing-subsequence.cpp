// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    //1 101 2 3 100
	    //0 101 0 0 0
	    //
	    vector<int>dp(n);
	    for(int i=0;i<n;i++){
	        dp[i]=max(arr[i],dp[i]);
	        for(int j=i+1;j<n;j++){
	            if(arr[i]<arr[j]){
	                dp[j]=max(dp[i]+arr[j],dp[j]);
	            }
	        }
	    }
	    int ans=*max_element(dp.begin(),dp.end());
	    return ans;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends