class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> ans;
        int lsum=0;
        int rsum=accumulate(nums.begin(),nums.end(),0);
        for(auto i:nums)
        {
            ans.push_back(abs(lsum-(rsum-i)));
            lsum+=i;
            rsum-=i;
        }
        return ans;

    }
};