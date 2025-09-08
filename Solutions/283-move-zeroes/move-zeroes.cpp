class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),l=0,r=0;
        // if(n==1)return nums;
        while( l<=r && r<n){
            if(nums[r]==0){
                r++;
            }
           
            else {
               swap(nums[l],nums[r]);
                r++;
                l++;

            }
        }
        
        
    }
};