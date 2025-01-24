class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = nums.size(), temp, min;
        for (int i = 0; i < l - 1; i++) {min = nums[i];
            for (int j = i + 1; j < l; j++) {
                if (nums[j] < min) {
                    temp = nums[j];
                    nums[j] = min;
                    min = temp;
                }
            } nums[i]=min;
        }

        for (auto it : nums)
            cout << it << " ";
    }
};