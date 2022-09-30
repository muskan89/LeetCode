class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=1,n=nums.size();
        if(n==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1])==1){
                cnt++;
            }else if(nums[i]==nums[i-1]){
                continue;
            }else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};