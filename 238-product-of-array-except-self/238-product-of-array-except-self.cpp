class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1,numZero=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                mul*=nums[i];
            }else{
                numZero++;
            }
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(numZero>1){
                    ans[i]=0;
                }else{
                    ans[i]=mul;
                }
            }else{
                if(numZero>0){
                    ans[i]=0;
                }else{
                    ans[i]=mul/nums[i];
                }
                
            }
        }
        return ans;
    }
};