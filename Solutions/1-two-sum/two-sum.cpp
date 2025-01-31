class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size(),sum=0;
        for(int i=0; i<n-1; i++){
            // sum=0;
            for(int j=i+1; j<n; j++){
                // sum+=nums[j];
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }return {0};
    }
};