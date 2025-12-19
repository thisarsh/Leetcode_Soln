class Solution {
public:
    int maxProfit(vector<int>& nums) {
     int ans=0,n=nums.size();
    for(int i=0; i<n-1; i++){
        if(nums[i+1]-nums[i]>0){
            ans+=(nums[i+1]-nums[i]);
        }
    }
     return ans;
    }
};