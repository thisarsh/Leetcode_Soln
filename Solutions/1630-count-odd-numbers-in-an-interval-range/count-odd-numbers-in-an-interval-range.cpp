class Solution {
public:
    int countOdds(int low, int high) {
        
        if (low%2==0) low+=1;
        if (high%2==0) high-=1;
        int d=high-low;
        return d/2+1;

        
    }
};