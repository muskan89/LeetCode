class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int i=0;
        while(i<=right && left<=right){
            if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
            }else if(nums[i]==0){
                swap(nums[i],nums[left]);
                i++;
                left++;
            }else if(nums[i]==1){
                i++;
            }
        }
    }
};