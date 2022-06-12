// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>>adj,int src,int des,int &cnt){
        if(src==des){
            cnt++;
            return;
        }
        //vis[src]=true;
        for(auto i:adj[src]){
            dfs(adj,i,des,cnt);
            
        }
        //vis[src]=false;
        
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<vector<int>>adj(n,vector<int>());
	    for(auto it:edges){
	        adj[it[0]].push_back(it[1]);
	    }
	    //vector<bool>vis(n,false);
	    int cnt=0;
	    dfs(adj,s,d,cnt);
	    return cnt;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends