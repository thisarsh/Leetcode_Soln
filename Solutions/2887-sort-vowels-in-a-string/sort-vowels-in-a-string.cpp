class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string s1="";
        vector <int> indexes;
        for(int i=0; i<n; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s1+=s[i];
            indexes.push_back(i);
            }

        }
        sort(s1.begin(),s1.end());
        for(int i=0; i<indexes.size();i++){
            s[indexes[i]]=s1[i];
        }

return s;

    }
};