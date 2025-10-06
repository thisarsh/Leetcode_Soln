class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector <vector <int>> ans;
         ans.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1; i<n; i++){
            if(ans.back()[1]<intervals [i][0]){
               ans.push_back({intervals[i][0],intervals[i][1]});
                continue;
            }
            if(ans.back()[1]<intervals[i][1])ans.back()[1]=intervals[i][1];
        }
        return ans;
    }
};