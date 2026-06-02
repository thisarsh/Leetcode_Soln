class Solution {
public:
    void f(vector <int> &candidates, int target, int i, int sum,  vector <vector  <int>> &ans,vector <int> &curr){

        if(sum==target){
            ans.push_back(curr);
            return;
        }
        if(sum>target){
            return;
        }
        if(i==candidates.size()) return;
        curr.push_back(candidates[i]);
        f(candidates,target,i,sum+candidates[i],ans,curr);
        // sum-=curr.back();
        curr.pop_back();
        f(candidates,target,i+1,sum,ans,curr);
        

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> curr;
        f(candidates,target,0,0,ans,curr);
        return ans;
        
    }
};