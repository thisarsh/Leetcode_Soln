class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map <int,int> mpp;
        for(int i=0; i<n; i++){
            auto it=mpp.find(nums[i]);
            if(it!=mpp.end()){
                return {i,it->second};
            }
            mpp[target-nums[i]]=i;

        }
        return {};
        
    }
};