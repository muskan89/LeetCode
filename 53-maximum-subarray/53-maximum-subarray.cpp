class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=*min_element(nums.begin(),nums.end()),n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};