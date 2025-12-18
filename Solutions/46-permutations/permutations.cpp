class Solution {
public:
    void f(vector <vector <int>>& ans, vector <int> &nums, int i,int idx){
       if(idx==nums.size()-1){
        ans.push_back(nums);
        return;
       }

       for(int i=idx; i<nums.size(); i++){
        swap(nums[i],nums[idx]);
        f(ans,nums,i,idx+1);
        swap(nums[i],nums[idx]);

       }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector <int>> ans;
        f(ans,nums,0,0);
        return ans;
    }

};