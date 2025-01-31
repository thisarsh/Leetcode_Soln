class Solution {
public:

    // int ans(int n){
    //     if((n/5)<5 ){
    //         return n/5;
    //     }
    // return n/5+ans(n/5);

    // }
    int trailingZeroes(int n) {
        int ans=0;
        while(n>=5){
            ans+=n/5;
            n/=5;
        
        }
        
        
        
            // if(n<5)return 0;
            return ans;

    
    }
};