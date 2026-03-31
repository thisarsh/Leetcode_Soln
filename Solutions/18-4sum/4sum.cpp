class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long int n=nums.size(),sum=0;
        sort(nums.begin(),nums.end());
        vector <vector <int>> ans;
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1; j<n-2; j++){
                if( j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1,l=n-1;
                while(k<l){
                    sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && l<n-1 && nums[l+1]==nums[l]) l--;
                        

                    }
                    else if(sum>target) l--;
                    else k++;
                }
            }
        }
        return ans;
    }
};