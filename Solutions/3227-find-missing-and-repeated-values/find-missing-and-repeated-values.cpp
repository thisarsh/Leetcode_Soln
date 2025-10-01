class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),a,b;
        
        vector<int> hash(n*n+1,0);
        for(auto i:grid){
            for(auto j:i){
                hash[j-1]++;

            }
        }
        for(int i=0; i<n*n; i++){
          if(hash[i]==2)a=i+1;
          else if(hash[i]==0)b=i+1;
        }
        return {a,b};

    }
};