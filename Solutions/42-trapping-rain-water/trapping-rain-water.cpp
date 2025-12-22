class Solution {
public:
    int trap(vector<int>& nums) {
        vector <int> pmax,smax;
        int n=nums.size(),ans=0;
        for(int i=0; i<n; i++){
            if(pmax.size()==0 || pmax.back()<nums[i])pmax.push_back(nums[i]);
            else pmax.push_back(pmax.back());

        }
        for(int i=n-1; i>=0; i--){
            if(smax.size()==0 || smax.back()<nums[i])smax.push_back(nums[i]);
            else smax.push_back(smax.back());

        }
        reverse(smax.begin(),smax.end());
        for(int i=1; i<n-1; i++){
            int sum=min(pmax[i],smax[i])-nums[i];
            if(sum>0) ans+=sum;
        }
        return ans;

    }
};