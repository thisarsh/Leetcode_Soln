class Solution {
     int ans=0;
public:
   
    int trailingZeroes(int n) {
        if(n>5){
            return (n/5)+trailingZeroes(n/5);
        }
        return n/5;
    }
};