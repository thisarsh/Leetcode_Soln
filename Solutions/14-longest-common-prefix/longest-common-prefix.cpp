class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans=s[0];
        for(int i=1; i<s.size();i++){
            string ans2="";
            int a=0;
            for(a=0; a<s[i].size();a++){
                if(s[i][a]==ans[a]){
                    ans2+=s[i][a];
                }
                else break;
            }
            ans=ans2;

        }
        return ans;

        
    }
};