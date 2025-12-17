class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0;
        vector <int> hash (256,0);
        int l=0,r=0;
        while(r<n){
          if(hash[s[r]]==0){
            ans=max(ans,r-l+1);
            hash[s[r]]=1;
            r++;
          }
          else{
            hash[s[l]]=0;
            l++;
          }

        }
        // ans=max(r-l+1,ans);
        return ans;
        
    }
};