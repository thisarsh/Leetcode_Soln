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
        f(ans,nums,i+1,curr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans;
        vector <int> curr;
        f(ans,nums,0,curr);
        return ans;

        
    }
};