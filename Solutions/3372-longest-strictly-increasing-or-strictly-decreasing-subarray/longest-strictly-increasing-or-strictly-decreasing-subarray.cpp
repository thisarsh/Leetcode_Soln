class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;
        
        int gmax = 1, gmin = 1;
        for(int i = 0; i < n-1; i++) {
            int maxl = 1, minl = 1;
            int prev = nums[i];
            
            for(int j = i+1; j < n; j++) {
                if (nums[j] > prev) { // increasing sequence
                    maxl++;
                    prev = nums[j];
                    gmax = max(maxl, gmax);
                } else break;
            }
            
            prev = nums[i];
            for(int j = i+1; j < n; j++) {
                if (nums[j] < prev) { // decreasing sequence
                    minl++;
                    prev = nums[j];
                    gmin = max(minl, gmin);
                } else break;
            }
        }
        return max(gmax, gmin);
    }
};
