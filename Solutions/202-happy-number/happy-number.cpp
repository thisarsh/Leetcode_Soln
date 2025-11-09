class Solution {
public:
    int sumofsq(int n){
        int sum=0;
     while(n){
        sum+=(n%10)*(n%10);
        n/=10;
     }
     return sum;
    }
    bool isHappy(int n) {
        int neww=0;
        unordered_set <int> st;
        while(1){  neww=sumofsq(n);
            if(n==1)return 1;
           
            else {       

                if(st.find(neww)!=st.end() )return 0;
                else st.insert(neww);
                n=neww;
            }
        }
       return 1;
        
    }
};