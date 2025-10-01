class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int left=0,ans=numBottles;
        while(numBottles>=numExchange && numBottles>0){
            left+=numBottles%numExchange;
            numBottles/=numExchange;
            ans+=numBottles;
            numBottles+=left;
            left=0;
            


        }return ans;
        
    }
};