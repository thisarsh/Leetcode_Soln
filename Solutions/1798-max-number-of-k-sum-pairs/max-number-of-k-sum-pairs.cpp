class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j,count=0;
        j=n-1;
       sort(nums.begin(),nums.end());
       while(i<j){
        if(nums[i]+nums[j]==k){
            count++;
            i++;
            j--;

        }
        else if(nums[i]+nums[j]<k){
            i++;
        }
        else j--;
       }
       

       return count;

       }
    
};