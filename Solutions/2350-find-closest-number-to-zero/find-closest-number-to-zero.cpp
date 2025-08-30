class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MAX,ans2=INT_MAX;
        for(auto it:nums){
            ans=min(ans,abs(it));
        
        }

      if(find(nums.begin(),nums.end(),ans)==nums.end()){
            return -1*ans;
      }
      return ans;
        
    }
};