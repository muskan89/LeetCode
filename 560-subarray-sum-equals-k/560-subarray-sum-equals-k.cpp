class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(i>0){
                nums[i]+=nums[i-1];
            }
            if(nums[i]==k){
                cnt++;
            }/*else*/ 
            if(mp.find(nums[i]-k)!=mp.end()){
                cnt+=mp[nums[i]-k];
            }
            mp[nums[i]]++;
        }
        return cnt;
    }
};