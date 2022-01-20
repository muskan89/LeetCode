class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int start=1,end=1e9;
        int ans=0;
        while(start <= end){
            long long int mid=start+((end-start)/2);
            if(khtmhue(mid,piles,h)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
    
    bool khtmhue(long long int k,vector<int>piles, int h){
        int i=0,n=piles.size();
        /*while(h>0 && i<n){
            if(piles[i]>=k){
                piles[i]/=k;
                h-=piles[i];
            }else{
                piles[i]=0;
            }
            if(piles[i]==0){
                i++;
            }
        }
        if(i>=n){
            return true;
        }
        return false;
        */
        while(i<n){
            if(piles[i]>0){
                if(piles[i]%k!=0){
                    h--;
                }
                piles[i]/=k;
                h-=piles[i];
                piles[i]=0;
            }
            i++;
            if(h<0){
                return false;
            }
            if(h==0 && i<n){
                return false;
            }
        }
        return true;
        
    }
};