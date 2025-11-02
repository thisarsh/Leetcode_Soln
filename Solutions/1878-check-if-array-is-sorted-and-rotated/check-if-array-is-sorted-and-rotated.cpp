class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int chkmax=0,chkmin=0,mel=-1,flag=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1])
            flag=1;
        }
        if(flag==0)return 1;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                if(chkmax==0){
                chkmax=1;
                mel=nums[i];
                if(mel<nums.back() || nums[0]<nums.back())return 0;
                }

                else{
                    return 0;
                }
        }

        }
       
        return 1;
    }
};