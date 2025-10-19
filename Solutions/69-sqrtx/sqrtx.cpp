class Solution {
public:
    int mySqrt(int x) {

        if(x==1 || x==2)return 1;
        // if(x==4)return 2;
        long long low=0,high=x,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid>x) high=mid-1;
            else low=mid+1;

        }
    //     double prev=0;
    //    for(double i=0; i<=(x); i++){

    //     if(i*i==x)return i;
    //     else if(i*i>x) return i-1;

    //    }
    //    return 0;
    return high;
       
        
    }
};