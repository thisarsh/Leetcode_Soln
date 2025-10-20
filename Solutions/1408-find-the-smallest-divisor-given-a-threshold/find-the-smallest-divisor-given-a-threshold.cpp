class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low=1,mid,high=nums[nums.size()-1],exp=INT_MAX;
        while(low<=high){
            int sum=0;
            mid=low+(high-low)/2;
            for(auto it:nums){
                sum+=(ceil(float(it)/mid));                
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