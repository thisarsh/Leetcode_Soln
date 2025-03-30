class Solution {    
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();k=k%n;
    //    rotate(nums.begin(),nums.end()-k,nums.end());
           reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
 
        
    }
};