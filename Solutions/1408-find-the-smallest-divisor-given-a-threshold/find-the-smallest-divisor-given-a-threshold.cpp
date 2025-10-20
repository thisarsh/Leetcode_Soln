class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // sort(nums.begin(),nums.end());
        int low=1,high=*max_element(nums.begin(),nums.end()),exp=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            
            for(auto it:nums){
                sum+=(it+mid-1)/mid;  
                if (sum > threshold) break;       
            }
            // if(sum<=threshold)return mid;
            if(sum<=threshold){
            // exp=min(mid,exp);
            high=mid-1;
            }
            else{
                low=mid+1;
                
         }
        }
        return low;

    }
};