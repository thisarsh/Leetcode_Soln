class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector <string> ans;
        for(int i=0; i<n;i++)
        {
            string chk="";
            for(int j=i;j<n;j++)
            {
                chk+=s[j];
                string temp="";
                temp=chk;
                reverse(chk.begin(),chk.end());
                if(s.substr(i,j-i+1)==chk)
                {
                    ans.push_back(chk);

                }
                chk=temp;
            }
        } return ans.size();
    }
};