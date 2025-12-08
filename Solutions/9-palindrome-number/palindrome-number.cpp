class Solution {
public:
    bool isPalindrome(int x) {
         long int y=0,sum=0,temp=x;
        while(x>0){
            y+=x%10;
            y*=10;
            x/=10;
        }y/=10;

        if(y==temp)return 1;
        return 0;
    }
};