class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,m=0,h=n-1;
        for(int i=0; i<n;  i++){
            if(nums[m]==0){
                swap(nums[l++],nums[m++]);
            }
            else if(nums[m]==1){
                m++;//0 n 2 already sort ho chuke h no need to sort 1
            }
            else {
                swap(nums[h--],nums[m]);
                
            }

        }     
        // return ans; 

    }
};