class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        int ans=1,prev=-1,l=1,pl=1,longest=1;
        for(int i=1; i<n; i++){
            if(nums[i-1]<nums[i]){
                l++;
                longest=max(l,longest);
               
            }
            else{
                if(prev!=-1 && min(l,pl)>ans)ans=min(l,pl);
                pl=l;
                l=1;
                prev=0;
                
                
            }
        }
        if(prev!=-1 && min(l,pl)>ans)ans=min(l,pl);
        return max(ans,(longest/2));

    }
};