class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pfor(26),sfor(26),res;
        for(char c:p){
            pfor[c-'a']++;
        }
        int n=s.length();
        for(int i=0;i<n;i++){
            sfor[s[i]-'a']++;
            if(i >= p.size()){
                sfor[s[i-p.size()]-'a']--;
            }
            if(pfor==sfor){
                res.push_back(i-p.size()+1);
            }
        }
        return res;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};