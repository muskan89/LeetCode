class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float,int>>v;
        int n=points.size();
        for(int i=0;i<n;i++){
            int a=points[i][0];
            a*=a;
            int b=points[i][1];
            b*=b;
            a+=b;
            float c=sqrt(a);
            v.push_back(make_pair(c,i));
        }
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            int idx=v[i].second;
            ans.push_back(points[idx]);
        }
        return ans;
    }
};