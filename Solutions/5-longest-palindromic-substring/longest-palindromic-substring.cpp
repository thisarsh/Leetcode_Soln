class Solution {
public:
 bool  pcheck(string *str)
      {
            int n=(*str).size();
            for(int i=0; i<=n/2; i++)
            {
                if((*str)[i]!=(*str)[n-i-1]){ return 0;}
            }

            return 1;
      }
    string longestPalindrome(string s) {
     
            int n=s.size();
            string s1="",ans="";
            for(int i=0; i<n; i++){
               
                s1="";
                for(int j=i;j<n; j++){
                    s1+=s[j];
                    if(pcheck(&s1)==1 && ans.size()<s1.size()){
                        ans=s1;    
                    }

                }
            }
            return ans;




        
    }
};