class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4)return {};
     
        sort(nums.begin(),nums.end());
        vector <vector <int>> answer;
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1; j<n-2; j++){
                if(j >i+1 && nums[j]==nums[j-1])continue;
            long long sum=0;
               int l=j+1,r=n-1;
                while(l<r){
                    sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        answer.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && l>0 && nums[l]==nums[l-1]){
                                l++;
                        }
                        while(l<r && r<n-1 && nums[r]==nums[r+1]){
                                r--;
                        }
                    }

                        else if(sum<target){
                            l++;
                        }
                        else r--;



                    }



                }
            }

        
        return answer;
    }
};