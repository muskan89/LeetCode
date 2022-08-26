class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto a:mp){
            v.push_back(make_pair(a.second,a.first));
        }
        
        string ans;
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        int sze=v.size();
        for(int i=0;i<sze;i++){
            int k=v[i].first;
            char p=v[i].second;
            for(int j=0;j<k;j++){
                ans+=p;
                
            }
        }
        
        return ans;
    }
};