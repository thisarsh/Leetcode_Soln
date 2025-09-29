class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //moores voting algorithm
        int n=nums.size(),el1=INT_MAX,el2=INT_MIN,count1=0,count2=0;
        for(int i=0; i<n; i++){
            if(count1==0 && el2!=nums[i]){
                el1=nums[i];
            }
            else if(count2==0 && el1!=nums[i]){
                el2=nums[i];
            }
            if(nums[i]==el1){
                count1++;
            }
           else if(nums[i]==el2){
                count2++;
            }
            else {
                count1--;
                count2--;
            }

        }
        int fel1=0,fel2=0;
        for(auto it:nums){
            if(it==el1)fel1++;
            else if(it==el2)fel2++;

        }
        if( fel1>n/3 && fel2>n/3)return {el1,el2};
        else if(fel1>n/3)return {el1};
        else if(fel2>n/3)return {el2};
        else return {};
     
        
    }
};