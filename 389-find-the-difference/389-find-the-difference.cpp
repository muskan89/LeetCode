class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>a(26);
        for(char c:s){
            a[c-'a']++;
        }
        for(char c:t){
            a[c-'a']--;
            if(a[c-'a']==-1){
                return c;
            }
        }
        return 'a';
    }
};