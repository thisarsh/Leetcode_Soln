class Solution {
public:
     bool chk(string s){
            int flag=1;
            for(int i=0; i<=s.size()/2; i++){
                if(s[i]!=s[s.size()-i-1]){flag=0;break;}
            }
            if (flag==1)return 1;
            else return 0;
            
        }

    string firstPalindrome(vector<string>& words) {
        int n=words.size();
      for(auto it: words){
        if(chk(it)==1)return it;
      }
  return "";
    }
        
      
    
};