class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tsum=accumulate(nums.begin(),nums.end(),0);
        int lsum=0,ans=0;
        for(int i=0; i<nums.size()-1; i++){
            lsum+=nums[i];
            int diff=abs(tsum-2*lsum);
            if(diff%2==0){
                ans++;
            }
        }
        return ans;
    }
};