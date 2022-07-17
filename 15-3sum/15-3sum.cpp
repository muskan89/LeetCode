class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1,k=n-1,b=-1*nums[i];
            while(j<n && j<k){
                if(nums[j]==nums[j-1] && (j!=(i+1))){
                    j++;
                    continue;
                }
                int a=nums[j]+nums[k];
                if(a==b){
                    vector<int>arr{nums[i],nums[j],nums[k]};
                    ans.push_back(arr);
                    j++;
                    k--;
                }else if(a>b){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return ans;
    }
};



/*
[-4,-1,-1,0,1,2]
i=4,j



*/