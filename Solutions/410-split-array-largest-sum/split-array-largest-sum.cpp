class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int it:nums){
            high+=it;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0,myk=0;
            for(int i:nums){
                if(sum+i<=mid){
                    sum+=i;
                }
                else{
                    myk++;
                    sum=i;
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