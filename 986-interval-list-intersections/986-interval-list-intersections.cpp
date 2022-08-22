class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n=firstList.size(),m=secondList.size();
        if(n==0){
            return {};
        }
        if(m==0){
            return {};
        }
        int i=0,j=0;
        vector<vector<int>> ans;
        int k=0;
        //vector<int>temp(2);
        //ans.push_back(temp);    
        while(i<n && j<m){
            if(firstList[i][1]<secondList[j][0]){
                i++;
            }else if(firstList[i][0]>secondList[j][1]){
                j++;
            }
            else if(firstList[i][1]<=secondList[j][1]){
                ans.push_back({max(firstList[i][0],secondList[j][0]),min(firstList[i][1],secondList[j][1])}); 
                i++;
            }else if(secondList[j][1]<firstList[i][1]){
                ans.push_back({max(firstList[i][0],secondList[j][0]),min(firstList[i][1],secondList[j][1])});
                j++;
            }
            
            
        }
        return ans;
    }
};