// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>right(n),left(n);
        long long sum=0;
        int rig_max=INT_MIN,lef_max=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(arr[i]>rig_max){
                rig_max=arr[i];
            }
            right[i+1]=rig_max;
        }
        
        for(int i=n-1;i>0;i--){
            if(arr[i]>lef_max){
                lef_max=arr[i];
            }
            left[i-1]=lef_max;
        }
        
        for(int i=1;i<n;i++){
            sum+=max(min(left[i],right[i])-arr[i],0);
        }
        
        return sum;
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends