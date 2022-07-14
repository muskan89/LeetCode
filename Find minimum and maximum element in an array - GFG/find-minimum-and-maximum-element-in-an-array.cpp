// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    int mini=a[0],maxi=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
        if(a[i]>maxi){
            maxi=a[i];
        }
        // mini=min(mini,a[i]);
        // maxi=max(maxi,a[i]);
    }
    return make_pair(mini,maxi);
}