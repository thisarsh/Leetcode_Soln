class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n=s.size();
        int rem=n%k;
        string s1(k-rem,fill);
        s+=s1;
        vector <string> ans;
        for(int i=0; i<n;i+=k){
            ans.push_back(s.substr(i,k));
        }
       return ans;

    }
};