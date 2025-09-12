class Solution {
public:
    bool doesAliceWin(string s) {

        // int count=0;
        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
                // count++;
                return 1;
            }
        }
        // if(count%2==0)return 1;
        // if (count>0) return 1;
        return 0;
        
    }
};