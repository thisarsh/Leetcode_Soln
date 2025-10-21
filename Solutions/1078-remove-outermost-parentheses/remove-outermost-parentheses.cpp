class Solution {
public:
    string removeOuterParentheses(string s) {
     int n=s.size(),l=0,r=0,count=0;
     string ans="",temp="";
     for(auto it:s){
        temp+=it;
        if(it=='(')count++;
        else count--;
        if(count==0){
           
            ans+=temp.substr(1,temp.size()-2);
            temp="";
        }

     }
     return ans;
     

    }
};