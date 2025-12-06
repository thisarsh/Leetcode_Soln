class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n1=s.size(),n2=t.size();
        // if(n1!=n2) return 0;
        // vector <int> hash(26,0);
        // for(int i=0; i<n1;i++){
        //     hash[t[i]-'a']++;
        // }
        // vector <int> hash2(26,0);
        // for(int i=0; i<n1;i++){
        //     hash2[s[i]-'a']++;
        // }
        // if(hash==hash2) return 1;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
        // return 0;

    }
};