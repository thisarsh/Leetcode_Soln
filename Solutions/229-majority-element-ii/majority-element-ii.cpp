class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int , int> mpp;
        int n=nums.size();
        // n=n/3;
        for(auto it: nums){
            mpp[it]++;
        }
        nums.clear();

        for(auto it:mpp){
            if(it.second>(n/3)) nums.push_back(it.first);
        }
        return nums;

    }
};