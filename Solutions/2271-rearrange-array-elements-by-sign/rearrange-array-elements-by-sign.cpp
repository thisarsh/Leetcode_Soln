class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> hashp;
        vector<int> hashn;
        vector<int> ans;
        for (auto it: nums){
            if(it>0){
                hashp.push_back(it);
            }
            else hashn.push_back(it);
        }
        for ( int i=0; i<n/2; i++){
            ans.push_back(hashp[i]);
            ans.push_back(hashn[i]);
        }
        return ans;
        
    }
};