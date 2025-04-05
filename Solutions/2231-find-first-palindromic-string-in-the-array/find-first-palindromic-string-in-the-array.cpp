class Solution {
public:
     bool chk(string s){
            int flag=1,i=0,j=s.size()-1;
            
            while(i<j){
                if(s[i]!=s[j]){flag=0;break;}
                i++;
                j--;
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