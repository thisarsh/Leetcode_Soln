class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int r=1,l=0;
        while(l<r && r<n){
        if(nums[l]==nums[r]){
            r++;
        }
        else{
            swap(nums[l+1],nums[r]);
            l++;
            r++;
        }
            
        }
        return l+1;

    }
};