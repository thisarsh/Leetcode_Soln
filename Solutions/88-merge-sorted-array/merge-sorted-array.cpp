class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m,j=0;
        for(int i=p;i<m+n;i++){
            
            nums1[i]=nums2[j];
            j++;
            

        }
        sort(nums1.begin(),nums1.end());
        // return nums1.size();
    }
};