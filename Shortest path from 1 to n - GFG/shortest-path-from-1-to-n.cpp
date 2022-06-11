// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int ans=0;
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
        while(n>1){
            while(n%3==0){
                n/=3;
                ans++;
            }
            if(n==2){
                n=1;
                ans++;   
            }
            else if(n>1){
                int prev=n;
                n=(n-(n%3));
                ans+=(prev-n);
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    
    }
    return 0; 
} 

  // } Driver Code Ends