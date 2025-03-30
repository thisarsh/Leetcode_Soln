class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),gc=0,tc=0;
        for(int i=0;i<n;i++){
           
            if(nums[i]==1){
                tc++;
            }
            // gc=max(gc,tc);
            else{gc=max(gc,tc); tc=0;}
            

        }
        return max(gc,tc);
    }
};