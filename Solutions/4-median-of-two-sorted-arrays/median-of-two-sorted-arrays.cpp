class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int m=nums1.size();
        int n=nums2.size();
        int p1=0,p2=0;
        vector<int> neww;
        while(p1<m && p2<n){
            if(nums1[p1]>nums2[p2]){
                neww.push_back(nums2[p2]);
                p2++;
            }
            else{
                neww.push_back(nums1[p1]);
                p1++;

            }
        }
        while(p1<m){
            neww.push_back(nums1[p1]);
            p1++;
        }       
        while(p2<n){
            neww.push_back(nums2[p2]);
            p2++;
        }       
        // sort(neww.begin(),neww.end());
        if((m+n)%2==1){
        return float(neww[float(m+n)/2]);
        }
        else{
            return (float(neww[float(m+n)/2])+float(neww[(m+n)/2-1]))/2;
        }
        return 0;
          
    }
};