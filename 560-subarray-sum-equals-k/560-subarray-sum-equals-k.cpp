class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, count=0; 
        unordered_map<int,int> prevsum; 
        for(auto num:nums){
            sum+=num;
            if(sum==k) count++;
            if(prevsum.find(sum-k)!=prevsum.end()) count+=prevsum[sum-k]; 
            prevsum[sum]++;
        }
        return count;
    }
};