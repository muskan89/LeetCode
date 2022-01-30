class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>vec(n);
        int h=n-k;
        for(int i=0;i<k;i++){
            vec[i]=nums[h+i];
        }
        int j=0;
        for(int i=k;i<n;i++){
            vec[i]=nums[j++];
        }
        for(int i=0;i<n;i++){
            nums[i]=vec[i];
        }
    }
};