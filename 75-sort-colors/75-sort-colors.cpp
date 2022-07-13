class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                if(mid<=low){
                    mid++;
                }
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

/*
[2,0,2,1,1,0]
md=0,lw=0,hg=5
[0,0,2,1,1,2]
hg=4






*/