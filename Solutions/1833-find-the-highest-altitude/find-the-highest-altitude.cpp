class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int p=0,ans=0;
        for(int i=0; i<gain.size(); i++){
            ans=max(ans,gain[i]+p);
            p=gain[i]+p;
        }           
        //  ans=max(ans,p);

        return ans;
    }
};