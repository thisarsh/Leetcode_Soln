class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,count=0;
        for(auto it:nums){

            if(it!=1){
                ans=max(ans,count);
                count=0;
            }
            else {
                count++;

            }
        }
        return max(ans,count);
    }
};