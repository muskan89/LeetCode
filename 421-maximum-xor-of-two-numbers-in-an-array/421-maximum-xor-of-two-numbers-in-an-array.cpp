class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0,prefix = 0;
         // intially we have all bits 0 in our ans and prefix
         for(int i=31;i>=0;i--)
         {
             prefix = prefix | (1<<i);
			 // prefix will have first i MSBs 1
			 unordered_set<int> s;
			 
             for(int n : nums) // get prefix of first ith bits
                 s.insert(n & prefix); // n& prefix will get us first i MSBs of number n
				 
             // now lets check can we get this bit  1 in our ans
             int c = ans | (1<<i);  // we setted ith MSB of our answer and stored it in c
             // now we have to check can we get this from nums and we stored first ith MSBs of nums in set
             // we want two nums a and b such that a ^ b = c
             // just like two sum if we got a, does b exist which give us c
             // and we know a^b = c then b = a^c so we will check in set does b exits for given a to achive c
             for(int a : s)
             {
                 int b = c^a;
                 if(s.find(b) != s.end()) // if b exists
                 {
                     // our answer will have this bit set
                     // so answer now
                     ans = c;
                     break;
                 }
             }
			 // if we can get pairs a and b such a^b = c then this bit will remain unsetted (0)
         }
        return ans;     
    }
};