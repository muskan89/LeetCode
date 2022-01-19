class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        for(int num:time){
            num=num%60;
            mp[num]++;
        }
        vector<int>collec;
        for(auto a:mp){
            collec.push_back(a.first);
        }
        int n=collec.size(),ans=0;
        for(int i=0;i<n;i++){
            int y=0;
            if(collec[i]==0 || collec[i]==30){
                y=mp[collec[i]]-1;
                y*=mp[collec[i]];
                y/=2;
                mp[collec[i]]=0;
            }
            else if(collec[i]!=30){
                y=mp[60-collec[i]];
                mp[60-collec[i]]=0;
                y*=mp[collec[i]];
            }
            ans+=y;
        }
        return ans;
    }
};
//[30,20,40]