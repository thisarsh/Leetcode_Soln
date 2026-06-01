class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0,m=INT_MAX,n=cost.size();
        if(n==1)return cost[0];
        if(n==2)return cost[0]+cost[1];
        m=min(cost[n-1],cost[n-2]);
        int i=n-3;
        while(i>=0){
           if(cost[i]<=m){
            ans+=cost[i+1]+cost[i+2];
            m=cost[i];
            i-=3;
           } 
           else{
            ans+=cost[i];
            i--;

           }
        }
        if(n%3==1){
            ans+=cost[0];
            
        }
        if(n%3==2 ){
            ans+=cost[0]+cost[1];
            
        }
        return ans;
        
    }
};