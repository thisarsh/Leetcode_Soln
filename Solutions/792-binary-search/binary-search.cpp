class Solution {
public:

    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1,low=0;
   
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target) {
                high=mid-1;
            }
            else low=mid+1;
        }
        return -1;


    }
    // int binary_s(vector<int>& nums,int low,int high,int target){
    //     int mid=(high+low)/2;
    //     if(nums[mid]==target)return mid;
    //     else if(low>high)return -1;
    //     else if(nums[mid]>target) return binary_s(nums,low,mid-1,target);
    //     else return binary_s(nums,mid+1,high,target);
    // }
    // int search(vector<int>& nums, int target) {
        
    //     int n=nums.size();
    //     int high=n-1;
    //     int low=0;
    //     // int mid=n/2;
    //     return binary_s(nums,low,high,target);





    // }

};