class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mpa;
        map<string,char>mpb;
        
        int lenp=pattern.length();
        string emp;
        vector<string>strlist;
        for(char c:s){
            if(c==' '){
                strlist.push_back(emp);
                emp.clear();
            }else{
                emp+=c;
            }
        }
        strlist.push_back(emp);
        if(strlist.size() != pattern.length()){
            return false;
        }
        for(int i=0;i<lenp;i++){
            if(mpa.find(pattern[i])!=mpa.end () ){
                if(mpa[pattern[i]] != strlist[i]){
                    return false;
                }
            }else{
                mpa[pattern[i]]=strlist[i];
            }
            if(mpb.find(strlist[i])!=mpb.end() ){
                if(mpb[strlist[i]] != pattern[i]){
                    return false;
                }
            }else{
                mpb[strlist[i]]=pattern[i];
            }
        }
        if(mpa.size() != mpb.size()){
            return false;
        }
        return true;
    }
};