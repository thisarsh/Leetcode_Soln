class Solution {
public:
    void gen(vector <string> &ans, int n,int open,int close,string s){
        if(s.size()==n*2){
            ans.push_back(s);
            return;
        }
      
       if(open<n) {
         
          gen(ans,n,open+1,close,s+'(');
       }
        if(close<open){
             
             gen(ans,n,open,close+1,s+')');
        }



    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string s="";
        gen(ans,n,0,0,s);
        return ans;

    }
};