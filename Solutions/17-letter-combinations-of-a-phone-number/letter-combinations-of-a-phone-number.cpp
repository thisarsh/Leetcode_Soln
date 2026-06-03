class Solution {
public:
    void f(vector <string > &ans, unordered_map <char,string> &mpp, int i,string str,
    string &dig ){
        if(str.size()==dig.size()){
            ans.push_back(str);
            return;
        }
        for(auto it:mpp[dig[i]]){
            f(ans,mpp,i+1,str+it,dig);


        }

    }
    vector<string> letterCombinations(string digits) {
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
        vector <string > ans;
    
        f(ans,mpp,0,"",digits);
        return ans;
    }
};