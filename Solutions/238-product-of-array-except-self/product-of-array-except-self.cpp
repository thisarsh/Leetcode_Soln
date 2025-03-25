class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),lp=1,rp=1;
        vector <int> lp_hash(n,1);
        vector <int> rp_hash(n,1);
        vector <int> ans_hash(n,1);
        for(int i=0;i<n;i++){
            lp_hash[i]*=lp;
            lp*=nums[i];

        }
        for(int i=n-1;i>=0;i--){
            rp_hash[i]*=rp;
            rp*=nums[i];
        }
        for(int i=0;i<n;i++){
            ans_hash[i]=lp_hash[i]*rp_hash[i];
        }
        return ans_hash;
            }
};