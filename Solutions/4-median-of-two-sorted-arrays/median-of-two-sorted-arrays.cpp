class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int m=nums1.size();
        int n=nums2.size();
        int p1=0,p2=0;
        vector<int> neww(nums1.begin(),nums1.end());
        for(auto it:nums2){
            neww.push_back(it);
        }
        sort(neww.begin(),neww.end());
        if((m+n)%2==1){
        return float(neww[float(m+n)/2]);
        }
        else{
            return (float(neww[float(m+n)/2])+float(neww[(m+n)/2-1]))/2;
        }
        return 0;
          
    }
};