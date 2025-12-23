class Solution {
public:
    void f(vector <string> & ans, string &s, int open,int close, int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if( open <n){
            s+='(';
            f(ans,s,open+1,close,n);
            s.pop_back();

        }
        if(close<open){
            s+=')';
            f(ans,s,open,close+1,n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string s;
        f(ans,s,0,0,n);
        return ans;
    }
};