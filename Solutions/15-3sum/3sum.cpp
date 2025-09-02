class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size(),i=0,j=1,k;
        k=n-1;
      sort(nums.begin(),nums.end());
      vector <  vector < int>> answer;
      for(int i=0; i<n; i++){
        int sum;
        j=i+1;k=n-1;
        while(j<k && k<n){
           sum= nums[i]+nums[j]+nums[k];
                if(sum==0){
                    answer.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>0){
                    k--;
                }
                else {
                    j++;
                }
        }

        

        }
        // set <int>;
        set <vector <int>> ans(answer.begin(),answer.end());
        vector <vector <int>> answer1 (ans.begin(),ans.end());
return answer1;
      }
      
};