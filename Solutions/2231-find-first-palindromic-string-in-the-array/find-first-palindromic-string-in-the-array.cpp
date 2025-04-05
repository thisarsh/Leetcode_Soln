class Solution {
public:
     bool chk(const string &s){
            int i=0,j=s.size()-1;
            
            while(i<j){
                if(s[i]!=s[j]){return 0;}
                i++;
                j--;
            }
            return 1;
        
            
        }

    string firstPalindrome(vector<string>& words) {
        int n=words.size();
      for(auto &it: words){
        if(chk(it)==1)return it;
      }
  return "";
    }
        
      
    
};