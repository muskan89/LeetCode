class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string>mp;
        vector<string>key{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        vector<string>ans;
        solve(0,temp,ans,digits,key);
        return ans;
    }
    
    void solve(int start,string &temp,vector<string>&ans,string &digits,vector<string>&key){
        if(start==digits.length()){
            if(temp.length()>0)
                ans.push_back(temp);
            return;
        }
        for(int i=0;i<key[digits[start]-'0'].length();i++){
            temp+=key[digits[start]-'0'][i];
            solve(start+1,temp,ans,digits,key);
            temp=temp.substr(0,temp.length()-1);
        }
    }
};