class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i=0,n=bits.size();
       while(i<n-1){
        if(bits[i]==1)i+=2;
        else i++;
       }
       if(i==n-1)return 1;
       return 0;
    }
};