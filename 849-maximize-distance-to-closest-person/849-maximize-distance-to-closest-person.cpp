class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int>aage(n),piche(n);
        int point=-1;
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                aage[i]=-1;
                point=i;
            }else{
                if(point==-1){
                    aage[i]=INT_MAX;
                }else{
                    aage[i]=i-point;
                }
            }
        }
        point=-1;
        for(int i=n-1;i>=0;i--){
            if(seats[i]==1){
                piche[i]=-1;
                point=i;
            }else{
                if(point==-1){
                    piche[i]=INT_MAX;
                }else{
                    piche[i]=abs(i-point);
                }
            }
        }
        int ans=INT_MIN,chk=INT_MAX;
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                int u=min(aage[i],piche[i]);
                ans=max(ans,u);
            }
        }
        return ans;
    }
};