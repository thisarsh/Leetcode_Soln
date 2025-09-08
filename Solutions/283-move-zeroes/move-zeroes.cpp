class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),l=0,r=0;
        
        while( l<=r && r<n){
            if(nums[r]==0){
                r++;
            }
        
            else {
               if(l==r) continue;
               swap(nums[l],nums[r]);
                r++;
                l++;

            }
        }
        
        
    }
};