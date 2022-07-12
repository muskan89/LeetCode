class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int y=-1*nums[i],j=i+1,k=n-1;
            while(j<n && j<k){
                if(j>0 && nums[j]==nums[j-1] && j!=(i+1)){
                    j++;
                    continue;
                }
                //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<"\n";
                int x=nums[j]+nums[k];
                if(x==y){
                    vector<int>sub{nums[i],nums[j],nums[k]};
                    ans.push_back(sub);
                    j++;
                    k--;
                }else if(x>y){
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