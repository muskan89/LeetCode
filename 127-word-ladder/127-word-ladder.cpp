class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        unordered_set<string>st;
        for(string s:wordList){
            st.insert(s);
        }
        if(st.count(endWord)==0){
            return 0;
        }
        unordered_map<string,bool>vis;
        q.push({beginWord,0});
        vis[beginWord]=true;
        int dis=0;
        while(!q.empty()){
            string s=q.front().first;
            dis=q.front().second;
            q.pop();
            if(s==endWord){
                return dis+1;
            }
            string temp;
            for(int i=0;i<s.size();i++){
                temp=s;
                for(int j=0;j<26;j++){
                    temp[i]='a'+j;
                    if(st.count(temp)>0 && vis[temp]!=true){
                        vis[temp]=true;
                        q.push({temp,dis+1});
                    }
                }
            }   
        }
        return 0;
    }
};