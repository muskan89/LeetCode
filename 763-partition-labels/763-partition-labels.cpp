class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>vec(26,-1),ans;
        int n=s.length();
        for(int i=0;i<n;i++){
            vec[s[i]-'a']=i;
        }
        int i=0,j=0,k=0;
        while(i<n && j<n){
            j=max(j,vec[s[i]-'a']);
            if(i==j){
                ans.push_back(j-k+1);
                k=j+1;
            }
            i++;
        }
        return ans;
    }
};