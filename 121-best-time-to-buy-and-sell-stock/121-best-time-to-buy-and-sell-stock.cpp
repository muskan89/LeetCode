class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx=INT_MIN,mn=INT_MAX;
        vector<int>maxi(n),mini(n);
        for(int i=0;i<n;i++){
            if(prices[i]<mn){
                mn=prices[i];
            }
            mini[i]=mn;
        }
        for(int i=n-1;i>=0;i--){
            if(prices[i]>mx){
                mx=prices[i];
            }
            maxi[i]=mx;
        }
        mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(abs(mini[i]-maxi[i])>mx){
                mx=abs(mini[i]-maxi[i]);
            }
        }
        return (mx>0)?mx:0;
    }
};
/*
7 1 1 1 1 1
7 6 6 6 6 4

*/