class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi=0,n=points.size();
        for(int i=0;i<n;i++){
            map<double,int>mp;
            int count=0;
            for(int j=i+1;j<n;j++){
                if(points[j][0]==points[i][0] && points[j][1]==points[i][1]){
                    count++;
                    continue;
                }
                double ym=points[j][1]-points[i][1];
                double xm=points[j][0]-points[i][0];
                if(xm==0){
                    mp[100000]++;
                    //maxi=max(maxi,mp[INT_MAX]);
                    continue;
                }
                double sl=ym/xm;
                mp[sl]++;
                //maxi=max(maxi,mp[sl]);
            }
            for(auto p:mp){
                maxi=max(maxi,p.second+count);
            }
        }
        return maxi+1;
        }
};