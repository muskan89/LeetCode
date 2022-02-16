class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
        }
        for(auto a:mp){
            if(a.second==1){
                return a.first;
            }
        }
        return -1;
    }
};