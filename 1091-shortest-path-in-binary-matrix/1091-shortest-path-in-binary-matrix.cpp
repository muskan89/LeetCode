class Solution {
public:
    void bfs(int aa,int bb,vector<vector<int>>& grid,vector<vector<int>>& dir){
        queue<pair<int,int>>q;
        q.push({aa,bb});
        grid[aa][bb]=1;
        while(!q.empty()){
            int a=q.front().first,b=q.front().second;
            q.pop();
            int n=grid.size();
            for(int i=0;i<8;i++){
                int x=a+dir[i][0];
                int y=b+dir[i][1];
                if(x<0 || x>=n || y<0 || y>=n){
                    continue;
                }
                if(grid[x][y]==0){
                    grid[x][y]=grid[a][b]+1;
                    q.push({x,y});
                }
            }
        }
        
    }
    
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        vector<vector<int>>dir{{1,0},{0,1},{-1,0},{0,-1},{1,-1},{-1,1},{1,1},{-1,-1}};
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1){
            return -1;
        }
        bfs(0,0,grid,dir);
        if(grid[n-1][n-1]>0){
            return grid[n-1][n-1];
        }
        return -1;
    }
};
/*
[[0,0,0,0,1],
[1,0,0,0,0],
[0,1,0,1,0],
[0,0,0,1,1],
[0,0,0,1,0]]




*/