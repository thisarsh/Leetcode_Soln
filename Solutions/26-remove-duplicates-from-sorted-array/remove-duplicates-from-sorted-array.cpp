class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        // if(n==1)return 1;
        int l=0,r=1;
        while(r<n){
            if(nums[l]!=nums[r]){
                
                nums[l+1]=nums[r];
                l++;r++;
            }
            else {
                r++;
               
            }

        }
        return l+1;
    }
};