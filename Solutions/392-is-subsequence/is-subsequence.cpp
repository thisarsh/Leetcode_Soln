class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1=0,found=0;
        for(int i=0; i<t.size();i++){
            if(s[p1]==t[i]){
                p1++;
                found++;
            }
            
        }if(found!=s.size())return 0;
            return 1;
    }
};