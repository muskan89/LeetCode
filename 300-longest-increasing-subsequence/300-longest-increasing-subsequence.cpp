class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>sub;
        sub.push_back(nums[0]);
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i]>sub[cnt]){
                sub.push_back(nums[i]);
                cnt++;
            }else{
                int ind=lower_bound(sub.begin(),sub.end(),nums[i])-sub.begin();
                sub[ind]=nums[i];
            }
        }
        return sub.size();
    }
};