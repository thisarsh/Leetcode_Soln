class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low=1,high=nums[nums.size()-1],exp=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            
            for(auto it:nums){
                sum+=(it/mid)+((it%mid)!=0);        
            }
            // if(sum<=threshold)return mid;
            if(sum<=threshold){
            exp=min(mid,exp);
            high=mid-1;
            }
            else{

                low=mid+1;
         }
        }
        return exp;

    }
};