class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
     for(auto it:words){
        int sz=it.size();
        int p=0;
        while(p<s.size() && p<sz){
            if(it[p]!=s[p]) break;
            else p++;
            if(p==sz)count++;
        }
     }
     return count;
    }
};