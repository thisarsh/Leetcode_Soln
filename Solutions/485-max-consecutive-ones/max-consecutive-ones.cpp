class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int n = nums.size(), gmax = 0, tmax = 0, prev = 0, l = 0, r = 0;
        // while (l <= r && r < n) {
        //     if (nums[r] != 1) {
        //         gmax = max(r - l, gmax);
        //         l = r + 1;
        //     }

        //     r++;
        // }
        // return max(gmax, r - l);
        int count=0,gmax=0;
        for(auto it:nums){
            if(it!=1){
                gmax=max(gmax,count);
                count=0;
            }
            else count++;
        }
        return max(gmax, count);
    }
};