class Solution {
public:
    void dfs(int a,vector<vector<int>>&adj,vector<bool>&vis){
        vis[a]=true;
        for(int i=0;i<adj[a].size();i++){
            if(vis[adj[a][i]]==false){
                dfs(adj[a][i],adj,vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),cnt=0;
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]){
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                dfs(i,adj,vis);
                cnt++;
            }
        }
        return cnt;
        
    }
};
