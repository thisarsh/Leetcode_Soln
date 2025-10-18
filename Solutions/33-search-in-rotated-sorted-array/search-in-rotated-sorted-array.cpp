class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)return mid;
        //    left half is sorted
            if(nums[low]<=nums[mid]){
             if(nums[mid]>target  && target>=nums[low]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
        return -1;

        
    }
};