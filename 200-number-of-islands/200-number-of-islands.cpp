class Solution {
public:
    void dfs(int a,int b,vector<vector<char>>& grid,vector<vector<int>>&dir){
        int m=grid.size(),n=grid[0].size(),cnt=0;
        grid[a][b]='0';
        for(int i=0;i<4;i++){
            int x=a+dir[i][0];
            int y=b+dir[i][1];
            if(x<0 || x>=m || y<0 || y>=n)continue;
            if(grid[x][y]=='1'){
                dfs(x,y,grid,dir);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),cnt=0;
        vector<vector<int>>dir{{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,grid,dir);
                }
            }
        }
        return cnt;
    }
};