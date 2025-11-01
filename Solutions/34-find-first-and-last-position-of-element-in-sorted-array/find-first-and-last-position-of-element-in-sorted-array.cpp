class Solution {
public:
    int lb(vector <int>&nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target)low=mid+1;
            else high=mid-1;
        }
            if(low>=nums.size()|| nums[low]!=target)return -1;
        return low;
    }
    int ub(vector <int>&nums,int target){ 
         int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target)low=mid+1;
            else high=mid-1;
        }
        if(high<0 || nums[high]!=target)return -1;
        return high;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low,high;
        low=lb(nums,target);
        high=ub(nums,target);
        return {low,high};

        
    }
};