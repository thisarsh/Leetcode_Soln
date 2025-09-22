class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int>  mpp;
        int maxe=0,ans=0;
        for(auto it:nums){
            mpp[it]++;
        }

        for(auto it:mpp){
            if(it.second > maxe ){
                maxe=it.second;
            }

        }
        for(auto it:mpp){
            if(it.second==maxe){
                ans++;
            }
        }
        return ans*maxe;
    }
};