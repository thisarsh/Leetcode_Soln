class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto it = max_element(nums.begin(),nums.end());
        int index=it-nums.begin();
        return index;
    }
};