class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count=0,ele=0,sze=nums.size();
        nums[0]*=-1;
        int ind=abs(nums[0]);
        while(nums[ind]>0){
            nums[ind]*=-1;
            ind=abs(nums[ind]);
           //out<<ind<<"\n";
            
        }
        
        
        return ind;
    }
};