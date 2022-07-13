class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,v=0,t=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                z++;
            }else if(nums[i]==1){
                v++;
            }else{
                t++;
            }
        }
        int i=0;
        while(z>0 && i<n){
            nums[i]=0;
            i++;
            z--;
        }
        while(v>0 & i<n){
            nums[i]=1;
            i++;
            v--;
        }
        while(t>0 && i<n){
            nums[i]=2;
            i++;
            t--;
        }
        
    }
};