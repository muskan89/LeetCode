class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size(),maxi=INT_MIN;
        int n=accounts[0].size();
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];
            }
            if(sum>maxi){
                maxi=sum;
            }
        }
        return maxi;
    }
};