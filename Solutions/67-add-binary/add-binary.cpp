class Solution {
public:
    string addBinary(string a, string b) {
        int maxdig=0,na=a.size(),nb=b.size(),carry=0;
        string ans="",temp(abs(na-nb),'0');
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        if(na>nb)b+=temp;
        a+=temp;
        // if(a[0]+b[0]==2)carry=1;
        
        for(int i=0 ;i<max(na,nb); i++){

              if(a[i]-'0'+b[i]-'0'+carry==2){
                carry=1;
                ans+='0';}

              else if(a[i]-'0'+b[i]-'0'+carry==3){
                carry=1;
                ans+='1';
              }
              else if(a[i]-'0'+b[i]-'0'+carry==1){
                carry=0;
                ans+='1';
              }
              else {
                ans+='0';
                carry=0;
              }
             
             

        }
         if(carry==1){
                ans+='1';
              }
 reverse(ans.begin(),ans.end());
                


       
return ans;
        

        
    }
};