class Solution {
public:
    int minFlips(int a, int b, int c) {
        //k=a&1, p=b&1 ,u=c&1
        //if(k|p == u)continue
        //else if u==0 if(k==p)ans+=2 else ans+=1
        //else if u==1 ans+=1
        int ans=0;
        while(a>0 || b>0 || c>0){
            int k=a&1, p=b&1, u=c&1;
            if((k|p) != u){
                if(u==0){
                    if(k==p){
                        ans+=2;
                    }else{
                        ans+=1;
                    }
                }else if(u==1){
                    ans+=1;
                }
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};