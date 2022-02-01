class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sze=m+n;
        vector<int>ans(sze);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[k]=nums1[i];
                i++;
                k++;
            }else{
                ans[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            ans[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n){
            ans[k]=nums2[j];
            k++;
            j++;
        }
        for(int i=0;i<sze;i++){
            nums1[i]=ans[i];
        }
    }
};