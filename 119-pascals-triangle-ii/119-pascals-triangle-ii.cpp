class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0){
            return {1};
        }
        if(rowIndex == 1){
            return {1,1};
        }
        vector<int>ans{1},swans{1,1};
        for(int i=0;i<rowIndex-1;i++){
            if(i%2==0){
                for(int j=1;j<swans.size();j++){
                    if(j+1>ans.size()){
                        ans.push_back(swans[j]+swans[j-1]);
                    }else{
                        ans[j]=swans[j]+swans[j-1];
                    }
                }
                ans.push_back(1);
            }else{
                for(int j=1;j<ans.size();j++){
                    if(j+1>swans.size()){
                        swans.push_back(ans[j]+ans[j-1]);
                    }else{
                        swans[j]=ans[j]+ans[j-1];
                    }
                }
                swans.push_back(1);
            }
        }
        if(rowIndex&1){
            return swans;
        }
        return ans;
    }
};