class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),flag=0;
       sort(nums.begin(),nums.end());
       int prev=0;
       for(int i=0; i<n; i++){
       if(nums[i]!=i)return i;
       }
       return n;
    }
};