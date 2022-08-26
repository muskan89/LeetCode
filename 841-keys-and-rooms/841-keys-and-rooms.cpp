class Solution {
public:
    void dfs(vector<int>adj[],vector<bool>&vis,int src){
        vis[src]=true;
        for(int i=0;i<adj[src].size();i++){
            if(vis[adj[src][i]]==false){
                dfs(adj,vis,adj[src][i]);
            }
        }
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            int keys=rooms[i].size();
            for(int j=0;j<keys;j++){
                adj[i].push_back(rooms[i][j]);   
            }
        }
        vector<bool>vis(n,false);
        stack<int>stk;
        stk.push(0);
        while(!stk.empty()){
            int q=stk.top();
            stk.pop();
            vis[q]=true;
            for(int i=0;i<adj[q].size();i++){
                if(vis[adj[q][i]]==false){
                    stk.push(adj[q][i]);
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                flag=1;
                break;
            }
        }
        if(flag==1){
            return false;
        }
        return true;
    }
};