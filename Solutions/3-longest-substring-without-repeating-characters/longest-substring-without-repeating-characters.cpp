class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0,r=0,l=0;
        vector <int> hash(256,0);
        while(r<n){
            hash[s[r]]++;
            while(hash[s[r]]>1){
                hash[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};