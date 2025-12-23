class Solution {
public:
    bool judgeSquareSum(int c) {
       long long  l=0;
       long long r= (long long )sqrt  (c);
       while(l<=r){
   
        long long sum=l*l+r*r;
        if(sum==c) return true;
        else if(sum<c)l++;
        else r--;

       }
        return 0;

         
     
}
};