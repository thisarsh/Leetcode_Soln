class Solution {
public:
    bool canConstruct(string r, string s) {
        int n=s.size();
     unordered_map <char,int> mpp;
      for(int i=0; i<n;i++){
        mpp[s[i]]++;

      }
        for(auto it:r){
            if(mpp[it]==0)return 0;
            mpp[it]--;
        }
       return 1;
    }
};