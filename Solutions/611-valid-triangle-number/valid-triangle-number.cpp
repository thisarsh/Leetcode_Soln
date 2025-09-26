class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        sort(nums.begin(), nums.end());
        int count = 0;

        for (int i = 0; i < n - 2; i++) {
            int l = i + 1;
            int r = i + 2;

            while (l < n - 1) {
                r = l + 1;  // reset r for each l
                while (r < n) {
                    if (nums[i] + nums[l] > nums[r]) {
                        count++;
                    }
                    r++;
                }
                l++;
            }
        }
        return count;
    }
};
