class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>,vector<pair<float,int>>,greater<pair<float,int>>>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            int a=points[i][0];
            a*=a;
            int b=points[i][1];
            b*=b;
            a+=b;
            float c=sqrt(a);
            pq.push(make_pair(c,i));
        }
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            int idx=pq.top().second;
            pq.pop();
            ans.push_back(points[idx]);
        }
        return ans;
    }
};