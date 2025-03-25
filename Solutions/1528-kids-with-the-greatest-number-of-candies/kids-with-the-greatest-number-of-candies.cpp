class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extra) {
        
        vector <bool> b(nums.size(),0);
       auto it=max_element(nums.begin(),nums.end());
       int max=*it;
       for(int i=0;i<nums.size();i++)
       {
       if(nums[i]+extra>=max)b[i]=1;
       }
        return b;

    }
};