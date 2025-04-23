class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       long long int n=nums.size(),l=0,r=0,p=1,count=0;
        while(r<n){
            p*=nums[r];

            
             while(p>=k && l<=r) {
             p/=nums[l];
             if(p==0)p=1;
             l++;

             }

            if(p<k){
                count+=r-l+1;}
                r++;
            
        }return count;
    }
};