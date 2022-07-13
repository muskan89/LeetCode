class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<=nums[n-1]){
            return nums[0];
        }
        int ans=nums[n-1],start=0,end=n-1;
        while(start<=end){
            if(start==end){
                return nums[end];
            }
            int mid=start+((end-start)/2);
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return nums[end];
    }
};