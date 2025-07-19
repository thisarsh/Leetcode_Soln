class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n1 = nums.size(), p1 = 0, p2 = 1;
        if(n1 < 3) return n1;

        int count = 1;
        while(p2 < nums.size()) {

            if(nums[p1] == nums[p2]) {
                count++;
                if(count > 2) {
                    nums.erase(nums.begin() + p2);
                    // Do not move p2 here, because new element has come to p2
                    continue;
                }
            } else {
                // New number starts
                count = 1;
            }

            p1++;
            p2++;
        }

        return nums.size();
    }
};
