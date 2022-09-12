class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1);
        sum/=2;
        int arrsum=0;
        for(int a:nums){
            arrsum+=a;
        }
        int p=sum-arrsum;
        return p;
    }
};