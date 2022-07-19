class Solution {
public:
    string sortit(string &s){
        vector<int>a(26);
        for(char c:s){
            a[c-'a']++;
        }
        string u;
        for(int i=0;i<26;i++){
            for(int j=0;j<a[i];j++){
                u+=('a'+i);
            }
        }
        return u;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(string s:strs){
            mp[sortit(s)].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto p:mp){
            ans.push_back(p.second);
        }
        return ans;
        
    }
};