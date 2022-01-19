class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>mp(n+1),jp(n+1);
        int sze=trust.size();
        for(int i=0;i<sze;i++){
            mp[trust[i][0]]++;
            jp[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0 && jp[i]==(n-1)){
                return i;
            }
        }
        return -1;
    }
};