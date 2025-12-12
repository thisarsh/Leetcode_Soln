class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        sort(nums.begin(), nums.end(), greater<>());

        while (i < n && k > 1) {
            i++;
            k--;
        }
        return nums[i];
    }
};
