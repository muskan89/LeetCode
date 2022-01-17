class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>mp;
        unordered_map<char,string>kp;
        vector<string>sli;
        string str;
        for(char c:s){
            if(c != ' '){
                str+=c;
            }else{
                sli.push_back(str);
                str="";
            }
        }
        sli.push_back(str);
        int i=0,n=sli.size();
        if(pattern.length() != n){
            return false;
        }
        string ans;
        for(string c:sli){
            if(mp.find(c) == mp.end() && i<n){
                mp[c]=pattern[i];
                ans+=pattern[i];
            }else{
                ans+=mp[c];
            }
            i++;
        }
        if(ans != pattern){
            return false;
        }
        string kuch;
        i=0;
        for(char c:pattern){
            if(kp.find(c) == kp.end() && i<n){
                kp[c]=sli[i];
                kuch+=sli[i];
                if(i != (n-1)){
                    kuch+=' ';
                }
            }else{
                kuch+=kp[c];
                if(i != (n-1)){
                    kuch+=' ';
                }
            }
            i++;
        }
        if(kuch != s){
            return false;
        }
        return true;
            
    }
};