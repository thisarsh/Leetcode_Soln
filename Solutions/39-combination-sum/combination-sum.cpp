class Solution {
public:
    void f(  vector <vector <int>> &ans,vector<int>& candidates, 
    int target,int i, vector <int> nums,int sum){
        if(sum==target){
            ans.push_back(nums);
            return ;
        }
        if(sum>target || i==candidates.size())return;
        
            nums.push_back(candidates[i]);
            f(ans,candidates,target,i,nums,sum+candidates[i]);

    
            nums.pop_back();
            // nums.push_back(candidates[i]);
            f(ans,candidates,target,i+1,nums,sum);

        

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> nums;
        f(ans,candidates,target,0,nums,0);
        return ans;
    }
};