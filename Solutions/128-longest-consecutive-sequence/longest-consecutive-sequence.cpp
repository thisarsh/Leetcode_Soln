#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case: empty input

        set<int> st(nums.begin(), nums.end()); // Remove duplicates and sort
        vector<int> num(st.begin(), st.end()); // Convert back to vector
        
        int tl = 1, ml = 1, prev = num[0];

        for (int i = 1; i < num.size(); i++) {
            if (num[i] == prev + 1) {
                tl++;
            } else {
                tl = 1; // Reset sequence length
            }
            ml = max(ml, tl);
            prev = num[i];
        }

        return ml;
    }
};
