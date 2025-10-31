class Solution {
public:
    bool wordPattern(string pattern, string s) {
    int m=pattern.size(),n=s.size();
    int i=0,j=0;
    string temp="";
    unordered_map <char,string> mpp1;
    unordered_map <string,char> mpp2;
    while(i<m && j<n){
        if(s[j]!=' '){
            temp+=s[j];
        }
        if(j==n-1 || s[j]==' '){
            auto k1=mpp1.find(pattern[i]);
            auto k2=mpp2.find(temp);
            if(k2!=mpp2.end() && k2->second !=pattern[i])return 0;
            if(k1!=mpp1.end() && k1->second !=temp)return 0;
            mpp1[pattern[i]]=temp;
            mpp2[temp]=pattern[i];
            temp="";
            i++;
        }
        j++;
    }
    if(i<m || j<n)return 0;
    return 1;

    }
};