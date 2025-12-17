class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size(),temp=k,ans=0;
        int l=0,r=0;
        while(r<n){
            if(nums[r]){
                ans=max(ans,r-l+1);
                r++;
            }
            else if(temp){
                temp--;
                ans=max(ans,r-l+1);
                r++;
            }
            else{
                if(nums[l]==0){
                    temp++;
                }
                l++;
            }
            
        }
        
        return ans;

        
    }
};