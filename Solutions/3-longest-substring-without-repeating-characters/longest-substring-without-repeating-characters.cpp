class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),l=0,i=0,ans=0,temp=0;
        vector <int> hash(256,0);
       for(i=0; i<n;i++){
         
        
        while(hash[s[i]]>0){
            hash[s[l]]--;
            l++;

        }
         hash[s[i]]++;
     
       

        // hash[s[i]]++;
        ans=max(ans,i-l+1);   


       }
           
       return ans;
        
    }
};