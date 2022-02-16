class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int check=1<<i,k=0,cnt=0;
            for(int j=0;j<nums.size();j++){ 
                if(nums[j]&check){
                    cnt++;
                }
            }
            if(cnt%3){
                ans|=check;
            }
        }
        return ans;
    }
};