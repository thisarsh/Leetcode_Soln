class Solution {
public:
    void f(vector <vector <int>> &ans,vector <int> &temp,int k,int n,int sum,int i,vector <int> &curr ){
        if(curr.size()==k ){
            if(sum==n && curr.size()==k)ans.push_back(curr);
            return;
        }
        if(i==9)return;
        // if(sum>n || k>curr.size() || i>8)return;
        curr.push_back(temp[i]);
        f(ans,temp,k,n,sum+temp[i],i+1,curr);
        curr.pop_back();
        f(ans,temp,k,n,sum,i+1,curr);
    

        

        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <vector <int>> ans;
        vector <int> temp={1,2,3,4,5,6,7,8,9};
        vector <int> curr;

        f(ans,temp,k,n,0,0,curr);
        return ans;
        
    }
};