class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
       unordered_map <int,int> mpp;

       for(int i=0; i<n; i++){
        auto it=mpp.find(nums[i]);
        if(it!=mpp.end()){
            if(i-it->second<=k)return 1;
        }
        
        mpp[nums[i]]=i;
       }
       return 0;
    }
};