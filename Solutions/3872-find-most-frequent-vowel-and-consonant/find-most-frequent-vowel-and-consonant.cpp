class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.size(),ans=0,vmax=0,cmax=0;
        unordered_map <char,int> mpp;
        for(auto it:s){
            mpp[it]++;
            
        }
        for(auto it:mpp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                vmax=max(vmax,it.second);
            }
            else {
                cmax=max(cmax,it.second);
            }
            
        }
        return cmax+vmax;
        

        
    }
};