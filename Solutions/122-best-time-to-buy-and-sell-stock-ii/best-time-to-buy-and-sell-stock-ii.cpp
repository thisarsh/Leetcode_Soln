class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int total=0,prev=prices[0];
        for(auto it:prices){
            if(it>=prev){
                total+=(it-prev);
               
            }
             prev=it;
            // else {
            //     prev=it;
            // }

        }
        return total;

       
    }
};