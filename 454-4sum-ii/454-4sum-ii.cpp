class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(int a:nums1){
            for(int b:nums2){
                mp[a+b]++;
            }
        }
        for(int c:nums3){
            for(int d:nums4){
                if(mp.find(0-(c+d))!=mp.end()){
                    cnt+=mp[0-(c+d)];
                }
            }
        }
        return cnt;
    }
};