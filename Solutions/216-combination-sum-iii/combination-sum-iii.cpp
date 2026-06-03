class Solution {
public:
    void f(vector <vector <int>> &ans,vector <int> &curr, vector <int> &nums, int sum, 
    int i,int &k,int &n ){
        if(sum==n && curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if(sum>n || curr.size()>k || i==nums.size()){
            return ;
        }
        curr.push_back(nums[i]);
           f(ans,curr,nums,nums[i]+sum,i+1,k,n);
           curr.pop_back();
           f(ans,curr,nums,sum,i+1,k,n);
     
//123456789
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <int> nums ={1,2,3,4,5,6,7,8,9};
        vector <vector <int>> ans;
        vector <int> curr;
        f(ans,curr,nums,0,0,k,n);
        return ans;
    }
};