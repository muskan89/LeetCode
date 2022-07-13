class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int a=0,b=n-1;
        while(a<m && b>=0){
            if(matrix[a][b]==target){
                return true;
            }else if(matrix[a][b]<target){
                a++;
            }else{
                b--;
            }
        }
        return false;
    }
};