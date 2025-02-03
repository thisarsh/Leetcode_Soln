class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(),minl=1,maxl=1;
        for(int i=0; i<n-1;i++){
            int prev=nums[i],tminl=1,tmaxl=1;
            for(int j=i+1; j<n; j++)//inc
            {
                // int tmaxl=1;?
                if(nums[j]>prev){
                    tmaxl++;
                    maxl=max(tmaxl,maxl);
                    prev=nums[j];
                }
                else break;
            }
            for(int j=i+1; j<n; j++)//dec
            {
               
                if(nums[j]<prev){
                    tminl++;
                    minl=max(tminl,minl);
                    prev=nums[j];
                }
                else break;
            }    
        }return max(minl,maxl);
    }
};