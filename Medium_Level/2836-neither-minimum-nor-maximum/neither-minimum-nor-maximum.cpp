class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size(),min=101,max=0;
        if(n<=2)return-1;
        // vector <int> hash(n,0);
        
        sort(nums.begin(),nums.end());
        return nums[1];

    }
};