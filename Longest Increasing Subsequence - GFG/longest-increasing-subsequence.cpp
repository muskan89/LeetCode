// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int binary_search(vector<int>dp,int start,int end,int key){
        while((end-start)>=2){
            int mid=start+((end-start)/2);
            if(dp[mid]==key){
                end=mid;
            }
            if(dp[mid]<key){
                start=mid;
            }else{
                end=mid;
            }
        }
        return end;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>dp(n);
       int length=1;
       dp[0]=a[0];
       for(int i=1;i<n;i++){
           if(a[i]<dp[0]){
               dp[0]=a[i];
           }else if(a[i]>dp[length-1]){
               dp[length++]=a[i];
           }else{
               dp[binary_search(dp,0,length-1,a[i])]=a[i];
           }
       }
       return length;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends