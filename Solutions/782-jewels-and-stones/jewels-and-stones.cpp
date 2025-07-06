class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0,n=stones.size();
        for(int i=0; i<jewels.size();i++){
            for(int j=0; j<n; j++){
                if(jewels[i]==stones[j])count++;
            }

        }
        return count;
    }
};