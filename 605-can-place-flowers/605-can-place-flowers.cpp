class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int>ones;
        int num=flowerbed.size();
        for(int i=0;i<num;i++){
            if(flowerbed[i]==1){
                ones.push_back(i);
            }
        }
        if(ones.size()==0){
            int u=0;
            if(num%2==0){
                u=num/2;
            }else{
                u=num/2;
                u++;
            }
            return u>=n;
        }
        int sze=ones.size(),ans=0,pre=0,suff=0;
        if(ones[0]!=0){
            pre=ones[0];
        }
        ans=pre/2;
        for(int i=1;i<sze;i++){
            int y=ones[i]-ones[i-1],p=0;
            y--;
            if(y%2 == 0){
                y--;
            }
            p=y/2;
            ans+=p;
        }
        if(ones[sze-1] != (num-1)){
            suff=num-1-ones[sze-1];
        }
        suff/=2;
        ans+=suff;
        if(ans >= n){
            return true;
        }
        return false;
    }
};