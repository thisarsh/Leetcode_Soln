class Solution {
public:
int chk(int n){
    int ans=0;
    if (n==1 || n==7){return 1;}
    if(n>=2 && n<10) return 0;
     while(n>0){
        ans+=((n%10)*(n%10));
        n/=10;

     }
     return chk(ans);

    }



    

    bool isHappy(int n) {
        return chk(n);
    }
};