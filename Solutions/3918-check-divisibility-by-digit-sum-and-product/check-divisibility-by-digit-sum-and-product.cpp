class Solution {
public:
    
    bool checkDivisibility(int n) {
        // string s=to_string(n);
        int sum=0,product=1,sum2=0,temp=n;

        while(n){
            sum+=n%10;
            product *=n%10;
            n/=10;
        }
        n=temp;
        sum2=sum+product;
        if(n%sum2==0)return 1;
        return 0;
        


    }
};