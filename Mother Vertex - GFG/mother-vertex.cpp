// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    int dfs(int V, vector<int>adj[],int s,vector<int>vis){
        stack<int>stk;
        stk.push(s);
        while(!stk.empty()){
            int temp=stk.top();
            stk.pop();
            vis[temp]=true;
            for(int i=0;i<adj[temp].size();i++){
                int vi=adj[temp][i];
                if(vis[vi]==false){
                    stk.push(vi);
                }
            }
        }
        int num=0;
        for(int i=0;i<V;i++){
            if(vis[i]==true){
                num++;
            }
        }
        return num;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>visited(V,false);
	    for(int i=0;i<V;i++){
	        if(dfs(V,adj,i,visited)==V){
	            return i;
	        }
	    }
	    return -1;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends