class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m1=0,count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){count++;if(count>m1)m1=count;}
            else count =0;
        } return m1;
    }
};