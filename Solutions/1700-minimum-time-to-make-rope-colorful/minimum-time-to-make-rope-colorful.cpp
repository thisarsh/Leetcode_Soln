class Solution {
public:
    int minCost(string colors, vector<int>& nums) {
        int n=colors.size();
        int count=0,currmax=-1;
        int l=0,r=1;
        while(r<n){
           while(r<n && colors[l]==colors[r]){
            count+=min(nums[l],nums[r]);
            if(nums[r]>nums[l]){
                l=r;
            }
            r++;

           }
           l=r;
           r++;
        }
       
       return count;
    }
};