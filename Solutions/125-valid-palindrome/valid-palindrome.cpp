class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(),i=0,j;
        j=n-1;
        while(i<=j){
            if(!((s[i]>='0' && s[i]<='9')|| tolower(s[i])<='z' && (tolower(s[i])>='a'))) {i++;continue;}
        if(!((s[j]>='0' && s[j]<='9')|| tolower(s[j])<='z' && (tolower(s[j])>='a'))) {j--;continue;}
        if(tolower(s[i])!=tolower(s[j])) return 0;
    i++;
    j--;  
    }return 1;
    }
};