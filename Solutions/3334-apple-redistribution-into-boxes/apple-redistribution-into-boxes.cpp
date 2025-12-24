class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int count=0;
        sort(a.begin(),a.end());
        sort(c.begin(),c.end(),greater<>());
        int sum=accumulate(a.begin(),a.end(),0);
        for(auto it:c){
            sum-=it;
            count++;
            if(sum<=0) return count;

        }
        return 0;



    }
};