class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
      vector <int> mpp(26,0);
        for(int i=0; i<n; i++){
            mpp[s[i]-'a']++;

        }
     

        for(int i=0; i<n; i++){
            if(mpp[s[i]-'a']==1) return i;
            

        }
       return -1;
        

       
        
    }
};