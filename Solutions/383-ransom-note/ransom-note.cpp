class Solution {
public:
    bool canConstruct(string r, string s) {
        int n=r.size();
      
 
        for(int i=0; i<n;i++){
           auto it=find(s.begin(),s.end(),r[i]) ;
           if(it==s.end()) return 0;
           s[it-s.begin()]='0';
           
        }
        return 1;

        
    }
};