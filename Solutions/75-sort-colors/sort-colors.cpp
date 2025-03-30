class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),count1=0,count0=0,count2=0;
        count0=count(nums.begin(),nums.end(),0);
        count1=count(nums.begin(),nums.end(),1);
        count2=count(nums.begin(),nums.end(),2);
        for(auto &it:nums){
            if(count0>0){
                it=0;
                count0--;
            }
            else if(count1>0){
                it=1;count1--;
            }
            else {it=2;count2--;}
        }
    }
};