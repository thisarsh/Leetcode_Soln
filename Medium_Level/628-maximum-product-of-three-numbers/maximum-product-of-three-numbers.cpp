class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       

       int n=nums.size();
       int ans=(nums[n-1]*nums[n-2]*nums[n-3]),ans2;
       if(nums[0]<0 && nums[1]<0)ans2=nums[0]*nums[1]*nums[n-1];
       return  max(ans,ans2);
    }
};