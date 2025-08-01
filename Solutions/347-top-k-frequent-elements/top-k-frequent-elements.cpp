class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
       
         vector <int> freq;
        unordered_map <int,int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        
        for(auto it:mpp){
            freq.push_back(it.second);
        }
         vector <int> ans(freq.size());
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());

         for(auto it:mpp){
         auto i=find(freq.begin(),freq.end(),it.second);
        int index=i-freq.begin();
        freq[index]=0;
        ans[index]=it.first;


         }

        // reverse(ans.begin(),ans.end());
        ans.erase(ans.begin()+k,ans.end());
        return ans;
    }
};