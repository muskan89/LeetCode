class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),profit=0,mini=prices[0];
        for(int i=0;i<n;i++){
            if((prices[i]-mini)>profit){
                profit=prices[i]-mini;
            }else{
                mini=min(prices[i],mini);
            }
        }
        return profit;
    }
};
/*
7 1 1 1 1 1
7 6 6 6 6 4

*/