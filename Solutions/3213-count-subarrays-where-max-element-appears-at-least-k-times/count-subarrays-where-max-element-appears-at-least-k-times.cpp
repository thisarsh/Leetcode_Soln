class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int n=nums.size(),me=1,freq=0,count=0;
        long long ans=0,l=0;

        //find max el
        auto it=max_element(nums.begin(),nums.end());
        me=*it; 

        for (int i=0 ;i<n; i++){
            if(nums[i]==me)count++;
            while(count>=k){
              if(nums[l]==me){
                count--;
            }
                l++;

            }
            ans+=l;
            

            
            // if(count==k){
            //     ans+=k;

            // }

        }
        return ans;
    }
};