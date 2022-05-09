class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        int y=digits.length();
        vector<string>ans;
        if(y==0){
            return ans;
        }else if(y==1){
            for(char c:mp[digits[0]]){
                string h;
                h+=c;
                ans.push_back(h);
            }
        }else if(y==2){
            for(char c:mp[digits[0]]){
                string h;
                h+=c;
                h+='a';
                for(char d:mp[digits[1]]){
                    h[1]=d;
                    ans.push_back(h);
                }   
            }
        }else if(y==3){
            for(char c:mp[digits[0]]){
                string h;
                h+=c;
                h+='a';
                h+='a';
                for(char d:mp[digits[1]]){
                    h[1]=d;
                    for(char e:mp[digits[2]]){
                        h[2]=e;
                        ans.push_back(h);
                    }
                }   
            }
        }else if(y==4){
            for(char c:mp[digits[0]]){
                string h;
                h+=c;
                h+='a';
                h+='a';
                h+='a';
                for(char d:mp[digits[1]]){
                    h[1]=d;
                    for(char e:mp[digits[2]]){
                        h[2]=e;
                        for(char f:mp[digits[3]]){
                            h[3]=f;
                            ans.push_back(h);
                        }
                    }
                }   
            }
        }
        return ans;
    }
};