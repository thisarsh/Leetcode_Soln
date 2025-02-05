class Solution {
public:
    void sortColors(vector<int>& nums) {
       int s1=0,s2=0,s0=0;
       for(int i=0; i<nums.size();i++){
        if(nums[i]==0)s0++;
        else if(nums[i]==1)s1++;
        else s2++;
       }
       for(int i=0; i<nums.size();i++){
        if(s0>0){
            nums[i]=0;
            s0--;
        }
        else if(s1>0){
            nums[i]=1;
            s1--;
        }
        else nums[i]=2;
    
        
       }
    }
};