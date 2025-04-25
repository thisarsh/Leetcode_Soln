class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),l=0,r=0,sum=0,ans;
        ans=INT_MAX;
    for(int r=0; r<n;r++){
          sum+=nums[r];
        while(sum>=target){
         ans=min(ans,r-l+1);
          sum-=nums[l];
          l++;
        }
        

        
        
        

    } if(ans!=INT_MAX)return ans;
    return 0;


    }
};