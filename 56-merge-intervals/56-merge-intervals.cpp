class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>temp(2);
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        ans.push_back(temp);
        int j=0;
        int n=intervals.size();
        for(int i=1;i<n;i++){
            if((intervals[i][0]>=ans[j][0]) && (ans[j][1]>=intervals[i][0])){
                ans[j][1]=max(intervals[i][1],ans[j][1]);
            }else{
                j++;
                vector<int>p(2);
                p[0]=intervals[i][0];
                p[1]=intervals[i][1];
                ans.push_back(p);
            }
        }
        return ans;       
    }
};