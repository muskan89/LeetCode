class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            if(i>=1){
                nums[i]+=nums[i-1];
                if(nums[i]==0){
                    maxi=max(maxi,i+1);
                }
                if(mp.find(nums[i])==mp.end())mp[nums[i]]=i;
                else{
                    maxi=max(maxi,i-mp[nums[i]]);   
                }
            }else{
                if(mp.find(nums[i])==mp.end())mp[nums[i]]=i;
            }
        }
        return maxi;
    }
};

/*
[0,0,0,0,0,0,1,1,1]
[-1,-1,-1,-1,-1,-1,1,1,1]
[-1,-2,-3,-4,-5,-6,-5,-4,-3]


*/