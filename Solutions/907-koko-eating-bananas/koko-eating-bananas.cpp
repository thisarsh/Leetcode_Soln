class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long ans=0;
        int low=1,mid,high=*max_element(piles.begin(),piles.end());
        // long long i=0;
        while(low<=high){
            mid=low+(high-low)/2;
            ans=0;
            for(auto i:piles){
                if(i%mid!=0){
                    ans+=i/mid+1;
                }
               else ans+=i/mid;
            }
            if(ans<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};