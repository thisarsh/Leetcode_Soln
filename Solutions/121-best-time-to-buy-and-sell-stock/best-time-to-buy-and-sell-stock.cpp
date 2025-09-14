class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size(),ans=0,minfound=INT_MAX;
        for(auto it:nums){
            ans=max(it-minfound,ans);
            minfound=min(minfound,it);
        }



        //bf
        // for(int i=0; i<n-1;i++){
        //     for(int j=i+1; j<n; j++){
        //         ans=max(nums[j]-nums[i],ans);
        //     }
        // }
        return ans;
    }
};