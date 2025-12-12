class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(),nums.end());
       int ind=-1,maximum=INT_MIN;
        int n=nums.size();
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]) {
                ind=i-1;
                break;
            }
        }
        if(ind==-1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        int indextoswap=ind+1;
        // int tobeplacedindex=-1;
        
        for(int i=ind+1; i<n; i++){
            if(nums[i]<=nums[indextoswap] && nums[i]>nums[ind]) indextoswap=i;
            else break;
        }
        swap(nums[ind],nums[indextoswap]);
        
        reverse(nums.begin()+ind+1,nums.end());
        
    }
};