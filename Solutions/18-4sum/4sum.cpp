class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long n = nums.size(), l, r, sum = 0;
        if(n<4)return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        for (int i = 0; i < n - 1; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i+1; j < n; j++) {
                if (j > i+1 && nums[j] == nums[j - 1])
                    continue;
                l = j + 1;
                r = n - 1;
                while (l < r) {
                    sum = (long long)nums[i]+nums[j]+nums[l]+nums[r];
                    
                    if (sum > target) {
                        r--;
                    } else if (sum < target) {
                        l++;
                    } else {
                        answer.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while (l < r && l > 0 && nums[l] == nums[l - 1]) {
                            l++;
                        }
                        while (l < r && r < n - 1 && nums[r] == nums[r + 1]) {
                            r++;
                        }
                    }
                }
            }
        }
        return answer;
    }
};