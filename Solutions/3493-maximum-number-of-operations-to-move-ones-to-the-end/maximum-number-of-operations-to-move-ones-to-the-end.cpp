class Solution {
public:
    int maxOperations(string s) {
       int n=s.size();
       int oneseen=0,ans=0;
      for(int i=0; i<n-1; i++){
        if(s[i]=='1'){
            oneseen++;
        }
        if(s[i]=='0' && s[i+1]=='1'){
            ans+=oneseen;
        }
       
        
       }
       if(s.back()=='0')ans+=oneseen;
       return ans;
    }
};