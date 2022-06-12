// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    
	    vector<vector<int>>adj(n,vector<int>());
	    for(auto it:edges){
	        adj[it[0]].push_back(it[1]);
	    }
	    vector<int>vis(n,0);
	    queue<int>q;
	    q.push(s);
	    vis[s]++;
	    while(!q.empty()){
	        int y=q.front();
	        q.pop();
	        for(int i=0;i<adj[y].size();i++){
	            q.push(adj[y][i]);
	            vis[adj[y][i]]++;
	        }
	    }
	    return vis[d];
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