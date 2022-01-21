class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,total=0,res=0;
        int n=cost.size();
        for(int i=0;i<n;i++){
            sum+=(gas[i]-cost[i]);
            if(sum<0){
                total+=sum;
                res=i+1;
                sum=0;
            }
        }
        if(sum>0){
            total+=sum;
        }
        return (total<0)?-1:res;
    }
};

//imagine nhi ho paya...was not able to deep dive into the solution