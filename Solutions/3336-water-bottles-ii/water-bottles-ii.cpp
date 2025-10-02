class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int fb=numBottles,eb=0,bd=numBottles;
        while(fb>=numExchange){
            fb-=numExchange;
            bd++;
            fb++;
            numExchange++;



        }
        return bd;
    }
};