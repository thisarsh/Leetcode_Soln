class Solution {
public:
    void gen(vector <string> &ans,string digits,string s,int i,unordered_map <char,string> &mpp){
        if(s.size()==digits.size()){
            ans.push_back(s);
            return ;
        }
        for(auto it:mpp[digits[i]]){
            gen(ans,digits,s+it,i+1,mpp);
        }
        // gen(ans,digits,s,/)


        
    }
    vector<string> letterCombinations(string digits) {
        vector <string> ans;
        unordered_map<char, string> mpp= 
        {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        gen(ans,digits,"" ,0,mpp);
        return ans;
    }
};