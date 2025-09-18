class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="",fans="";
        char prev=' ';
        for(int i=n-1; i>=0; i--){
           if(s[i]!=' '){
            ans+=s[i];
           }
           else if (prev!=' '){
              reverse(ans.begin(),ans.end());
            fans+=(ans+" ");
            ans="";
           }
           prev=s[i];
        }
        
        reverse(ans.begin(),ans.end());
        fans+=ans;
        if(fans[fans.size()-1]==' ') fans.pop_back();
        
        return fans;
        
    }
};