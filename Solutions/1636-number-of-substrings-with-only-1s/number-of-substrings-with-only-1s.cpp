class Solution {
public:
    int numSub(string s) {
        const int mod=1e9+7;
        int n=s.size(),count=0,ans=0;
        for(auto it:s){
            if(it=='1'){
                count++;
            }
            else{
                ans=(ans+(1LL*count*(count+1)/2))%mod;
                count=0;
            }
        }
         ans=(ans+(1LL*count*(count+1)/2))%mod;
         return ans;
        
    }
};