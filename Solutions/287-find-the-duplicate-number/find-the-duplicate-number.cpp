class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector <int> hash(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
         hash[nums[i]-1]++;
         
            // if(nums[i]!=i)
        }
        for(int i=0; i<nums.size();i++){
            if(hash[i]>=2)return i+1;
        }

        
return nums[0];
    }
};