class Solution {
public:
    void f(vector <vector <int>> &ans,vector <int> &nums, int i, vector <int> &curr){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        f(ans,nums,i+1,curr);
        curr.pop_back();
        while(i<nums.size()-1 && nums[i]==nums[i+1])i++;
        f(ans,nums,i+1,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector <int>> ans;
        vector <int> curr;
        f(ans,nums,0,curr);
        return ans;

        
    }
};