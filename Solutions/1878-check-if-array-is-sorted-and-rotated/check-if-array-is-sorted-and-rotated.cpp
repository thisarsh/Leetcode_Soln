class Solution {
public:
    bool check(vector<int>& nums) {
       int p1=-1; //p1 point where i+1>i;
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                p1=i+1;
                break;
            }
        }
        if(p1==-1) return 1;
        for(int i=p1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] || nums[i]>nums[p1-1]) return 0;
        }
        if(nums[nums.size()-1]>nums[0])return 0;
return 1;
    }
};