class Solution {
public:
    
    bool checkDivisibility(int n) {
        string s=to_string(n);
        int sum=0,product=1,sum2=0;
        for(auto it:s){
            sum+=(it-'0');
            product *=(it-'0');
        }
        sum2=sum+product;
        if(n%sum2==0)return 1;
        return 0;
        


    }
};