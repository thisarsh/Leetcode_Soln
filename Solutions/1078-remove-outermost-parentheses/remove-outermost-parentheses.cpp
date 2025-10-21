class Solution {
public:
    string removeOuterParentheses(string s) {
     int n=s.size(),l=-1,r=0,count=0;
     string ans="",temp="";
     for(auto it:s){
        if(it=='('){
            if(count>0){
                ans+=it;
            }   
            count++;
        }
         else {
               
                count--;
                 if(count>0){
                  ans+=it;
                }
            }

        }

     
     return ans;
     

    }
};