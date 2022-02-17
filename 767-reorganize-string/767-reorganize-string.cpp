class Solution {
public:
    string reorganizeString(string s) {
        string ans;
        vector<int>alpha(26);
        for(int i=0;i<s.length();i++){
            alpha[s[i]-'a']++;
        }
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<26;i++){
            if(alpha[i])pq.push(make_pair(alpha[i],i));
        }
        pair<int,int>prev={0,0};
        while(!pq.empty()){
            pair<int,int>p=pq.top();
            pq.pop();
            ans+='a'+p.second;
            p.first--;
            if(prev.first){
                pq.push(prev);
            }
            prev=p;
        }
        return (ans.length()==s.length())?ans:"";
    }
};