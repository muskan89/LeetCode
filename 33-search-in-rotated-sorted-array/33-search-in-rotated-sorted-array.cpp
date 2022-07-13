class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),start=0,end=n-1,pivot=-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(nums[mid]==target){
                return mid;
            }else if(nums[start]<=nums[mid]){
                if(nums[mid]>target && nums[start]<=target){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(nums[mid]<target && nums[end]>=target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
        
        
        
        
    }
};