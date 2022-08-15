//using namespace std;
class Solution {
public:
    vector<int>arr,ans;
    Solution(vector<int>& nums) {
        arr=nums;
        ans=nums;
    }
    
    vector<int> reset() {
        return ans;
    }
    
    vector<int> shuffle() {
        next_permutation(arr.begin(),arr.end());
        return arr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */