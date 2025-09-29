class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int el=nums[0],count=0;
       for(int i=0; i<nums.size(); i++){
   
        if(nums[i]==el)count++;
        else count--;
        if(count==0)el=nums[i+1];
        
       }
       return el;
    }
};