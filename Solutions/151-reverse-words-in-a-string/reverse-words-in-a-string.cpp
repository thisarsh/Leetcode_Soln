class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),i=0;
        vector <string> ans;
        string ok="";
        string temp="";
        for(int i=0; i<n; i++){
            if(s[i]==' ')
            {
            if(temp.size()>=1)ans.push_back(temp);
            temp="";
            }
          
            else{
                temp+=s[i];
            }
            if(i==n-1 && temp.size()>=1){
                ans.push_back(temp);
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
                ok+=ans[i];
                if(i==0)return ok;
                ok+=" ";
        }
        return ok;
    }
};