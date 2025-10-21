class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
         if (1LL*m*k>n)return -1;
        int ans=INT_MAX;
   
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
        return ans;


       
     
    }
};