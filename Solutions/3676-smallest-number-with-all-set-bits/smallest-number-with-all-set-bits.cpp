class Solution {
public:
    int smallestNumber(int n) {
        int temp=0,i=0;
        
        // if(n==4)return 7;
        for(i=0; i<=n/2; i++){
            // if(pow(2,i)==n)return n;
            if(pow(2,i)>n)break;
        }
        return pow(2,i)-1;
    }
};