class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),prev=nums[0],ans=0,temp=0;
        for(int i=1; i<n; i++){
            if(nums[i]<=prev){
                temp=nums[i];
                nums[i]=prev+1;
                ans+=nums[i]-temp;
            }
            prev=nums[i];
            


        }
        return ans;
        
    }
};