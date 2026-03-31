class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector < vector <int>> ans;
        int n=intervals.size();
        if(n==1)return intervals;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals.front());
        for(int i=1; i<n; i++){
              if(intervals[i][1]<ans.back()[1] )continue;
           else  if(intervals[i][0]<=ans.back()[1])
            ans.back()[1]=intervals[i][1];
          

            else ans.push_back({intervals[i][0],intervals[i][1]});
        }
        return ans;
    }
};