class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),gmax=0;
        for(int i=0; i<n; i++){
            int tempmax=0;
            int prev=-1;
            for(int j=i; j<n; j++){
                if(nums[j]<=prev)break;

                tempmax+=nums[j];
                gmax=max(gmax,tempmax);
                prev=nums[j];
                
            }
        }
return gmax;

        
    }
};