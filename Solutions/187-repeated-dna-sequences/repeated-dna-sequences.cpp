class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        string s1=s.substr(0,10);
        unordered_map <string,int> hash;
        vector <string> ans;
        if(n<=10)return ans ;
        for(int i=10; i<=n; i++){

           

            if(hash.find(s1)!=hash.end() && hash[s1]==1){
                ans.push_back(s1);
               
                
            }
             hash[s1]++;
            s1.erase(0,1);
            s1+=s[i];
            

            

        }
        return ans;
    }
};