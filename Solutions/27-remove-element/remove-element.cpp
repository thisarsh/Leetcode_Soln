class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>nums2;
        int n= nums.size(),k=0;
      for(int i=0; i<n; i++){
        if(nums[i]!=val){
                nums2.push_back(nums[i]);
        } }
        nums=nums2;
        // nums.clear();
        // for(int i=0; i<nums2.size(); i++){
        //     nums.push_back(nums2[i]);
        
      return nums.size();
         
    }
};