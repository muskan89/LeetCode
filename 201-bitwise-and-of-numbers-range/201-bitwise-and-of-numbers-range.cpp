class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long long int bitnum=1;
        if(left==right){
            return left;
        }
        int ans=left;
        while(left/bitnum){
            bitnum*=2;
        }
        if(bitnum<=right){
            return 0;
        }
        
        for(long long int i=left+1;i<=right;i++){
            ans=ans&i;
        }
        return ans;
    }
};