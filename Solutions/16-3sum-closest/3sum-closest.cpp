class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),maxdiff=INT_MAX,ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(sum-target);
                if(sum==target) return sum;
               else if(diff<maxdiff) {ans=sum; maxdiff=diff;} 
                else if(sum>target){
                    k--;
                }
                else j++;
            }
        }
        return ans;
        
    }
};