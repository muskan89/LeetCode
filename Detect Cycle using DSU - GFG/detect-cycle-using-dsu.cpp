// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
    
    int findParent(int a,vector<int>&parent){
        if(a==parent[a]){
            return a;
        }
        parent[a]=findParent(parent[a],parent);
        return parent[a];
    }
    void unionn(int a,int b,vector<int>&parent,vector<int>&rank){
        a=findParent(a,parent);
        b=findParent(b,parent);
        if(rank[a]<rank[b]){
            parent[a]=b;
        }else if(rank[a]>rank[b]){
            parent[b]=a;
        }else{
            parent[a]=b;
            rank[b]++;
        }
    }
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>parent(V),rank(V);
	    for(int i=0;i<V;i++){
	        parent[i]=i;
	        rank[i]=0;
	    }
	    for(int i=0;i<V;i++){
	        for(int j=0;j<adj[i].size();j++){
	            if((findParent(i,parent)==findParent(adj[i][j],parent)) && (i<adj[i][j])){
	                return 1;
	            }
	            unionn(i,adj[i][j],parent,rank);
	            
	        }
	    }
	    return 0;
	    
	    
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
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}  // } Driver Code Ends