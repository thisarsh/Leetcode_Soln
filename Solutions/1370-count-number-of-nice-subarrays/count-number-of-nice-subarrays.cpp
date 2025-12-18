class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      for(auto &it:nums){
        if(it%2){
            it=1;
        }
        else it=0;
      }
      int sum=0,ans=0;
      unordered_map <int,int> mpp;
      mpp[0]=1;
      for(auto it: nums){
        sum+=it;
        auto j=mpp.find(sum-k);

        if(j!=mpp.end()){
            ans+=j->second;
        }
        mpp[sum]++;


      } 
      return ans;
    }
};