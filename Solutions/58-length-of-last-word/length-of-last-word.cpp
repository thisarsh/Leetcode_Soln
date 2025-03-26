class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0,n=s.size(),index=-1,ans=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ')
            {
            index=i;
            break;
            }

        }
        
         for(int i=index;i>=0;i--){
            if(s[i]!=' ')
            l++;
            else
             break;
            

        }
        return l;
        
    }
};