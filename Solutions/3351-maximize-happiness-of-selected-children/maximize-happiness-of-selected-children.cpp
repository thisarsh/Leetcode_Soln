class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long temp=0,n=happiness.size(),ans=0;
        sort(happiness.begin(),happiness.end(),greater<>());
        for(int i=0; i<k && temp<k; i++){
            if(happiness[i]-temp<=0) break;
            ans+=happiness[i]-temp;
            temp++;
            
        }
        return ans;

        
    }
};