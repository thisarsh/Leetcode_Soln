class Solution {
public:
     void f(vector<int>& candidates, int target, vector <vector <int>>  & ans,
     vector <int>&temp, int i, int sum ){
        if(target==sum){
            ans.push_back(temp);
            return;
        }
        if(sum>target || i==candidates.size()){
            return;
        }
        temp.push_back(candidates[i]);
        f(candidates,target,ans,temp,i+1,sum+candidates[i]);
        temp.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i++;
        }
       if(i<candidates.size()) f(candidates,target,ans,temp,i+1,sum);
        

     }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> temp;
        sort(candidates.begin(),candidates.end());
        f(candidates,target,ans,temp,0,0);
        return ans;
    }
};