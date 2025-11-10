class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0,myk=0,sum=0;
        for(auto it:nums){
            high+=it;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            myk=0,sum=0;
            for(auto it:nums){
                if(sum+it <= mid){
                    sum+=it;
                }
                else{
                    sum=it;
                    myk++;
                    if(myk>k)break;
                }
            }
            if(sum>0)myk++;
            if(myk<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

            
        }
        return low;
    }
};