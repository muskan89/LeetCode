class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int k=0,p=0;
        for(int i=n-1;i>=0;i--){
            k+=(columnTitle[i]-'A'+1)*pow(26,p);
            p++;
        }
        return k;
    }
};