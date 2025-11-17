class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size(),prev=-1,chk=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1 && chk ==0 ){
                prev=i;
                chk=1;
                continue;
            }
            if(nums[i]==1){
               if( i-prev>k) prev=i;
               else return 0;
            }
        



        }
        return 1;

        
    }
};