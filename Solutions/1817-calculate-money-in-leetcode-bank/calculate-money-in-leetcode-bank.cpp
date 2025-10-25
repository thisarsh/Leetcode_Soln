class Solution {
public:
    int totalMoney(int n) {
        int rem=n%7;
        int quo=n/7;
        float sum=0;
        for(int i=1; i<=quo; i++){
            sum+=3.5*(2*float(i)+6);
        }
        for(int i=1; i<=rem; i++){
            sum+=(quo+i);
        }
        return sum;
    }
};