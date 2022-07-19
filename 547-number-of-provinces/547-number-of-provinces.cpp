class Solution {
public:
    int findParent(int a,vector<int>&parent){
        if(a==parent[a]){
            return a;
        }
        parent[a]=findParent(parent[a],parent);
        return parent[a];
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        int cnt=n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
                    int a=findParent(i,parent);
                    int b=findParent(j,parent);
                    if(a!=b){
                        parent[a]=b;
                        cnt--;
                    }
                }
            }
        }
        return cnt;
    }
};