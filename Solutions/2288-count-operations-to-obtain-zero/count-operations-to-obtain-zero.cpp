class Solution {
public:
    int countOperations(int nums1, int nums2) {
        int count=0;
        while(nums1 && nums2){
            if(nums1>nums2){
                nums1-=nums2;
            }
            else nums2-=nums1;
            count++;
        }
        return count;
        
    }
};