class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long sum=0;
        sort(beans.begin(),beans.end(),greater<int>());
        for(int i=0;i<beans.size();i++){
            sum+=beans[i];
        }
        long long mini=LONG_MAX;
        for(int i=0;i<beans.size();i++){
            long long saved=(1LL*beans[i])* (1LL*(i+1));
            long long removed=(sum-saved);
            mini=min(mini,removed);
        }
        return mini;
    }
};