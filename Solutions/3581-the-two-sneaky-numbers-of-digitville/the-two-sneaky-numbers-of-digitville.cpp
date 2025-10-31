class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();
        vector<int> hash(n-2,0);
        for(auto it:nums){  
            if(hash[it]==1)ans.push_back(it);
            hash[it]++;     
            }
return ans;

        
    }
};