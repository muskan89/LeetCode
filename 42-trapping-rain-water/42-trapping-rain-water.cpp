class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>maxl(n),maxr(n);
        int mxl=INT_MIN,mxr=INT_MIN;
        for(int i=1;i<n;i++){
            if(height[i-1]>mxl){
                mxl=height[i-1];
            }
            maxl[i]=mxl;
        }
        for(int i=n-2;i>=0;i--){
            if(height[i+1]>mxr){
                mxr=height[i+1];
            }
            maxr[i]=mxr;
        }
        int rain=0;
        for(int i=1;i<n-1;i++){
            rain+=max(min(maxl[i],maxr[i])-height[i],0);
        }
        return rain;
    }
};