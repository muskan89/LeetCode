class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        if(n>=1){
            ans.push_back({1});
        }
        if(n>=2){
            ans.push_back({1,1});
        }
        vector<int>k(n);
        for(int i=2;i<n;i++){
            k[0]=1;
            k[i]=1;
            for(int j=1;j<i;j++){
                k[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(vector<int>(k.begin(),k.begin()+i+1));
        }
        return ans;
        
    }
};