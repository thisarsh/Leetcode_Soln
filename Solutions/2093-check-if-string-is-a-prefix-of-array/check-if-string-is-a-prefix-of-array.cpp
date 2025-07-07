class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n=words.size();
        string s1="";
        for(auto it:words){
            s1+=it;
            if(s1==s)return 1;

        }
        // if(s1.size()<s.size())return 0;
        return 0;
        
    }
};