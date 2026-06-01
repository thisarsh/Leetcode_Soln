class Solution {
public:
    double myPow(double x, long long n) {
        
        if(n<0){
         return 1/(myPow(x, -n));
        }
        if(n%2==1) return x * myPow(x*x, n/2);
        if(n==0)return 1;
    
        
        return myPow(x*x, n/2);
        
    }
};