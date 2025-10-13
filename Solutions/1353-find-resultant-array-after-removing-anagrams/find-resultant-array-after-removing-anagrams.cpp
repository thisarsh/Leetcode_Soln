class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
      vector <string> ans;
      string prev="";
      for(int i=0; i<n; i++){
       string s=words[i];
       sort(s.begin(),s.end());
        if(s!=prev){
            ans.push_back(words[i]);
        }
        prev=s;

      }

     
return ans;
        

        
    }
};