class Solution {
public:
    void dfs( vector <int> &candidates,vector <vector <int>> &ans,
        vector <int> &temp, int target, int i,int sum){
        if(sum>=target ||i>=candidates.size()) {
            if(sum==target)ans.push_back(temp);
            return;
        }
        temp.push_back(candidates[i]);
        dfs(candidates,ans,temp,target,i+1,sum+candidates[i]);
        
         temp.pop_back();
        while(i<candidates.size()-1 && candidates[i]==candidates[i+1]) i++;
       
        dfs(candidates,ans,temp,target,i+1,sum);
        


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> temp;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,ans,temp,target,0,0);
        return ans;

    }
};