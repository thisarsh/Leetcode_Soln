class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map <char,int> mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]]++;

        }
        // int index=-1,ch='0';

        for(int i=0; i<n; i++){
            if(mpp[s[i]]==1) return i;
            

        }
       return -1;
        

       
        
    }
};