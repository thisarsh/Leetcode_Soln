class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int sumfound=0,sumtobe=0;
       for(auto it:nums){
        sumfound+=it;
       }
       sumtobe=n*(n+1)/2;
       return sumtobe-sumfound;

    }
};