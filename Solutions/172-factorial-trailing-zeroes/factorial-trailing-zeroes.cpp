class Solution {
public:

    int ans(int n){
        if((n/5)<5 ){
            return n/5;
        }
    return n/5+ans(n/5);

    }
    int trailingZeroes(int n) {
            if(n<5)return 0;
            return ans(n);

    
    }
};