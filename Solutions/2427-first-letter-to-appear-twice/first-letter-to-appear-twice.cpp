class Solution {
public:
    char repeatedCharacter(string s) {
        map <char,int> mpp;

        for(auto it:s)
        {
            mpp[it]++;
            if(mpp[it]==2)return it;

        }
        


return 'a';

            }
};