class Solution {
public:
  
    int hammingWeight(int n) {
//   string s="";
  int s;
            while(n>0){
                if(n%2!=0)
                s++;
                // else s+='0';
                n/=2;   }   
                return s;
    }
};