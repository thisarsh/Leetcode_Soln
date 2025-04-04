class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),i;
        string ans1="",temp="";


       reverse(s.begin(),s.end());
         for(i=0;i<n;i++){
            
            if(s[i]!=' '){
               
                temp+=s[i];
   
            }
            else if (s[i]==' ' ){
                reverse(temp.begin(),temp.end());
                ans1+=temp;
                if(temp!="")ans1+=" ";
                temp="";
            }
            if((i==n-1)){
                reverse(temp.begin(),temp.end());
               ans1+= temp;
            }
         }
            if(ans1[ans1.size()-1]==' '){
                ans1.pop_back();

            }

         return ans1;




        // int n=s.size(),i=0;
        // vector <string> ans;
        // string ok="";
        // string temp="";
        // for(int i=0; i<n; i++){
        //     if(s[i]==' ')
        //     {
        //     if(temp.size()>=1)ans.push_back(temp);
        //     temp="";
        //     }
          
        //     else{
        //         temp+=s[i];
        //     }
        //     if(i==n-1 && temp.size()>=1){
        //         ans.push_back(temp);
        //     }
        // }
        // for(int i=ans.size()-1;i>=0;i--){
        //         ok+=ans[i];
        //         if(i==0)return ok;
        //         ok+=" ";
        // }
        // return ok;
         
    }
};