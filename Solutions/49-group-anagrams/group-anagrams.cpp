class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector <string>> ans; 
        unordered_map <string,vector <string>> mpp;
        for(auto &it:strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(it);
            
        }
        for(auto it:mpp){
            vector <string> curr=it.second;

            ans.push_back(curr);

        }
        return ans;
    }
};