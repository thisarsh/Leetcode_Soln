class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), tsum = 0, l = 1, r, ans = 0, i = 0;
        r = n - 1;
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if ( i>0 && nums[i] == nums[i - 1])
                continue;
            l = i + 1;
            r = n - 1;

            while (l < r ) {

                tsum = nums[i] + nums[l] + nums[r];
                if (tsum > 0) {
                    r--;
                } else if (tsum < 0) {
                    l++;
                } else {
                    answer.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                
                while (l < r && l>0 && nums[l] == nums[l - 1] ) {
                    l++;
                }
                while (l < r && r<n-1 && nums[r] == nums[r + 1]) {
                    r--;
                }
            }
            }
        }
        // set<vector<int>> st(answer.begin(), answer.end());
        // answer.assign(st.begin(), st.end());
        return answer;
    }
};