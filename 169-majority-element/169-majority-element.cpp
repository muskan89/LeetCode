class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num1=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==num1){
                cnt++;
            }else if(cnt>0){
                cnt--;
                if(cnt==0){
                    num1=nums[i];
                    cnt=1;
                }
            }
        }
        cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                cnt++;
            }
        }
        int u=nums.size()/2;
        
        if(cnt > u){
            return num1;
        }
        return -1;
    }
};