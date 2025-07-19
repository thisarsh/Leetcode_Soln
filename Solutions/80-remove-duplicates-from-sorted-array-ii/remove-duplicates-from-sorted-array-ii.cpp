class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n1=nums.size(),p1=0,p2=1;
     if(n1<3)return nums.size();
     int count=1;
     while(p1<nums.size() && p2<nums.size()){
        if(nums[p1]==nums[p2]){
            count++;
            if(count>2){nums.erase(nums.begin()+p2);continue;}
        }
        else {
            
            count=1;}
            p1++;
            p2++;
      


     }
     return nums.size();

    }
};