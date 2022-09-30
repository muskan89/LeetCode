class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp[target-nums[i]]>0){
                if(mp[target-nums[i]]==10001){
                    ans[0]=0;
                }else{
                    ans[0]=mp[target-nums[i]];
                }
                ans[1]=i;
                break;
            }else{
                mp[nums[i]]=i;
                if(i==0){
                    mp[nums[i]]=10001;
                }
            }
        }
        
        
        
        return ans;
    }
};