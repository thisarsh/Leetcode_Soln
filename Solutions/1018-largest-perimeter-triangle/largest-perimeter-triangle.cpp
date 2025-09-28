class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size(),l=1,r,maxi=0,temp=0;
        r=n-1;
        sort(nums.begin(),nums.end());
       reverse(nums.begin(),nums.end());
       for(int i=0; i<n-2 ; i++){
        r=i+2;
        l=i+1;
        if(nums[r]+nums[l]>nums[i]){
            return nums[r]+nums[l]+nums[i];
        }
       }
       return 0;

        
    }
};