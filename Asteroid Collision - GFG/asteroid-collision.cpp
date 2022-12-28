//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &ast) {
        // code here
        stack<int>stk;
        for(int i=0;i<n;i++){
            if(stk.empty()){
                stk.push(ast[i]);
            }else{
                if(stk.top()>0 && ast[i]<0){
                    int f=0;
                    while(!stk.empty() && stk.top()>0 && ast[i]<0){
                        if(abs(stk.top())<abs(ast[i])){
                            stk.pop();
                        }else if(abs(stk.top())==abs(ast[i])){
                            stk.pop();
                            f=1;
                            break;
                        }else{
                            break;
                        }
                    }
                    if((stk.empty() || (!stk.empty() && (stk.top()*ast[i])>0)) && (f==0)){
                        stk.push(ast[i]);
                    }
                }else{
                    stk.push(ast[i]);
                }
            }
        }
        vector<int>ans;
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends