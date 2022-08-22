class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(ans,"",n,0,0);
        return ans;
    }
    
    void solve(vector<string>&ans,string temp, int n,int open,int close){
        if(temp.length() == (2*n)){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            solve(ans,temp+"(",n,open+1,close);
        }
        if(open>close){
            solve(ans,temp+")",n,open,close+1);
        }
        //temp=temp.substr(0,temp.length()-1);
        
    }
};