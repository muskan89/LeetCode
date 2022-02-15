class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26),f2(26);
        int n1=s1.length();
        for(int i=0;i<n1;i++){
            f1[s1[i]-'a']++;
        }
        int n2=s2.length();
        if(n2<n1){
            return false;
        }
        for(int i=0;i<n1;i++){
            f2[s2[i]-'a']++;
        }
        bool ans=true;
        for(int i=0;i<26;i++){
            if(f1[i]!=f2[i]){
                ans=false;
            }
        }
        if(ans)return ans;
        for(int i=n1;i<n2;i++){
            f2[s2[i]-'a']++;
            f2[s2[i-n1]-'a']--;
            ans=true;
            for(int j=0;j<26;j++){
                if(f1[j]!=f2[j]){
                    ans=false;
                }
            }
            if(ans)return ans;
        }
    
		return false;
    }
    
};