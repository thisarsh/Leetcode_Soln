class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        if(n!=t.size())return 0;
        vector <int> hash1(256,-1);
        vector <int> hash2(256,-1);

        for(int i=0; i<n; i++){
            if(hash1[s[i]]!=hash2[t[i]])return 0;
            hash2[t[i]]=hash1[s[i]]=i;
        }
        return 1;

        
        
    }
};