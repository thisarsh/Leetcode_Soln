class Solution {
public:
    int lower(vector <int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1,mid,poss=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                poss=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;

        }
        return poss;
    }
    int upper(vector <int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1,mid,poss=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                poss=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;

        }
        return poss;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower(nums,target),upper(nums,target)};
    }
};