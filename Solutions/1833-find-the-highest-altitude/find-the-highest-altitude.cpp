class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int p=0,ans=0;
        for(int i=0; i<gain.size(); i++){
            int k=gain[i]+p;
            ans=max(ans,k);
            p=k;
        }           
        //  ans=max(ans,p);

        return ans;
    }
};