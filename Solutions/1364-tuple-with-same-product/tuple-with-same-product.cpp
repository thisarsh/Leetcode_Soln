class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        // i can see that if 1 pair found, 4 pairs can be made
        vector <int> ans;
        int n=nums.size();
        for(int i=0; i<n-1;i++)
        {
            for(int j=i+1;j<n; j++)
            {
                ans.push_back(nums[i]*nums[j]);
            }
        }
        unordered_map <int,int> mpp;
        for(auto it:ans)
        {
            mpp[it]++;
        }
        int total=0;
        for(auto it:mpp)
        {
            if(it.second>1)total+=(it.second*(it.second-1))*4;
        }
        return total;
    }
};