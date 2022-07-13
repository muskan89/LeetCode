class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0,j=1,n=intervals.size();
        vector<vector<int>>ans;
        for(int j=1;j<n;j++){
            if(intervals[j][0]<=intervals[i][1]){
                intervals[i][1]=max(intervals[j][1],intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
                i=j;
            }
        }
        //if(i!=(n-1)){
        ans.push_back(intervals[i]);
        //}
        return ans;
    }
};