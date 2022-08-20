class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return 0;
        }
        vector<int>pre(n);
        pre[0]=0;
        for(int i=1;i<n;i++){
            pre[i]=nums[i]-nums[i-1];
        }
        int ans=0,i=2;
        //vector<int>help;
        for(i=2;i<n;i++){
            int cnt=0;
            while(i<n && pre[i]==pre[i-1]){
                cnt++;
                i++;
            }
            if(cnt==0){
                continue;
            }
            cnt+=2;
            int y=cnt-1;
            int help=y*(y+1);
            help/=2;
            help-=1;
            y-=1;
            ans+=((y*cnt)-help);
            //help.push_back(cnt);
        }
        return ans;
        
    }
};