class Solution {
public:
    int sumofsq(int n){
        int sum=0;
     while(n){
        sum+=(n%10)*(n%10);
        n/=10;
     }
     return sum;
    }
    bool isHappy(int n) {
        if(n==1)return 1;
        int slow=sumofsq(n);
       int  fast=sumofsq(sumofsq(n));
        while(1){
        slow=sumofsq(slow);
        fast=sumofsq(sumofsq(fast));
        if( slow==1 || fast==1)return 1;
        if(slow==fast)return 0;

        }
        return 0;
    }
};