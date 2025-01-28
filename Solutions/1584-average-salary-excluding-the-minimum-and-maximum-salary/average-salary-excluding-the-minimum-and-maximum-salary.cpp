class Solution {
public:
    double average(vector<int>& salary) {
       double max=salary[0],min=salary[0],sum=0;

        for(auto it: salary){
            sum+=it;
            if(it>max)max=it;
            else if(it<min)min=it;
        
        }
        return (sum-max-min)/(salary.size()-2);
    }
};