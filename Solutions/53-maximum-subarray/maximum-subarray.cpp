class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum = 0, maxsum = INT_MIN, l = 0, r = 0;
        auto it=max_element(nums.begin(),nums.end());
      if(*it<0){
        return *it;
      }
       for(int r=0; r<n; r++) {
            sum+=nums[r];
        
            if (sum < 0) {
                sum=0;

            } 
            maxsum = max(sum, maxsum);
        }
        return maxsum;
    }
};