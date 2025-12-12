class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cand1=nums[0];
       int one=0;
       for(auto it:nums){
        if(it==cand1) one++;
        else one--;
        if(one==0){
            cand1=it;
            one=1;
        }
       } 
       return cand1;
    }
};