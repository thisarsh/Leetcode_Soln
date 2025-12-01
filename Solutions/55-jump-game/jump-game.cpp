class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),prev=nums[0];
        if(n==1)return 1;
        for(int i=0; i<n-1; i++){
            if(nums[i]>=prev){
                prev=nums[i];
            }
            else prev--;
            if(prev==0)return 0;
        }
        return 1;
        // return 0;
    }
};