class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),tp=1,cp=1;
      
        // vector <int> ans(n,1);
        vector <int> lp(n,1);
        vector <int> rp(n,1);
        
        for(int i=0; i<n; i++){
                lp[i]=tp;
                tp*=nums[i];
        }

        for(int i=n-1; i>=0; i--)
        {
            rp[i]=cp;
            cp*=nums[i];
        }
        for(int i=0; i<n;i++){
            nums[i]=lp[i]*rp[i];
        }

        return nums;

    }
};