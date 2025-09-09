class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), gmax = 0,tmax=0,prev=0,l=0,r=0;
        while(l<=r && r<n){
            if(nums[r]!=1){
                gmax=max(r-l,gmax);
                l=r+1;
            }

                r++;
            
        }
        return max(gmax,r-l);
       
    }
};