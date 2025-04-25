class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),l=0,r=0,ans=1;
        if(n==0)return 0;
        vector <int> hash(256,0);
 
        for(int i=0; i<n; i++){
            hash[s[i]]++;

            while(hash[s[i]]>1){
                hash[s[l]]--;
                l++;

            }
            ans=max(ans,i-l+1);


        }
        return ans;
    }
};