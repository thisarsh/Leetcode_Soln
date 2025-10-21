class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        // long long req=m*k;
        int ans=INT_MAX;
        // if(req>n)return -1;
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int i=0,count=0,pairs=0;
           for(auto it:nums){
             if(it<=mid){
                count++;
                if(count==k){
                    pairs++;
                    count=0;
                }
                if(pairs>m)break;
             }
            else count=0;
           
           }
           if(pairs>=m){
            high=mid-1;
            ans=min(mid,ans);
           }
           else{
            low=mid+1;
           }


        }
        if(ans==INT_MAX)return -1;
        return ans;


       
     
    }
};