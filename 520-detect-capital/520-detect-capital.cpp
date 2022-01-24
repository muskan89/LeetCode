class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0,n=word.length();
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                cnt++;
            }
        }
        if(cnt==0 || cnt==n){
            return true;
        }
        if(cnt==1 && (word[0]>='A' && word[0]<='Z')){
            return true;
        }
        return false;
    }
};