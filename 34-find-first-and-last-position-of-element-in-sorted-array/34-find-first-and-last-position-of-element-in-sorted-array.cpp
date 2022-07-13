class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),start=0,end=n-1;
        int a=-1,b=-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(nums[mid]==target){
                end=mid-1;
                a=mid;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        start=0;
        end=n-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(nums[mid]==target){
                start=mid+1;
                b=mid;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return vector<int>{a,b};
    }
};