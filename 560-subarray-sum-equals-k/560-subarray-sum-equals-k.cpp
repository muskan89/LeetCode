class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        map<int,int>mp;
        //mp[nums[0]]++;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
            //mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==k){
                cnt++;
            }
            if(mp[nums[i]-k]>0){
                cnt+=mp[nums[i]-k];
            }
            mp[nums[i]]++;
            
        } 
        return cnt;
        
        
    }
};