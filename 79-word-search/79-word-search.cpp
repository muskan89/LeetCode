class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>>dir{{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    board[i][j]='*';
                    if(solve(board,word,dir,0,i,j)){
                        return true;
                    }
                    board[i][j]=word[0];
                }
            }
        }
        return false;
    }
    
    bool solve(vector<vector<char>>& board, string &word,vector<vector<int>>&dir,int ind,int a,int b){
        int m=board.size(),n=board[0].size();
        //cout<<ind<<"\n";
        if(ind+1 == word.length()){
            return true;
        }
        for(int i=0;i<4;i++){
            int x=a+dir[i][0];
            int y=b+dir[i][1];
            if(x>=0 && x<m && y>=0 && y<n && board[x][y]==word[ind+1] && board[x][y]!='*'){
                board[x][y]='*';
                //cout<<board[x][y]<<"\n";
                if(solve(board,word,dir,ind+1,x,y)){
                    return true;
                }
                board[x][y]=word[ind+1];
            }
        }
        return false;        
    }
    
};