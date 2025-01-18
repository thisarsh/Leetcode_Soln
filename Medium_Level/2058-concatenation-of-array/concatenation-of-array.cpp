class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j=0,n=nums.size();
        for(int i=n; i<2*n; i++){
            nums.push_back(nums[j]);
            j++;
        

    }return  nums;}
};