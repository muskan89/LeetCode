class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool ans=false;
        int n=nums.size();
        vector<int>lis(n,1);
        int c1=INT_MAX,c2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=c1){
                c1=nums[i];
            }else if(nums[i]<=c2){
                c2=nums[i];
            }else{
                return true;
            }
        }
        
        return false;
    }
};