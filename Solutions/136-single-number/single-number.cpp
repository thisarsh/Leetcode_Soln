class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //hashing by maps
    int n=nums.size();
    map <int,int> mpp;
    for (auto it:nums){
        mpp[it]++;
    }    
    for(auto it:mpp){
        if (it.second!=2){
            return it.first;
        }
    }  
return 0;
    }
};