class Solution {
public:
    bool p(string &s){
        int n=s.size();
        if(s.empty())return 0;
        for(int i=0; i<=n/2; i++){
            if(s[i]!=s[n-i-1])return 0;
        }
        return 1;
    }
    void f(vector <vector <string>> &ans, vector <string> & curr, string s,int i){
        int n=s.size();
        if(i==n){
            ans.push_back(curr);
            return;
        }


     for(int j=i; j<n; j++){
        string temp=s.substr(i, 1+j-i);
        if(p(temp)){
          curr.push_back(temp);
          f(ans,curr,s,j+1);
          curr.pop_back();

        }
     
        
     }


       

    }
    vector<vector<string>> partition(string s) {
        vector <vector <string>> ans;
        vector <string> curr;
        f(ans,curr,s,0);
        return ans;


    }
};