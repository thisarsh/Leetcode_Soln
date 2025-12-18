class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size(),ans=0,sum=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
        for(auto it:nums){
            sum+=it;
            auto j= mpp.find(sum-goal);
            if(j!=mpp.end()){
                ans+=j->second;
            }
            mpp[sum]++;

        }
        return ans;
    }
};