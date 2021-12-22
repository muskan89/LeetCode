class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxi=0;
        unordered_set<char>st;
        while(right < s.length()){
            if(st.find(s[right])==st.end()){
                maxi=max(maxi,right-left+1); 
                st.insert(s[right]);
                right++;
            }else{
                st.erase(s[left++]);
            }
        }
        return maxi;
    }
};