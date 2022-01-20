class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>vec;
        vector<string>temp;
        backtracking(s,vec,temp,0);
        return vec;
    }
    
    void backtracking(string s,vector<vector<string>>&vec,vector<string>&temp,int index){
        if(index == s.length()){
            vec.push_back(temp);
            return;
        }    
        for(int i=index;i<s.length();i++){
            if(isPalindrome(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                backtracking(s,vec,temp,i+1);
                temp.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s,int low,int high){
        int p=(high-low+1)/2;
        for(int i=0;i<p;i++){
            if(s[low+i] != s[high-i]){
                return false;
            }
        }
        return true;
    }
};

