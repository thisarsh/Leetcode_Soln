class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,mid,expected=INT_MAX;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){//left sorted
            expected=min(expected,nums[low]);
            low=mid+1;
            }
            else{
                expected=min(expected,nums[mid]);
                high=mid-1;
               }
            
        }
        return expected;
    }
};