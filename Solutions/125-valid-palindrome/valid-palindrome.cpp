class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<r){

           while(l<r && !((s[l]<='z' && s[l]>='a') || (s[l]<='Z' && s[l]>='A') || ( s[l]>='0' && s[l]<='9'))) l++;
           while(l<r && !((s[r]<='z' && s[r]>='a' )||( s[r]<='Z' && s[r]>='A') || ( s[r]>='0' && s[r]<='9'))) r--;
            
            if(tolower(s[l])!= tolower(s[r]))return 0;
            l++;
            r--;


        }
        return 1;
        
    }

};