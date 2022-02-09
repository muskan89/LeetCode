class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int count=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(i>=1 && nums[i]==nums[i-1] && k!=0){
                continue;
            }else if(i>=2 && nums[i]==nums[i-1] && nums[i-1]==nums[i-2] && k==0){
                continue;
            }else{
                if(mp.find(nums[i]-k)!=mp.end()){
                    count++;
                }
                mp[nums[i]]=1;
                
            }
        }
        return count;
    }
};


//[1,1,3,4,5]