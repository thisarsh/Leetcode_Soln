class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,lmax=0,rmax=0,ans=0;
        while(l<r){
            if(nums[l]<nums[r]) { 
                  lmax=max(lmax,nums[l]);    
                ans+=(lmax-nums[l]);
              
                l++;
            }
           else {     
              rmax=max(rmax,nums[r]);
                ans+=(rmax-nums[r]);
              
                r--;
            }


        }
        return ans;
    }
};