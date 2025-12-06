class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,tw=0;
        for(auto it:bills){
            if(it==5)five++;
            if(it==10){
                ten++;
                if(five)five--;
                else return 0;
            }
            if(it==20){
                tw++;
                if(ten && five) {
                    ten--;
                    five--;
                }
                else if(five>=3) five-=3;
                else return 0;    
         }
        }
        return 1;
    }
};