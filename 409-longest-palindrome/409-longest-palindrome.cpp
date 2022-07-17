class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>bda(26),chota(26);
        for(char c:s){
            if(c>='A' && c<='Z'){
                bda[c-'A']++;
            }else if(c>='a' && c<='z'){
                chota[c-'a']++;
            }
        }
        int evens=0,oddflag=0;
        for(int i=0;i<26;i++){
            if(bda[i]&1){
                oddflag=1;
                evens+=(bda[i]-1);
            }else{
                evens+=bda[i];
            }
        }
        for(int i=0;i<26;i++){
            if(chota[i]&1){
                oddflag=1;
                evens+=(chota[i]-1);
            }else{
                evens+=chota[i];
            }
        }
        if(oddflag==1){
            evens++;
        }
        return evens;
    }
};