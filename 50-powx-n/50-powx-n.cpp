class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            double r=1;
            return r;
        }
        double one=1,zero=0;
        if(x==one || x==zero){
            return x;
        }
        int y=0,k=0,m=0;
        if(n<0){
            y=1;
            if(n==INT_MIN){
                k=n;
                n++;
                m=x;
            }
            n*=-1;
        }
        double result=1;
        while(n>0){
            if(n&1){
                result*=x;
                n--;
            }else{
                x*=x;
                n/=2;
            }
        }
        //cout<<result<<"\n";
        double ans=result;
        if(y==1)
            ans=one/ans;
        //cout<<ans<<"\n";
        if(y==1 && k==INT_MIN){
            int p=(one/m);
            ans*=p;
            //cout<<p<<"\n";
        }
        
        return ans;
        
    }
};