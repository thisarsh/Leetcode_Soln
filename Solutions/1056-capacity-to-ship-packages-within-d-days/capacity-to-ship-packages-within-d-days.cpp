class Solution {
public:
    int shipWithinDays(vector<int>& w1, int days) {
        int n=w1.size();
        int low=*max_element(w1.begin(),w1.end()),high=0;
        for(auto it:w1){
            high+=it;
        }
        while(low<=high){
            int sum=0,ourdays=0;
            int mid=low+(high-low)/2;
            for(auto it:w1){
                if(sum+it<=mid){
                    sum+=it;
                }
                else{
                    ourdays++;
                    sum=it;
                }
                
                if(ourdays>days)break;
               

            }
            if(sum>0){
                ourdays++;
            }
            if(ourdays>days){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
            
        }
        return low;


    }
};