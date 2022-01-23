class Solution {
public:
    vector<int>ans;
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<=9;i++){
            dfs(low,high,0,i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    
    void dfs(int low,int high,int num,int i){
        if(num>=low && num<=high){
            ans.push_back(num);
        }
        if(num>high || i>9){
            return;
        }
        dfs(low,high,(10*num)+i,i+1);
    }
};